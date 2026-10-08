#pragma once

// Loads the cs2-dumper payloads and publishes them into the runtime registry
// declared by offsets_runtime.hpp.
//
// The three upstream files are fetched as JSON instead of being baked into the
// generated headers:
//
//   output/offsets.json     module offsets               (offsets.hpp)
//   output/buttons.json     button ids                   (buttons.hpp)
//   output/client_dll.json  classes, fields and enums    (client_dll.hpp)
//
// Resolution order, first hit wins:
//
//   1. a local directory (test fixtures, or a checkout of cs2-dumper), selected
//      with CS2_OFFSETS_DIR or Options::localDirectory;
//   2. the on-disk cache when it is younger than the freshness window;
//   3. HTTPS from the allow-listed raw.githubusercontent.com URLs;
//   4. the on-disk cache, even when stale, as a documented offline fallback.
//
// Whatever the source, the payload is validated before it is published: every
// constant the application actually dereferences has to resolve, and each table
// has to look like a real dump. A truncated download, an upstream rename or a
// stale cache therefore surfaces as a startup error instead of a silently wrong
// memory read later.

#include <algorithm>
#include <chrono>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <string>
#include <string_view>
#include <system_error>
#include <utility>

#include "offsets_runtime.hpp"
#include "offsets_http.hpp"
#include "dumper_json.hpp"

#if defined(_WIN32)
#  ifndef WIN32_LEAN_AND_MEAN
#    define WIN32_LEAN_AND_MEAN
#  endif
#  ifndef NOMINMAX
#    define NOMINMAX
#  endif
#  include <windows.h>
#endif

namespace cs2_dumper::fetch
{
    // Pinned upstream location. A branch rather than a commit is intentional:
    // tracking the live dump is the entire point of fetching instead of
    // compiling the numbers in.
    struct Endpoints
    {
        std::string baseUrl{
            "https://raw.githubusercontent.com/a2x/cs2-dumper/main/output/" };
        std::string offsetsFile{ "offsets.json" };
        std::string buttonsFile{ "buttons.json" };
        std::string schemaFile{ "client_dll.json" };
    };

    struct Options
    {
        Endpoints endpoints{};
        http::FetchPolicy http{};
        // When non-empty, load from this directory instead of the network.
        std::string localDirectory{};
        // Cache location. Empty disables the cache.
        std::string cacheDirectory{};
        // A cache entry younger than this is used without touching the network.
        std::chrono::seconds freshFor{ std::chrono::hours(6) };
        // Skip the network entirely and rely on local files or the cache.
        bool offline{ false };
        // Minimum table sizes accepted as a real dump. These are structural
        // sanity checks, not completeness checks: they only catch a truncated or
        // wrong file. The complete list of symbols the program actually needs is
        // verified separately by detail::requiredSymbols().
        std::size_t minOffsets{ 8 };
        std::size_t minButtons{ 8 };
        std::size_t minSchemaClasses{ 8 };
        bool verbose{ false };
    };

    struct Result
    {
        bool ok{ false };
        // Where the published payload came from, for the startup log.
        std::string description{};
        std::string error{};
        bool usedCache{ false };
        std::size_t symbolCount{ 0 };
        std::size_t classCount{ 0 };
        long long elapsedMs{ 0 };
    };

    namespace detail
    {
        // -------------------------------------------------------------------
        // Environment and file helpers
        // -------------------------------------------------------------------
        [[nodiscard]] inline bool envVar(const char* name, std::string& out)
        {
#if defined(_WIN32)
            char buffer[4096]{};
            const DWORD length = GetEnvironmentVariableA(
                name,
                buffer,
                static_cast<DWORD>(sizeof(buffer)));
            if (length == 0 || length >= sizeof(buffer))
            {
                return false;
            }
            out.assign(buffer, length);
            return true;
#else
            const char* value = std::getenv(name);
            if (value == nullptr || value[0] == '\0')
            {
                return false;
            }
            out = value;
            return true;
#endif
        }

        [[nodiscard]] inline bool readTextFile(
            const std::filesystem::path& path,
            std::string& out,
            std::string& error)
        {
            std::error_code code;
            const std::uintmax_t size = std::filesystem::file_size(path, code);
            if (code)
            {
                error = "cannot stat " + path.string() + ": " + code.message();
                return false;
            }
            if (size == 0)
            {
                error = "file is empty: " + path.string();
                return false;
            }
            if (size > 64u * 1024u * 1024u)
            {
                error = "file is implausibly large: " + path.string();
                return false;
            }

            std::FILE* handle = nullptr;
#if defined(_WIN32)
            if (fopen_s(&handle, path.string().c_str(), "rb") != 0)
            {
                handle = nullptr;
            }
#else
            handle = std::fopen(path.string().c_str(), "rb");
#endif
            if (handle == nullptr)
            {
                error = "cannot open " + path.string();
                return false;
            }
            out.assign(static_cast<std::size_t>(size), '\0');
            const std::size_t read = std::fread(out.data(), 1, out.size(), handle);
            (void)std::fclose(handle);
            if (read != out.size())
            {
                error = "short read from " + path.string();
                return false;
            }
            return true;
        }

        [[nodiscard]] inline bool writeTextFile(
            const std::filesystem::path& path,
            std::string_view text,
            std::string& error)
        {
            std::error_code code;
            if (!path.parent_path().empty())
            {
                std::filesystem::create_directories(path.parent_path(), code);
            }
            std::FILE* handle = nullptr;
#if defined(_WIN32)
            if (fopen_s(&handle, path.string().c_str(), "wb") != 0)
            {
                handle = nullptr;
            }
#else
            handle = std::fopen(path.string().c_str(), "wb");
#endif
            if (handle == nullptr)
            {
                error = "cannot write " + path.string();
                return false;
            }
            const std::size_t written =
                std::fwrite(text.data(), 1, text.size(), handle);
            (void)std::fclose(handle);
            if (written != text.size())
            {
                error = "short write to " + path.string();
                return false;
            }
            return true;
        }

        [[nodiscard]] inline std::string joinUrl(
            std::string_view base,
            std::string_view file)
        {
            std::string out(base);
            if (!out.empty() && out.back() != '/')
            {
                out.push_back('/');
            }
            out.append(file);
            return out;
        }

        // Default cache root: %LOCALAPPDATA%\cs2-cheat\cs2-dumper, or
        // $XDG_CACHE_HOME/cs2-cheat/cs2-dumper elsewhere.
        [[nodiscard]] inline std::string defaultCacheDirectory()
        {
            std::string base;
#if defined(_WIN32)
            if (!envVar("LOCALAPPDATA", base) || base.empty())
            {
                return {};
            }
#else
            if (!envVar("XDG_CACHE_HOME", base) || base.empty())
            {
                if (!envVar("HOME", base) || base.empty())
                {
                    return {};
                }
                std::filesystem::path home(base);
                home /= ".cache";
                home /= "cs2-cheat";
                home /= "cs2-dumper";
                return home.string();
            }
#endif
            std::filesystem::path path(base);
            path /= "cs2-cheat";
            path /= "cs2-dumper";
            return path.string();
        }

        // -------------------------------------------------------------------
        // Value conversion
        // -------------------------------------------------------------------
        [[nodiscard]] inline bool parseInt64(
            std::string_view literal,
            std::int64_t& out) noexcept
        {
            if (literal.empty())
            {
                return false;
            }
            std::size_t index = 0;
            bool negative = false;
            if (literal[0] == '-')
            {
                negative = true;
                index = 1;
            }
            if (index >= literal.size())
            {
                return false;
            }
            std::uint64_t magnitude = 0;
            for (; index < literal.size(); ++index)
            {
                const char character = literal[index];
                if (character < '0' || character > '9')
                {
                    // Offsets are integers. A fractional or exponent form means
                    // the upstream shape changed; do not silently truncate it.
                    return false;
                }
                magnitude = magnitude * 10u +
                    static_cast<std::uint64_t>(character - '0');
                if (magnitude > 0x7FFFFFFFFFFFFFFFull)
                {
                    return false;
                }
            }
            out = negative
                ? -static_cast<std::int64_t>(magnitude)
                : static_cast<std::int64_t>(magnitude);
            return true;
        }

        [[nodiscard]] inline std::string_view readJsonString(
            std::string& scratch,
            std::string_view contents)
        {
            // Fast path: no escapes, which is the case for every client.dll
            // class and field name.
            if (contents.find('\\') == std::string_view::npos)
            {
                return contents;
            }
            scratch = json::unescape(contents);
            return scratch;
        }

        // -------------------------------------------------------------------
        // Upstream generation timestamp
        // -------------------------------------------------------------------
        [[nodiscard]] inline std::string_view findTimestampLiteral(
            std::string_view text) noexcept
        {
            static constexpr std::string_view marker = "\"timestamp\":";
            const std::size_t position = text.find(marker);
            if (position == std::string_view::npos)
            {
                return {};
            }
            std::size_t cursor = position + marker.size();
            while (cursor < text.size() &&
                (text[cursor] == ' ' || text[cursor] == '\t'))
            {
                ++cursor;
            }
            if (cursor >= text.size() || text[cursor] != '"')
            {
                return {};
            }
            ++cursor;
            const std::size_t end = text.find('"', cursor);
            if (end == std::string_view::npos)
            {
                return {};
            }
            return text.substr(cursor, end - cursor);
        }

        // Days since 1970-01-01 in the proleptic Gregorian calendar.
        [[nodiscard]] inline std::int64_t daysFromCivil(
            std::int64_t year,
            std::int64_t month,
            std::int64_t day) noexcept
        {
            year -= month <= 2 ? 1 : 0;
            const std::int64_t era = (year >= 0 ? year : year - 399) / 400;
            const std::int64_t yearOfEra = year - era * 400;
            const std::int64_t dayOfYear =
                (153 * (month + (month > 2 ? -3 : 9)) + 2) / 5 + day - 1;
            const std::int64_t dayOfEra =
                yearOfEra * 365 + yearOfEra / 4 - yearOfEra / 100 + dayOfYear;
            return era * 146097 + dayOfEra - 719468;
        }

        // ISO-8601 with an explicit UTC offset -> Unix seconds. 0 when the input
        // is not a date this code understands.
        [[nodiscard]] inline std::uint64_t parseTimestamp(
            std::string_view iso) noexcept
        {
            if (iso.size() < 19 || iso[4] != '-' || iso[7] != '-' ||
                iso[10] != 'T' || iso[13] != ':' || iso[16] != ':')
            {
                return 0;
            }
            auto digits = [&iso](
                std::size_t offset,
                std::size_t count,
                std::int64_t& out)
            {
                if (offset + count > iso.size())
                {
                    return false;
                }
                std::int64_t value = 0;
                for (std::size_t i = 0; i < count; ++i)
                {
                    const char character = iso[offset + i];
                    if (character < '0' || character > '9')
                    {
                        return false;
                    }
                    value = value * 10 + (character - '0');
                }
                out = value;
                return true;
            };

            std::int64_t year = 0;
            std::int64_t month = 0;
            std::int64_t day = 0;
            std::int64_t hour = 0;
            std::int64_t minute = 0;
            std::int64_t second = 0;
            if (!digits(0, 4, year) || !digits(5, 2, month) ||
                !digits(8, 2, day) || !digits(11, 2, hour) ||
                !digits(14, 2, minute) || !digits(17, 2, second))
            {
                return 0;
            }
            if (month < 1 || month > 12 || day < 1 || day > 31 ||
                hour > 23 || minute > 59 || second > 60)
            {
                return 0;
            }

            std::int64_t offsetSeconds = 0;
            std::size_t cursor = 19;
            if (cursor < iso.size() && iso[cursor] == '.')
            {
                ++cursor;
                while (cursor < iso.size() &&
                    iso[cursor] >= '0' && iso[cursor] <= '9')
                {
                    ++cursor;
                }
            }
            if (cursor < iso.size() &&
                (iso[cursor] == '+' || iso[cursor] == '-'))
            {
                const bool west = iso[cursor] == '-';
                ++cursor;
                std::int64_t offsetHour = 0;
                if (!digits(cursor, 2, offsetHour))
                {
                    return 0;
                }
                cursor += 2;
                std::int64_t offsetMinute = 0;
                if (cursor < iso.size() && iso[cursor] == ':')
                {
                    ++cursor;
                }
                if (cursor + 2 <= iso.size())
                {
                    (void)digits(cursor, 2, offsetMinute);
                }
                offsetSeconds = offsetHour * 3600 + offsetMinute * 60;
                if (west)
                {
                    offsetSeconds = -offsetSeconds;
                }
            }

            const std::int64_t days = daysFromCivil(year, month, day);
            const std::int64_t total =
                days * 86400 + hour * 3600 + minute * 60 + second - offsetSeconds;
            return total <= 0 ? 0u : static_cast<std::uint64_t>(total);
        }

        // -------------------------------------------------------------------
        // Payload parsing
        // -------------------------------------------------------------------
        // Maps one module key to the fields below it. Used for both offsets.json
        // and buttons.json, which share the shape:
        //   { "client.dll": { "dwEntityList": 40990760, ... } }
        // ModuleSink and SchemaSink deliberately derive from EventSink without
        // declaring a single virtual: dispatch is resolved statically by
        // Reader::parse, so the SAX hot path stays a direct call. For the same
        // reason the hooks below carry no `override` - hiding a non-virtual base
        // member is exactly the intended mechanism.
        struct ModuleSink : json::EventSink
        {
            runtime::Category category{ runtime::Category::Offset };
            runtime::detail::Table& table;
            std::size_t& counter;

            ModuleSink(
                runtime::Category kind,
                runtime::detail::Table& target,
                std::size_t& count,
                const json::Reader& source)
                : category(kind)
                , table(target)
                , counter(count)
                , reader(source)
            {
            }

            void numberValue(std::string_view literal)
            {
                if (reader.depth() != 2)
                {
                    return;
                }
                const std::string_view module = reader.pathKey(0);
                const std::string_view name = reader.pathKey(1);
                if (module.empty())
                {
                    return;
                }
                std::int64_t value = 0;
                if (!parseInt64(literal, value))
                {
                    return;
                }
                ++counter;
                // SymbolKey stores bare pointers, so the names have to be copied
                // into the table: the payload buffer dies with the parse.
                const runtime::SymbolKey key{ category, table.intern(module),
                    nullptr, table.intern(name) };
                runtime::SymbolValue stored{};
                stored.value = value;
                table.symbols.emplace(key, stored);
            }

            // The reader owns the path stack this sink inspects.
            const json::Reader& reader;
        };
        // client_dll.json:
        //   { "client.dll": { "classes": { "C_BaseEntity":
        //       { "fields": {"m_iTeamNum": 999}, "parent": null } },
        //     "enums": { "E": { "members": {"A": 0} } } } }
        struct SchemaSink : json::EventSink
        {
            runtime::detail::Table& table;
            std::string scratch{};
            const char* module{ "client.dll" };
            std::size_t fieldCount{ 0 };
            std::size_t enumMemberCount{ 0 };
            std::size_t classCount{ 0 };
            std::size_t parentCount{ 0 };
            const json::Reader& reader;

            // The sink writes straight into the registry table it is given. It
            // must never build a table of its own and hand it over later: a key
            // holds bare pointers into the table's string storage, and neither
            // copying it into another table nor moving the storage between two
            // containers (libstdc++ relocates the buffer, leaving the pointer on
            // moved-from memory) keeps those pointers valid.
            SchemaSink(runtime::detail::Table& target, const json::Reader& source)
                : table(target), reader(source)
            {
            }

            void record(
                runtime::Category category,
                std::string_view owner,
                std::string_view name,
                std::string_view literal,
                bool isEnumMember)
            {
                if (owner.empty() || name.empty())
                {
                    return;
                }
                std::int64_t value = 0;
                if (!parseInt64(literal, value))
                {
                    return;
                }
                // Both names are copied into the table: SymbolKey stores bare
                // pointers and the payload buffer does not outlive the parse.
                const runtime::SymbolKey key{ category, module,
                    table.intern(owner), table.intern(name) };
                runtime::SymbolValue stored{};
                stored.value = value;
                stored.isEnumMember = isEnumMember;
                table.symbols.emplace(key, stored);
                if (isEnumMember)
                {
                    ++enumMemberCount;
                }
                else
                {
                    ++fieldCount;
                }
            }

            void beginObject()
            {
                // Every class opens an object nested directly under "classes",
                // so this fires once per class. At this point pathKey(1) is
                // "classes" and pathKey(2) is the class name.
                if (reader.depth() == 3 && reader.pathKey(1) == "classes")
                {
                    ++classCount;
                }
            }

            void numberValue(std::string_view literal)
            {
                const std::size_t depth = reader.depth();
                // client.dll . classes . <class> . fields . <field>
                if (depth == 5 && reader.pathKey(1) == "classes" &&
                    reader.pathKey(3) == "fields")
                {
                    record(runtime::Category::Schema, reader.pathKey(2),
                        reader.pathKey(4), literal, false);
                    return;
                }
                // client.dll . enums . <enum> . members . <member>
                if (depth == 5 && reader.pathKey(1) == "enums" &&
                    reader.pathKey(3) == "members")
                {
                    record(runtime::Category::Schema, reader.pathKey(2),
                        reader.pathKey(4), literal, true);
                }
            }

            void stringValue(std::string_view contents)
            {
                // Only "parent" carries a string that matters here; it sits next
                // to "fields"/"metadata" inside the class object.
                if (reader.depth() != 4 || reader.pathKey(1) != "classes" ||
                    reader.pathKey(3) != "parent")
                {
                    return;
                }
                const std::string_view className = reader.pathKey(2);
                const std::string_view parent =
                    readJsonString(scratch, contents);
                if (className.empty() || parent.empty())
                {
                    return;
                }
                linkParent(className, parent);
            }

            void linkParent(
                std::string_view className,
                std::string_view parent)
            {
                // Both names are interned so the views stay valid once the table
                // is handed to the registry, and a parent cycle cannot keep
                // growing the table either.
                const char* storedClass = table.intern(className);
                const char* storedParent = table.intern(parent);
                table.classParents[std::string_view{ storedClass }] =
                    std::string_view{ storedParent };
                ++parentCount;
            }
        };

        [[nodiscard]] inline bool parseModule(
            runtime::Category category,
            std::string_view text,
            runtime::detail::Table& table,
            std::size_t& counter,
            std::string& error,
            std::string_view fileLabel)
        {
            json::Reader reader;
            ModuleSink sink(category, table, counter, reader);
            if (!reader.parse(text, sink))
            {
                error = std::string(fileLabel) + ": " + reader.error().describe();
                return false;
            }
            return true;
        }

        // Counter snapshot handed back by the schema pass. SchemaSink itself
        // holds a reference to the reader that drives it, so the reader and the
        // sink have to be created in the same scope; this struct is how the
        // totals travel out of that scope.
        struct SchemaTotals
        {
            std::size_t fields{ 0 };
            std::size_t enumMembers{ 0 };
            std::size_t classes{ 0 };
            std::size_t parents{ 0 };
        };

        [[nodiscard]] inline bool parseSchema(
            std::string_view text,
            std::string_view fileLabel,
            runtime::detail::Table& table,
            SchemaTotals& totals,
            std::string& error)
        {
            json::Reader reader;
            SchemaSink sink(table, reader);
            if (!reader.parse(text, sink))
            {
                error = std::string(fileLabel) + ": " + reader.error().describe();
                return false;
            }
            totals.fields = sink.fieldCount;
            totals.enumMembers = sink.enumMemberCount;
            totals.classes = sink.classCount;
            totals.parents = sink.parentCount;
            return true;
        }

        // -------------------------------------------------------------------
        // Loaded payload
        // -------------------------------------------------------------------
        struct Payload
        {
            std::string offsets{};
            std::string buttons{};
            std::string schema{};
            std::string description{};
            bool fromCache{ false };
            std::uint64_t timestamp{ 0 };
        };

        // Builds the registry table from the three payload documents. On failure
        // `error` explains which document and which symbol was at fault.
        [[nodiscard]] inline bool buildTable(
            const Payload& payload,
            const Options& options,
            runtime::detail::Table& table,
            std::string& error,
            std::size_t& classes)
        {
            table.reserve(8192, 1024);

            std::size_t offsets = 0;
            std::size_t buttons = 0;
            if (!parseModule(runtime::Category::Offset, payload.offsets, table,
                    offsets, error, "offsets.json"))
            {
                return false;
            }
            if (!parseModule(runtime::Category::Button, payload.buttons, table,
                    buttons, error, "buttons.json"))
            {
                return false;
            }

            // The schema is parsed straight into the shared table. Keys hold bare
            // `const char*` pointers into the table's own string storage, so the
            // schema can never be collected in a second table and merged
            // afterwards: copying a key leaves the new table's intern cache
            // unaware of those addresses, and moving the storage between two
            // deques reallocates the buffer, leaving every pointer on moved-from
            // memory. Interning into the destination from the start avoids both.
            SchemaTotals totals;
            if (!parseSchema(
                    payload.schema, "client_dll.json", table, totals, error))
            {
                return false;
            }
            classes = totals.classes;
            table.classes = totals.classes;

            if (offsets < options.minOffsets)
            {
                error = "offsets.json produced only " + std::to_string(offsets) +
                    " entries; expected at least " +
                    std::to_string(options.minOffsets);
                return false;
            }
            if (buttons < options.minButtons)
            {
                error = "buttons.json produced only " + std::to_string(buttons) +
                    " entries; expected at least " +
                    std::to_string(options.minButtons);
                return false;
            }
            if (totals.classes < options.minSchemaClasses)
            {
                error = "client_dll.json produced only " +
                    std::to_string(totals.classes) +
                    " classes; expected at least " +
                    std::to_string(options.minSchemaClasses);
                return false;
            }
            if (totals.fields == 0)
            {
                error = "client_dll.json contained no class fields";
                return false;
            }
            return true;
        }

        // -------------------------------------------------------------------
        // Sources
        // -------------------------------------------------------------------
        [[nodiscard]] inline bool loadLocal(
            const Options& options,
            Payload& payload,
            std::string& error)
        {
            const std::filesystem::path directory(options.localDirectory);
            const std::filesystem::path offsetsPath =
                directory / options.endpoints.offsetsFile;
            const std::filesystem::path buttonsPath =
                directory / options.endpoints.buttonsFile;
            const std::filesystem::path schemaPath =
                directory / options.endpoints.schemaFile;

            if (!readTextFile(offsetsPath, payload.offsets, error) ||
                !readTextFile(buttonsPath, payload.buttons, error) ||
                !readTextFile(schemaPath, payload.schema, error))
            {
                return false;
            }
            payload.description = "local directory " + directory.string();
            payload.fromCache = false;
            payload.timestamp = parseTimestamp(
                findTimestampLiteral(payload.offsets));
            return true;
        }

        // `fresh` reports whether the payload was written within
        // Options::freshFor; an unreadable timestamp counts as stale.
        [[nodiscard]] inline bool loadCache(
            const Options& options,
            Payload& payload,
            std::string& error,
            bool* fresh = nullptr)
        {
            if (options.cacheDirectory.empty())
            {
                error = "the cache is disabled";
                return false;
            }
            const std::filesystem::path directory(options.cacheDirectory);
            if (!readTextFile(directory / options.endpoints.offsetsFile,
                    payload.offsets, error) ||
                !readTextFile(directory / options.endpoints.buttonsFile,
                    payload.buttons, error) ||
                !readTextFile(directory / options.endpoints.schemaFile,
                    payload.schema, error))
            {
                return false;
            }
            payload.description = "cached payload in " + directory.string();
            payload.fromCache = true;
            payload.timestamp = parseTimestamp(
                findTimestampLiteral(payload.offsets));

            if (fresh != nullptr)
            {
                *fresh = false;
                std::error_code code;
                const auto written = std::filesystem::last_write_time(
                    directory / options.endpoints.offsetsFile, code);
                if (!code)
                {
                    const auto age =
                        std::filesystem::file_time_type::clock::now() - written;
                    *fresh = age <= options.freshFor;
                }
            }
            return true;
        }

        inline void storeCache(
            const Options& options,
            const Payload& payload) noexcept
        {
            if (options.cacheDirectory.empty())
            {
                return;
            }
            const std::filesystem::path directory(options.cacheDirectory);
            std::string ignored;
            (void)writeTextFile(directory / options.endpoints.offsetsFile,
                payload.offsets, ignored);
            (void)writeTextFile(directory / options.endpoints.buttonsFile,
                payload.buttons, ignored);
            (void)writeTextFile(directory / options.endpoints.schemaFile,
                payload.schema, ignored);
        }

        [[nodiscard]] inline bool loadNetwork(
            const Options& options,
            Payload& payload,
            std::string& error)
        {
            struct Target
            {
                std::string url;
                std::string* destination;
                const char* label;
            };

            const Target targets[] = {
                { joinUrl(options.endpoints.baseUrl,
                      options.endpoints.offsetsFile),
                    &payload.offsets, "offsets.json" },
                { joinUrl(options.endpoints.baseUrl,
                      options.endpoints.buttonsFile),
                    &payload.buttons, "buttons.json" },
                { joinUrl(options.endpoints.baseUrl,
                      options.endpoints.schemaFile),
                    &payload.schema, "client_dll.json" },
            };

            for (const Target& target : targets)
            {
                http::Error httpError;
                if (!http::get(target.url, options.http, *target.destination,
                        httpError))
                {
                    error = std::string("downloading ") + target.label +
                        " failed: " + httpError.message;
                    return false;
                }
                if (target.destination->empty())
                {
                    error = std::string("downloading ") + target.label +
                        " returned an empty body";
                    return false;
                }
            }

            payload.description = "downloaded from " + options.endpoints.baseUrl;
            payload.fromCache = false;
            payload.timestamp = parseTimestamp(
                findTimestampLiteral(payload.offsets));
            return true;
        }

        // -------------------------------------------------------------------
        // Required symbols
        // -------------------------------------------------------------------
        // Every constant the application dereferences. These are checked against
        // the freshly built table before it is published, so a rename upstream
        // stops the process with a precise message instead of producing a wrong
        // memory read later. Mirrors the references in src/features/esp.cpp and
        // src/core/memory/game_layout.hpp.
        struct RequiredSymbol
        {
            runtime::SymbolKey key;
            const char* label;
        };

        [[nodiscard]] inline std::vector<RequiredSymbol> requiredSymbols()
        {
            return {
                { { runtime::Category::Offset, "client.dll", nullptr,
                      "dwEntityList" }, "offsets::client_dll::dwEntityList" },
                { { runtime::Category::Offset, "client.dll", nullptr,
                      "dwGameRules" }, "offsets::client_dll::dwGameRules" },
                { { runtime::Category::Offset, "client.dll", nullptr,
                      "dwGlobalVars" }, "offsets::client_dll::dwGlobalVars" },
                { { runtime::Category::Offset, "client.dll", nullptr,
                      "dwLocalPlayerPawn" },
                    "offsets::client_dll::dwLocalPlayerPawn" },
                { { runtime::Category::Offset, "client.dll", nullptr,
                      "dwPlantedC4" }, "offsets::client_dll::dwPlantedC4" },
                { { runtime::Category::Offset, "client.dll", nullptr,
                      "dwViewMatrix" }, "offsets::client_dll::dwViewMatrix" },
                { { runtime::Category::Offset, "client.dll", nullptr,
                      "dwGameEntitySystem" },
                    "offsets::client_dll::dwGameEntitySystem" },
                { { runtime::Category::Offset, "client.dll", nullptr,
                      "dwGameEntitySystem_highestEntityIndex" },
                    "offsets::client_dll::dwGameEntitySystem_highestEntityIndex" },
                { { runtime::Category::Schema, "client.dll",
                      "C_AttributeContainer", "m_Item" },
                    "schemas::C_AttributeContainer::m_Item" },
                { { runtime::Category::Schema, "client.dll", "C_BaseEntity",
                      "m_iTeamNum" }, "schemas::C_BaseEntity::m_iTeamNum" },
                { { runtime::Category::Schema, "client.dll", "C_BaseModelEntity",
                      "m_vecViewOffset" },
                    "schemas::C_BaseModelEntity::m_vecViewOffset" },
                { { runtime::Category::Schema, "client.dll", "C_CSPlayerPawn",
                      "m_angEyeAngles" },
                    "schemas::C_CSPlayerPawn::m_angEyeAngles" },
                { { runtime::Category::Schema, "client.dll", "C_CSPlayerPawn",
                      "m_entitySpottedState" },
                    "schemas::C_CSPlayerPawn::m_entitySpottedState" },
                { { runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase",
                      "m_flFlashDuration" },
                    "schemas::C_CSPlayerPawnBase::m_flFlashDuration" },
                { { runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase",
                      "m_flFlashMaxAlpha" },
                    "schemas::C_CSPlayerPawnBase::m_flFlashMaxAlpha" },
                { { runtime::Category::Schema, "client.dll", "C_EconEntity",
                      "m_AttributeManager" },
                    "schemas::C_EconEntity::m_AttributeManager" },
                { { runtime::Category::Schema, "client.dll",
                      "EntitySpottedState_t", "m_bSpotted" },
                    "schemas::EntitySpottedState_t::m_bSpotted" },
                { { runtime::Category::Schema, "client.dll",
                      "CSkeletonInstance", "m_modelState" },
                    "schemas::CSkeletonInstance::m_modelState" },
            };
        }

        [[nodiscard]] inline std::string describe(const Payload& payload)
        {
            std::string out = payload.description;
            if (payload.timestamp != 0)
            {
                out += ", dumped at unix time ";
                out += std::to_string(payload.timestamp);
            }
            return out;
        }

        inline void report(const Options& options, std::string_view text)
        {
#if defined(_WIN32)
            if (options.verbose)
            {
                std::string line("[cs2-dumper] ");
                line.append(text);
                line.push_back('\n');
                OutputDebugStringA(line.c_str());
            }
#else
            (void)options;
            (void)text;
#endif
        }

        // Publishes the payload, or records why it could not be used.
        [[nodiscard]] inline bool tryPayload(
            const Options& options,
            const Payload& payload,
            Result& result)
        {
            runtime::detail::Table table;
            std::string error;
            std::size_t classes = 0;
            if (!buildTable(payload, options, table, error, classes))
            {
                result.error = describe(payload) + ": " + error;
                return false;
            }

            // Every constant the call sites reach through the generated headers
            // must resolve from the payload, otherwise the process would run on
            // stale numbers the moment upstream renames something.
            std::size_t coverage = 0;
            const std::vector<RequiredSymbol> required = requiredSymbols();
            for (const RequiredSymbol& symbol : required)
            {
                std::string_view declaredBy;
                const runtime::SymbolValue* found = nullptr;
                if (symbol.key.category == runtime::Category::Schema)
                {
                    found = runtime::detail::findInChain(
                        table, symbol.key, &declaredBy);
                }
                else
                {
                    const auto position = table.symbols.find(symbol.key);
                    if (position != table.symbols.end())
                    {
                        found = &position->second;
                    }
                }
                if (found == nullptr)
                {
                    result.error = describe(payload) + ": the payload does not "
                        "define " + symbol.label + " (module " +
                        symbol.key.module;
                    if (symbol.key.className != nullptr)
                    {
                        result.error += ", class ";
                        result.error += symbol.key.className;
                    }
                    result.error += "); refusing to run with an unresolved "
                        "offset";
                    return false;
                }
                ++coverage;
                if (!declaredBy.empty() &&
                    symbol.key.className != nullptr &&
                    declaredBy != std::string_view(symbol.key.className))
                {
                    report(options, std::string("inherited: ") + symbol.label +
                        " is declared by " + std::string(declaredBy));
                }
            }

            result.symbolCount = table.symbols.size();
            result.classCount = classes;
            result.ok = true;
            result.usedCache = payload.fromCache;
            result.description = describe(payload);

            report(options,
                "published " + std::to_string(result.symbolCount) +
                    " symbols (" + std::to_string(coverage) + "/" +
                    std::to_string(required.size()) +
                    " required) from " + result.description);

            runtime::publish(
                std::move(table),
                result.description,
                payload.timestamp);
            return true;
        }
    } // namespace detail

    // Loads and publishes the payloads. Safe to call more than once; later calls
    // are no-ops once a payload has been published.
    [[nodiscard]] inline Result initialize(const Options& options = {})
    {
        const auto started = std::chrono::steady_clock::now();
        Options effective = options;

        // Environment overrides let the test scripts and a developer machine
        // point at fixtures without editing code.
        std::string value;
        if (effective.localDirectory.empty() &&
            detail::envVar("CS2_OFFSETS_DIR", value))
        {
            effective.localDirectory = value;
        }
        if (effective.cacheDirectory.empty() &&
            detail::envVar("CS2_OFFSETS_CACHE", value))
        {
            effective.cacheDirectory = value;
        }
        if (detail::envVar("CS2_OFFSETS_NO_CACHE", value) && value != "0")
        {
            effective.cacheDirectory.clear();
        }
        if (detail::envVar("CS2_OFFSETS_OFFLINE", value) && value != "0")
        {
            effective.offline = true;
        }
        if (detail::envVar("CS2_OFFSETS_BASE_URL", value) && !value.empty())
        {
            effective.endpoints.baseUrl = value;
        }
        if (detail::envVar("CS2_OFFSETS_VERBOSE", value) && value != "0")
        {
            effective.verbose = true;
        }
        if (effective.cacheDirectory.empty() && !effective.offline)
        {
            effective.cacheDirectory = detail::defaultCacheDirectory();
        }

        Result result;
        auto finish = [&started, &result](bool ok, std::string error) -> Result
        {
            result.ok = ok;
            result.error = std::move(error);
            result.elapsedMs = std::chrono::duration_cast<
                std::chrono::milliseconds>(
                std::chrono::steady_clock::now() - started).count();
            return result;
        };

        if (runtime::isReady())
        {
            result.symbolCount = runtime::symbolCount();
            result.classCount = runtime::classCount();
            result.description = std::string(runtime::sourceDescription());
            return finish(true, {});
        }

        std::string accumulated;

        // 1. An explicit local directory always wins and is never a fallback.
        if (!effective.localDirectory.empty())
        {
            detail::Payload payload;
            std::string error;
            if (!detail::loadLocal(effective, payload, error))
            {
                return finish(false,
                    "cannot read the cs2-dumper payload from " +
                        effective.localDirectory + ": " + error);
            }
            if (!detail::tryPayload(effective, payload, result))
            {
                return finish(false, result.error);
            }
            return finish(true, {});
        }

        // A stale cache is only worth one parse: the payload that just failed the
        // freshness gate is kept below so step 4 does not repeat the file I/O, and
        // a payload that already failed the required-symbol check is not retried.
        bool cacheReadable = false;
        bool cacheFresh = false;
        bool cacheRejected = false;
        detail::Payload cached;
        std::string cacheError;
        if (!effective.cacheDirectory.empty())
        {
            cacheReadable =
                detail::loadCache(effective, cached, cacheError, &cacheFresh);
        }

        // 2. A fresh cache avoids the network on every launch.
        if (cacheReadable && cacheFresh)
        {
            if (detail::tryPayload(effective, cached, result))
            {
                return finish(true, {});
            }
            // Parsed, but the payload does not cover the symbols we need.  Keep
            // the reason for the final report and do not re-parse it in step 4.
            cacheRejected = true;
            accumulated = result.error;
        }
        else if (!cacheError.empty())
        {
            accumulated = cacheError;
        }

        // 3. The network.
        if (!effective.offline)
        {
            detail::Payload payload;
            std::string error;
            if (detail::loadNetwork(effective, payload, error))
            {
                if (detail::tryPayload(effective, payload, result))
                {
                    detail::storeCache(effective, payload);
                    return finish(true, {});
                }
                accumulated = result.error;
            }
            else
            {
                accumulated = error;
            }
        }
        else if (accumulated.empty())
        {
            accumulated = "offline mode was requested";
        }

        // 4. A stale cache still beats refusing to start: the saved snapshot may
        //    be hours past its freshness window but still describe the running
        //    build, which is better than failing to launch with no network.
        if (cacheReadable && !cacheFresh && !cacheRejected)
        {
            if (detail::tryPayload(effective, cached, result))
            {
                return finish(true, {});
            }
            accumulated = result.error;
        }

        std::string message = "unable to obtain cs2-dumper offsets (";
        message += accumulated.empty() ? "no source available" : accumulated;
        message += ")";
        return finish(false, std::move(message));
    }

    // Installs the loader hook so a bare lookup can initialise the registry even
    // if main() forgot to. main() still calls initialize() explicitly so the
    // failure can be shown to the user before the overlay comes up.
    inline void installLoader(const Options& options = {})
    {
        struct Installer
        {
            static bool run(std::string& reason)
            {
                const Result result = initialize(activeOptions());
                if (result.ok)
                {
                    return true;
                }
                reason = result.error;
                return false;
            }

            static Options& activeOptions()
            {
                static Options stored;
                return stored;
            }
        };

        Installer::activeOptions() = options;
        runtime::detail::loader() = &Installer::run;
    }

    // Initialises the registry and, on failure, returns the message that should
    // be shown to the user before the process exits.
    [[nodiscard]] inline Result bootstrap(const Options& options = {})
    {
        Result result = initialize(options);
        if (!result.ok)
        {
            installLoader(options);
        }
        return result;
    }
} // namespace cs2_dumper::fetch
