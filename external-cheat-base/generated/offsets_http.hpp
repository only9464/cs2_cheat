#pragma once

// Minimal HTTPS GET built on WinHTTP, used to fetch the cs2-dumper payloads.
//
// The request shape is deliberately narrow because this code runs during game
// startup and only ever talks to one host:
//
//   * the host must appear in FetchPolicy::allowedHosts, so a tampered
//     configuration or a redirected GET cannot make the process download from
//     an arbitrary server;
//   * the scheme must be https, which means the OS verifies the certificate
//     chain (TLS 1.2+ is requested explicitly);
//   * WinHTTP rejects redirects automatically, so a redirect response is an
//     error rather than a silent hop to another origin;
//   * the body is capped, so a wrong or hostile response cannot exhaust memory.
//
// On non-Windows toolchains every call reports "not supported" instead of
// failing to compile, which keeps the unit tests and the JSON tooling portable.

#include <cstddef>
#include <string>
#include <string_view>
#include <vector>

#if defined(_WIN32)
#  ifndef WIN32_LEAN_AND_MEAN
#    define WIN32_LEAN_AND_MEAN
#  endif
#  ifndef NOMINMAX
#    define NOMINMAX
#  endif
#  include <windows.h>
#  include <winhttp.h>
#endif

namespace cs2_dumper::http
{
    struct Error
    {
        // Win32 error code, HTTP status, or 0 when the failure is not from
        // either source (for example "response too large").
        unsigned long code{ 0 };
        std::string message{};

        [[nodiscard]] explicit operator bool() const noexcept
        {
            return !message.empty();
        }
    };

    struct FetchPolicy
    {
        std::vector<std::string> allowedHosts{ "raw.githubusercontent.com" };
        unsigned long timeoutMs{ 8000 };
        // Total attempts, including the first. Transient failures (timeouts,
        // connection resets, 5xx) are retried; 4xx is not.
        int attempts{ 3 };
        // Delay before the second attempt; doubled for each further attempt.
        unsigned long retryBackoffMs{ 300 };
        std::size_t maxResponseBytes{ 16u * 1024u * 1024u };
        std::string userAgent{ "cs2-cheat-external/1.0 (+offsets-updater)" };
        bool acceptOnlyHttps{ true };
    };

    // Returns true when `host` is an allow-listed name. Matching is
    // case-insensitive, ignores a leading "www.", and accepts a subdomain of an
    // allow-listed host ("gist.githubusercontent.com" for
    // "raw.githubusercontent.com") but never a look-alike such as
    // "raw.githubusercontent.com.evil.test".
    [[nodiscard]] inline bool hostAllowed(
        std::string_view host,
        const FetchPolicy& policy)
    {
        auto normalise = [](std::string_view text)
        {
            if (text.size() > 4 &&
                (text[0] == 'w' || text[0] == 'W') &&
                (text[1] == 'w' || text[1] == 'W') &&
                (text[2] == 'w' || text[2] == 'W') &&
                text[3] == '.')
            {
                text.remove_prefix(4);
            }
            std::string lowered(text);
            for (char& character : lowered)
            {
                if (character >= 'A' && character <= 'Z')
                {
                    character = static_cast<char>(character - 'A' + 'a');
                }
            }
            return lowered;
        };

        const std::string candidate = normalise(host);
        for (const std::string& allowed : policy.allowedHosts)
        {
            const std::string base = normalise(allowed);
            if (base.empty())
            {
                continue;
            }
            if (candidate == base)
            {
                return true;
            }
            // Subdomain: the candidate must end with ".<base>".
            if (candidate.size() > base.size() + 1 &&
                candidate.compare(
                    candidate.size() - base.size(),
                    base.size(),
                    base) == 0 &&
                candidate[candidate.size() - base.size() - 1] == '.')
            {
                return true;
            }
        }
        return false;
    }

    namespace detail
    {
        struct Url
        {
            std::string scheme{};
            std::string host{};
            std::string target{ "/" };
            unsigned short port{ 0 };
        };

        [[nodiscard]] inline bool equalsIgnoreCase(
            std::string_view left,
            std::string_view right) noexcept
        {
            if (left.size() != right.size())
            {
                return false;
            }
            for (std::size_t i = 0; i < left.size(); ++i)
            {
                char a = left[i];
                char b = right[i];
                if (a >= 'A' && a <= 'Z')
                {
                    a = static_cast<char>(a - 'A' + 'a');
                }
                if (b >= 'A' && b <= 'Z')
                {
                    b = static_cast<char>(b - 'A' + 'a');
                }
                if (a != b)
                {
                    return false;
                }
            }
            return true;
        }

        [[nodiscard]] inline bool parseUrl(
            std::string_view url,
            Url& out,
            Error& error)
        {
            const std::size_t schemeEnd = url.find("://");
            if (schemeEnd == std::string_view::npos)
            {
                error.message = "URL has no scheme: ";
                error.message.append(url);
                return false;
            }
            out.scheme = std::string(url.substr(0, schemeEnd));

            std::string_view rest = url.substr(schemeEnd + 3);
            const std::size_t pathStart = rest.find('/');
            std::string_view authority = pathStart == std::string_view::npos
                ? rest
                : rest.substr(0, pathStart);
            if (pathStart != std::string_view::npos)
            {
                out.target = std::string(rest.substr(pathStart));
            }

            if (authority.empty())
            {
                error.message = "URL has no host: ";
                error.message.append(url);
                return false;
            }

            const std::size_t colon = authority.rfind(':');
            if (colon != std::string_view::npos)
            {
                out.host = std::string(authority.substr(0, colon));
                const std::string_view portText = authority.substr(colon + 1);
                unsigned port = 0;
                for (const char character : portText)
                {
                    if (character < '0' || character > '9')
                    {
                        error.message = "URL has a non numeric port: ";
                        error.message.append(url);
                        return false;
                    }
                    port = port * 10u + static_cast<unsigned>(character - '0');
                    if (port > 65535u)
                    {
                        error.message = "URL port is out of range: ";
                        error.message.append(url);
                        return false;
                    }
                }
                out.port = static_cast<unsigned short>(port);
            }
            else
            {
                out.host = std::string(authority);
                out.port = equalsIgnoreCase(out.scheme, "http") ? 80 : 443;
            }

            if (out.host.empty())
            {
                error.message = "URL has no host: ";
                error.message.append(url);
                return false;
            }
            return true;
        }

        // Percent-encodes everything outside the unreserved set plus '/' so that
        // a repository path can be spliced into the URL safely.
        [[nodiscard]] inline std::string encodePath(std::string_view path)
        {
            static constexpr char hex[] = "0123456789ABCDEF";
            std::string out;
            out.reserve(path.size());
            for (const char character : path)
            {
                const unsigned char byte = static_cast<unsigned char>(character);
                const bool unreserved =
                    (byte >= 'a' && byte <= 'z') ||
                    (byte >= 'A' && byte <= 'Z') ||
                    (byte >= '0' && byte <= '9') ||
                    byte == '-' || byte == '_' || byte == '.' || byte == '~' ||
                    byte == '/';
                if (unreserved)
                {
                    out.push_back(character);
                    continue;
                }
                out.push_back('%');
                out.push_back(hex[(byte >> 4) & 0x0Fu]);
                out.push_back(hex[byte & 0x0Fu]);
            }
            return out;
        }
    } // namespace detail

#if defined(_WIN32)
    namespace detail
    {
        // UTF-8 to UTF-16 for the WinHTTP wide-string API.
        [[nodiscard]] inline std::wstring toWide(std::string_view text)
        {
            if (text.empty())
            {
                return std::wstring{};
            }
            const int needed = MultiByteToWideChar(
                CP_UTF8,
                0,
                text.data(),
                static_cast<int>(text.size()),
                nullptr,
                0);
            if (needed <= 0)
            {
                // The URLs this project builds are pure ASCII; the byte-wise
                // fallback keeps a malformed input from aborting the request.
                return std::wstring(text.begin(), text.end());
            }
            std::wstring out(static_cast<std::size_t>(needed), L'\0');
            (void)MultiByteToWideChar(
                CP_UTF8,
                0,
                text.data(),
                static_cast<int>(text.size()),
                out.data(),
                needed);
            return out;
        }

        [[nodiscard]] inline std::string describeWin32(unsigned long code)
        {
            // The numeric code is kept verbatim so it stays greppable.
            std::string out = "WinHTTP error ";
            out += std::to_string(code);
            return out;
        }

        [[nodiscard]] inline bool readAll(
            HINTERNET request,
            std::size_t maxBytes,
            std::string& out,
            Error& error)
        {
            out.clear();
            std::string chunk(16u * 1024u, '\0');
            for (;;)
            {
                DWORD available = 0;
                if (!WinHttpQueryDataAvailable(request, &available))
                {
                    error.code = GetLastError();
                    error.message = describeWin32(error.code);
                    return false;
                }
                if (available == 0)
                {
                    return true;
                }
                DWORD wanted = static_cast<DWORD>(available);
                if (wanted > chunk.size())
                {
                    wanted = static_cast<DWORD>(chunk.size());
                }
                DWORD read = 0;
                if (!WinHttpReadData(request, chunk.data(), wanted, &read))
                {
                    error.code = GetLastError();
                    error.message = describeWin32(error.code);
                    return false;
                }
                if (read == 0)
                {
                    return true;
                }
                if (out.size() + read > maxBytes)
                {
                    error.code = 0;
                    error.message = "response exceeds the configured size limit of ";
                    error.message += std::to_string(maxBytes);
                    error.message += " bytes";
                    return false;
                }
                out.append(chunk.data(), read);
            }
        }

        // One attempt. `retryable` reports whether the caller should try again.
        [[nodiscard]] inline bool attempt(
            const Url& url,
            const FetchPolicy& policy,
            std::string& body,
            Error& error,
            bool& retryable)
        {
            retryable = false;
            body.clear();

            const std::wstring host = toWide(url.host);
            const std::wstring target = toWide(url.target);
            const std::wstring agent = toWide(policy.userAgent);

            HINTERNET session = WinHttpOpen(
                agent.c_str(),
                WINHTTP_ACCESS_TYPE_AUTOMATIC_PROXY,
                WINHTTP_NO_PROXY_NAME,
                WINHTTP_NO_PROXY_BYPASS,
                0);
            if (session == nullptr)
            {
                error.code = GetLastError();
                error.message = describeWin32(error.code);
                retryable = true;
                return false;
            }

            // Request TLS 1.2 as a floor; newer versions stay enabled.
            DWORD protocols = WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_2;
            (void)WinHttpSetOption(
                session,
                WINHTTP_OPTION_SECURE_PROTOCOLS,
                &protocols,
                sizeof(protocols));

            const int timeout = static_cast<int>(policy.timeoutMs);
            (void)WinHttpSetTimeouts(session, timeout, timeout, timeout, timeout);

            const bool secure = equalsIgnoreCase(url.scheme, "https");
            HINTERNET connection = WinHttpConnect(
                session,
                host.c_str(),
                url.port,
                0);
            if (connection == nullptr)
            {
                error.code = GetLastError();
                error.message = describeWin32(error.code);
                WinHttpCloseHandle(session);
                retryable = true;
                return false;
            }

            HINTERNET request = WinHttpOpenRequest(
                connection,
                L"GET",
                target.c_str(),
                nullptr,
                WINHTTP_NO_REFERER,
                WINHTTP_DEFAULT_ACCEPT_TYPES,
                secure ? WINHTTP_FLAG_SECURE : 0);
            if (request == nullptr)
            {
                error.code = GetLastError();
                error.message = describeWin32(error.code);
                WinHttpCloseHandle(connection);
                WinHttpCloseHandle(session);
                retryable = true;
                return false;
            }

            DWORD decompression =
                WINHTTP_DECOMPRESSION_FLAG_GZIP | WINHTTP_DECOMPRESSION_FLAG_DEFLATE;
            (void)WinHttpSetOption(
                request,
                WINHTTP_OPTION_DECOMPRESSION,
                &decompression,
                sizeof(decompression));

            // Redirects are treated as failures: the only expected response is a
            // 200 straight from the allow-listed host.
            DWORD redirectPolicy = WINHTTP_OPTION_REDIRECT_POLICY_NEVER;
            (void)WinHttpSetOption(
                request,
                WINHTTP_OPTION_REDIRECT_POLICY,
                &redirectPolicy,
                sizeof(redirectPolicy));

            const wchar_t* headers = L"Accept: application/json\r\n";
            const BOOL sent = WinHttpSendRequest(
                request,
                headers,
                static_cast<DWORD>(-1),
                WINHTTP_NO_REQUEST_DATA,
                0,
                0,
                0);
            if (!sent)
            {
                error.code = GetLastError();
                error.message = describeWin32(error.code);
                WinHttpCloseHandle(request);
                WinHttpCloseHandle(connection);
                WinHttpCloseHandle(session);
                retryable = true;
                return false;
            }

            if (!WinHttpReceiveResponse(request, nullptr))
            {
                error.code = GetLastError();
                error.message = describeWin32(error.code);
                WinHttpCloseHandle(request);
                WinHttpCloseHandle(connection);
                WinHttpCloseHandle(session);
                retryable = true;
                return false;
            }

            DWORD status = 0;
            DWORD statusSize = sizeof(status);
            if (!WinHttpQueryHeaders(
                    request,
                    WINHTTP_QUERY_STATUS_CODE | WINHTTP_QUERY_FLAG_NUMBER,
                    WINHTTP_HEADER_NAME_BY_INDEX,
                    &status,
                    &statusSize,
                    WINHTTP_NO_HEADER_INDEX))
            {
                error.code = GetLastError();
                error.message = describeWin32(error.code);
                WinHttpCloseHandle(request);
                WinHttpCloseHandle(connection);
                WinHttpCloseHandle(session);
                retryable = true;
                return false;
            }

            if (status != 200)
            {
                error.code = status;
                error.message = "HTTP status ";
                error.message += std::to_string(status);
                if (status == 301 || status == 302 || status == 303 ||
                    status == 307 || status == 308)
                {
                    error.message +=
                        " (redirect refused; the payload must be served "
                        "directly from the configured host)";
                }
                else if (status >= 500)
                {
                    error.message += " (server error)";
                    retryable = true;
                }
                else if (status == 429)
                {
                    error.message += " (rate limited)";
                    retryable = true;
                }
                WinHttpCloseHandle(request);
                WinHttpCloseHandle(connection);
                WinHttpCloseHandle(session);
                return false;
            }

            const bool ok = readAll(request, policy.maxResponseBytes, body, error);
            if (!ok && error.code != 0)
            {
                retryable = true;
            }

            WinHttpCloseHandle(request);
            WinHttpCloseHandle(connection);
            WinHttpCloseHandle(session);
            return ok;
        }
    } // namespace detail
#endif

    // Downloads `url` into `body`. Returns false and fills `error` on failure.
    [[nodiscard]] inline bool get(
        std::string_view url,
        const FetchPolicy& policy,
        std::string& body,
        Error& error)
    {
        error = Error{};

        detail::Url parsed;
        if (!detail::parseUrl(url, parsed, error))
        {
            return false;
        }
        if (policy.acceptOnlyHttps && !detail::equalsIgnoreCase(parsed.scheme, "https"))
        {
            error.message = "refusing a non-HTTPS URL: ";
            error.message.append(url);
            return false;
        }
        if (!hostAllowed(parsed.host, policy))
        {
            error.message = "host '";
            error.message += parsed.host;
            error.message += "' is not in the allow list for offset downloads";
            return false;
        }

#if defined(_WIN32)
        const int attempts = policy.attempts < 1 ? 1 : policy.attempts;
        unsigned long backoff = policy.retryBackoffMs;
        for (int attemptIndex = 0; attemptIndex < attempts; ++attemptIndex)
        {
            bool retryable = false;
            if (detail::attempt(parsed, policy, body, error, retryable))
            {
                return true;
            }
            if (!retryable || attemptIndex + 1 >= attempts)
            {
                return false;
            }
            Sleep(backoff);
            backoff *= 2;
        }
        return false;
#else
        (void)policy;
        (void)body;
        error.message =
            "HTTPS downloads are only implemented for Windows builds; "
            "provide the payload from a local file instead";
        return false;
#endif
    }
} // namespace cs2_dumper::http
