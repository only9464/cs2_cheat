#pragma once

#include "imgui.h"
#include "core/renderer/sdl_renderer.h"
#include "core/memory/memory.hpp"
#include "core/diagnostics.hpp"
#include "core/performance_metrics.hpp"
#include "features/web_radar/public_relay_config.hpp"
#include "features/web_radar/snapshot_recorder.hpp"
#include <Windows.h>
#include <shellapi.h>
#include <algorithm>
#include <array>
#include <cmath>
#include <cwchar>
#include <cstdint>
#include <filesystem>
#include <memory>
#include <mutex>
#include <string>
#include <string_view>
#include <utility>

namespace menu
{
    // RuntimeConfig is copied by the 240 Hz sampling loop. Keep the complete
    // connection configuration in one immutable allocation instead of
    // repeatedly allocating URL/room/token strings, and wipe the token before
    // that allocation is released.
    class PublicRelayConnectionSettings final
    {
    public:
        PublicRelayConnectionSettings(
            const std::string_view endpointUrl,
            const std::string_view room,
            const std::string_view token)
            : endpointUrl_(endpointUrl),
              room_(room),
              token_(token)
        {
        }

        ~PublicRelayConnectionSettings()
        {
            if (!token_.empty()) {
                SecureZeroMemory(token_.data(), token_.size());
            }
        }

        PublicRelayConnectionSettings(
            const PublicRelayConnectionSettings&) = delete;
        PublicRelayConnectionSettings& operator=(
            const PublicRelayConnectionSettings&) = delete;
        PublicRelayConnectionSettings(
            PublicRelayConnectionSettings&&) = delete;
        PublicRelayConnectionSettings& operator=(
            PublicRelayConnectionSettings&&) = delete;

        [[nodiscard]] std::string_view endpointUrl() const noexcept
        {
            return endpointUrl_;
        }

        [[nodiscard]] std::string_view room() const noexcept
        {
            return room_;
        }

        [[nodiscard]] std::string_view token() const noexcept
        {
            return token_;
        }

    private:
        std::string endpointUrl_;
        std::string room_;
        std::string token_;
    };

    // ImGui edits these values on the render thread. The worker copies one
    // coherent snapshot under this mutex at the start of each update pass.
    inline std::mutex configMutex;
    inline diagnostics::StartupReport startupReport;

    inline void setStartupReport(diagnostics::StartupReport report)
    {
        startupReport = std::move(report);
    }

    struct RuntimeConfig
    {
        bool espEnabled = true;
        bool espWeapon = true;
        bool espFlashIndicator = false;
        bool antiFlash = false;
        bool espViewAngle = true;
        bool localRadarEnabled = false;
        bool localRadarShowNames = true;
        float localRadarAnchorX = 0.02f;
        float localRadarAnchorY = 0.08f;
        float localRadarSize = 0.32f;
        float localRadarMarkerSize = 12.0f;
        bool webRadarEnabled = false;
        bool webRadarLanAccess = false;
        bool webRadarPauseWhenUnfocused = true;
        bool webRadarIncludePlayerNames = true;
        bool webRadarIncludeSteamIds = false;
        int webRadarTeamViewPolicy = 0;
        uint16_t webRadarPort = 22006;
        bool radarRecordingEnabled = false;
        int radarRefreshRateHz = 20;
        bool publicRelayEnabled = false;
        bool publicRelayIncludePlayerNames = true;
        bool publicRelayIncludeSteamIds = false;
        int publicRelayTeamViewPolicy = 0;
        std::shared_ptr<const PublicRelayConnectionSettings>
            publicRelayConnection;
        bool espWallCheck = true;
        bool espSkeleton = true;
        bool grenadeESP = false;
        bool droppedWeaponESP = false;
        bool bombTimer = true;

        bool headOffsetEnabled = true;
        float headOffsetAmount = 5.0f;
        float headOffsetAngleMin = 45.0f;
        float headOffsetAngleMax = 135.0f;
        bool aimbotEnabled = false;
        float aimbotFOV = 10.0f;
        float aimbotSmoothing = 5.0f;
        int aimbotBone = 0;
        bool aimbotVisibleOnly = true;
        int aimbotKey = VK_SHIFT;
        bool smartAimEnabled = false;
        int smartAimPriority = 0;
        float mouseSensitivity = 1.0f;

        bool triggerbotEnabled = false;
        int triggerbotDelay = 50;
        int triggerbotKey = 0x46;
        bool inputSuppressed = false;

        [[nodiscard]] bool radarSnapshotEnabled() const noexcept
        {
            return localRadarEnabled || webRadarEnabled ||
                publicRelayEnabled || radarRecordingEnabled;
        }
    };

    // Current tab index
    inline int currentTab = 0;

    // ESP Settings
    inline bool espEnabled = true;
    inline bool espBox = true;
    inline bool espHealth = true;
    inline bool espDistance = true;  // Default ON
    inline bool espWeapon = true;    // Weapon display - Default ON
    inline bool espViewAngle = true; // View angle indicator - Default ON
    inline bool espViewAngleText = false; // Show angle degree text
    inline bool espFlashIndicator = false; // Flashbang eye indicator - Default OFF
    inline bool espWallCheck = true; // CS2 spotted-state indicator
    inline bool espSnaplines = false;

    // Skeleton ESP
    inline bool espSkeleton = true;
    inline float espSkeletonColor[4] = { 1.0f, 1.0f, 1.0f, 1.0f };  // White

    // Colors
    inline float espBoxColor[4] = { 1.0f, 0.0f, 0.0f, 1.0f };          // Red - spotted state
    inline float espWallColor[4] = { 0.0f, 1.0f, 0.0f, 1.0f };         // Green - not spotted or unknown
    inline float espDistanceColor[4] = { 1.0f, 1.0f, 1.0f, 1.0f };
    inline float espWeaponColor[4] = { 0.0f, 1.0f, 1.0f, 1.0f };       // Cyan color for weapon
    inline float espFlashNormalColor[4] = { 1.0f, 0.0f, 0.0f, 1.0f };  // Red - normal eye state
    inline float espFlashColor[4] = { 1.0f, 1.0f, 0.0f, 1.0f };        // Yellow - flashed eye state
    inline float espSnaplinesColor[4] = { 1.0f, 1.0f, 0.0f, 1.0f };

    // Visual Settings
    inline int snaplinesOrigin = 0; // 0=Bottom, 1=Center, 2=Top

    // Aimbot Settings
    inline bool aimbotEnabled = false;     // Aimbot enabled
    inline float aimbotFOV = 10.0f;        // Field of view for aimbot (degrees)
    inline float aimbotSmoothing = 5.0f;   // Smoothing factor (1.0 = instant, higher = smoother)
    inline int aimbotBone = 0;             // 0=Head, 1=Neck, 2=Chest
    inline bool aimbotVisibleOnly = true;  // Only aim at enemies flagged as spotted
    inline int aimbotKey = VK_SHIFT;       // Aimbot activation key (default: Shift key)
    inline bool aimbotShowFOV = true;      // Show FOV circle on screen
    inline float aimbotFOVColor[4] = { 1.0f, 1.0f, 0.0f, 1.0f };  // Color-key overlays use opaque primitives

    // Head Offset Settings (for side-facing enemies)
    inline bool headOffsetEnabled = true;      // Enable head offset compensation
    inline float headOffsetAmount = 5.0f;      // Offset amount in game units (0-15)
    inline float headOffsetAngleMin = 45.0f;   // Minimum angle for offset (degrees)
    inline float headOffsetAngleMax = 135.0f;  // Maximum angle for offset (degrees)

    // Smart Aim Settings (auto-lock spotted enemies by priority)
    inline bool smartAimEnabled = false;      // Smart aim mode (ignores FOV, auto-selects best target)
    inline int smartAimPriority = 0;          // 0=Distance first, 1=Health first

    // Triggerbot Settings
    inline bool triggerbotEnabled = false; // Triggerbot enabled
    inline int triggerbotDelay = 50;       // Delay before shooting (milliseconds)
    inline int triggerbotKey = 0x46;       // Triggerbot activation key (default: F key, 0x46 = 'F')

    // Input Settings
    inline float mouseSensitivity = 1.0f;  // In-game mouse sensitivity (for aim/trigger mouse conversion)

    // Viewport mapping: 0=auto black-bar detection, 1=full client,
    // 2=force 4:3 black bars, 3=force 16:10 black bars.
    inline int viewportMode = 0;

    // The local overlay and browser use the same fixed north-up map catalogue
    // and full GameSnapshot. Position values are normalized to the available
    // viewport so resolution and black-bar changes do not move the panel out
    // of bounds.
    inline bool localRadarEnabled = false;
    inline bool localRadarShowNames = true;
    inline float localRadarAnchorX = 0.02f;
    inline float localRadarAnchorY = 0.08f;
    inline float localRadarSize = 0.32f;
    inline float localRadarMarkerSize = 12.0f;

    // Fixed-map browser Radar settings. The HTTP service is local-only unless
    // the user explicitly enables LAN access; stream URLs always carry a token.
    inline bool webRadarEnabled = false;
    inline bool webRadarLanAccess = false;
    inline bool webRadarPauseWhenUnfocused = true;
    inline bool webRadarIncludePlayerNames = true;
    inline bool webRadarIncludeSteamIds = false;
    inline int webRadarTeamViewPolicy = 0;
    inline int webRadarPort = 22006;
    inline bool radarRecordingEnabled = false;

    // Public Relay credentials intentionally live only in process memory and
    // are never included in any settings persistence path. The producer token
    // is rendered with ImGui's password mode and is never copied to status.
    inline bool publicRelayEnabled = false;
    inline bool publicRelayIncludePlayerNames = true;
    inline bool publicRelayIncludeSteamIds = false;
    inline int publicRelayTeamViewPolicy = 0;
    inline std::array<char, 512> publicRelayUrl{};
    inline std::array<char, 65> publicRelayRoom{};
    inline std::array<char, 513> publicRelayToken{};
    inline std::shared_ptr<const PublicRelayConnectionSettings>
        publicRelayConnectionSnapshot;

    struct WebRadarUiStatus
    {
        bool running = false;
        size_t viewers = 0;
        std::uint64_t publishedFrames = 0;
        std::uint64_t sentFrames = 0;
        std::uint64_t replacedFrames = 0;
        std::uint64_t publishedBytes = 0;
        double maximumSendLatencyMilliseconds = 0.0;
        std::string viewerUrl;
        std::string bindAddress = "127.0.0.1";
        std::string error;
    };

    inline std::mutex webRadarStatusMutex;
    inline WebRadarUiStatus webRadarStatus;

    inline void setWebRadarStatus(WebRadarUiStatus status)
    {
        std::lock_guard<std::mutex> lock(webRadarStatusMutex);
        webRadarStatus = std::move(status);
    }

    inline WebRadarUiStatus getWebRadarStatus()
    {
        std::lock_guard<std::mutex> lock(webRadarStatusMutex);
        return webRadarStatus;
    }

    inline std::mutex recorderStatusMutex;
    inline web_radar::SnapshotRecorderStatus recorderStatus;

    inline void setRecorderStatus(
        web_radar::SnapshotRecorderStatus status)
    {
        std::lock_guard<std::mutex> lock(recorderStatusMutex);
        recorderStatus = std::move(status);
    }

    inline web_radar::SnapshotRecorderStatus getRecorderStatus()
    {
        std::lock_guard<std::mutex> lock(recorderStatusMutex);
        return recorderStatus;
    }

    struct PublicRelayUiStatus
    {
        web_radar::PublicRelayState state =
            web_radar::PublicRelayState::disabled;
        std::uint64_t framesSent = 0;
        std::uint64_t replacedFrames = 0;
        std::uint64_t droppedFrames = 0;
        std::uint64_t reconnects = 0;
        std::string error;
    };

    inline std::mutex publicRelayStatusMutex;
    inline PublicRelayUiStatus publicRelayStatus;

    inline void setPublicRelayStatus(PublicRelayUiStatus status)
    {
        std::lock_guard<std::mutex> lock(publicRelayStatusMutex);
        publicRelayStatus = std::move(status);
    }

    inline PublicRelayUiStatus getPublicRelayStatus()
    {
        std::lock_guard<std::mutex> lock(publicRelayStatusMutex);
        return publicRelayStatus;
    }

    // Misc Settings
    inline bool antiFlash = false;          // Memory writes are opt-in
    inline bool bombTimer = true;            // Show bomb timer on screen
    inline bool grenadeESP = false;          // Show grenade positions
    inline bool droppedWeaponESP = false;    // Show dropped weapon positions

    // Menu Toggle Key
    inline int menuToggleKey = VK_F4;        // Menu toggle key (default: F4)
    inline int exitKey = VK_F9;              // Exit key (default: F9)

    // Hotkey binding state
    inline bool isBindingKey = false;
    inline int* bindingKeyTarget = nullptr;
    inline const char* bindingKeyName = nullptr;
    inline bool bindingWaitingForRelease = false;
    inline std::string bindingError;
    inline bool suppressHotkeysUntilRelease = false;

    inline RuntimeConfig buildRuntimeConfig()
    {
        RuntimeConfig config{};
        config.espEnabled = espEnabled;
        config.espWeapon = espWeapon;
        config.espFlashIndicator = espFlashIndicator;
        config.antiFlash = antiFlash;
        config.espViewAngle = espViewAngle;
        config.localRadarEnabled = localRadarEnabled;
        config.localRadarShowNames = localRadarShowNames;
        config.localRadarAnchorX = std::clamp(
            localRadarAnchorX,
            0.0f,
            1.0f);
        config.localRadarAnchorY = std::clamp(
            localRadarAnchorY,
            0.0f,
            1.0f);
        config.localRadarSize = std::clamp(
            localRadarSize,
            0.18f,
            0.65f);
        config.localRadarMarkerSize = std::clamp(
            localRadarMarkerSize,
            6.0f,
            24.0f);
        config.webRadarEnabled = webRadarEnabled;
        config.webRadarLanAccess = webRadarLanAccess;
        config.webRadarPauseWhenUnfocused =
            webRadarPauseWhenUnfocused;
        config.webRadarIncludePlayerNames =
            webRadarIncludePlayerNames;
        config.webRadarIncludeSteamIds =
            webRadarIncludeSteamIds;
        config.webRadarTeamViewPolicy = std::clamp(
            webRadarTeamViewPolicy,
            0,
            2);
        config.webRadarPort = static_cast<uint16_t>(
            std::clamp(webRadarPort, 1024, 65535));
        config.radarRecordingEnabled = radarRecordingEnabled;
        config.publicRelayEnabled = publicRelayEnabled;
        config.publicRelayIncludePlayerNames =
            publicRelayIncludePlayerNames;
        config.publicRelayIncludeSteamIds =
            publicRelayIncludeSteamIds;
        config.publicRelayTeamViewPolicy = std::clamp(
            publicRelayTeamViewPolicy,
            0,
            2);
        config.publicRelayConnection = publicRelayConnectionSnapshot;
        config.espWallCheck = espWallCheck;
        config.espSkeleton = espSkeleton;
        config.grenadeESP = grenadeESP;
        config.droppedWeaponESP = droppedWeaponESP;
        config.bombTimer = bombTimer;

        config.headOffsetEnabled = headOffsetEnabled;
        config.headOffsetAmount = headOffsetAmount;
        config.headOffsetAngleMin = headOffsetAngleMin;
        config.headOffsetAngleMax = headOffsetAngleMax;
        config.aimbotEnabled = aimbotEnabled;
        config.aimbotFOV = aimbotFOV;
        config.aimbotSmoothing = aimbotSmoothing;
        config.aimbotBone = aimbotBone;
        config.aimbotVisibleOnly = aimbotVisibleOnly;
        config.aimbotKey = aimbotKey;
        config.smartAimEnabled = smartAimEnabled;
        config.smartAimPriority = smartAimPriority;
        config.mouseSensitivity = mouseSensitivity;

        config.triggerbotEnabled = triggerbotEnabled;
        config.triggerbotDelay = triggerbotDelay;
        config.triggerbotKey = triggerbotKey;
        config.inputSuppressed =
            isBindingKey || suppressHotkeysUntilRelease;
        return config;
    }

    inline RuntimeConfig runtimeConfigSnapshot = buildRuntimeConfig();

    inline RuntimeConfig getRuntimeConfig()
    {
        std::lock_guard<std::mutex> lock(configMutex);
        return runtimeConfigSnapshot;
    }

    inline void publishRuntimeConfig()
    {
        const std::string_view currentUrl(publicRelayUrl.data());
        const std::string_view currentRoom(publicRelayRoom.data());
        const std::string_view currentToken(publicRelayToken.data());
        if (currentUrl.empty() && currentRoom.empty() && currentToken.empty()) {
            publicRelayConnectionSnapshot.reset();
        } else if (!publicRelayConnectionSnapshot ||
                   publicRelayConnectionSnapshot->endpointUrl() != currentUrl ||
                   publicRelayConnectionSnapshot->room() != currentRoom ||
                   publicRelayConnectionSnapshot->token() != currentToken) {
            publicRelayConnectionSnapshot =
                std::make_shared<const PublicRelayConnectionSettings>(
                    currentUrl,
                    currentRoom,
                    currentToken);
        }
        const RuntimeConfig updated = buildRuntimeConfig();
        std::lock_guard<std::mutex> lock(configMutex);
        runtimeConfigSnapshot = updated;
    }

    inline std::filesystem::path persistentSettingsPath()
    {
        std::array<wchar_t, 32768> localAppData{};
        const DWORD length = GetEnvironmentVariableW(
            L"LOCALAPPDATA",
            localAppData.data(),
            static_cast<DWORD>(localAppData.size()));
        std::filesystem::path directory =
            length > 0 && length < localAppData.size()
                ? std::filesystem::path(
                    std::wstring_view(localAppData.data(), length)) /
                    L"AegisCS2"
                : std::filesystem::temp_directory_path() / L"AegisCS2";
        std::error_code error;
        std::filesystem::create_directories(directory, error);
        return directory / L"settings-v1.ini";
    }

    inline int readPersistentInt(
        const wchar_t* key,
        const int fallback,
        const std::filesystem::path& path)
    {
        return static_cast<int>(GetPrivateProfileIntW(
            L"settings",
            key,
            fallback,
            path.c_str()));
    }

    inline float readPersistentFloat(
        const wchar_t* key,
        const float fallback,
        const std::filesystem::path& path)
    {
        std::array<wchar_t, 64> fallbackText{};
        std::array<wchar_t, 64> value{};
        swprintf_s(fallbackText.data(), fallbackText.size(), L"%.6f", fallback);
        GetPrivateProfileStringW(
            L"settings",
            key,
            fallbackText.data(),
            value.data(),
            static_cast<DWORD>(value.size()),
            path.c_str());
        wchar_t* end = nullptr;
        const float parsed = std::wcstof(value.data(), &end);
        return end != value.data() && std::isfinite(parsed)
            ? parsed
            : fallback;
    }

    inline void loadPersistentSettings()
    {
        const std::filesystem::path path = persistentSettingsPath();
        if (readPersistentInt(L"schema", 0, path) != 1) {
            publishRuntimeConfig();
            return;
        }

        viewportMode = std::clamp(
            readPersistentInt(L"viewport_mode", viewportMode, path),
            0,
            3);
        localRadarShowNames = readPersistentInt(
            L"local_radar_names",
            localRadarShowNames ? 1 : 0,
            path) != 0;
        localRadarAnchorX = std::clamp(
            readPersistentFloat(
                L"local_radar_anchor_x",
                localRadarAnchorX,
                path),
            0.0f,
            1.0f);
        localRadarAnchorY = std::clamp(
            readPersistentFloat(
                L"local_radar_anchor_y",
                localRadarAnchorY,
                path),
            0.0f,
            1.0f);
        localRadarSize = std::clamp(
            readPersistentFloat(
                L"local_radar_size",
                localRadarSize,
                path),
            0.18f,
            0.65f);
        localRadarMarkerSize = std::clamp(
            readPersistentFloat(
                L"local_radar_marker_size",
                localRadarMarkerSize,
                path),
            6.0f,
            24.0f);
        webRadarPort = std::clamp(
            readPersistentInt(L"web_radar_port", webRadarPort, path),
            1024,
            65535);
        webRadarPauseWhenUnfocused = readPersistentInt(
            L"pause_shared_radar_unfocused",
            webRadarPauseWhenUnfocused ? 1 : 0,
            path) != 0;
        webRadarIncludePlayerNames = readPersistentInt(
            L"web_radar_player_names",
            webRadarIncludePlayerNames ? 1 : 0,
            path) != 0;
        webRadarTeamViewPolicy = std::clamp(
            readPersistentInt(
                L"web_radar_team_policy",
                webRadarTeamViewPolicy,
                path),
            0,
            2);
        publishRuntimeConfig();
    }

    inline void writePersistentValue(
        const wchar_t* key,
        const std::wstring_view value,
        const std::filesystem::path& path)
    {
        const std::wstring owned(value);
        WritePrivateProfileStringW(
            L"settings",
            key,
            owned.c_str(),
            path.c_str());
    }

    inline void savePersistentSettings()
    {
        const std::filesystem::path path = persistentSettingsPath();
        writePersistentValue(L"schema", L"1", path);
        writePersistentValue(
            L"viewport_mode",
            std::to_wstring(std::clamp(viewportMode, 0, 3)),
            path);
        writePersistentValue(
            L"local_radar_names",
            localRadarShowNames ? L"1" : L"0",
            path);

        const auto writeFloat = [&path](
            const wchar_t* key,
            const float value) {
            std::array<wchar_t, 64> text{};
            swprintf_s(text.data(), text.size(), L"%.6f", value);
            writePersistentValue(key, text.data(), path);
        };
        writeFloat(L"local_radar_anchor_x", localRadarAnchorX);
        writeFloat(L"local_radar_anchor_y", localRadarAnchorY);
        writeFloat(L"local_radar_size", localRadarSize);
        writeFloat(L"local_radar_marker_size", localRadarMarkerSize);
        writePersistentValue(
            L"web_radar_port",
            std::to_wstring(std::clamp(webRadarPort, 1024, 65535)),
            path);
        writePersistentValue(
            L"pause_shared_radar_unfocused",
            webRadarPauseWhenUnfocused ? L"1" : L"0",
            path);
        writePersistentValue(
            L"web_radar_player_names",
            webRadarIncludePlayerNames ? L"1" : L"0",
            path);
        writePersistentValue(
            L"web_radar_team_policy",
            std::to_wstring(std::clamp(webRadarTeamViewPolicy, 0, 2)),
            path);
    }

    // Convert virtual key code to key name
    inline const char* GetKeyName(int vkCode)
    {
        static char keyName[32];

        switch (vkCode)
        {
        // Special keys
        case VK_LBUTTON: return "Mouse1";
        case VK_RBUTTON: return "Mouse2";
        case VK_MBUTTON: return "Mouse3";
        case VK_XBUTTON1: return "Mouse4";
        case VK_XBUTTON2: return "Mouse5";
        case VK_BACK: return "Backspace";
        case VK_TAB: return "Tab";
        case VK_RETURN: return "Enter";
        case VK_SHIFT: return "Shift";
        case VK_CONTROL: return "Ctrl";
        case VK_MENU: return "Alt";
        case VK_PAUSE: return "Pause";
        case VK_CAPITAL: return "CapsLock";
        case VK_ESCAPE: return "Escape";
        case VK_SPACE: return "Space";
        case VK_PRIOR: return "PageUp";
        case VK_NEXT: return "PageDown";
        case VK_END: return "End";
        case VK_HOME: return "Home";
        case VK_LEFT: return "Left";
        case VK_UP: return "Up";
        case VK_RIGHT: return "Right";
        case VK_DOWN: return "Down";
        case VK_INSERT: return "Insert";
        case VK_DELETE: return "Delete";
        case VK_LSHIFT: return "LShift";
        case VK_RSHIFT: return "RShift";
        case VK_LCONTROL: return "LCtrl";
        case VK_RCONTROL: return "RCtrl";
        case VK_LMENU: return "LAlt";
        case VK_RMENU: return "RAlt";

        // Function keys
        case VK_F1: return "F1";
        case VK_F2: return "F2";
        case VK_F3: return "F3";
        case VK_F4: return "F4";
        case VK_F5: return "F5";
        case VK_F6: return "F6";
        case VK_F7: return "F7";
        case VK_F8: return "F8";
        case VK_F9: return "F9";
        case VK_F10: return "F10";
        case VK_F11: return "F11";
        case VK_F12: return "F12";

        // Numpad
        case VK_NUMPAD0: return "Num0";
        case VK_NUMPAD1: return "Num1";
        case VK_NUMPAD2: return "Num2";
        case VK_NUMPAD3: return "Num3";
        case VK_NUMPAD4: return "Num4";
        case VK_NUMPAD5: return "Num5";
        case VK_NUMPAD6: return "Num6";
        case VK_NUMPAD7: return "Num7";
        case VK_NUMPAD8: return "Num8";
        case VK_NUMPAD9: return "Num9";
        case VK_MULTIPLY: return "Num*";
        case VK_ADD: return "Num+";
        case VK_SUBTRACT: return "Num-";
        case VK_DECIMAL: return "Num.";
        case VK_DIVIDE: return "Num/";

        // Letters A-Z (0x41 - 0x5A)
        case 0x41: return "A";
        case 0x42: return "B";
        case 0x43: return "C";
        case 0x44: return "D";
        case 0x45: return "E";
        case 0x46: return "F";
        case 0x47: return "G";
        case 0x48: return "H";
        case 0x49: return "I";
        case 0x4A: return "J";
        case 0x4B: return "K";
        case 0x4C: return "L";
        case 0x4D: return "M";
        case 0x4E: return "N";
        case 0x4F: return "O";
        case 0x50: return "P";
        case 0x51: return "Q";
        case 0x52: return "R";
        case 0x53: return "S";
        case 0x54: return "T";
        case 0x55: return "U";
        case 0x56: return "V";
        case 0x57: return "W";
        case 0x58: return "X";
        case 0x59: return "Y";
        case 0x5A: return "Z";

        // Numbers 0-9 (0x30 - 0x39)
        case 0x30: return "0";
        case 0x31: return "1";
        case 0x32: return "2";
        case 0x33: return "3";
        case 0x34: return "4";
        case 0x35: return "5";
        case 0x36: return "6";
        case 0x37: return "7";
        case 0x38: return "8";
        case 0x39: return "9";

        default:
            sprintf_s(keyName, "Key(0x%02X)", vkCode);
            return keyName;
        }
    }

    // Check for key press during binding
    inline int GetPressedKey()
    {
        // Check mouse buttons
        if (GetAsyncKeyState(VK_LBUTTON) & 0x8000) return VK_LBUTTON;
        if (GetAsyncKeyState(VK_RBUTTON) & 0x8000) return VK_RBUTTON;
        if (GetAsyncKeyState(VK_MBUTTON) & 0x8000) return VK_MBUTTON;
        if (GetAsyncKeyState(VK_XBUTTON1) & 0x8000) return VK_XBUTTON1;
        if (GetAsyncKeyState(VK_XBUTTON2) & 0x8000) return VK_XBUTTON2;

        // Check all keyboard keys
        for (int i = 0x08; i <= 0xFE; i++)
        {
            // Skip some keys that shouldn't be used
            if (i == VK_ESCAPE) continue;  // Escape cancels binding

            if (GetAsyncKeyState(i) & 0x8000)
                return i;
        }

        return 0;
    }

    inline bool AnyBindableKeyDown()
    {
        for (int key = 0x01; key <= 0xFE; ++key) {
            if (GetAsyncKeyState(key) & 0x8000) {
                return true;
            }
        }
        return false;
    }

    inline bool ConfiguredHotkeysReleased()
    {
        const int keys[] = {
            menuToggleKey,
            exitKey,
            aimbotKey,
            triggerbotKey
        };
        for (int key : keys) {
            if (key > 0 && key <= 0xFF &&
                (GetAsyncKeyState(key) & 0x8000)) {
                return false;
            }
        }
        return true;
    }

    inline const char* FindHotkeyConflict(
        const int* target,
        int candidate)
    {
        // ``name`` is what the user sees in the conflict message, so it is
        // translated; the binding names passed to RenderHotkeyButton stay
        // ASCII because they double as ImGui IDs.
        struct Binding
        {
            const char* name;
            const int* key;
        };
        const Binding bindings[] = {
            { "菜单开关", &menuToggleKey },
            { "退出程序", &exitKey },
            { "自动瞄准键", &aimbotKey },
            { "自动扳机键", &triggerbotKey }
        };
        for (const Binding& binding : bindings) {
            if (binding.key != target && *binding.key == candidate) {
                return binding.name;
            }
        }
        return nullptr;
    }

    // Render hotkey button.
    //
    // ``id`` stays ASCII on purpose: it becomes the ImGui widget ID and the
    // name shown in "already assigned to ..." messages, while ``displayName``
    // is the Chinese text the user actually reads.
    inline void RenderHotkeyButton(const char* id, const char* displayName, int* keyCode, const char* tooltip = nullptr)
    {
        const float dpiScale = sdl_renderer::getDpiScale();
        ImGui::Text("%s:", displayName);
        ImGui::SameLine(150.0f * dpiScale);

        char buttonLabel[64];
        if (isBindingKey && bindingKeyTarget == keyCode)
        {
            sprintf_s(buttonLabel, "[按键中...]##%s", id);
            ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.8f, 0.4f, 0.0f, 1.0f));
        }
        else
        {
            sprintf_s(buttonLabel, "%s##%s", GetKeyName(*keyCode), id);
            ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.2f, 0.4f, 0.6f, 1.0f));
        }

        if (ImGui::Button(buttonLabel, ImVec2(100.0f * dpiScale, 0.0f)))
        {
            isBindingKey = true;
            bindingKeyTarget = keyCode;
            bindingKeyName = id;
            bindingWaitingForRelease = true;
            bindingError.clear();
            suppressHotkeysUntilRelease = true;
        }

        ImGui::PopStyleColor();

        if (tooltip && ImGui::IsItemHovered())
            ImGui::SetTooltip("%s", tooltip);
    }

    // Update key binding (call every frame)
    inline void UpdateKeyBinding()
    {
        if (!isBindingKey || bindingKeyTarget == nullptr)
            return;

        // Check for escape to cancel
        if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
        {
            isBindingKey = false;
            bindingKeyTarget = nullptr;
            bindingKeyName = nullptr;
            bindingWaitingForRelease = false;
            suppressHotkeysUntilRelease = true;
            return;
        }

        // Do not capture the mouse click that opened the binding button, or
        // any modifier that was already held at that moment.
        if (bindingWaitingForRelease) {
            if (!AnyBindableKeyDown()) {
                bindingWaitingForRelease = false;
            }
            return;
        }

        int pressedKey = GetPressedKey();
        if (pressedKey != 0)
        {
            if (const char* conflict =
                    FindHotkeyConflict(bindingKeyTarget, pressedKey)) {
                bindingError =
                    std::string("该按键已分配给 ") + conflict;
                bindingWaitingForRelease = true;
                return;
            }

            *bindingKeyTarget = pressedKey;
            isBindingKey = false;
            bindingKeyTarget = nullptr;
            bindingKeyName = nullptr;
            bindingWaitingForRelease = false;
            suppressHotkeysUntilRelease = true;
        }
    }

    inline void BeginCard(
        const char* id,
        const char* title,
        const char* subtitle,
        float height,
        float width = 0.0f)
    {
        const float dpiScale = sdl_renderer::getDpiScale();
        ImGui::PushStyleColor(
            ImGuiCol_ChildBg,
            ImVec4(0.070f, 0.090f, 0.125f, 1.0f));
        ImGui::PushStyleColor(
            ImGuiCol_Border,
            ImVec4(0.145f, 0.185f, 0.240f, 1.0f));
        ImGui::BeginChild(
            id,
            ImVec2(
                width > 0.0f ? width * dpiScale : 0.0f,
                height * dpiScale),
            true);
        ImGui::TextColored(
            ImVec4(0.330f, 0.800f, 1.000f, 1.0f),
            "%s",
            title);
        if (subtitle && subtitle[0] != '\0') {
            ImGui::TextColored(
                ImVec4(0.500f, 0.570f, 0.670f, 1.0f),
                "%s",
                subtitle);
        }
        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Spacing();
    }

    inline void EndCard()
    {
        ImGui::EndChild();
        ImGui::PopStyleColor(2);
    }

    inline void StatusValue(
        const char* label,
        bool enabled,
        const char* enabledText = "开启",
        const char* disabledText = "关闭")
    {
        ImGui::TextColored(
            ImVec4(0.610f, 0.665f, 0.750f, 1.0f),
            "%s",
            label);
        ImGui::SameLine();
        ImGui::TextColored(
            enabled
                ? ImVec4(0.250f, 0.900f, 0.600f, 1.0f)
                : ImVec4(0.930f, 0.420f, 0.430f, 1.0f),
            "%s",
            enabled ? enabledText : disabledText);
    }

    inline void RenderOverview()
    {
        const float dpiScale = sdl_renderer::getDpiScale();
        const float availableWidth =
            ImGui::GetContentRegionAvail().x;
        const float gap = 10.0f * dpiScale;
        const float cardWidth =
            std::max(180.0f * dpiScale,
                (availableWidth - gap) * 0.5f);

        ImGui::BeginGroup();
        BeginCard(
            "##QuickControls",
            "快捷控制",
            "对局中最常切换的功能。",
            240.0f,
            cardWidth / dpiScale);
        ImGui::Checkbox("玩家透视##QuickPlayerEsp", &espEnabled);
        ImGui::Checkbox("自动瞄准##QuickAimbot", &aimbotEnabled);
        ImGui::Checkbox("自动扳机##QuickTriggerbot", &triggerbotEnabled);
        ImGui::Checkbox("本地雷达##QuickLocalRadar", &localRadarEnabled);
        ImGui::Checkbox("浏览器雷达##QuickWebRadar", &webRadarEnabled);
        ImGui::Checkbox("炸弹计时##QuickBombTimer", &bombTimer);
        EndCard();
        ImGui::EndGroup();

        if (availableWidth >= 430.0f * dpiScale) {
            ImGui::SameLine(0.0f, gap);
        }
        ImGui::BeginGroup();
        BeginCard(
            "##SessionStatus",
            "会话状态",
            "渲染与安全相关的实时信息。",
            240.0f,
            cardWidth / dpiScale);
        StatusValue(
            "渲染器",
            sdl_renderer::isAcceleratedRenderer(),
            "硬件加速",
            "软件回退");
        StatusValue(
            "游戏焦点",
            sdl_renderer::isGameForeground(),
            "已激活",
            "已暂停");
        StatusValue(
            "单显示器",
            sdl_renderer::isGameOnSingleMonitor(),
            "正常",
            "请移入单个显示器");
        StatusValue(
            "内存写入",
            memory::WritesAllowed(),
            "已解锁",
            "已锁定");
        ImGui::Spacing();
        ImGui::Text(
            "%u x %u  |  目标 %d Hz",
            VIEWPORT_W,
            VIEWPORT_H,
            sdl_renderer::getTargetRefreshRate());
        ImGui::Text(
            "覆盖层 %.0f FPS",
            ImGui::GetIO().Framerate);
        EndCard();
        ImGui::EndGroup();

        ImGui::Spacing();
        BeginCard(
            "##SafetySummary",
            "安全运行模式",
            "只有当 CS2 客户端本身处于前台时才注入输入。",
            130.0f);
        ImGui::TextWrapped(
            "CS2 失去焦点时覆盖层会暂停读取实体数据。"
            "除非程序以 --allow-memory-writes 启动，否则内存写入始终保持禁用。");
        EndCard();
    }

    // Render Aimbot tab content
    inline void RenderAimbotTab()
    {
        ImGui::Checkbox("启用自动瞄准##EnableAimbot", &aimbotEnabled);

        if (aimbotEnabled)
        {
            ImGui::Spacing();
            ImGui::Separator();
            ImGui::Spacing();

            ImGui::Checkbox("智能瞄准（自动锁定）##SmartAim", &smartAimEnabled);
            if (ImGui::IsItemHovered())
                ImGui::SetTooltip("忽略 FOV，自动瞄准最佳的已发现目标\n优先级：已发现 > 距离/血量");

            if (smartAimEnabled) {
                ImGui::Indent();
                const char* priorityItems[] = { "距离优先", "血量优先" };
                ImGui::Combo("优先级##AimPriority", &smartAimPriority, priorityItems, IM_ARRAYSIZE(priorityItems));
                if (ImGui::IsItemHovered())
                    ImGui::SetTooltip("距离：瞄准最近的敌人\n血量：瞄准血量最低的敌人");
                ImGui::Unindent();
            }

            if (!smartAimEnabled) {
                ImGui::SliderFloat("视场角 FOV##AimbotFov", &aimbotFOV, 1.0f, 30.0f, "%.1f 度");
                if (ImGui::IsItemHovered())
                    ImGui::SetTooltip("视场角 - 只瞄准该角度范围内的敌人");
            }

            ImGui::SliderFloat("瞄准平滑##AimSmoothing", &aimbotSmoothing, 1.0f, 20.0f, "%.1f");
            if (ImGui::IsItemHovered())
                ImGui::SetTooltip("1.0 = 立即锁定，数值越大越平滑/越慢");

            const char* boneItems[] = { "头部", "颈部", "胸部" };
            ImGui::Combo("瞄准部位##AimBone", &aimbotBone, boneItems, IM_ARRAYSIZE(boneItems));

            if (!smartAimEnabled) {
                ImGui::Checkbox("仅已发现目标##SpottedOnly", &aimbotVisibleOnly);
                if (ImGui::IsItemHovered())
                    ImGui::SetTooltip("使用 CS2 的 exposed/spotted 标记；这不是几何射线检测");
            }

            ImGui::Checkbox("显示 FOV 圆圈##ShowFovCircle", &aimbotShowFOV);
            if (aimbotShowFOV) {
                ImGui::SameLine();
                ImGui::ColorEdit4("##FOVColor", aimbotFOVColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoAlpha);
            }

            ImGui::Spacing();
            ImGui::Separator();
            ImGui::Spacing();
            ImGui::TextColored(ImVec4(1.0f, 0.8f, 0.0f, 1.0f), "头部补偿");

            ImGui::Checkbox("启用（侧身时）##HeadOffsetEnable", &headOffsetEnabled);
            if (ImGui::IsItemHovered())
                ImGui::SetTooltip("敌人侧身时补偿头部位置偏差");

            if (headOffsetEnabled) {
                ImGui::Indent();
                ImGui::SliderFloat("补偿量##HeadOffsetAmount", &headOffsetAmount, 0.0f, 15.0f, "%.1f 单位");
                if (ImGui::IsItemHovered())
                    ImGui::SetTooltip("头部位置偏移多少（建议 5-8）");

                ImGui::SliderFloat("最小角度##HeadOffsetMinAngle", &headOffsetAngleMin, 0.0f, 90.0f, "%.0f 度");
                ImGui::SliderFloat("最大角度##HeadOffsetMaxAngle", &headOffsetAngleMax, 90.0f, 180.0f, "%.0f 度");
                if (ImGui::IsItemHovered())
                    ImGui::SetTooltip("偏移生效的角度范围（45-135 为侧身）");

                ImGui::TextColored(ImVec4(0.7f, 0.7f, 0.7f, 1.0f), "0=正对你，90=侧身，180=背对");
                ImGui::Unindent();
            }

            ImGui::Spacing();
            ImGui::Separator();
            ImGui::Spacing();
            ImGui::TextColored(ImVec4(1.0f, 0.8f, 0.0f, 1.0f), "输入");
            ImGui::SliderFloat("鼠标灵敏度##MouseSensitivity", &mouseSensitivity, 0.1f, 10.0f, "%.2f");
            if (ImGui::IsItemHovered())
                ImGui::SetTooltip("与游戏内的鼠标灵敏度保持一致");

            ImGui::Spacing();
            ImGui::TextColored(ImVec4(0.7f, 0.7f, 0.7f, 1.0f), "按住 %s 开始瞄准", GetKeyName(aimbotKey));
        }
    }

    // Render Triggerbot tab content
    inline void RenderTriggerbotTab()
    {
        ImGui::Checkbox("启用自动扳机##EnableTriggerbot", &triggerbotEnabled);

        if (triggerbotEnabled)
        {
            ImGui::Spacing();
            ImGui::Separator();
            ImGui::Spacing();

            ImGui::SliderInt("延迟（毫秒）##TriggerDelay", &triggerbotDelay, 0, 500, "%d 毫秒");
            if (ImGui::IsItemHovered())
                ImGui::SetTooltip("开枪前的延迟（毫秒）");

            ImGui::Spacing();
            ImGui::TextColored(ImVec4(0.7f, 0.7f, 0.7f, 1.0f), "按住 %s 激活", GetKeyName(triggerbotKey));
            ImGui::TextColored(
                ImVec4(0.7f, 0.7f, 0.7f, 1.0f),
                "仅当准星位于存活敌人身上时开火。");
        }
    }

    // Render ESP tab content
    inline void RenderESPTab()
    {
        ImGui::Checkbox("启用透视##EnableEsp", &espEnabled);

        if (espEnabled)
        {
            ImGui::Spacing();
            ImGui::Separator();
            ImGui::Spacing();

            // Box ESP
            ImGui::Checkbox("方框透视##EspBox", &espBox);
            if (espBox) {
                ImGui::SameLine();
                ImGui::ColorEdit4("##BoxColor", espBoxColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoAlpha);
            }

            // Health Bar
            ImGui::Checkbox("血条##EspHealth", &espHealth);

            // Weapon Display
            ImGui::Checkbox("武器##EspWeapon", &espWeapon);
            if (espWeapon) {
                ImGui::SameLine();
                ImGui::ColorEdit4("##WeaponColor", espWeaponColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoAlpha);
            }

            // View Direction
            ImGui::Checkbox("朝向（方框颜色）##EspViewAngle", &espViewAngle);
            if (espViewAngle) {
                ImGui::Indent();
                ImGui::TextColored(ImVec4(1.0f, 0.0f, 0.0f, 1.0f), "正对你：红色");
                ImGui::TextColored(ImVec4(1.0f, 0.65f, 0.0f, 1.0f), "半侧身：橙色");
                ImGui::TextColored(ImVec4(1.0f, 1.0f, 0.0f, 1.0f), "侧身：黄色");
                ImGui::TextColored(ImVec4(0.0f, 1.0f, 0.0f, 1.0f), "背对：绿色");
                ImGui::Checkbox("显示角度数值##EspViewAngleText", &espViewAngleText);
                ImGui::Unindent();
            }

            // CS2 spotted-state check. This is intentionally not described as
            // a ray-cast: it is a conservative game-state signal.
            ImGui::Checkbox("已发现检测（三角形）##EspWallCheck", &espWallCheck);
            if (espWallCheck) {
                ImGui::Indent();
                ImGui::Text("已发现颜色：");
                ImGui::SameLine();
                ImGui::ColorEdit4("##BoxColor2", espBoxColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoAlpha);
                ImGui::Text("未发现 / 未知：");
                ImGui::SameLine();
                ImGui::ColorEdit4("##WallColor", espWallColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoAlpha);
                ImGui::TextColored(
                    ImVec4(0.7f, 0.7f, 0.7f, 1.0f),
                    "使用 CS2 的已发现状态；绝不假定远处目标可见。");
                ImGui::Unindent();
            }

            // Distance
            ImGui::Checkbox("距离##EspDistance", &espDistance);
            if (espDistance) {
                ImGui::SameLine();
                ImGui::ColorEdit4("##DistanceColor", espDistanceColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoAlpha);
            }

            // Flashbang Eye Indicator
            ImGui::Checkbox("闪光弹眼部指示##EspFlashIndicator", &espFlashIndicator);
            if (espFlashIndicator) {
                ImGui::Indent();
                ImGui::Text("正常眼部：");
                ImGui::SameLine();
                ImGui::ColorEdit4("##FlashNormalColor", espFlashNormalColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoAlpha);
                ImGui::Text("被闪眼部：");
                ImGui::SameLine();
                ImGui::ColorEdit4("##FlashColor", espFlashColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoAlpha);
                ImGui::Unindent();
            }

            // Snaplines
            ImGui::Checkbox("连线##EspSnaplines", &espSnaplines);
            if (espSnaplines) {
                ImGui::SameLine();
                ImGui::ColorEdit4("##SnaplinesColor", espSnaplinesColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoAlpha);
                ImGui::Indent();
                const char* origins[] = { "底部", "中心", "顶部" };
                ImGui::Combo("起点##SnaplinesOrigin", &snaplinesOrigin, origins, IM_ARRAYSIZE(origins));
                ImGui::Unindent();
            }

            // Skeleton
            ImGui::Checkbox("骨骼##EspSkeleton", &espSkeleton);
            if (espSkeleton) {
                ImGui::SameLine();
                ImGui::ColorEdit4("##SkeletonColor", espSkeletonColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoAlpha);
            }
        }
    }

    // Local and browser modes consume the same complete GameSnapshot and map
    // catalogue. Neither mode rotates or distance-crops the north-up map.
    inline void RenderRadarTab()
    {
        ImGui::TextColored(
            ImVec4(0.330f, 0.800f, 1.000f, 1.0f),
            "本地固定地图覆盖层");
        ImGui::TextWrapped(
            "在游戏覆盖层内绘制完整的正北朝上地图。它使用与浏览器雷达相同的"
            "图片和标定参数；只有玩家方向标记会旋转。");
        ImGui::Spacing();

        ImGui::Checkbox("启用本地地图覆盖层##LocalRadarEnable", &localRadarEnabled);
        if (localRadarEnabled) {
            ImGui::Checkbox("显示玩家名称##LocalRadarNames", &localRadarShowNames);
            ImGui::SliderFloat(
                "水平位置##LocalRadarAnchorX",
                &localRadarAnchorX,
                0.0f,
                1.0f,
                "%.2f");
            ImGui::SliderFloat(
                "垂直位置##LocalRadarAnchorY",
                &localRadarAnchorY,
                0.0f,
                1.0f,
                "%.2f");
            ImGui::SliderFloat(
                "地图尺寸##LocalRadarSize",
                &localRadarSize,
                0.18f,
                0.65f,
                "%.2f");
            ImGui::SliderFloat(
                "玩家标记大小##LocalRadarMarkerSize",
                &localRadarMarkerSize,
                6.0f,
                24.0f,
                "%.0f 像素");
        }

        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Spacing();
        ImGui::TextColored(
            ImVec4(0.330f, 0.800f, 1.000f, 1.0f),
            "内嵌浏览器雷达");
        ImGui::TextWrapped(
            "通过内嵌的 CivetWeb 服务提供同一套固定地图，供本机浏览器或"
            "可信局域网内的观看者访问。");
        ImGui::Spacing();

        ImGui::Checkbox("启用浏览器雷达##WebRadarEnable", &webRadarEnabled);
        ImGui::InputInt("HTTP 端口##WebRadarPort", &webRadarPort, 1, 100);
        webRadarPort = std::clamp(webRadarPort, 1024, 65535);
        ImGui::Checkbox("允许局域网观看##WebRadarLanAccess", &webRadarLanAccess);

        ImGui::Checkbox(
            "CS2 失去焦点时暂停浏览器/中继采样##WebRadarPauseUnfocused",
            &webRadarPauseWhenUnfocused);
        ImGui::TextWrapped(
            "本地覆盖层在 CS2 失去焦点时始终暂停；只有显式共享出去的观看者"
            "才可以选择后台采样。");
        ImGui::Checkbox(
            "共享玩家名称##WebRadarPlayerNames",
            &webRadarIncludePlayerNames);
        const char* teamPolicies[] = {
            "全部队伍",
            "仅本队",
            "仅对手"
        };
        ImGui::Combo(
            "共享队伍##WebRadarTeams",
            &webRadarTeamViewPolicy,
            teamPolicies,
            IM_ARRAYSIZE(teamPolicies));
        ImGui::Checkbox(
            "共享 Steam ID（个人资料链接）##WebRadarSteamIds",
            &webRadarIncludeSteamIds);

        if (webRadarLanAccess) {
            ImGui::Spacing();
            ImGui::TextColored(
                ImVec4(0.930f, 0.650f, 0.260f, 1.0f),
                "局域网模式");
            ImGui::TextWrapped(
                "任何拿到该带令牌 URL 的人都能查看画面流。请只在可信的私有"
                "网络中使用；不要把这个端口暴露到公网。");
        }

        const WebRadarUiStatus status = getWebRadarStatus();
        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Spacing();
        ImGui::Text("服务：%s", status.running ? "运行中" : "已停止");
        ImGui::Text("监听：%s:%d", status.bindAddress.c_str(), webRadarPort);
        ImGui::Text("观看者：%zu", status.viewers);
        ImGui::Text(
            "帧：已发布 %llu | 已发送 %llu | 已替换 %llu",
            static_cast<unsigned long long>(status.publishedFrames),
            static_cast<unsigned long long>(status.sentFrames),
            static_cast<unsigned long long>(status.replacedFrames));
        ImGui::Text(
            "流量：%.1f MB | 最大发送延迟 %.1f ms",
            static_cast<double>(status.publishedBytes) /
                (1024.0 * 1024.0),
            status.maximumSendLatencyMilliseconds);

        if (!status.error.empty()) {
            ImGui::TextColored(
                ImVec4(0.930f, 0.420f, 0.430f, 1.0f),
                "错误：%s",
                status.error.c_str());
        }

        const bool canOpen = status.running && !status.viewerUrl.empty();
        ImGui::BeginDisabled(!canOpen);
        if (ImGui::Button("打开雷达##OpenRadar")) {
            ShellExecuteA(
                nullptr,
                "open",
                status.viewerUrl.c_str(),
                nullptr,
                nullptr,
                SW_SHOWNORMAL);
        }
        ImGui::SameLine();
        if (ImGui::Button("复制观看地址##CopyViewerUrl")) {
            ImGui::SetClipboardText(status.viewerUrl.c_str());
        }
        ImGui::EndDisabled();

        if (canOpen) {
            ImGui::TextWrapped("%s", status.viewerUrl.c_str());
            if (webRadarLanAccess) {
                ImGui::TextWrapped(
                    "在其他设备上使用时，请把这个 URL 里的 127.0.0.1 换成"
                    "本机的局域网 IPv4 地址。");
            }
        }

        ImGui::Spacing();
        ImGui::Checkbox(
            "记录脱敏雷达快照##RadarRecording",
            &radarRecordingEnabled);
        const web_radar::SnapshotRecorderStatus recording =
            getRecorderStatus();
        if (recording.recording) {
            ImGui::Text(
                "录制中：%llu 帧（%.1f MB），已替换 %llu 帧",
                static_cast<unsigned long long>(recording.framesWritten),
                static_cast<double>(recording.bytesWritten) /
                    (1024.0 * 1024.0),
                static_cast<unsigned long long>(recording.replacedFrames));
        }
        if (!recording.path.empty()) {
            ImGui::TextWrapped("文件：%s", recording.path.c_str());
        }
        if (!recording.lastError.empty()) {
            ImGui::TextColored(
                ImVec4(0.930f, 0.420f, 0.430f, 1.0f),
                "%s",
                recording.lastError.c_str());
        }

        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Spacing();
        ImGui::TextColored(
            ImVec4(0.330f, 0.800f, 1.000f, 1.0f),
            "公网中继（出站 WSS）");
        ImGui::TextWrapped(
            "通过一条经过鉴权、TLS 保护的出站连接发布快照。不需要开放入站"
            "端口，也不需要局域网模式。");
        ImGui::Checkbox("启用公网中继##EnablePublicRelay", &publicRelayEnabled);

        ImGui::BeginDisabled(publicRelayEnabled);
        ImGui::InputTextWithHint(
            "中继 WSS 地址##RelayUrl",
            "wss://radar.example.com/api/v1/publish",
            publicRelayUrl.data(),
            publicRelayUrl.size(),
            ImGuiInputTextFlags_CharsNoBlank |
                ImGuiInputTextFlags_AutoSelectAll);
        ImGui::InputTextWithHint(
            "中继房间##RelayRoom",
            "match-room",
            publicRelayRoom.data(),
            publicRelayRoom.size(),
            ImGuiInputTextFlags_CharsNoBlank |
                ImGuiInputTextFlags_AutoSelectAll);
        ImGui::InputTextWithHint(
            "生产者令牌##RelayToken",
            "粘贴仅用于生产的令牌",
            publicRelayToken.data(),
            publicRelayToken.size(),
            ImGuiInputTextFlags_Password |
                ImGuiInputTextFlags_CharsNoBlank |
                ImGuiInputTextFlags_AutoSelectAll);
        if (ImGui::Button("清除中继凭据##ClearRelayCredentials")) {
            std::fill(publicRelayUrl.begin(), publicRelayUrl.end(), '\0');
            std::fill(publicRelayRoom.begin(), publicRelayRoom.end(), '\0');
            SecureZeroMemory(
                publicRelayToken.data(),
                publicRelayToken.size());
        }
        ImGui::EndDisabled();

        ImGui::Checkbox(
            "通过公网中继共享玩家名称##RelayPlayerNames",
            &publicRelayIncludePlayerNames);
        ImGui::Combo(
            "中继共享队伍##RelayTeams",
            &publicRelayTeamViewPolicy,
            teamPolicies,
            IM_ARRAYSIZE(teamPolicies));
        ImGui::Checkbox(
            "通过公网中继共享 Steam ID##RelaySteamIds",
            &publicRelayIncludeSteamIds);
        ImGui::TextWrapped(
            "生产者令牌只保存在内存中，绝不会出现在状态显示或日志里。"
            "请使用生产者令牌，不要使用观看者令牌。");

        const PublicRelayUiStatus relayStatus = getPublicRelayStatus();
        const char* relayState = "已禁用";
        switch (relayStatus.state) {
        case web_radar::PublicRelayState::connecting:
            relayState = "连接中";
            break;
        case web_radar::PublicRelayState::connected:
            relayState = "已连接";
            break;
        case web_radar::PublicRelayState::backoff:
            relayState = "重试退避中";
            break;
        case web_radar::PublicRelayState::retiring:
            relayState = "正在停止";
            break;
        case web_radar::PublicRelayState::failed:
            relayState = "失败";
            break;
        case web_radar::PublicRelayState::disabled:
            break;
        }
        ImGui::Text("中继：%s", relayState);
        ImGui::Text(
            "已发送帧：%llu  |  已替换：%llu  |  已丢弃：%llu  |  重连：%llu",
            static_cast<unsigned long long>(relayStatus.framesSent),
            static_cast<unsigned long long>(relayStatus.replacedFrames),
            static_cast<unsigned long long>(relayStatus.droppedFrames),
            static_cast<unsigned long long>(relayStatus.reconnects));
        if (!relayStatus.error.empty()) {
            ImGui::TextColored(
                ImVec4(0.930f, 0.420f, 0.430f, 1.0f),
                "中继错误：%s",
                relayStatus.error.c_str());
        }
    }

    // Render Hotkeys tab content
    inline void RenderHotkeysTab()
    {
        ImGui::TextColored(ImVec4(1.0f, 0.8f, 0.0f, 1.0f), "按键绑定");
        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Spacing();

        RenderHotkeyButton("Menu Toggle", "菜单开关", &menuToggleKey, "显示/隐藏菜单的按键");
        RenderHotkeyButton("Exit Program", "退出程序", &exitKey, "退出程序的按键");
        RenderHotkeyButton("Aimbot Key", "自动瞄准键", &aimbotKey, "按住以激活自动瞄准");
        RenderHotkeyButton("Triggerbot Key", "自动扳机键", &triggerbotKey, "按住以激活自动扳机");

        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Spacing();
        ImGui::TextColored(ImVec4(0.7f, 0.7f, 0.7f, 1.0f), "点击按钮后按任意键完成绑定");
        ImGui::TextColored(ImVec4(0.7f, 0.7f, 0.7f, 1.0f), "按 ESC 取消绑定");
        if (!bindingError.empty()) {
            ImGui::TextColored(
                ImVec4(1.0f, 0.35f, 0.35f, 1.0f),
                "%s",
                bindingError.c_str());
        }
    }

    // Render Settings tab content
    inline void RenderMiscTab()
    {
        ImGui::TextColored(ImVec4(1.0f, 0.8f, 0.0f, 1.0f), "其他功能");
        ImGui::Separator();
        ImGui::Spacing();

        if (!memory::WritesAllowed()) {
            ImGui::BeginDisabled();
        }
        ImGui::Checkbox("防闪光##AntiFlash", &antiFlash);
        if (!memory::WritesAllowed()) {
            antiFlash = false;
            ImGui::EndDisabled();
            ImGui::TextColored(
                ImVec4(1.0f, 0.65f, 0.1f, 1.0f),
                "内存写入已锁定。请以 --allow-memory-writes 启动以启用。");
        }
        ImGui::Checkbox("炸弹计时##MiscBombTimer", &bombTimer);

        ImGui::Spacing();
        ImGui::Separator();
        ImGui::TextColored(ImVec4(1.0f, 0.8f, 0.0f, 1.0f), "世界透视");
        ImGui::Spacing();
        ImGui::Checkbox("投掷物透视##GrenadeEsp", &grenadeESP);
        ImGui::Checkbox("掉落武器透视##DroppedWeaponEsp", &droppedWeaponESP);
    }

    inline void RenderSettingsTab()
    {
        ImGui::TextColored(ImVec4(1.0f, 0.8f, 0.0f, 1.0f), "性能");
        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Spacing();

        ImGui::TextColored(
            ImVec4(0.5f, 1.0f, 0.5f, 1.0f),
            "覆盖层目标帧率：%d FPS（%s）",
            sdl_renderer::getTargetRefreshRate(),
            sdl_renderer::isVsyncEnabled()
                ? "垂直同步"
                : "定时回退");
        ImGui::Text(
            "渲染器：%s",
            sdl_renderer::isAcceleratedRenderer()
                ? "硬件加速"
                : "软件回退（限制为 60 FPS）");
        if (!sdl_renderer::isGameOnSingleMonitor()) {
            ImGui::TextColored(
                ImVec4(1.0f, 0.5f, 0.1f, 1.0f),
                "请把 CS2 完整移动到单个显示器内，以保证混合 DPI 映射可靠。");
        }
        if (!sdl_renderer::isDpiAwarenessReliable()) {
            ImGui::TextColored(
                ImVec4(1.0f, 0.25f, 0.25f, 1.0f),
                "当前环境不支持按显示器区分的 DPI 感知。");
        }
        const char* viewportModes[] = {
            "自动检测黑边",
            "完整客户端（拉伸）",
            "强制 4:3 黑边",
            "强制 16:10 黑边"
        };
        ImGui::Combo(
            "游戏视口##GameViewport",
            &viewportMode,
            viewportModes,
            IM_ARRAYSIZE(viewportModes));
        if (ImGui::IsItemHovered()) {
            ImGui::SetTooltip(
                "推荐使用自动。只有当画面受保护或场景过暗导致黑边检测失败时，"
                "才使用强制模式。");
        }

        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Spacing();
        ImGui::TextColored(ImVec4(1.0f, 0.8f, 0.0f, 1.0f), "系统信息");
        ImGui::Spacing();

        ImGui::Text("分辨率：%dx%d", WIDTH, HEIGHT);
        ImGui::Text(
            "游戏视口：%dx%d，位于 (%d, %d)",
            VIEWPORT_W,
            VIEWPORT_H,
            VIEWPORT_X,
            VIEWPORT_Y);
        ImGui::Text("FPS：%.1f", ImGui::GetIO().Framerate);
        const float frameRate = ImGui::GetIO().Framerate;
        ImGui::Text(
            "帧耗时：%.3f ms",
            frameRate > 0.0f ? 1000.0f / frameRate : 0.0f);

        const auto samplingMetrics =
            performance_metrics::samplingDuration.snapshot();
        const auto serializationMetrics =
            performance_metrics::serializationDuration.snapshot();
        const auto renderMetrics =
            performance_metrics::renderCpuDuration.snapshot();
        const memory::ReadMetrics readMetrics = memory::GetReadMetrics();
        ImGui::Text(
            "采样：%d Hz | 雷达：%d Hz | 平均 %.2f ms | P95 %.2f | P99 %.2f",
            performance_metrics::samplingRateHz.load(
                std::memory_order_relaxed),
            performance_metrics::radarRateHz.load(
                std::memory_order_relaxed),
            samplingMetrics.averageMilliseconds,
            samplingMetrics.p95Milliseconds,
            samplingMetrics.p99Milliseconds);
        ImGui::Text(
            "渲染 CPU：平均 %.2f ms | P95 %.2f | P99 %.2f",
            renderMetrics.averageMilliseconds,
            renderMetrics.p95Milliseconds,
            renderMetrics.p99Milliseconds);
        ImGui::Text(
            "雷达 JSON：平均 %.2f ms | P95 %.2f | 最大 %.2f",
            serializationMetrics.averageMilliseconds,
            serializationMetrics.p95Milliseconds,
            serializationMetrics.maximumMilliseconds);
        ImGui::Text(
            "RPM：%llu 次调用 | %.1f MB | %llu 次失败",
            static_cast<unsigned long long>(readMetrics.calls),
            static_cast<double>(readMetrics.bytesRequested) /
                (1024.0 * 1024.0),
            static_cast<unsigned long long>(readMetrics.failures));
        ImGui::Text(
            "错过截止时间：采样 %llu 次 | 渲染 %llu 次",
            static_cast<unsigned long long>(
                performance_metrics::missedSamplingDeadlines.load(
                    std::memory_order_relaxed)),
            static_cast<unsigned long long>(
                performance_metrics::missedRenderDeadlines.load(
                    std::memory_order_relaxed)));

        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Spacing();
        ImGui::TextColored(
            startupReport.ready()
                ? ImVec4(0.250f, 0.900f, 0.600f, 1.0f)
                : ImVec4(0.930f, 0.420f, 0.430f, 1.0f),
            "启动自检：%s",
            startupReport.ready() ? "就绪" : "需要处理");
        ImGui::Text(
            "管理员 %s | SDL %s | Web 资源 %s | 地图 %s",
            startupReport.administrator ? "正常" : "缺失",
            startupReport.sdlRuntimePresent ? "正常" : "缺失",
            startupReport.webRadarBundlePresent ? "正常" : "缺失",
            startupReport.mapMetadataPresent ? "正常" : "缺失");
        if (!startupReport.installationError.empty()) {
            ImGui::TextWrapped(
                "%s",
                startupReport.installationError.c_str());
        }

        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Spacing();
        ImGui::TextColored(ImVec4(0.5f, 1.0f, 0.5f, 1.0f), "CS2 External ESP v2.0");
        ImGui::Text("SDL2 + ImGui 覆盖层");
        ImGui::Spacing();
        ImGui::TextColored(ImVec4(0.4f, 0.7f, 1.0f, 1.0f), "github.com/tiansongyu/cs2_cheat");
    }

    inline void RenderPageHeader(
        const char* title,
        const char* description)
    {
        ImGui::TextColored(
            ImVec4(0.930f, 0.960f, 1.000f, 1.0f),
            "%s",
            title);
        ImGui::TextColored(
            ImVec4(0.500f, 0.570f, 0.670f, 1.0f),
            "%s",
            description);
        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Spacing();
    }

    inline void RenderCombatPage()
    {
        RenderPageHeader(
            "战斗辅助",
            "目标选择与输入自动化。所有输入都受前台状态门控。");
        BeginCard(
            "##AimbotCard",
            "自动瞄准",
            "基于真实骨骼目标，并保持目标不抖动。",
            590.0f);
        RenderAimbotTab();
        EndCard();
        ImGui::Spacing();
        BeginCard(
            "##TriggerCard",
            "自动扳机",
            "使用准星下的真实实体，不做角度猜测。",
            190.0f);
        RenderTriggerbotTab();
        EndCard();
    }

    inline void RenderPlayerVisualsPage()
    {
        RenderPageHeader(
            "玩家视觉",
            "配置环绕已校验的存活敌人绘制的信息。");
        BeginCard(
            "##PlayerEspCard",
            "玩家透视",
            "方框、血量、骨骼、装备与朝向威胁指示。",
            650.0f);
        RenderESPTab();
        EndCard();
    }

    inline void RenderWorldPage()
    {
        RenderPageHeader(
            "世界与对局",
            "共享 Web 雷达、炸弹状态与移动中的世界实体。");
        BeginCard(
            "##RadarCard",
            "固定地图雷达",
            "本地覆盖层、CivetWeb 与中继共用同一套正北朝上的地图模型。",
            870.0f);
        RenderRadarTab();
        EndCard();
        ImGui::Spacing();
        BeginCard(
            "##WorldUtilityCard",
            "对局辅助",
            "炸弹计时、投掷物、掉落装备与防闪光。",
            255.0f);
        RenderMiscTab();
        EndCard();
    }

    inline void RenderSystemPage()
    {
        RenderPageHeader(
            "系统",
            "显示映射、性能诊断与按键绑定。");
        BeginCard(
            "##DisplayCard",
            "显示与渲染",
            "感知显示器的视口映射与实时诊断。",
            460.0f);
        RenderSettingsTab();
        EndCard();
        ImGui::Spacing();
        BeginCard(
            "##HotkeyCard",
            "快捷键",
            "绑定必须互不重复；重新绑定期间输入会暂停。",
            330.0f);
        RenderHotkeysTab();
        EndCard();
    }

    inline bool NavigationButton(
        const char* label,
        int page,
        const ImVec2& size)
    {
        const bool selected = currentTab == page;
        if (selected) {
            ImGui::PushStyleColor(
                ImGuiCol_Button,
                ImVec4(0.075f, 0.330f, 0.470f, 1.0f));
            ImGui::PushStyleColor(
                ImGuiCol_ButtonHovered,
                ImVec4(0.085f, 0.390f, 0.540f, 1.0f));
            ImGui::PushStyleColor(
                ImGuiCol_ButtonActive,
                ImVec4(0.100f, 0.440f, 0.600f, 1.0f));
        } else {
            ImGui::PushStyleColor(
                ImGuiCol_Button,
                ImVec4(0.055f, 0.072f, 0.100f, 1.0f));
            ImGui::PushStyleColor(
                ImGuiCol_ButtonHovered,
                ImVec4(0.095f, 0.130f, 0.175f, 1.0f));
            ImGui::PushStyleColor(
                ImGuiCol_ButtonActive,
                ImVec4(0.110f, 0.155f, 0.205f, 1.0f));
        }

        const bool pressed = ImGui::Button(label, size);
        ImGui::PopStyleColor(3);
        if (pressed) {
            currentTab = page;
        }
        return pressed;
    }

    // Main render function
    inline void render()
    {
        if (!sdl_renderer::menuVisible) return;

        // Update key binding
        UpdateKeyBinding();

        const float dpiScale = sdl_renderer::getDpiScale();
        const float margin = std::max(8.0f, 16.0f * dpiScale);
        const float availableWidth =
            std::max(1.0f, static_cast<float>(WIDTH) - margin * 2.0f);
        const float availableHeight =
            std::max(1.0f, static_cast<float>(HEIGHT) - margin * 2.0f);
        const float defaultWidth =
            std::min(920.0f * dpiScale, availableWidth);
        const float defaultHeight =
            std::min(720.0f * dpiScale, availableHeight);
        const float minimumWidth =
            std::min(680.0f * dpiScale, availableWidth);
        const float minimumHeight =
            std::min(500.0f * dpiScale, availableHeight);

        ImGui::SetNextWindowSizeConstraints(
            ImVec2(minimumWidth, minimumHeight),
            ImVec2(availableWidth, availableHeight));
        ImGui::SetNextWindowSize(
            ImVec2(defaultWidth, defaultHeight),
            ImGuiCond_FirstUseEver
        );
        ImGui::SetNextWindowPos(
            ImVec2(
                (static_cast<float>(WIDTH) - defaultWidth) / 2.0f,
                (static_cast<float>(HEIGHT) - defaultHeight) / 2.0f),
            ImGuiCond_FirstUseEver
        );

        ImGui::Begin(
            "Aegis // CS2 覆盖层",
            nullptr,
            ImGuiWindowFlags_NoCollapse);

        // Saved ImGui positions may belong to another monitor/resolution.
        // Clamp without resetting a valid user-selected position or size.
        const ImVec2 windowPos = ImGui::GetWindowPos();
        const ImVec2 windowSize = ImGui::GetWindowSize();
        const ImVec2 clampedPos(
            std::clamp(
                windowPos.x,
                margin,
                std::max(margin, static_cast<float>(WIDTH) - windowSize.x - margin)),
            std::clamp(
                windowPos.y,
                margin,
                std::max(margin, static_cast<float>(HEIGHT) - windowSize.y - margin)));
        if (clampedPos.x != windowPos.x || clampedPos.y != windowPos.y) {
            ImGui::SetWindowPos(clampedPos);
        }
        {
            const ImVec2 interactivePosition = ImGui::GetWindowPos();
            const ImVec2 interactiveSize = ImGui::GetWindowSize();
            sdl_renderer::setInteractiveRect(
                interactivePosition.x,
                interactivePosition.y,
                interactiveSize.x,
                interactiveSize.y);
        }

        const float sidebarWidth = 184.0f * dpiScale;
        const float navigationHeight = 42.0f * dpiScale;

        ImGui::PushStyleColor(
            ImGuiCol_ChildBg,
            ImVec4(0.038f, 0.052f, 0.075f, 1.0f));
        ImGui::BeginChild(
            "##Navigation",
            ImVec2(sidebarWidth, 0.0f),
            true);
        ImGui::TextColored(
            ImVec4(0.330f, 0.800f, 1.000f, 1.0f),
            "AEGIS");
        ImGui::TextColored(
            ImVec4(0.500f, 0.570f, 0.670f, 1.0f),
            "CS2 覆盖层");
        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Spacing();

        const ImVec2 navigationSize(
            ImGui::GetContentRegionAvail().x,
            navigationHeight);
        NavigationButton("总览##NavOverview", 0, navigationSize);
        NavigationButton("战斗##NavCombat", 1, navigationSize);
        NavigationButton("玩家视觉##NavVisuals", 2, navigationSize);
        NavigationButton("世界与雷达##NavWorld", 3, navigationSize);
        NavigationButton("系统##NavSystem", 4, navigationSize);

        const float footerHeight = 104.0f * dpiScale;
        if (ImGui::GetContentRegionAvail().y > footerHeight) {
            ImGui::SetCursorPosY(
                ImGui::GetWindowHeight() - footerHeight);
        }
        ImGui::Separator();
        ImGui::TextColored(
            sdl_renderer::isGameForeground()
                ? ImVec4(0.250f, 0.900f, 0.600f, 1.0f)
                : ImVec4(0.930f, 0.650f, 0.260f, 1.0f),
            sdl_renderer::isGameForeground()
                ? "游戏前台"
                : "输入已暂停");
        ImGui::TextColored(
            ImVec4(0.500f, 0.570f, 0.670f, 1.0f),
            "%s 菜单  |  %s 退出",
            GetKeyName(menuToggleKey),
            GetKeyName(exitKey));
        ImGui::EndChild();
        ImGui::PopStyleColor();

        ImGui::SameLine(0.0f, 12.0f * dpiScale);
        ImGui::BeginChild(
            "##PageContent",
            ImVec2(0.0f, 0.0f),
            false);
        switch (currentTab) {
        case 1:
            RenderCombatPage();
            break;
        case 2:
            RenderPlayerVisualsPage();
            break;
        case 3:
            RenderWorldPage();
            break;
        case 4:
            RenderSystemPage();
            break;
        default:
            currentTab = 0;
            RenderPageHeader(
                "总览",
                "快捷控制，以及当前会话的实时状态。");
            RenderOverview();
            break;
        }
        ImGui::EndChild();

        ImGui::End();
        if (ImGui::IsPopupOpen(
                nullptr,
                ImGuiPopupFlags_AnyPopup)) {
            // Popups may extend beyond the main menu rectangle. Keep the whole
            // overlay interactive while one is open so their first click cannot
            // pass through to CS2.
            sdl_renderer::setInteractiveRect(
                0.0f,
                0.0f,
                static_cast<float>(WIDTH),
                static_cast<float>(HEIGHT));
        }
        publishRuntimeConfig();
    }
}
