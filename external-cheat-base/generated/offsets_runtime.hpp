#pragma once

// Runtime symbol registry for the cs2-dumper offset tables.
//
// The generated headers (offsets.hpp, buttons.hpp, client_dll.hpp) used to be
// pure `constexpr std::ptrdiff_t` tables. They now declare `dumper_constant`
// objects that look their value up here, so call sites such as
// `moduleBase + cs2_dumper::offsets::client_dll::dwEntityList` keep compiling
// and keep behaving identically - `operator std::ptrdiff_t` hides the lookup.
//
// This header only declares the registry and the lookup entry point. Filling it
// from a downloaded payload lives in offsets_fetch.hpp, which keeps the
// generated headers cheap to include (they pull in this file, not the JSON
// reader, not WinHTTP).
//
// Storage is static by design: a DLL/schema snapshot is process-wide state and
// every game thread reads it. Population happens once during startup, before
// any lookup can run, and the published values are never mutated afterwards, so
// lookups need no locking.

#include <atomic>
#include <cstddef>
#include <cstdint>
#include <deque>
#include <string>
#include <string_view>
#include <unordered_map>

namespace cs2_dumper::runtime
{
    enum class Category
    {
        Offset,
        Button,
        Schema,
    };

    [[nodiscard]] inline const char* categoryName(Category category) noexcept
    {
        switch (category)
        {
        case Category::Offset: return "offsets";
        case Category::Button: return "buttons";
        case Category::Schema: return "schema";
        }
        return "unknown";
    }

    namespace detail
    {
        [[nodiscard]] constexpr std::uint64_t fnv1a(std::string_view text) noexcept
        {
            std::uint64_t hash = 14695981039346656037ull;
            for (const char character : text)
            {
                hash ^= static_cast<unsigned char>(character);
                hash *= 1099511628211ull;
            }
            return hash;
        }
    } // namespace detail

    // Key identifying one constant. The strings are always string literals from
    // the generated tables, so they are compared by content but stored by
    // pointer; nothing in the registry copies them.
    struct SymbolKey
    {
        Category category{ Category::Offset };
        const char* module{ nullptr };
        // Client class for schema fields; nullptr for offsets and buttons.
        const char* className{ nullptr };
        const char* name{ nullptr };

        [[nodiscard]] constexpr std::uint64_t hash() const noexcept
        {
            std::uint64_t hash = detail::fnv1a(module == nullptr ? "" : module);
            hash ^= detail::fnv1a(className == nullptr ? "" : className) +
                0x9e3779b97f4a7c15ull + (hash << 6) + (hash >> 2);
            hash ^= detail::fnv1a(name == nullptr ? "" : name) +
                0x9e3779b97f4a7c15ull + (hash << 6) + (hash >> 2);
            hash ^= static_cast<std::uint64_t>(category) + 0x9e3779b97f4a7c15ull +
                (hash << 6) + (hash >> 2);
            return hash;
        }

        friend constexpr bool operator==(
            const SymbolKey& left,
            const SymbolKey& right) noexcept
        {
            return left.category == right.category &&
                sameText(left.module, right.module) &&
                sameText(left.className, right.className) &&
                sameText(left.name, right.name);
        }

        friend constexpr bool operator!=(const SymbolKey& left,
            const SymbolKey& right) noexcept
        {
            return !(left == right);
        }

    private:
        [[nodiscard]] static constexpr bool sameText(
            const char* left,
            const char* right) noexcept
        {
            if (left == nullptr || right == nullptr)
            {
                return left == right;
            }
            while (*left != '\0' && *left == *right)
            {
                ++left;
                ++right;
            }
            return *left == *right;
        }
    };
} // namespace cs2_dumper::runtime

// std::hash specialisation must live in namespace std.
template <>
struct std::hash<cs2_dumper::runtime::SymbolKey>
{
    [[nodiscard]] std::size_t operator()(
        const cs2_dumper::runtime::SymbolKey& key) const noexcept
    {
        const std::uint64_t hash = key.hash();
        return static_cast<std::size_t>(hash ^ (hash >> 32));
    }
};

namespace cs2_dumper::runtime
{
    struct SymbolValue
    {
        // Resolved offset, or the raw enum member value for schema enumerations.
        std::int64_t value{ 0 };
        // Owning class when the value came from a base class along the parent
        // chain (schema fields only); nullptr when the declaring class matched.
        const char* declaredBy{ nullptr };
        // True for schema enumeration members, whose values must not be used as
        // byte offsets.
        bool isEnumMember{ false };
    };

    namespace detail
    {
        struct Table
        {
            std::unordered_map<SymbolKey, SymbolValue> symbols;
            // Class -> parent class, for schema lookups that must walk up the
            // inheritance chain. Only classes that actually declare a parent end
            // up here, so this is not the class count (see `classes`). std::deque
            // keeps every string at a stable address, so the views stay valid
            // after the table is moved.
            std::unordered_map<std::string_view, std::string_view> classParents;
            // Backing storage for every string a SymbolKey points at. SymbolKey
            // stores a bare `const char*` because the generated headers pass
            // string literals; the runtime side has to uphold the same lifetime
            // guarantee, and this deque is how it does that. std::deque never
            // moves an element when it grows, so the pointers stay valid even as
            // more names are added.
            std::deque<std::string> nameStorage;
            // Number of classes the payload described, which is independent of how
            // many of them declared a parent.
            std::size_t classes{ 0 };

            // Copies `text` into the table and returns a stable, NUL terminated
            // pointer to it, reusing an earlier copy when there is one. The
            // payload's own buffers are freed as soon as parsing finishes, so
            // every string a key or a parent link refers to must go through here.
            [[nodiscard]] const char* intern(std::string_view text)
            {
                if (text.empty())
                {
                    return "";
                }
                const auto existing = interned.find(text);
                if (existing != interned.end())
                {
                    return existing->second;
                }
                nameStorage.emplace_back(text);
                const char* stable = nameStorage.back().c_str();
                interned.emplace(std::string_view{ stable, text.size() }, stable);
                return stable;
            }

        private:
            // Views into nameStorage, so this map must never outlive the deque
            // that backs it: both are members of the same Table and die together.
            std::unordered_map<std::string_view, const char*> interned;
        public:
            void reserve(std::size_t symbolCount, std::size_t classCount)
            {
                symbols.reserve(symbolCount);
                classParents.reserve(classCount);
                interned.reserve(symbolCount + classCount * 2);
            }
        };

        enum class LoadState
        {
            Unloaded,
            Loading,
            Ready,
            Failed,
        };

        struct RegistryState
        {
            // The published table lives inside the state so that publishing again
            // replaces it wholesale. It must never be a function-local static that
            // gets move-assigned: a stale intern cache would hand out pointers into
            // string storage the assignment already freed.
            Table storage{};
            Table* table{ nullptr };
            std::atomic<int> state{ static_cast<int>(LoadState::Unloaded) };
            std::atomic<std::uint64_t> sourceRevision{ 0 };
            std::atomic<const char*> firstMissingSymbol{ nullptr };
            std::string sourceDescription{};
            std::string failureReason{};
        };

        // One instance per process. C++ guarantees thread-safe initialisation of
        // function-local statics, so the table is built exactly once.
        [[nodiscard]] inline RegistryState& state()
        {
            static RegistryState instance;
            return instance;
        }

        // Hook used by offsets_fetch.hpp to populate the registry. Returning
        // false records `reason` as the failure message.
        using Loader = bool (*)(std::string& reason);
        [[nodiscard]] inline Loader& loader() noexcept
        {
            static Loader instance = nullptr;
            return instance;
        }

        [[nodiscard]] inline bool ensureLoaded(std::string_view& failure)
        {
            RegistryState& current = state();
            if (current.table != nullptr)
            {
                return true;
            }

            // Fast path: a previous attempt already failed.
            if (current.state.load(std::memory_order_acquire) ==
                static_cast<int>(LoadState::Failed))
            {
                failure = current.failureReason;
                return false;
            }

            Loader load = loader();
            if (load == nullptr)
            {
                current.failureReason =
                    "no payload loader is registered; include "
                    "offsets_fetch.hpp and call "
                    "cs2_dumper::runtime::initialize() from main() before the "
                    "first offset lookup";
                current.state.store(
                    static_cast<int>(LoadState::Failed),
                    std::memory_order_release);
                failure = current.failureReason;
                return false;
            }

            int expected = static_cast<int>(LoadState::Unloaded);
            if (current.state.compare_exchange_strong(
                    expected,
                    static_cast<int>(LoadState::Loading),
                    std::memory_order_acq_rel))
            {
                std::string reason;
                if (!load(reason))
                {
                    current.failureReason = reason.empty()
                        ? std::string("failed to load the cs2-dumper payload")
                        : reason;
                    current.state.store(
                        static_cast<int>(LoadState::Failed),
                        std::memory_order_release);
                }
            }

            if (current.state.load(std::memory_order_acquire) !=
                static_cast<int>(LoadState::Ready))
            {
                failure = current.failureReason;
                return false;
            }
            return true;
        }

        // Walks the parent chain looking for an own field. cs2-dumper only emits
        // fields declared by the class itself, so inherited members (for example
        // C_AttributeContainer::m_Item reached through C_EconEntity) are found on
        // an ancestor. When `declaredBy` is given it receives the class that
        // actually declares the field.
        [[nodiscard]] inline const SymbolValue* findInChain(
            const Table& table,
            const SymbolKey& key,
            std::string_view* declaredBy = nullptr)
        {
            const SymbolKey own{ Category::Schema, key.module, key.className,
                key.name };
            auto direct = table.symbols.find(own);
            if (direct != table.symbols.end())
            {
                if (declaredBy != nullptr)
                {
                    *declaredBy = key.className == nullptr
                        ? std::string_view{}
                        : std::string_view{ key.className };
                }
                return &direct->second;
            }

            std::string_view current =
                key.className == nullptr ? std::string_view{} :
                std::string_view{ key.className };
            // The chain in the current snapshot is at most a handful of links;
            // the bound only exists so a malformed parent cycle cannot hang.
            constexpr int maxDepth = 32;
            for (int depth = 0; depth < maxDepth && !current.empty(); ++depth)
            {
                const auto parent = table.classParents.find(current);
                if (parent == table.classParents.end() || parent->second.empty())
                {
                    return nullptr;
                }
                current = parent->second;
                const SymbolKey inherited{ Category::Schema, key.module,
                    current.data(), key.name };
                auto found = table.symbols.find(inherited);
                if (found != table.symbols.end())
                {
                    if (declaredBy != nullptr)
                    {
                        *declaredBy = found->first.className == nullptr
                            ? std::string_view{}
                            : std::string_view{ found->first.className };
                    }
                    return &found->second;
                }
            }
            return nullptr;
        }

        [[nodiscard]] inline SymbolKey& missingKey() noexcept
        {
            static thread_local SymbolKey key{};
            return key;
        }

        // Records the first symbol that could not be resolved. Every field points
        // at a string literal owned by the generated table, so the record stays
        // valid for the life of the process without copying or allocating.
        inline void recordMissing(const SymbolKey& key) noexcept
        {
            const char* expected = nullptr;
            (void)state().firstMissingSymbol.compare_exchange_strong(
                expected,
                key.name,
                std::memory_order_acq_rel);
            if (expected == nullptr)
            {
                missingKey() = key;
            }
        }

        [[nodiscard]] inline bool resolve(
            const SymbolKey& key,
            std::int64_t& out)
        {
            std::string_view failure;
            if (!ensureLoaded(failure))
            {
                // Refuse to pretend: an unresolved offset would silently read
                // the wrong memory, which is far worse than a loud stop.
                out = 0;
                return false;
            }

            const Table& table = *state().table;
            const SymbolValue* found = nullptr;
            if (key.category == Category::Schema)
            {
                found = findInChain(table, key);
            }
            else
            {
                const auto position = table.symbols.find(key);
                if (position != table.symbols.end())
                {
                    found = &position->second;
                }
            }

            if (found == nullptr)
            {
                recordMissing(key);
                out = 0;
                return false;
            }
            out = found->value;
            return true;
        }

        // Drops everything that was published and returns the registry to its
        // initial state. Only the offline test harness needs this: a real run
        // loads exactly once and keeps the result, which is what makes the
        // `initialize()` fast path correct.
        inline void resetForTesting()
        {
            RegistryState& current = state();
            current.table = nullptr;
            current.state.store(
                static_cast<int>(LoadState::Unloaded), std::memory_order_release);
            current.firstMissingSymbol.store(nullptr,
                std::memory_order_release);
            current.sourceRevision.store(0, std::memory_order_release);
            current.sourceDescription.clear();
            current.failureReason.clear();
            // Free the strings along with the intern cache that points into them.
            current.storage = Table{};
        }
    } // namespace detail

    class dumper_constant
    {
    public:
        constexpr dumper_constant(
            Category category,
            const char* module,
            const char* className,
            const char* name,
            std::int64_t dumpTimeValue) noexcept
            : category_(category)
            , module_(module)
            , className_(className)
            , name_(name)
            , dumpTimeValue_(dumpTimeValue)
        {
        }

        // False when the registry holds no entry for this symbol, in which case
        // the accessors return the value captured when the header was dumped.
        [[nodiscard]] bool is_resolved() const noexcept
        {
            std::int64_t ignored = 0;
            return detail::resolve(key(), ignored);
        }

        // Resolved value, or the dump-time literal when the payload does not
        // provide one (offline unit tests, tools that never fetch).
        [[nodiscard]] std::int64_t value() const noexcept
        {
            std::int64_t resolved = 0;
            if (detail::resolve(key(), resolved))
            {
                return resolved;
            }
            return dumpTimeValue_;
        }

        // Same as value(); exists so a call site can force a lookup.
        [[nodiscard]] std::int64_t operator()() const noexcept
        {
            return value();
        }

        // Exactly one conversion operator, deliberately.  With several (uint64_t,
        // uint32_t, int32_t, ...) an expression such as
        // ``uintptr_t_entity + C_BaseModelEntity::m_vecViewOffset`` becomes
        // ambiguous, because every built-in ``operator+(unsigned long long, X)``
        // is then reachable through a different user conversion.  A single
        // ptrdiff_t conversion makes ``base + offset`` resolve exactly the way it
        // did when the generated constant was a plain ``std::ptrdiff_t``, and
        // ``static_cast<uint32_t>(constant)`` still works through the standard
        // integral conversion that follows it.
        [[nodiscard]] operator std::ptrdiff_t() const noexcept
        {
            return static_cast<std::ptrdiff_t>(value());
        }

        // The literal baked into the generated header. Kept for cross-checks and
        // for reports that want to show "dump time -> live" changes.
        [[nodiscard]] constexpr std::int64_t original() const noexcept
        {
            return dumpTimeValue_;
        }

        [[nodiscard]] constexpr Category category() const noexcept
        {
            return category_;
        }

        [[nodiscard]] constexpr const char* module() const noexcept
        {
            return module_;
        }

        [[nodiscard]] constexpr const char* className() const noexcept
        {
            return className_;
        }

        [[nodiscard]] constexpr const char* name() const noexcept
        {
            return name_;
        }

    private:
        [[nodiscard]] constexpr SymbolKey key() const noexcept
        {
            return SymbolKey{ category_, module_, className_, name_ };
        }

        Category category_;
        const char* module_;
        const char* className_;
        const char* name_;
        std::int64_t dumpTimeValue_;
    };

    [[nodiscard]] inline bool isReady() noexcept
    {
        return detail::state().table != nullptr;
    }

    // Human readable origin of the published payload, for startup logging.
    [[nodiscard]] inline std::string_view sourceDescription() noexcept
    {
        if (!isReady())
        {
            return {};
        }
        return detail::state().sourceDescription;
    }

    // Wall-clock seconds the upstream snapshot was generated, or 0 when the
    // cached copy predates the "timestamp" field.
    [[nodiscard]] inline std::uint64_t sourceRevision() noexcept
    {
        return detail::state().sourceRevision.load(std::memory_order_acquire);
    }

    [[nodiscard]] inline std::size_t symbolCount() noexcept
    {
        const detail::RegistryState& current = detail::state();
        return current.table == nullptr ? 0 : current.table->symbols.size();
    }

    [[nodiscard]] inline std::size_t classCount() noexcept
    {
        const detail::RegistryState& current = detail::state();
        return current.table == nullptr ? 0 : current.table->classes;
    }

    // Name of the first symbol a lookup failed to find, or an empty string when
    // every lookup so far succeeded. This exists so a caller can assert that the
    // published payload actually covers the generated tables instead of trusting
    // that it does. Never null: the empty result is a valid "" so callers can
    // index or print it without a null check.
    [[nodiscard]] inline const char* firstMissingSymbol() noexcept
    {
        const char* recorded =
            detail::state().firstMissingSymbol.load(std::memory_order_acquire);
        return recorded == nullptr ? "" : recorded;
    }

    // "schema client.dll::C_EconEntity::m_AttributeManager" for the last failed
    // lookup made on the calling thread.
    [[nodiscard]] inline std::string describeLastMissing() noexcept
    {
        const SymbolKey& key = detail::missingKey();
        if (key.name == nullptr)
        {
            return {};
        }
        std::string out = categoryName(key.category);
        out += ' ';
        out += key.module == nullptr ? "<unknown module>" : key.module;
        if (key.className != nullptr)
        {
            out += "::";
            out += key.className;
        }
        out += "::";
        out += key.name;
        return out;
    }

    // Reason the payload could not be published, or an empty view.
    [[nodiscard]] inline std::string_view failureReason() noexcept
    {
        return detail::state().failureReason;
    }

    // Forgets every recorded lookup failure. Used between test cases.
    inline void clearLookupDiagnostics() noexcept
    {
        detail::state().firstMissingSymbol.store(nullptr, std::memory_order_release);
        detail::missingKey() = SymbolKey{};
    }

    // Publishes a table built by the loader. `revision` is the upstream
    // generation timestamp, 0 when unknown.
    inline void publish(
        detail::Table&& table,
        std::string description,
        std::uint64_t revision) noexcept
    {
        detail::RegistryState& current = detail::state();
        current.storage = std::move(table);
        current.table = &current.storage;
        current.sourceDescription = std::move(description);
        current.sourceRevision.store(revision, std::memory_order_release);
        current.state.store(
            static_cast<int>(detail::LoadState::Ready),
            std::memory_order_release);
    }
} // namespace cs2_dumper::runtime
