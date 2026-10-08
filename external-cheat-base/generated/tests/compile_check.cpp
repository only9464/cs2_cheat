// Compile-time smoke test for the runtime-offset headers.
//
// This translation unit never runs: it exists so a MinGW/GCC build with the same
// strict flags the project uses (-Wall -Wextra -Wpedantic -Werror) fails loudly
// if any header in generated/ regresses. It is deliberately not part of the
// Visual Studio project.
#include "dumper_json.hpp"
#include "offsets_http.hpp"
#include "offsets_fetch.hpp"
#include "offsets_runtime.hpp"

#include <cstddef>
#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace
{
    // The generated headers rely on these conversions to keep the existing call
    // sites (`moduleBase + dwEntityList`) compiling unchanged.
    using constant = ::cs2_dumper::runtime::dumper_constant;
    static_assert(std::is_convertible_v<constant, std::ptrdiff_t>);
    static_assert(std::is_convertible_v<constant, std::int64_t>);
    static_assert(std::is_convertible_v<constant, std::uint64_t>);
    static_assert(std::is_convertible_v<constant, std::uint32_t>);
    static_assert(std::is_convertible_v<constant, std::int32_t>);
    static_assert(std::is_trivially_copyable_v<constant>);

    // A sink mirroring how offsets_fetch drives the parser, used to exercise the
    // path stack API at compile time.
    struct CountingSink final : ::cs2_dumper::json::EventSink
    {
        const ::cs2_dumper::json::Reader* reader{ nullptr };
        std::size_t objects{ 0 };
        std::size_t scalars{ 0 };
        std::string lastContext;
        std::string scratch;

        void beginObject() { ++objects; }
        void endObject() {}
        void beginArray() {}
        void endArray() {}
        void key(std::string_view) {}
        void nullValue() {}
        void boolValue(bool) {}
        void numberValue(std::string_view) { ++scalars; }
        void stringValue(std::string_view contents)
        {
            if (contents.find('\\') != std::string_view::npos)
            {
                scratch = ::cs2_dumper::json::unescape(contents);
            }
        }
        void recordContext() { lastContext = reader->context(); }
    };

    [[nodiscard]] int exercise()
    {
        constexpr std::string_view document =
            R"({"client.dll":{"dwEntityList":40990760},)"
            R"("classes":{"C_BaseEntity":{"fields":{"m_iTeamNum":999},)"
            R"("metadata":[{"name":"MGetKV3ClassDefaults","type":"Unknown"}],)"
            R"("parent":null}}})";

        CountingSink sink;
        ::cs2_dumper::json::Reader reader;
        sink.reader = &reader;
        const bool parsed = reader.parse(document, sink);
        if (!parsed)
        {
            return static_cast<int>(reader.error().line);
        }
        sink.recordContext();
        // Objects: root, "client.dll", "classes", "C_BaseEntity", its "fields",
        // and the one metadata entry = 6. Numbers: 40990760 and 999. Strings:
        // "MGetKV3ClassDefaults" and "Unknown". One null for "parent".
        if (sink.objects != 6 || sink.scalars != 2)
        {
            return -1;
        }

        ::cs2_dumper::http::FetchPolicy policy;
        if (!::cs2_dumper::http::hostAllowed(
                "raw.githubusercontent.com", policy))
        {
            return -2;
        }
        // A look-alike host must never be accepted.
        if (::cs2_dumper::http::hostAllowed(
                "raw.githubusercontent.com.evil.test", policy))
        {
            return -4;
        }

        ::cs2_dumper::fetch::Options options;
        options.verbose = false;
        options.offline = true;
        if (::cs2_dumper::fetch::initialize(options).ok)
        {
            // Offline with no cache is expected to fail; reaching the registry
            // here would mean the test machine had stale state.
            return -3;
        }

        (void)::cs2_dumper::fetch::bootstrap(options);
        (void)::cs2_dumper::fetch::installLoader(options);
        (void)::cs2_dumper::fetch::detail::requiredSymbols();
        (void)::cs2_dumper::fetch::detail::envVar("CS2_OFFSETS_DIR", sink.scratch);
        (void)::cs2_dumper::runtime::isReady();
        (void)::cs2_dumper::runtime::sourceDescription();
        (void)::cs2_dumper::runtime::symbolCount();
        (void)::cs2_dumper::runtime::describeLastMissing();
        (void)::cs2_dumper::runtime::failureReason();
        (void)::cs2_dumper::runtime::categoryName(
            ::cs2_dumper::runtime::Category::Schema);
        return 0;
    }
} // namespace

int main()
{
    const constant sample{ ::cs2_dumper::runtime::Category::Offset,
        "client.dll", nullptr, "dwEntityList", 0x2717828 };
    if (sample.original() != 0x2717828)
    {
        return 1;
    }
    return exercise();
}
