// Offline + compile-time test suite for the runtime-offset headers in
// external-cheat-base/generated.
//
// Build (the project's own strict flags, from the Dockerfile recipe):
//
//   g++ -std=c++20 -Wall -Wextra -Wpedantic -Werror -Wno-unknown-pragmas
//       -D_WIN32_WINNT=0x0A00 -Iexternal-cheat-base/generated
//       tests/offsets_tests.cpp -o offsets_tests.exe -lwinhttp
//
// Run with the fixture directory and the directory holding the generated
// headers; tools/test_generated.py does both and wires in the arguments.
//
// Nothing here reaches the network: every case drives
// fetch::initialize()/runtime against a local payload directory
// (Options::localDirectory, i.e. CS2_OFFSETS_DIR).
#include "dumper_json.hpp"
#include "offsets_fetch.hpp"
#include "offsets_http.hpp"
#include "offsets_runtime.hpp"

// The generated tables themselves: including them here is what makes this
// translation unit fail to build if the headers stop exposing the symbols the
// rest of the project calls.
#include "buttons.hpp"
#include "client_dll.hpp"
#include "offsets.hpp"

#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>
#include <vector>

namespace
{
    // ---------------------------------------------------------------- harness
    int failures = 0;
    int checks = 0;

    void check(bool condition, const char* what)
    {
        ++checks;
        if (!condition)
        {
            ++failures;
            std::printf("  FAIL %s\n", what);
        }
    }

    void checkEqual(long long actual, long long expected, const char* what)
    {
        ++checks;
        if (actual != expected)
        {
            ++failures;
            std::printf("  FAIL %s: got %lld, expected %lld\n", what, actual,
                expected);
        }
    }

    void checkText(std::string_view actual, std::string_view expected,
        const char* what)
    {
        ++checks;
        if (actual != expected)
        {
            ++failures;
            std::printf("  FAIL %s: got '%.*s', expected '%.*s'\n", what,
                static_cast<int>(actual.size()), actual.data(),
                static_cast<int>(expected.size()), expected.data());
        }
    }

    struct TestCase
    {
        const char* name;
        void (*run)();
    };

    // ------------------------------------------------------- compile-time API
    using constant = ::cs2_dumper::runtime::dumper_constant;

    // The generated headers rely on a single ptrdiff_t conversion so that
    // existing call sites such as `moduleBase + dwEntityList` keep compiling
    // unchanged.  Every wider integer type must still be reachable through the
    // standard conversion that follows it.
    static_assert(std::is_convertible_v<constant, std::ptrdiff_t>);
    static_assert(std::is_convertible_v<constant, std::int64_t>);
    static_assert(std::is_convertible_v<constant, std::uint64_t>);
    static_assert(std::is_convertible_v<constant, std::uint32_t>);
    static_assert(std::is_convertible_v<constant, std::int32_t>);
    static_assert(std::is_trivially_copyable_v<constant>);
    static_assert(sizeof(constant) <= 64);

    // Regression guard for the ambiguity that comes from having more than one
    // conversion operator.  `uintptr_t + constant` used to be ambiguous with four
    // of them, because each built-in `operator+(unsigned long long, X)` became
    // reachable through a different user conversion.  These are the exact
    // expression shapes esp.cpp uses; if one of them stops compiling, the build
    // breaks here instead of in the feature code.
    inline void compileShapeChecks()
    {
        using ::cs2_dumper::offsets::client_dll::dwEntityList;
        using ::cs2_dumper::schemas::client_dll::C_CSPlayerPawn::m_entitySpottedState;
        using ::cs2_dumper::schemas::client_dll::C_BaseModelEntity::m_vecViewOffset;

        const std::uintptr_t moduleBase = 0x140000000ull;
        const std::uintptr_t entity = moduleBase + 0x1000;

        volatile std::uintptr_t sink = 0;
        sink = moduleBase + dwEntityList;                  // offset added to a base
        sink = entity + m_vecViewOffset;                    // schema field added to a pointer
        sink = entity + m_entitySpottedState;               // ditto, through a local
        sink = static_cast<std::uintptr_t>(m_vecViewOffset); // explicit narrow cast
        sink = static_cast<std::uint32_t>(m_entitySpottedState);
        sink = static_cast<std::int32_t>(m_entitySpottedState);
        sink = static_cast<std::ptrdiff_t>(dwEntityList);
        // Assignment, not brace init: `uintptr_t{offset}` is a narrowing
        // conversion and the old `constexpr std::ptrdiff_t` was rejected the same
        // way, so no call site does it.
        sink = dwEntityList;
        const bool compared = dwEntityList == 0x2717828 || dwEntityList != 0;
        sink = compared ? 1u : 0u;
        (void)sink;
    }

    // The generated tables must stay constexpr-constructible, otherwise the
    // headers would need dynamic initialisation.
    inline constexpr constant sampleConstant{ ::cs2_dumper::runtime::Category::Offset,
        "client.dll", nullptr, "dwEntityList", 0x2717828 };
    static_assert(sampleConstant.original() == 0x2717828);
    static_assert(sampleConstant.category() == ::cs2_dumper::runtime::Category::Offset);

    bool contains(std::string_view haystack, std::string_view needle)
    {
        return haystack.find(needle) != std::string_view::npos;
    }

    // ------------------------------------------------------------- JSON tests
    struct CountingSink final : ::cs2_dumper::json::EventSink
    {
        const ::cs2_dumper::json::Reader* reader{ nullptr };
        std::size_t objects{ 0 };
        std::size_t arrays{ 0 };
        std::size_t numbers{ 0 };
        std::size_t strings{ 0 };
        std::size_t nulls{ 0 };
        std::size_t bools{ 0 };
        std::string rootContext;
        std::string lastString;

        // Captured before any container opens: the key stack is still empty.
        void beginDocument() { rootContext = reader->context(); }
        void beginObject() { ++objects; }
        void endObject() {}
        void beginArray() { ++arrays; }
        void endArray() {}
        void key(std::string_view) {}
        void nullValue() { ++nulls; }
        void boolValue(bool) { ++bools; }
        void numberValue(std::string_view) { ++numbers; }
        void stringValue(std::string_view contents)
        {
            lastString.assign(contents);
            ++strings;
        }
    };

    void testJsonShape()
    {
        constexpr std::string_view document =
            R"({"client.dll":{"dwEntityList":40990760},)"
            R"("classes":{"C_BaseEntity":{"fields":{"m_iTeamNum":999},)"
            R"("metadata":[{"name":"MGetKV3ClassDefaults","type":"Unknown"}],)"
            R"("parent":null}}})";

        CountingSink sink;
        ::cs2_dumper::json::Reader reader;
        sink.reader = &reader;
        check(reader.parse(document, sink), "well-formed document parses");
        // Objects: root, client.dll, classes, C_BaseEntity, fields, metadata[0].
        checkEqual(static_cast<long long>(sink.objects), 6, "object count");
        checkEqual(static_cast<long long>(sink.arrays), 1, "array count");
        checkEqual(static_cast<long long>(sink.numbers), 2, "number count");
        checkEqual(static_cast<long long>(sink.strings), 2, "string count");
        checkEqual(static_cast<long long>(sink.nulls), 1, "null count");
        checkEqual(static_cast<long long>(sink.bools), 0, "bool count");
        // Captured inside beginDocument, while the key stack is still empty.
        check(sink.rootContext.empty(), "path context of the document root is empty");
    }

    // Exercises the same depth/pathKey contract offsets_fetch relies on, so a
    // change to the Reader's stack bookkeeping cannot silently break the sinks.
    void testJsonPathStackDepth()
    {
        constexpr std::string_view document =
            R"({"client.dll":{"classes":{"C_BaseEntity":{"fields":{"m_iTeamNum":999},)"
            R"("metadata":[],"parent":"CParent"}}}})";

        struct DepthSink final : ::cs2_dumper::json::EventSink
        {
            const ::cs2_dumper::json::Reader* reader{ nullptr };
            std::size_t numberDepth{ 0 };
            std::size_t parentDepth{ 0 };
            std::size_t classDepth{ 0 };
            std::string keys;

            void beginObject()
            {
                if (reader->depth() == 3 && reader->pathKey(1) == "classes")
                {
                    // One class object opened below "classes"; pathKey(2) is the
                    // class name.
                    classDepth = 3;
                    keys += "class:" + std::string(reader->pathKey(2)) + ";";
                }
            }
            void numberValue(std::string_view)
            {
                if (reader->depth() == 5 && reader->pathKey(1) == "classes" &&
                    reader->pathKey(3) == "fields")
                {
                    numberDepth = 5;
                    keys += std::string(reader->pathKey(2)) + "." +
                        std::string(reader->pathKey(4)) + ";";
                }
            }
            void stringValue(std::string_view)
            {
                if (reader->depth() == 4 && reader->pathKey(3) == "parent")
                {
                    parentDepth = 4;
                    keys += std::string(reader->pathKey(2)) + "->" +
                        std::string(reader->pathKey(3)) + ";";
                }
            }
        };

        DepthSink sink;
        ::cs2_dumper::json::Reader reader;
        sink.reader = &reader;
        check(reader.parse(document, sink), "depth fixture parses");
        checkEqual(static_cast<long long>(sink.classDepth), 3, "class object at depth 3");
        checkEqual(static_cast<long long>(sink.numberDepth), 5, "field sits at depth 5");
        checkEqual(static_cast<long long>(sink.parentDepth), 4, "parent sits at depth 4");
        check(contains(sink.keys, "class:C_BaseEntity;"), "class object seen under classes");
        check(contains(sink.keys, "C_BaseEntity.m_iTeamNum;"), "field path keys");
        check(contains(sink.keys, "C_BaseEntity->parent;"), "parent path keys");
    }

    void testJsonRejectsMalformedInput()
    {
        struct Case
        {
            const char* text;
            const char* label;
        };
        const Case cases[] = {
            { "{}", "empty object is fine" },
            { "", "empty document" },
            { "{", "truncated object" },
            { "{\"a\":1,}", "trailing comma" },
            { "{\"a\":NaN}", "NaN literal" },
            { "{\"a\":01}", "leading zero" },
            { "{\"a\":+1}", "leading plus" },
            { "{a:1}", "unquoted key" },
            { "// comment\n{}", "comment" },
            { "{\"a\":\"\\x\"}", "bad escape" },
            { "{\"a\":\"\\ud800\"}", "lone surrogate" },
            { "[1,2", "unterminated array" },
        };

        for (const Case& item : cases)
        {
            CountingSink sink;
            ::cs2_dumper::json::Reader reader;
            sink.reader = &reader;
            const bool parsed = reader.parse(item.text, sink);
            if (std::strcmp(item.text, "{}") == 0)
            {
                check(parsed, item.label);
                continue;
            }
            check(!parsed, item.label);
            if (!parsed)
            {
                check(!reader.error().describe().empty(), "error is described");
            }
        }
    }

    void testJsonUnescape()
    {
        const std::string decoded =
            ::cs2_dumper::json::unescape(R"(a\nb\tc\u00e9\ud83d\ude00\\\"\/)");
        check(contains(decoded, "a\nb\tc"), "simple escapes");
        check(contains(decoded, "\xc3\xa9"), "bmp escape encodes as UTF-8");
        check(contains(decoded, "\xf0\x9f\x98\x80"), "surrogate pair encodes as UTF-8");
    }

    // ------------------------------------------------------------ HTTP policy
    void testHostAllowList()
    {
        ::cs2_dumper::http::FetchPolicy policy;
        check(::cs2_dumper::http::hostAllowed("raw.githubusercontent.com", policy),
            "exact host allowed");
        check(::cs2_dumper::http::hostAllowed("RAW.GITHUBUSERCONTENT.COM", policy),
            "host match is case-insensitive");
        check(::cs2_dumper::http::hostAllowed("www.raw.githubusercontent.com", policy),
            "www prefix allowed");
        check(::cs2_dumper::http::hostAllowed("cdn.raw.githubusercontent.com", policy),
            "subdomain allowed");
        check(!::cs2_dumper::http::hostAllowed(
                  "raw.githubusercontent.com.evil.test", policy),
            "look-alike suffix rejected");
        check(!::cs2_dumper::http::hostAllowed("evil.test", policy),
            "unrelated host rejected");
        check(!::cs2_dumper::http::hostAllowed("", policy), "empty host rejected");
    }

    // --------------------------------------------------------- fetch pipeline
    std::string fixtureRoot;
    std::string generatedRoot;

    ::cs2_dumper::fetch::Options offlineOptions(std::string directory)
    {
        ::cs2_dumper::fetch::Options options;
        options.localDirectory = std::move(directory);
        options.offline = true;
        options.verbose = false;
        return options;
    }

    void testValidPayloadResolves()
    {
        if (fixtureRoot.empty())
        {
            std::printf("  SKIP (no fixture directory argument)\n");
            return;
        }
        const auto result =
            ::cs2_dumper::fetch::initialize(offlineOptions(fixtureRoot + "/valid"));
        if (!result.ok)
        {
            ++failures;
            std::printf("  FAIL fixture payload rejected: %s\n", result.error.c_str());
            return;
        }
        check(::cs2_dumper::runtime::isReady(), "registry becomes ready");
        checkEqual(static_cast<long long>(::cs2_dumper::runtime::classCount()), 14,
            "class count");

        // 1) Module level offset.
        checkEqual(::cs2_dumper::offsets::client_dll::dwEntityList.value(), 0x2717828,
            "offsets.json offset");
        // 2) Schema field declared by the queried class.
        checkEqual(::cs2_dumper::schemas::client_dll::C_BaseEntity::m_iTeamNum.value(),
            0x3C, "schema field on its own class");
        // 3) The same field through a different owner. Note that the generated
        //    headers cannot spell `C_BaseModelEntity::m_iTeamNum`: cs2-dumper
        //    flattens inheritance into namespaces, so the inherited member is
        //    only declared inside the base class. The parent walk in (5) is what
        //    makes a query phrased against the derived class work.
        using ::cs2_dumper::runtime::Category;
        using ::cs2_dumper::runtime::dumper_constant;
        const dumper_constant inheritedFirst{ Category::Schema, "client.dll",
            "C_BaseModelEntity", "m_vecViewOffset", 0 };
        checkEqual(inheritedFirst.value(), 0x148,
            "field declared on the queried class");
        // 4) Buttons share the same registry.
        checkEqual(::cs2_dumper::buttons::attack.value(), 0x2231FD0,
            "buttons.json entry");
        // 3) Every required symbol resolves, so a clean payload records no
        //    missing-symbol diagnostic yet.
        check(!::cs2_dumper::runtime::firstMissingSymbol()[0],
            "no missing symbol recorded before the deliberately omitted lookups");
        // 4) A dump-time literal that the payload deliberately omits keeps the
        //    fallback rather than silently becoming zero, and the failed lookup is
        //    what the diagnostic reports.
        const dumper_constant omitted{ Category::Schema, "client.dll", "C_BaseEntity",
            "m_bDormant", 0xEF };
        check(!omitted.is_resolved(), "omitted symbol stays unresolved");
        checkEqual(omitted.value(), 0xEF,
            "omitted symbol falls back to the dump-time literal");
        checkText(::cs2_dumper::runtime::firstMissingSymbol(), "m_bDormant",
            "the omitted lookup is what gets reported");
        // 5) A quote from a class that this small payload does not describe at
        //    all must also stay unresolved instead of crashing.
        const dumper_constant unknownClass{ Category::Schema, "client.dll",
            "C_NotInThisFixture", "m_iTeamNum", 0x11 };
        check(!unknownClass.is_resolved(), "unknown class stays unresolved");
        checkEqual(unknownClass.value(), 0x11, "unknown class falls back");
        // 6) The first failure is remembered, not overwritten by later ones.
        checkText(::cs2_dumper::runtime::firstMissingSymbol(), "m_bDormant",
            "the first missing symbol is the one reported");
    }

    // Walks the parent chain for real: the assertions use local dumper_constant
    // objects whose className() does not match where the payload declares the
    // field, so a hit can only come from findInChain().
    void testParentChainLookup()
    {
        if (fixtureRoot.empty())
        {
            std::printf("  SKIP (no fixture directory argument)\n");
            return;
        }
        const auto result = ::cs2_dumper::fetch::initialize(
            offlineOptions(fixtureRoot + "/parent-chain"));
        if (!result.ok)
        {
            ++failures;
            std::printf("  FAIL parent-chain payload rejected: %s\n",
                result.error.c_str());
            return;
        }

        using ::cs2_dumper::runtime::Category;
        using ::cs2_dumper::runtime::dumper_constant;

        // One hop: m_nInherited is declared by CParent, not by the queried class.
        const dumper_constant oneHop{ Category::Schema, "client.dll",
            "C_CSPlayerPawn", "m_nInherited", 0 };
        check(oneHop.is_resolved(), "one level parent lookup resolves");
        checkEqual(oneHop.value(), 16, "one level parent lookup value");

        // Two hops: m_nDeeper lives on CGrandParent, reached through CParent.
        const dumper_constant twoHop{ Category::Schema, "client.dll", "C_CSPlayerPawn",
            "m_nDeeper", 0 };
        check(twoHop.is_resolved(), "two level parent lookup resolves");
        checkEqual(twoHop.value(), 32, "two level parent lookup value");

        // A class that is nothing but a chain of empty parents and one parent
        // link that points at a class missing from the payload: the walk has to
        // terminate and report unresolved rather than loop or crash.
        const dumper_constant deadEnd{ Category::Schema, "client.dll", "CNullA",
            "m_nDeeper", 0x77 };
        check(!deadEnd.is_resolved(), "walk past a dead end terminates unresolved");
        checkEqual(deadEnd.value(), 0x77, "dead end falls back to the literal");
    }

    void testMissingSymbolIsFatal()
    {
        if (fixtureRoot.empty())
        {
            std::printf("  SKIP (no fixture directory argument)\n");
            return;
        }
        const auto result = ::cs2_dumper::fetch::initialize(
            offlineOptions(fixtureRoot + "/missing-symbol"));
        check(!result.ok, "payload missing a required symbol is rejected");
        check(contains(result.error, "refusing to run"), "error explains the refusal");
        check(!::cs2_dumper::runtime::isReady(), "registry stays unready");
    }

    void testMalformedJsonIsFatal()
    {
        if (fixtureRoot.empty())
        {
            std::printf("  SKIP (no fixture directory argument)\n");
            return;
        }
        const auto result =
            ::cs2_dumper::fetch::initialize(offlineOptions(fixtureRoot + "/bad-json"));
        check(!result.ok, "malformed payload is rejected");
        check(contains(result.error, "line"), "error carries a line number");
        check(!::cs2_dumper::runtime::isReady(), "registry stays unready");
    }

    void testMissingDirectoryDoesNotFallBack()
    {
        const auto result = ::cs2_dumper::fetch::initialize(
            offlineOptions("this-directory-does-not-exist-cs2-test"));
        check(!result.ok, "a configured local directory is authoritative");
    }

    void testLoaderBridge()
    {
        if (fixtureRoot.empty())
        {
            std::printf("  SKIP (no fixture directory argument)\n");
            return;
        }
        // Installed loader: the first lookup pulls the payload in on demand.
        ::cs2_dumper::runtime::publish(::cs2_dumper::runtime::detail::Table{},
            "reset", 0);
        ::cs2_dumper::fetch::installLoader(offlineOptions(fixtureRoot + "/valid"));
        const std::int64_t resolved =
            ::cs2_dumper::offsets::client_dll::dwEntityList.value();
        checkEqual(resolved, 0x2717828, "installed loader resolves lazily");
    }

    // The generated headers are included at the top of this file, so simply
    // naming the symbols the rest of the project uses is what makes the build
    // fail if the conversion ever drops one. The literals are checked here too,
    // because that is the fallback path when no payload is available.
    void testGeneratedTablesMatchSource()
    {
        // Compiles the call-site expression shapes the feature code relies on.
        compileShapeChecks();

        checkEqual(::cs2_dumper::offsets::client_dll::dwEntityList.original(),
            0x2717828, "generated offsets.hpp keeps its literal");
        checkEqual(::cs2_dumper::offsets::engine2_dll::dwBuildNumber.original(),
            0x61CFE8, "generated multi-module offsets");
        checkEqual(::cs2_dumper::buttons::zoom.original(), 0x2577FF0,
            "generated buttons.hpp keeps its literal");
        checkEqual(
            ::cs2_dumper::schemas::client_dll::C_BaseEntity::m_iTeamNum.original(),
            0x3E7, "generated client_dll.hpp keeps its literal");
        check(std::strcmp(
                  ::cs2_dumper::schemas::client_dll::C_CSPlayerPawn::m_angEyeAngles
                      .name(),
                  "m_angEyeAngles") == 0,
            "schema symbol carries its field name");
        check(std::strcmp(
                  ::cs2_dumper::schemas::client_dll::C_BaseEntity::m_iTeamNum
                      .className(),
                  "C_BaseEntity") == 0,
            "schema symbol carries its class name");
        check(std::strcmp(::cs2_dumper::offsets::client_dll::dwEntityList.module(),
                  "client.dll") == 0,
            "offset symbol carries its module name");
        check(::cs2_dumper::offsets::client_dll::dwEntityList.category() ==
                ::cs2_dumper::runtime::Category::Offset,
            "offset symbol carries its category");
        check(::cs2_dumper::schemas::client_dll::C_BaseEntity::m_iTeamNum.category() ==
                ::cs2_dumper::runtime::Category::Schema,
            "schema symbol carries its category");
        check(::cs2_dumper::buttons::zoom.category() ==
                ::cs2_dumper::runtime::Category::Button,
            "button symbol carries its category");
        // The generated constants must stay usable in the same expression shapes
        // the existing call sites use.
        const std::uintptr_t moduleBase = 0x140000000ull;
        const std::uintptr_t pointer = moduleBase +
            static_cast<std::ptrdiff_t>(
                ::cs2_dumper::offsets::client_dll::dwEntityList);
        checkEqual(static_cast<long long>(pointer - moduleBase), 0x2717828,
            "generated constant works in pointer arithmetic");

        const std::vector<const constant*> allConstants{
            &::cs2_dumper::offsets::client_dll::dwEntityList,
            &::cs2_dumper::schemas::client_dll::C_AttributeContainer::m_Item,
            &::cs2_dumper::schemas::client_dll::C_BaseEntity::m_iTeamNum,
            &::cs2_dumper::schemas::client_dll::C_BaseModelEntity::m_vecViewOffset,
            &::cs2_dumper::schemas::client_dll::C_CSPlayerPawn::m_angEyeAngles,
            &::cs2_dumper::schemas::client_dll::C_CSPlayerPawn::m_entitySpottedState,
            &::cs2_dumper::schemas::client_dll::C_CSPlayerPawnBase::m_flFlashDuration,
            &::cs2_dumper::schemas::client_dll::C_CSPlayerPawnBase::m_flFlashMaxAlpha,
            &::cs2_dumper::schemas::client_dll::C_EconEntity::m_AttributeManager,
            &::cs2_dumper::schemas::client_dll::EntitySpottedState_t::m_bSpotted,
            &::cs2_dumper::schemas::client_dll::CSkeletonInstance::m_modelState,
        };
        for (const constant* item : allConstants)
        {
            check(item->name() != nullptr && item->name()[0] != '\0',
                "every referenced symbol has a name");
        }
    }

    // ------------------------------------------------------------ diagnostics
    void testDiagnostics()
    {
        // An unknown symbol must report itself instead of resolving to zero.
        const constant missing{ ::cs2_dumper::runtime::Category::Offset,
            "client.dll", nullptr, "dwThisSymbolDoesNotExistAnywhere", 0x1234 };
        ::cs2_dumper::runtime::clearLookupDiagnostics();
        checkEqual(missing.value(), 0x1234, "unknown symbol falls back to its literal");
        check(!missing.is_resolved(), "unknown symbol reports unresolved");
        const char* recorded = ::cs2_dumper::runtime::firstMissingSymbol();
        check(recorded != nullptr && recorded[0] != '\0', "missing symbol is recorded");
        check(contains(::cs2_dumper::runtime::describeLastMissing(),
                  "dwThisSymbolDoesNotExistAnywhere"),
            "describeLastMissing names the symbol");
        ::cs2_dumper::runtime::clearLookupDiagnostics();
        check(::cs2_dumper::runtime::firstMissingSymbol()[0] == '\0',
            "diagnostics can be cleared");
    }

    const TestCase kTests[] = {
        { "json: shape and path stack", &testJsonShape },
        { "json: depth and pathKey contract", &testJsonPathStackDepth },
        { "json: rejects malformed input", &testJsonRejectsMalformedInput },
        { "json: unescape", &testJsonUnescape },
        { "http: host allow list", &testHostAllowList },
        { "fetch: valid payload resolves", &testValidPayloadResolves },
        { "fetch: parent chain lookup", &testParentChainLookup },
        { "fetch: missing symbol is fatal", &testMissingSymbolIsFatal },
        { "fetch: malformed json is fatal", &testMalformedJsonIsFatal },
        { "fetch: missing directory does not fall back", &testMissingDirectoryDoesNotFallBack },
        { "fetch: installed loader resolves lazily", &testLoaderBridge },
        { "generated: tables keep their literals", &testGeneratedTablesMatchSource },
        { "runtime: diagnostics", &testDiagnostics },
    };
} // namespace

int main(int argc, char* argv[])
{
    // argv[1] = fixture root, argv[2] = directory holding the generated headers.
    if (argc > 1)
    {
        fixtureRoot = argv[1];
    }
    if (argc > 2)
    {
        generatedRoot = argv[2];
    }

    for (const TestCase& test : kTests)
    {
        const int before = failures;
        std::printf("- %s\n", test.name);
        // Every case starts from an empty registry. Without this the first
        // successful load publishes once and every later `initialize()` returns
        // that result from its fast path, so the failure cases would pass
        // vacuously.
        ::cs2_dumper::runtime::detail::resetForTesting();
        test.run();
        if (failures != before)
        {
            std::printf("  (%d failure(s))\n", failures - before);
        }
    }

    std::printf("\n%d checks, %d failure(s)\n", checks, failures);
    return failures == 0 ? 0 : 1;
}
