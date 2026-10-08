#pragma once

// Minimal, dependency-free JSON reader used to consume the cs2-dumper output.
//
// Design notes (this project deliberately owns its parser instead of vendoring
// a library, because the input is machine generated and the parsing rules are
// part of what we want to be able to audit):
//
//   * Single pass, no DOM: the caller receives SAX-style callbacks. The dumper
//     payload is ~210 KB with 542 classes and several thousand fields, so
//     materialising a tree would allocate thousands of nodes for no benefit.
//   * Keys and string values are handed out as std::string_view slices of the
//     original buffer with escape handling, so a value that contains no escape
//     costs zero allocations.
//   * Numbers are returned as std::string_view. Offset tables contain small
//     integers, but some cs2-dumper revisions carry very large 64-bit values,
//     so the reading side decides how to convert (see offsets_runtime.hpp).
//   * Strict RFC 8259 lexical rules: no comments, no trailing commas, no NaN /
//     Infinity, no raw control characters in strings, no leading '+', no bare
//     leading zeroes, no lone surrogates. Anything that does not match is
//     reported with an exact byte offset plus line/column, which makes a schema
//     change in the upstream repository easy to diagnose.
//   * Nesting depth and string length are bounded so a hostile or truncated
//     response cannot drive unbounded recursion or memory use.

#include <cstddef>
#include <cstdint>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace cs2_dumper::json
{
    struct Error
    {
        std::size_t offset{ 0 };
        std::size_t line{ 1 };
        std::size_t column{ 1 };
        const char* message{ "" };

        [[nodiscard]] explicit operator bool() const noexcept
        {
            return message[0] != '\0';
        }

        // "line 12, column 7 (byte 431): expected ':' after object key"
        [[nodiscard]] std::string describe() const;
    };

    // Callbacks an event sink may implement. Unimplemented hooks are simply not
    // called, so a sink only pays for what it cares about.
    //
    // Sinks that need to know where a value sits in the document can ask the
    // reader it is being fed from: Reader::depth() is the number of enclosing
    // containers currently open, and Reader::pathKey(i) returns the object key
    // that selected the container at index i. Because the reader owns that
    // stack, a sink never has to mirror the parser's control flow just to track
    // a path. Pass the reader to the sink's constructor when you need this.
    struct EventSink
    {
        void beginDocument() {}
        void endDocument() {}
        void beginObject() {}
        void endObject() {}
        void beginArray() {}
        void endArray() {}
        void key(std::string_view /*name*/) {}
        // Precisely one value callback fires per JSON value. `literal` is the
        // verbatim slice, or the string contents when the value was a string.
        void nullValue() {}
        void boolValue(bool /*value*/) {}
        void numberValue(std::string_view /*literal*/) {}
        void stringValue(std::string_view /*contents*/) {}

        ~EventSink() = default;
    };

    struct Limits
    {
        // Deepest container nesting accepted before the document is rejected.
        std::size_t maxDepth{ 96 };
        // Longest single string token, escapes included.
        std::size_t maxStringBytes{ 64u * 1024u };
    };

    [[nodiscard]] inline bool isDigit(char character) noexcept
    {
        return character >= '0' && character <= '9';
    }

    [[nodiscard]] inline bool isHexDigit(char character) noexcept
    {
        return isDigit(character) ||
            (character >= 'a' && character <= 'f') ||
            (character >= 'A' && character <= 'F');
    }

    [[nodiscard]] inline unsigned hexValue(char character) noexcept
    {
        if (isDigit(character))
        {
            return static_cast<unsigned>(character - '0');
        }
        if (character >= 'a' && character <= 'f')
        {
            return static_cast<unsigned>(character - 'a') + 10u;
        }
        return static_cast<unsigned>(character - 'A') + 10u;
    }

    namespace detail
    {
        // ---------------------------------------------------------------------
        // UTF-8 / UTF-16 helpers (shared by the raw reader and the appender).
        // ---------------------------------------------------------------------
        [[nodiscard]] inline unsigned char byteAt(
            std::string_view text,
            std::size_t index) noexcept
        {
            return static_cast<unsigned char>(text[index]);
        }

        [[nodiscard]] inline std::size_t utf8SequenceLength(
            unsigned char lead) noexcept
        {
            if (lead < 0x80u)
            {
                return 1;
            }
            if (lead >= 0xC2u && lead <= 0xDFu)
            {
                return 2;
            }
            if (lead >= 0xE0u && lead <= 0xEFu)
            {
                return 3;
            }
            if (lead >= 0xF0u && lead <= 0xF4u)
            {
                return 4;
            }
            return 0;
        }

        // Returns the sequence length, or 0 when the bytes are not valid UTF-8.
        [[nodiscard]] inline std::size_t validUtf8Sequence(
            std::string_view text,
            std::size_t index) noexcept
        {
            const std::size_t length =
                utf8SequenceLength(byteAt(text, index));
            if (length == 0 || index + length > text.size())
            {
                return 0;
            }
            if (length == 1)
            {
                return 1;
            }
            for (std::size_t i = 1; i < length; ++i)
            {
                const unsigned char trail = byteAt(text, index + i);
                if (trail < 0x80u || trail > 0xBFu)
                {
                    return 0;
                }
            }
            // Reject overlong forms, surrogates and code points above U+10FFFF.
            const unsigned char lead = byteAt(text, index);
            const unsigned char second = byteAt(text, index + 1);
            if (length == 3)
            {
                if (lead == 0xE0u && second < 0xA0u)
                {
                    return 0;
                }
                if (lead == 0xEDu && second > 0x9Fu)
                {
                    return 0;
                }
            }
            if (length == 4)
            {
                if (lead == 0xF0u && second < 0x90u)
                {
                    return 0;
                }
                if (lead == 0xF4u && second > 0x8Fu)
                {
                    return 0;
                }
            }
            return length;
        }

        // Verifies that every code unit pair is well formed. `contents` is the
        // text between the quotes, escapes still present.
        [[nodiscard]] inline bool validateEscapedString(
            std::string_view contents) noexcept
        {
            std::size_t i = 0;
            while (i < contents.size())
            {
                const unsigned char current = byteAt(contents, i);
                if (current != '\\')
                {
                    if (current < 0x20u)
                    {
                        return false;
                    }
                    if (current < 0x80u)
                    {
                        ++i;
                        continue;
                    }
                    const std::size_t length =
                        validUtf8Sequence(contents, i);
                    if (length == 0)
                    {
                        return false;
                    }
                    i += length;
                    continue;
                }

                if (i + 1 >= contents.size())
                {
                    return false;
                }
                const char escape = contents[i + 1];
                switch (escape)
                {
                case '"':
                case '\\':
                case '/':
                case 'b':
                case 'f':
                case 'n':
                case 'r':
                case 't':
                    i += 2;
                    break;
                case 'u':
                {
                    if (i + 5 >= contents.size())
                    {
                        return false;
                    }
                    unsigned code = 0;
                    for (std::size_t k = 0; k < 4; ++k)
                    {
                        const char digit = contents[i + 2 + k];
                        if (!isHexDigit(digit))
                        {
                            return false;
                        }
                        code = (code << 4) | hexValue(digit);
                    }
                    i += 6;
                    if (code >= 0xD800u && code <= 0xDBFFu)
                    {
                        // High surrogate: a low surrogate must follow.
                        if (i + 5 >= contents.size() ||
                            contents[i] != '\\' ||
                            contents[i + 1] != 'u')
                        {
                            return false;
                        }
                        unsigned low = 0;
                        for (std::size_t k = 0; k < 4; ++k)
                        {
                            const char digit = contents[i + 2 + k];
                            if (!isHexDigit(digit))
                            {
                                return false;
                            }
                            low = (low << 4) | hexValue(digit);
                        }
                        if (low < 0xDC00u || low > 0xDFFFu)
                        {
                            return false;
                        }
                        i += 6;
                    }
                    else if (code >= 0xDC00u && code <= 0xDFFFu)
                    {
                        // Lone low surrogate.
                        return false;
                    }
                    break;
                }
                default:
                    return false;
                }
            }
            return true;
        }

        [[nodiscard]] inline std::size_t encodedUtf8(
            std::uint32_t codePoint,
            char out[4]) noexcept
        {
            if (codePoint <= 0x7Fu)
            {
                out[0] = static_cast<char>(codePoint);
                return 1;
            }
            if (codePoint <= 0x7FFu)
            {
                out[0] = static_cast<char>(0xC0u | (codePoint >> 6));
                out[1] = static_cast<char>(0x80u | (codePoint & 0x3Fu));
                return 2;
            }
            if (codePoint <= 0xFFFFu)
            {
                out[0] = static_cast<char>(0xE0u | (codePoint >> 12));
                out[1] = static_cast<char>(
                    0x80u | ((codePoint >> 6) & 0x3Fu));
                out[2] = static_cast<char>(0x80u | (codePoint & 0x3Fu));
                return 3;
            }
            out[0] = static_cast<char>(0xF0u | (codePoint >> 18));
            out[1] = static_cast<char>(
                0x80u | ((codePoint >> 12) & 0x3Fu));
            out[2] = static_cast<char>(
                0x80u | ((codePoint >> 6) & 0x3Fu));
            out[3] = static_cast<char>(0x80u | (codePoint & 0x3Fu));
            return 4;
        }

        // Appends `contents` (escapes still present) to `out` as UTF-8 and
        // returns false when an escape is malformed or a surrogate is unpaired.
        // Assumes validateEscapedString() accepted the same input.
        inline bool appendEscapedString(
            std::string& out,
            std::string_view contents)
        {
            std::size_t i = 0;
            while (i < contents.size())
            {
                const char current = contents[i];
                if (current != '\\')
                {
                    out.push_back(current);
                    ++i;
                    continue;
                }

                const char escape = contents[i + 1];
                switch (escape)
                {
                case '"': out.push_back('"'); i += 2; break;
                case '\\': out.push_back('\\'); i += 2; break;
                case '/': out.push_back('/'); i += 2; break;
                case 'b': out.push_back('\b'); i += 2; break;
                case 'f': out.push_back('\f'); i += 2; break;
                case 'n': out.push_back('\n'); i += 2; break;
                case 'r': out.push_back('\r'); i += 2; break;
                case 't': out.push_back('\t'); i += 2; break;
                case 'u':
                {
                    std::uint32_t codePoint = 0;
                    for (std::size_t k = 0; k < 4; ++k)
                    {
                        codePoint = (codePoint << 4) |
                            hexValue(contents[i + 2 + k]);
                    }
                    i += 6;
                    if (codePoint >= 0xD800u && codePoint <= 0xDBFFu)
                    {
                        std::uint32_t low = 0;
                        for (std::size_t k = 0; k < 4; ++k)
                        {
                            low = (low << 4) | hexValue(contents[i + 2 + k]);
                        }
                        i += 6;
                        codePoint = 0x10000u +
                            ((codePoint - 0xD800u) << 10) +
                            (low - 0xDC00u);
                    }
                    char encoded[4]{};
                    const std::size_t length =
                        encodedUtf8(codePoint, encoded);
                    out.append(encoded, length);
                    break;
                }
                default:
                    return false;
                }
            }
            return true;
        }
    } // namespace detail

    // -------------------------------------------------------------------------
    // Raw reader: full streaming validation, values as verbatim slices.
    // -------------------------------------------------------------------------
    class Reader
    {
    public:
        explicit Reader(Limits limits = {}) noexcept
            : limits_(limits)
        {
        }

        // Parses exactly one JSON value that must span the whole text.
        // Returns false and fills `error()` on the first violation.
        //
        // `sink` is taken by reference to its concrete type rather than as an
        // EventSink&, and every callback below is a direct call on that type.
        // EventSink exists to document the hook set and to supply no-op
        // defaults; dispatch stays static, so the hot path carries no virtual
        // call and an unused hook costs nothing.
        template <typename Sink>
        bool parse(std::string_view text, Sink& sink)
        {
            text_ = text;
            index_ = 0;
            depth_ = 0;
            keyStack_.clear();
            clearError();

            sink.beginDocument();
            skipWhitespace();
            if (text_.empty())
            {
                return fail("document is empty");
            }
            if (!parseValue(sink))
            {
                return false;
            }
            skipWhitespace();
            if (index_ != text_.size())
            {
                return fail("unexpected trailing content after the JSON value");
            }
            sink.endDocument();
            return true;
        }

        [[nodiscard]] const Error& error() const noexcept
        {
            return error_;
        }

        // Number of containers currently open. 0 means the sink is at the
        // document root; 1 inside the root object; and so on. Only meaningful
        // from inside an event callback.
        [[nodiscard]] std::size_t depth() const noexcept
        {
            return keyStack_.size();
        }

        // Object key that selected the container at `index`. Empty for keys
        // coming from an array element (arrays have no keys) and for indexes at
        // or beyond the current depth.
        [[nodiscard]] std::string_view pathKey(std::size_t index) const noexcept
        {
            return index < keyStack_.size() ? keyStack_[index]
                                            : std::string_view{};
        }

        // "client.dll/classes/C_BaseEntity/fields" style breadcrumb, handy for
        // diagnostics. Allocates, so it is not for the hot path.
        [[nodiscard]] std::string context() const
        {
            std::string out;
            for (std::size_t i = 0; i < keyStack_.size(); ++i)
            {
                if (i != 0)
                {
                    out.push_back('/');
                }
                out.append(keyStack_[i]);
            }
            return out;
        }

    private:
        [[nodiscard]] bool atEnd() const noexcept
        {
            return index_ >= text_.size();
        }

        [[nodiscard]] char peek() const noexcept
        {
            return text_[index_];
        }

        void skipWhitespace() noexcept
        {
            while (!atEnd())
            {
                const char current = peek();
                if (current != ' ' && current != '\t' &&
                    current != '\n' && current != '\r')
                {
                    break;
                }
                ++index_;
            }
        }

        void clearError() noexcept
        {
            error_ = Error{};
        }

        bool fail(const char* message) noexcept
        {
            if (error_)
            {
                return false;
            }
            std::size_t line = 1;
            std::size_t column = 1;
            const std::size_t stop =
                index_ < text_.size() ? index_ : text_.size();
            for (std::size_t i = 0; i < stop; ++i)
            {
                if (text_[i] == '\n')
                {
                    ++line;
                    column = 1;
                }
                else
                {
                    ++column;
                }
            }
            error_.offset = stop;
            error_.line = line;
            error_.column = column;
            error_.message = message;
            return false;
        }

        bool consumeLiteral(std::string_view literal)
        {
            if (text_.compare(index_, literal.size(), literal) != 0)
            {
                return fail("invalid literal");
            }
            index_ += literal.size();
            return true;
        }

        // Called with index_ on the opening quote. On success index_ sits just
        // past the closing quote and *outContents excludes both quotes; the
        // return value is false for an unterminated string.
        bool scanStringToken(std::string_view& outContents)
        {
            const std::size_t start = index_ + 1;
            std::size_t cursor = start;
            while (cursor < text_.size())
            {
                const char current = text_[cursor];
                if (current == '"')
                {
                    outContents = text_.substr(start, cursor - start);
                    index_ = cursor + 1;
                    return true;
                }
                if (current == '\\')
                {
                    cursor += 2;
                    continue;
                }
                ++cursor;
            }
            outContents = std::string_view{};
            index_ = text_.size();
            return false;
        }

        template <typename Sink>
        bool parseString(Sink& sink, bool isKey, std::string_view& raw)
        {
            std::string_view contents{};
            if (!scanStringToken(contents))
            {
                return fail("unterminated string");
            }
            if (contents.size() > limits_.maxStringBytes)
            {
                return fail("string token exceeds the configured limit");
            }
            if (!detail::validateEscapedString(contents))
            {
                return fail(
                    "string contains an invalid escape, control character, "
                    "or malformed UTF-8 sequence");
            }
            if (isKey)
            {
                raw = contents;
                sink.key(contents);
            }
            else
            {
                sink.stringValue(contents);
            }
            return true;
        }

        template <typename Sink>
        bool parseNumber(Sink& sink)
        {
            const std::size_t start = index_;
            if (!atEnd() && peek() == '-')
            {
                ++index_;
            }
            if (atEnd() || !isDigit(peek()))
            {
                return fail("expected a digit in the number");
            }
            if (peek() == '0')
            {
                ++index_;
            }
            else
            {
                while (!atEnd() && isDigit(peek()))
                {
                    ++index_;
                }
            }
            if (!atEnd() && peek() == '.')
            {
                ++index_;
                if (atEnd() || !isDigit(peek()))
                {
                    return fail("expected a digit after the decimal point");
                }
                while (!atEnd() && isDigit(peek()))
                {
                    ++index_;
                }
            }
            if (!atEnd() && (peek() == 'e' || peek() == 'E'))
            {
                ++index_;
                if (!atEnd() && (peek() == '+' || peek() == '-'))
                {
                    ++index_;
                }
                if (atEnd() || !isDigit(peek()))
                {
                    return fail("expected a digit in the exponent");
                }
                while (!atEnd() && isDigit(peek()))
                {
                    ++index_;
                }
            }
            sink.numberValue(text_.substr(start, index_ - start));
            return true;
        }

        template <typename Sink>
        bool parseObject(Sink& sink)
        {
            sink.beginObject();
            ++index_; // consume '{'
            skipWhitespace();
            if (atEnd())
            {
                return fail("unterminated object");
            }
            if (peek() == '}')
            {
                ++index_;
                sink.endObject();
                return true;
            }
            for (;;)
            {
                if (peek() != '"')
                {
                    return fail("expected a quoted object key");
                }
                std::string_view key{};
                if (!parseString(sink, true, key))
                {
                    return false;
                }
                skipWhitespace();
                if (atEnd() || peek() != ':')
                {
                    return fail("expected ':' after the object key");
                }
                ++index_;
                skipWhitespace();
                keyStack_.push_back(key);
                const bool ok = parseValue(sink);
                keyStack_.pop_back();
                if (!ok)
                {
                    return false;
                }
                skipWhitespace();
                if (atEnd())
                {
                    return fail("unterminated object");
                }
                if (peek() == ',')
                {
                    ++index_;
                    skipWhitespace();
                    if (atEnd())
                    {
                        return fail("unterminated object");
                    }
                    continue;
                }
                if (peek() == '}')
                {
                    ++index_;
                    sink.endObject();
                    return true;
                }
                return fail("expected ',' or '}' in the object");
            }
        }

        template <typename Sink>
        bool parseArray(Sink& sink)
        {
            sink.beginArray();
            ++index_; // consume '['
            skipWhitespace();
            if (atEnd())
            {
                return fail("unterminated array");
            }
            if (peek() == ']')
            {
                ++index_;
                sink.endArray();
                return true;
            }
            for (;;)
            {
                // Array elements have no key; an empty frame keeps pathKey()
                // aligned with the container depth.
                keyStack_.emplace_back();
                const bool ok = parseValue(sink);
                keyStack_.pop_back();
                if (!ok)
                {
                    return false;
                }
                skipWhitespace();
                if (atEnd())
                {
                    return fail("unterminated array");
                }
                if (peek() == ',')
                {
                    ++index_;
                    skipWhitespace();
                    if (atEnd())
                    {
                        return fail("unterminated array");
                    }
                    continue;
                }
                if (peek() == ']')
                {
                    ++index_;
                    sink.endArray();
                    return true;
                }
                return fail("expected ',' or ']' in the array");
            }
        }

        template <typename Sink>
        bool parseValue(Sink& sink)
        {
            if (depth_ >= limits_.maxDepth)
            {
                return fail("document exceeds the configured nesting depth");
            }
            if (atEnd())
            {
                return fail("unexpected end of input where a value was expected");
            }

            switch (peek())
            {
            case '{':
                ++depth_;
                {
                    const bool ok = parseObject(sink);
                    --depth_;
                    return ok;
                }
            case '[':
                ++depth_;
                {
                    const bool ok = parseArray(sink);
                    --depth_;
                    return ok;
                }
            case '"':
            {
                std::string_view ignored{};
                return parseString(sink, false, ignored);
            }
            case 't':
                if (!consumeLiteral("true"))
                {
                    return false;
                }
                sink.boolValue(true);
                return true;
            case 'f':
                if (!consumeLiteral("false"))
                {
                    return false;
                }
                sink.boolValue(false);
                return true;
            case 'n':
                if (!consumeLiteral("null"))
                {
                    return false;
                }
                sink.nullValue();
                return true;
            default:
                if (peek() == '-' || isDigit(peek()))
                {
                    return parseNumber(sink);
                }
                return fail("unexpected character where a value was expected");
            }
        }

        std::string_view text_{};
        Limits limits_{};
        Error error_{};
        std::size_t index_{ 0 };
        std::size_t depth_{ 0 };
        std::vector<std::string_view> keyStack_{};
    };

    // -------------------------------------------------------------------------
    // Unescaping helper for sinks that kept a raw string slice.
    // -------------------------------------------------------------------------
    [[nodiscard]] inline std::string unescape(std::string_view contents)
    {
        std::string out;
        out.reserve(contents.size());
        if (!detail::appendEscapedString(out, contents))
        {
            return {};
        }
        return out;
    }

    // Runs `sink` over `text`. Convenience wrapper for tests and small payloads.
    template <typename Sink>
    [[nodiscard]] inline bool parse(
        std::string_view text,
        Sink& sink,
        Error& error,
        Limits limits = {})
    {
        Reader reader(limits);
        const bool ok = reader.parse(text, sink);
        error = reader.error();
        return ok;
    }

    inline std::string Error::describe() const
    {
        std::string out = "line ";
        out += std::to_string(line);
        out += ", column ";
        out += std::to_string(column);
        out += " (byte ";
        out += std::to_string(offset);
        out += "): ";
        out += message;
        return out;
    }
} // namespace cs2_dumper::json
