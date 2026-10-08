// Generated using https://github.com/a2x/cs2-dumper
// 2026-10-06 06:58:22.576223100 UTC

#pragma once

#include "offsets_runtime.hpp"
#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwCSGOInput{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwCSGOInput", 0x2578160};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwEntityList{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwEntityList", 0x2717828};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwGameEntitySystem{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwGameEntitySystem", 0x2717828};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwGameEntitySystem_highestEntityIndex{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwGameEntitySystem_highestEntityIndex", 0x2120};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwGameRules{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwGameRules", 0x255EE50};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwGlobalVars{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwGlobalVars", 0x222DE98};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwGlowManager{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwGlowManager", 0x255EE60};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwLocalPlayerController{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwLocalPlayerController", 0x253A068};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwLocalPlayerPawn{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwLocalPlayerPawn", 0x2562808};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwPlantedC4{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwPlantedC4", 0x24CA930};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwPrediction{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwPrediction", 0x2562710};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwSensitivity{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwSensitivity", 0x255F998};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwSensitivity_sensitivity{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwSensitivity_sensitivity", 0x58};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwViewAngles{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwViewAngles", 0x25787E8};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwViewMatrix{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwViewMatrix", 0x2567FA0};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwViewRender{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwViewRender", 0x2568968};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwWeaponC4{::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr, "dwWeaponC4", 0x24C6AF0};
        }
        // Module: engine2.dll
        namespace engine2_dll {
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwBuildNumber{::cs2_dumper::runtime::Category::Offset, "engine2.dll", nullptr, "dwBuildNumber", 0x61CFE8};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwNetworkGameClient{::cs2_dumper::runtime::Category::Offset, "engine2.dll", nullptr, "dwNetworkGameClient", 0x91AFC0};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwNetworkGameClient_clientTickCount{::cs2_dumper::runtime::Category::Offset, "engine2.dll", nullptr, "dwNetworkGameClient_clientTickCount", 0x398};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwNetworkGameClient_deltaTick{::cs2_dumper::runtime::Category::Offset, "engine2.dll", nullptr, "dwNetworkGameClient_deltaTick", 0x24C};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwNetworkGameClient_isBackgroundMap{::cs2_dumper::runtime::Category::Offset, "engine2.dll", nullptr, "dwNetworkGameClient_isBackgroundMap", 0x2C143F};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwNetworkGameClient_localPlayer{::cs2_dumper::runtime::Category::Offset, "engine2.dll", nullptr, "dwNetworkGameClient_localPlayer", 0xF8};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwNetworkGameClient_maxClients{::cs2_dumper::runtime::Category::Offset, "engine2.dll", nullptr, "dwNetworkGameClient_maxClients", 0x240};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwNetworkGameClient_serverTickCount{::cs2_dumper::runtime::Category::Offset, "engine2.dll", nullptr, "dwNetworkGameClient_serverTickCount", 0x24C};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwNetworkGameClient_signOnState{::cs2_dumper::runtime::Category::Offset, "engine2.dll", nullptr, "dwNetworkGameClient_signOnState", 0x230};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwWindowHeight{::cs2_dumper::runtime::Category::Offset, "engine2.dll", nullptr, "dwWindowHeight", 0x91F334};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwWindowWidth{::cs2_dumper::runtime::Category::Offset, "engine2.dll", nullptr, "dwWindowWidth", 0x91F330};
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwInputSystem{::cs2_dumper::runtime::Category::Offset, "inputsystem.dll", nullptr, "dwInputSystem", 0x46BC0};
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwGameTypes{::cs2_dumper::runtime::Category::Offset, "matchmaking.dll", nullptr, "dwGameTypes", 0x1B0FD0};
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwSoundSystem{::cs2_dumper::runtime::Category::Offset, "soundsystem.dll", nullptr, "dwSoundSystem", 0x535350};
            inline constexpr ::cs2_dumper::runtime::dumper_constant dwSoundSystem_engineViewData{::cs2_dumper::runtime::Category::Offset, "soundsystem.dll", nullptr, "dwSoundSystem_engineViewData", 0x6C};
        }
    }
}
