// Generated using https://github.com/a2x/cs2-dumper
// 2026-10-06 06:58:22.576223100 UTC

#pragma once

#include "offsets_runtime.hpp"
#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace schemas {
        // Module: client.dll
        // Class count: 542
        // Enum count: 14
        namespace client_dll {
            // Alignment: 4
            // Member count: 5
            enum class C_BaseCombatCharacter__WaterWakeMode_t : uint32_t {
                WATER_WAKE_NONE = 0x0,
                WATER_WAKE_IDLE = 0x1,
                WATER_WAKE_WALKING = 0x2,
                WATER_WAKE_RUNNING = 0x3,
                WATER_WAKE_WATER_OVERHEAD = 0x4
            };
            // Alignment: 4
            // Member count: 2
            enum class PulseBestOutflowRules_t : uint32_t {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class PulseCursorCancelPriority_t : uint32_t {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            };
            // Alignment: 4
            // Member count: 2
            enum class PulseMethodCallMode_t : uint32_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class PulseCursorWakePriority_t : uint32_t {
                WakeElegantly = 0x0,
                WakeImmediate = 0x1
            };
            // Alignment: 4
            // Member count: 15
            enum class CompositeMaterialInputLooseVariableType_t : uint32_t {
                LOOSE_VARIABLE_TYPE_BOOLEAN = 0x0,
                LOOSE_VARIABLE_TYPE_INTEGER1 = 0x1,
                LOOSE_VARIABLE_TYPE_INTEGER2 = 0x2,
                LOOSE_VARIABLE_TYPE_INTEGER3 = 0x3,
                LOOSE_VARIABLE_TYPE_INTEGER4 = 0x4,
                LOOSE_VARIABLE_TYPE_FLOAT1 = 0x5,
                LOOSE_VARIABLE_TYPE_FLOAT2 = 0x6,
                LOOSE_VARIABLE_TYPE_FLOAT3 = 0x7,
                LOOSE_VARIABLE_TYPE_FLOAT4 = 0x8,
                LOOSE_VARIABLE_TYPE_COLOR4 = 0x9,
                LOOSE_VARIABLE_TYPE_STRING = 0xA,
                LOOSE_VARIABLE_TYPE_SYSTEMVAR = 0xB,
                LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 0xC,
                LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 0xD,
                LOOSE_VARIABLE_TYPE_PANORAMA_RENDER = 0xE
            };
            // Alignment: 4
            // Member count: 8
            enum class CompositeMaterialInputTextureType_t : uint32_t {
                INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
                INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
                INPUT_TEXTURE_TYPE_COLOR = 0x2,
                INPUT_TEXTURE_TYPE_MASKS = 0x3,
                INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
                INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
                INPUT_TEXTURE_TYPE_AO = 0x6,
                INPUT_TEXTURE_TYPE_POSITION = 0x7
            };
            // Alignment: 4
            // Member count: 9
            enum class InventoryNodeType_t : uint32_t {
                NODE_TYPE_INVALID = 0x0,
                VIRTUAL_NODE_SCHEMA_PREFAB = 0x1,
                VIRTUAL_NODE_SCHEMA_ITEMDEF = 0x2,
                VIRTUAL_NODE_SCHEMA_STICKER = 0x3,
                VIRTUAL_NODE_SCHEMA_KEYCHAIN = 0x4,
                CONCRETE_NODE_SCHEMA_PREFAB = 0x5,
                CONCRETE_NODE_SCHEMA_ITEMDEF = 0x6,
                CONCRETE_NODE_SCHEMA_STICKER = 0x7,
                CONCRETE_NODE_SCHEMA_KEYCHAIN = 0x8
            };
            // Alignment: 4
            // Member count: 6
            enum class CompositeMaterialInputContainerSourceType_t : uint32_t {
                CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
                CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
                CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
                CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
                CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
                CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
            };
            // Alignment: 4
            // Member count: 10
            enum class CompMatPropertyMutatorType_t : uint32_t {
                COMP_MAT_PROPERTY_MUTATOR_INIT = 0x0,
                COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 0x1,
                COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 0x2,
                COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 0x3,
                COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 0x4,
                COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 0x5,
                COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 0x6,
                COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 0x7,
                COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 0x8,
                COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 0x9
            };
            // Alignment: 4
            // Member count: 2
            enum class CompositeMaterialVarSystemVar_t : uint32_t {
                COMPMATSYSVAR_COMPOSITETIME = 0x0,
                COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
            };
            // Alignment: 4
            // Member count: 7
            enum class P2P_Messages : uint32_t {
                p2p_TextMessage = 0x100,
                p2p_Voice = 0x101,
                p2p_Ping = 0x102,
                p2p_VRAvatarPosition = 0x103,
                p2p_WatchSynchronization = 0x104,
                p2p_FightingGame_GameData = 0x105,
                p2p_FightingGame_Connection = 0x106
            };
            // Alignment: 4
            // Member count: 6
            enum class CompositeMaterialMatchFilterType_t : uint32_t {
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
                MATCH_FILTER_MATERIAL_SHADER = 0x1,
                MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
                MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
                MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
            };
            // Alignment: 4
            // Member count: 3
            enum class CompMatPropertyMutatorConditionType_t : uint32_t {
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
            };
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamIntroCharacterPosition {
            }
            // Parent: None
            // Field count: 0
            namespace C_FireCrackerBlast {
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_WingmanIntroCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_WaitForCursorsWithTag {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bTagSelfWhenComplete{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_WaitForCursorsWithTag", "m_bTagSelfWhenComplete", 0x128};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDesiredKillPriority{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_WaitForCursorsWithTag", "m_nDesiredKillPriority", 0x12C};  // PulseCursorCancelPriority_t
            }
            // Parent: None
            // Field count: 1
            namespace C_SceneEntity__QueuedEvents_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant starttime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SceneEntity__QueuedEvents_t", "starttime", 0x0};  // float32
            }
            // Parent: None
            // Field count: 1
            namespace CCSPlayer_PingServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hPlayerPing{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_PingServices", "m_hPlayerPing", 0x48};  // CHandle<C_PlayerPing>
            }
            // Parent: None
            // Field count: 5
            namespace CEconItemAttribute {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iAttributeDefinitionIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEconItemAttribute", "m_iAttributeDefinitionIndex", 0x30};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEconItemAttribute", "m_flValue", 0x34};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInitialValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEconItemAttribute", "m_flInitialValue", 0x38};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRefundableCurrency{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEconItemAttribute", "m_nRefundableCurrency", 0x3C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSetBonus{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEconItemAttribute", "m_bSetBonus", 0x40};  // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_RaceCursors {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Outflows{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_RaceCursors", "m_Outflows", 0xD8};  // CUtlVector<CPulse_OutflowConnection>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnFinished{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_RaceCursors", "m_OnFinished", 0xF0};  // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            namespace CFuncRetakeBarrier {
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_EnvWindShared {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWindShared", "m_flStartTime", 0x8};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iWindSeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWindShared", "m_iWindSeed", 0xC};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMinWind{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWindShared", "m_iMinWind", 0x10};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMaxWind{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWindShared", "m_iMaxWind", 0x12};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_windRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWindShared", "m_windRadius", 0x14};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMinGust{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWindShared", "m_iMinGust", 0x18};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMaxGust{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWindShared", "m_iMaxGust", 0x1A};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMinGustDelay{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWindShared", "m_flMinGustDelay", 0x1C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMaxGustDelay{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWindShared", "m_flMaxGustDelay", 0x20};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flGustDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWindShared", "m_flGustDuration", 0x24};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iGustDirChange{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWindShared", "m_iGustDirChange", 0x28};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iInitialWindDir{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWindShared", "m_iInitialWindDir", 0x2A};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInitialWindSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWindShared", "m_flInitialWindSpeed", 0x2C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_location{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWindShared", "m_location", 0x30};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hEntOwner{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWindShared", "m_hEntOwner", 0x3C};  // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 4
            namespace C_SkyCamera {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_skyboxData{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCamera", "m_skyboxData", 0x600};  // sky3dparams_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_skyboxSlotToken{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCamera", "m_skyboxSlotToken", 0x690};  // CUtlStringToken
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUseAngles{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCamera", "m_bUseAngles", 0x694};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pNext{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCamera", "m_pNext", 0x698};  // C_SkyCamera*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Base {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nEditorNodeID{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Base", "m_nEditorNodeID", 0x8};  // PulseDocNodeID_t
            }
            // Parent: None
            // Field count: 0
            namespace C_FuncRotating {
            }
            // Parent: C_BaseEntity
            // Field count: 6
            namespace C_SoundOpvarSetPointBase {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszStackName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundOpvarSetPointBase", "m_iszStackName", 0x600};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszOperatorName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundOpvarSetPointBase", "m_iszOperatorName", 0x608};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszOpvarName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundOpvarSetPointBase", "m_iszOpvarName", 0x610};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iOpvarIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundOpvarSetPointBase", "m_iOpvarIndex", 0x618};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUseAutoCompare{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundOpvarSetPointBase", "m_bUseAutoCompare", 0x61C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFastRefresh{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundOpvarSetPointBase", "m_bFastRefresh", 0x61D};  // bool
            }
            // Parent: C_BaseEntity
            // Field count: 24
            namespace C_EnvCubemapFog {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flEndDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_flEndDistance", 0x600};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_flStartDistance", 0x604};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogFalloffExponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_flFogFalloffExponent", 0x608};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHeightFogEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_bHeightFogEnabled", 0x60C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogHeightWidth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_flFogHeightWidth", 0x610};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogHeightEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_flFogHeightEnd", 0x614};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogHeightStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_flFogHeightStart", 0x618};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogHeightExponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_flFogHeightExponent", 0x61C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLODBias{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_flLODBias", 0x620};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bActive{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_bActive", 0x624};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStartDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_bStartDisabled", 0x625};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogMaxOpacity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_flFogMaxOpacity", 0x628};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCubemapSourceType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_nCubemapSourceType", 0x62C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hSkyMaterial{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_hSkyMaterial", 0x630};  // CStrongHandle<InfoForResourceTypeIMaterial2>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszSkyEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_iszSkyEntity", 0x638};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nHeightFogType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_nHeightFogType", 0x640};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFogHeightBlendMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_nFogHeightBlendMode", 0x644};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFogHeightCoordinateSpace{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_nFogHeightCoordinateSpace", 0x648};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDistanceFogType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_nDistanceFogType", 0x64C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_DistanceFogCurveString{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_DistanceFogCurveString", 0x650};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_HeightFogCurveString{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_HeightFogCurveString", 0x658};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hFogCubemapTexture{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_hFogCubemapTexture", 0x6F0};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasHeightFogEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_bHasHeightFogEnd", 0x6F8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFirstTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemapFog", "m_bFirstTime", 0x6F9};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamSelectTerroristPosition {
            }
            // Parent: C_ParticleSystem
            // Field count: 5
            namespace C_EnvParticleGlow {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAlphaScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvParticleGlow", "m_flAlphaScale", 0x1668};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRadiusScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvParticleGlow", "m_flRadiusScale", 0x166C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSelfIllumScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvParticleGlow", "m_flSelfIllumScale", 0x1670};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ColorTint{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvParticleGlow", "m_ColorTint", 0x1674};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hTextureOverride{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvParticleGlow", "m_hTextureOverride", 0x1678};  // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: None
            // Field count: 0
            namespace CCS_PortraitWorldCallbackHandler {
            }
            // Parent: None
            // Field count: 9
            namespace CCSPlayerController_InventoryServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecNetworkableLoadout{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_InventoryServices", "m_vecNetworkableLoadout", 0x40};  // CUtlVector<CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unMusicID{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_InventoryServices", "m_unMusicID", 0x58};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_rank{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_InventoryServices", "m_rank", 0x5C};  // MedalRank_t[6]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPersonaDataPublicLevel{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_InventoryServices", "m_nPersonaDataPublicLevel", 0x74};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPersonaDataPublicCommendsLeader{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_InventoryServices", "m_nPersonaDataPublicCommendsLeader", 0x78};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPersonaDataPublicCommendsTeacher{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_InventoryServices", "m_nPersonaDataPublicCommendsTeacher", 0x7C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPersonaDataPublicCommendsFriendly{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_InventoryServices", "m_nPersonaDataPublicCommendsFriendly", 0x80};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPersonaDataXpTrailLevel{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_InventoryServices", "m_nPersonaDataXpTrailLevel", 0x84};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecServerAuthoritativeWeaponSlots{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_InventoryServices", "m_vecServerAuthoritativeWeaponSlots", 0x88};  // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
            }
            // Parent: None
            // Field count: 9
            namespace CCSPlayerModernJump {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLastActualJumpPressTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerModernJump", "m_nLastActualJumpPressTick", 0x10};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastActualJumpPressFrac{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerModernJump", "m_flLastActualJumpPressFrac", 0x14};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLastUsableJumpPressTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerModernJump", "m_nLastUsableJumpPressTick", 0x18};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastUsableJumpPressFrac{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerModernJump", "m_flLastUsableJumpPressFrac", 0x1C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLastLandedTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerModernJump", "m_nLastLandedTick", 0x20};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastLandedFrac{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerModernJump", "m_flLastLandedFrac", 0x24};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastLandedVelocityX{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerModernJump", "m_flLastLandedVelocityX", 0x28};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastLandedVelocityY{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerModernJump", "m_flLastLandedVelocityY", 0x2C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastLandedVelocityZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerModernJump", "m_flLastLandedVelocityZ", 0x30};  // float32
            }
            // Parent: None
            // Field count: 1
            namespace C_EconEntity__AttachedModelData_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iModelDisplayFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity__AttachedModelData_t", "m_iModelDisplayFlags", 0x0};  // int32
            }
            // Parent: None
            // Field count: 0
            namespace CPulse_ResumePoint {
            }
            // Parent: C_BaseTrigger
            // Field count: 9
            namespace CTriggerFan {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vFanOriginOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "CTriggerFan", "m_vFanOriginOffset", 0x1180};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vDirection{::cs2_dumper::runtime::Category::Schema, "client.dll", "CTriggerFan", "m_vDirection", 0x118C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPushTowardsInfoTarget{::cs2_dumper::runtime::Category::Schema, "client.dll", "CTriggerFan", "m_bPushTowardsInfoTarget", 0x1198};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPushAwayFromInfoTarget{::cs2_dumper::runtime::Category::Schema, "client.dll", "CTriggerFan", "m_bPushAwayFromInfoTarget", 0x1199};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_qNoiseDelta{::cs2_dumper::runtime::Category::Schema, "client.dll", "CTriggerFan", "m_qNoiseDelta", 0x11A0};  // Quaternion
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hInfoFan{::cs2_dumper::runtime::Category::Schema, "client.dll", "CTriggerFan", "m_hInfoFan", 0x11B0};  // CHandle<CInfoFan>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flForce{::cs2_dumper::runtime::Category::Schema, "client.dll", "CTriggerFan", "m_flForce", 0x11B4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFalloff{::cs2_dumper::runtime::Category::Schema, "client.dll", "CTriggerFan", "m_bFalloff", 0x11B8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_RampTimer{::cs2_dumper::runtime::Category::Schema, "client.dll", "CTriggerFan", "m_RampTimer", 0x11C0};  // CountdownTimer
            }
            // Parent: None
            // Field count: 0
            namespace C_HostageCarriableProp {
            }
            // Parent: None
            // Field count: 6
            namespace C_BulletHitModel {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_matLocal{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BulletHitModel", "m_matLocal", 0x1268};  // matrix3x4_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iBoneIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BulletHitModel", "m_iBoneIndex", 0x1298};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hPlayerParent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BulletHitModel", "m_hPlayerParent", 0x129C};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsHit{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BulletHitModel", "m_bIsHit", 0x12A0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTimeCreated{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BulletHitModel", "m_flTimeCreated", 0x12A4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecStartPos{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BulletHitModel", "m_vecStartPos", 0x12A8};  // VectorWS
            }
            // Parent: None
            // Field count: 3
            namespace C_FuncElectrifiedVolume {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nAmbientEffect{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncElectrifiedVolume", "m_nAmbientEffect", 0x1098};  // ParticleIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_EffectName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncElectrifiedVolume", "m_EffectName", 0x10A0};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncElectrifiedVolume", "m_bState", 0x10A8};  // bool
            }
            // Parent: None
            // Field count: 17
            namespace C_MapVetoPickController {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDraftType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_nDraftType", 0x610};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTeamWinningCoinToss{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_nTeamWinningCoinToss", 0x614};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTeamWithFirstChoice{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_nTeamWithFirstChoice", 0x618};  // int32[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nVoteMapIdsList{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_nVoteMapIdsList", 0x718};  // int32[7]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nAccountIDs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_nAccountIDs", 0x734};  // int32[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMapId0{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_nMapId0", 0x834};  // int32[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMapId1{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_nMapId1", 0x934};  // int32[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMapId2{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_nMapId2", 0xA34};  // int32[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMapId3{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_nMapId3", 0xB34};  // int32[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMapId4{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_nMapId4", 0xC34};  // int32[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMapId5{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_nMapId5", 0xD34};  // int32[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nStartingSide0{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_nStartingSide0", 0xE34};  // int32[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCurrentPhase{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_nCurrentPhase", 0xF34};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPhaseStartTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_nPhaseStartTick", 0xF38};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPhaseDurationTicks{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_nPhaseDurationTicks", 0xF3C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPostDataUpdateTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_nPostDataUpdateTick", 0xF40};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDisabledHud{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MapVetoPickController", "m_bDisabledHud", 0xF44};  // bool
            }
            // Parent: C_BaseEntity
            // Field count: 18
            namespace C_EnvVolumetricFogVolume {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bActive{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_bActive", 0x600};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vBoxMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_vBoxMins", 0x604};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vBoxMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_vBoxMaxs", 0x610};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStartDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_bStartDisabled", 0x61C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIndirectUseLPVs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_bIndirectUseLPVs", 0x61D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_flStrength", 0x620};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFalloffShape{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_nFalloffShape", 0x624};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFalloffExponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_flFalloffExponent", 0x628};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flHeightFogDepth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_flHeightFogDepth", 0x62C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fHeightFogEdgeWidth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_fHeightFogEdgeWidth", 0x630};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fIndirectLightStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_fIndirectLightStrength", 0x634};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fSunLightStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_fSunLightStrength", 0x638};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fNoiseStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_fNoiseStrength", 0x63C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_TintColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_TintColor", 0x640};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bOverrideTintColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_bOverrideTintColor", 0x644};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bOverrideIndirectLightStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_bOverrideIndirectLightStrength", 0x645};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bOverrideSunLightStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_bOverrideSunLightStrength", 0x646};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bOverrideNoiseStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogVolume", "m_bOverrideNoiseStrength", 0x647};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_EndOfMatchCharacterPosition {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_PlaySequence {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SequenceName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_PlaySequence", "m_SequenceName", 0xD8};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PulseAnimEvents{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_PlaySequence", "m_PulseAnimEvents", 0xE0};  // PulseNodeDynamicOutflows_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnFinished{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_PlaySequence", "m_OnFinished", 0xF8};  // CPulse_ResumePoint
            }
            // Parent: C_BaseModelEntity
            // Field count: 76
            namespace C_BarnLight {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_bEnabled", 0x1098};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nColorMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_nColorMode", 0x109C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Color{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_Color", 0x10A0};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flColorTemperature{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flColorTemperature", 0x10A4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBrightness{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flBrightness", 0x10A8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBrightnessScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flBrightnessScale", 0x10AC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDirectLight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_nDirectLight", 0x10B0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBakedShadowIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_nBakedShadowIndex", 0x10B4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLightPathUniqueId{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_nLightPathUniqueId", 0x10B8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLightMapUniqueId{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_nLightMapUniqueId", 0x10BC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLuminaireShape{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_nLuminaireShape", 0x10C0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLuminaireSize{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flLuminaireSize", 0x10C4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLuminaireAnisotropy{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flLuminaireAnisotropy", 0x10C8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_LightStyleString{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_LightStyleString", 0x10D0};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLightStyleStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flLightStyleStartTime", 0x10D8};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_QueuedLightStyleStrings{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_QueuedLightStyleStrings", 0x10E0};  // C_NetworkUtlVectorBase<CUtlString>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_LightStyleEvents{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_LightStyleEvents", 0x10F8};  // C_NetworkUtlVectorBase<CUtlString>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_LightStyleTargets{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_LightStyleTargets", 0x1110};  // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_StyleEvent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_StyleEvent", 0x1128};  // CEntityIOOutput[4]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hLightCookie{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_hLightCookie", 0x1188};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flShape{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flShape", 0x1190};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSoftX{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flSoftX", 0x1194};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSoftY{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flSoftY", 0x1198};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSkirt{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flSkirt", 0x119C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSkirtNear{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flSkirtNear", 0x11A0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vSizeParams{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vSizeParams", 0x11A4};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRange{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flRange", 0x11B0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vShear{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vShear", 0x11B4};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBakeSpecularToCubemaps{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_nBakeSpecularToCubemaps", 0x11C0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vBakeSpecularToCubemapsSize{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vBakeSpecularToCubemapsSize", 0x11C4};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBakeSpecularToCubemapsScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flBakeSpecularToCubemapsScale", 0x11D0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCastShadows{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_nCastShadows", 0x11D4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nShadowMapSize{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_nShadowMapSize", 0x11D8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nShadowPriority{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_nShadowPriority", 0x11DC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bContactShadow{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_bContactShadow", 0x11E0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bForceShadowsEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_bForceShadowsEnabled", 0x11E1};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBounceLight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_nBounceLight", 0x11E4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBounceScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flBounceScale", 0x11E8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMinRoughness{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flMinRoughness", 0x11EC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vAlternateColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vAlternateColor", 0x11F0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fAlternateColorBrightness{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_fAlternateColorBrightness", 0x11FC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFog{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_nFog", 0x1200};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flFogStrength", 0x1204};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFogShadows{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_nFogShadows", 0x1208};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flFogScale", 0x120C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeSizeStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flFadeSizeStart", 0x1210};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeSizeEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flFadeSizeEnd", 0x1214};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flShadowFadeSizeStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flShadowFadeSizeStart", 0x1218};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flShadowFadeSizeEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_flShadowFadeSizeEnd", 0x121C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPrecomputedFieldsValid{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_bPrecomputedFieldsValid", 0x1220};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedBoundsMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedBoundsMins", 0x1224};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedBoundsMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedBoundsMaxs", 0x1230};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBOrigin", 0x123C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBAngles{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBAngles", 0x1248};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBExtent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBExtent", 0x1254};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPrecomputedSubFrusta{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_nPrecomputedSubFrusta", 0x1260};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBOrigin0{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBOrigin0", 0x1264};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBAngles0{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBAngles0", 0x1270};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBExtent0{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBExtent0", 0x127C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBOrigin1{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBOrigin1", 0x1288};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBAngles1{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBAngles1", 0x1294};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBExtent1{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBExtent1", 0x12A0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBOrigin2{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBOrigin2", 0x12AC};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBAngles2{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBAngles2", 0x12B8};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBExtent2{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBExtent2", 0x12C4};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBOrigin3{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBOrigin3", 0x12D0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBAngles3{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBAngles3", 0x12DC};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBExtent3{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBExtent3", 0x12E8};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBOrigin4{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBOrigin4", 0x12F4};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBAngles4{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBAngles4", 0x1300};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBExtent4{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBExtent4", 0x130C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBOrigin5{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBOrigin5", 0x1318};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBAngles5{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBAngles5", 0x1324};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBExtent5{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_vPrecomputedOBBExtent5", 0x1330};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInitialBoneSetup{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_bInitialBoneSetup", 0x1380};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_VisClusters{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BarnLight", "m_VisClusters", 0x1388};  // C_NetworkUtlVectorBase<uint16>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_LerpCameraSettings {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSeconds{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_LerpCameraSettings", "m_flSeconds", 0x120};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Start{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_LerpCameraSettings", "m_Start", 0x124};  // PointCameraSettings_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_End{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_LerpCameraSettings", "m_End", 0x134};  // PointCameraSettings_t
            }
            // Parent: None
            // Field count: 4
            namespace CPointOffScreenIndicatorUi {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBeenEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointOffScreenIndicatorUi", "m_bBeenEnabled", 0x1300};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHide{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointOffScreenIndicatorUi", "m_bHide", 0x1301};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSeenTargetTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointOffScreenIndicatorUi", "m_flSeenTargetTime", 0x1304};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pTargetPanel{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointOffScreenIndicatorUi", "m_pTargetPanel", 0x1308};  // C_PointClientUIWorldPanel*
            }
            // Parent: None
            // Field count: 0
            namespace CCSObserver_UseServices {
            }
            // Parent: C_BaseTrigger
            // Field count: 12
            namespace C_PostProcessingVolume {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hPostSettings{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PostProcessingVolume", "m_hPostSettings", 0x1190};  // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PostProcessingVolume", "m_flFadeDuration", 0x1198};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMinLogExposure{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PostProcessingVolume", "m_flMinLogExposure", 0x119C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMaxLogExposure{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PostProcessingVolume", "m_flMaxLogExposure", 0x11A0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMinExposure{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PostProcessingVolume", "m_flMinExposure", 0x11A4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMaxExposure{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PostProcessingVolume", "m_flMaxExposure", 0x11A8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flExposureCompensation{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PostProcessingVolume", "m_flExposureCompensation", 0x11AC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flExposureFadeSpeedUp{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PostProcessingVolume", "m_flExposureFadeSpeedUp", 0x11B0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flExposureFadeSpeedDown{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PostProcessingVolume", "m_flExposureFadeSpeedDown", 0x11B4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTonemapEVSmoothingRange{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PostProcessingVolume", "m_flTonemapEVSmoothingRange", 0x11B8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bMaster{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PostProcessingVolume", "m_bMaster", 0x11BC};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bExposureControl{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PostProcessingVolume", "m_bExposureControl", 0x11BD};  // bool
            }
            // Parent: C_BaseTrigger
            // Field count: 1
            namespace CCSMinimapVolume {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strMinimapName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSMinimapVolume", "m_strMinimapName", 0x1180};  // CUtlString
            }
            // Parent: None
            // Field count: 0
            namespace CCSPlayer_UseServices {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_BaseModelEntity__Emphasized_Phoneme {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sClassName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity__Emphasized_Phoneme", "m_sClassName", 0x0};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAmount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity__Emphasized_Phoneme", "m_flAmount", 0x18};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRequired{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity__Emphasized_Phoneme", "m_bRequired", 0x1C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBasechecked{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity__Emphasized_Phoneme", "m_bBasechecked", 0x1D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bValid{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity__Emphasized_Phoneme", "m_bValid", 0x1E};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_CounterTerroristWingmanIntroCamera {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_PickBestOutflowSelector {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCheckType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_PickBestOutflowSelector", "m_nCheckType", 0x48};  // PulseBestOutflowRules_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OutflowList{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_PickBestOutflowSelector", "m_OutflowList", 0x50};  // PulseSelectorOutflowList_t
            }
            // Parent: C_PointEntity
            // Field count: 4
            namespace CInfoFan {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fFanForceMaxRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoFan", "m_fFanForceMaxRadius", 0x640};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fFanForceMinRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoFan", "m_fFanForceMinRadius", 0x644};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCurveDistRange{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoFan", "m_flCurveDistRange", 0x648};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_FanForceCurveString{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoFan", "m_FanForceCurveString", 0x650};  // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 7
            namespace C_VoteController {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iActiveIssueIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_VoteController", "m_iActiveIssueIndex", 0x610};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iOnlyTeamToVote{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_VoteController", "m_iOnlyTeamToVote", 0x614};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nVoteOptionCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_VoteController", "m_nVoteOptionCount", 0x618};  // int32[5]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPotentialVotes{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_VoteController", "m_nPotentialVotes", 0x62C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bVotesDirty{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_VoteController", "m_bVotesDirty", 0x630};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bTypeDirty{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_VoteController", "m_bTypeDirty", 0x631};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsYesNoVote{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_VoteController", "m_bIsYesNoVote", 0x632};  // bool
            }
            // Parent: None
            // Field count: 10
            namespace C_C4 {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_activeLightParticleIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_C4", "m_activeLightParticleIndex", 0x1F20};  // ParticleIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_eActiveLightEffect{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_C4", "m_eActiveLightEffect", 0x1F24};  // C4LightEffect_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStartedArming{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_C4", "m_bStartedArming", 0x1F28};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fArmedTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_C4", "m_fArmedTime", 0x1F2C};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBombPlacedAnimation{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_C4", "m_bBombPlacedAnimation", 0x1F30};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsPlantingViaUse{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_C4", "m_bIsPlantingViaUse", 0x1F31};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_entitySpottedState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_C4", "m_entitySpottedState", 0x1F38};  // EntitySpottedState_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSpotRules{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_C4", "m_nSpotRules", 0x1F50};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPlayedArmingBeeps{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_C4", "m_bPlayedArmingBeeps", 0x1F54};  // bool[7]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBombPlanted{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_C4", "m_bBombPlanted", 0x1F5B};  // bool
            }
            // Parent: C_BasePlayerPawn
            // Field count: 26
            namespace C_CSPlayerPawnBase {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pPingServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_pPingServices", 0x14D8};  // CCSPlayer_PingServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_previousPlayerState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_previousPlayerState", 0x14E0};  // CSPlayerState
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iPlayerState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_iPlayerState", 0x14E4};  // CSPlayerState
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasMovedSinceSpawn{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_bHasMovedSinceSpawn", 0x14E8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastSpawnTimeIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_flLastSpawnTimeIndex", 0x14EC};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iProgressBarDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_iProgressBarDuration", 0x14F0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flProgressBarStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_flProgressBarStartTime", 0x14F4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flClientDeathTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_flClientDeathTime", 0x14F8};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFlashBangTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_flFlashBangTime", 0x14FC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFlashScreenshotAlpha{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_flFlashScreenshotAlpha", 0x1500};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFlashOverlayAlpha{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_flFlashOverlayAlpha", 0x1504};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFlashBuildUp{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_bFlashBuildUp", 0x1508};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFlashDspHasBeenCleared{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_bFlashDspHasBeenCleared", 0x1509};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFlashScreenshotHasBeenGrabbed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_bFlashScreenshotHasBeenGrabbed", 0x150A};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFlashMaxAlpha{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_flFlashMaxAlpha", 0x150C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFlashDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_flFlashDuration", 0x1510};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flClientHealthFadeChangeTimestamp{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_flClientHealthFadeChangeTimestamp", 0x1514};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nClientHealthFadeParityValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_nClientHealthFadeParityValue", 0x1518};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fNextThinkPushAway{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_fNextThinkPushAway", 0x151C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCurrentMusicStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_flCurrentMusicStartTime", 0x1524};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMusicRoundStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_flMusicRoundStartTime", 0x1528};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDeferStartMusicOnWarmup{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_bDeferStartMusicOnWarmup", 0x152C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastSmokeOverlayAlpha{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_flLastSmokeOverlayAlpha", 0x1530};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastSmokeAge{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_flLastSmokeAge", 0x1534};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vLastSmokeOverlayColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_vLastSmokeOverlayColor", 0x1538};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hOriginalController{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawnBase", "m_hOriginalController", 0x1560};  // CHandle<CCSPlayerController>
            }
            // Parent: CBaseProp
            // Field count: 29
            namespace C_BreakableProp {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_CPropDataComponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_CPropDataComponent", 0x12A0};  // CPropDataComponent
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnStartDeath{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_OnStartDeath", 0x12E0};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnBreak{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_OnBreak", 0x12F8};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnHealthChanged{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_OnHealthChanged", 0x1310};  // CEntityOutputTemplate<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnTakeDamage{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_OnTakeDamage", 0x1330};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_impactEnergyScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_impactEnergyScale", 0x1348};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMinHealthDmg{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_iMinHealthDmg", 0x134C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPressureDelay{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_flPressureDelay", 0x1350};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDefBurstScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_flDefBurstScale", 0x1354};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vDefBurstOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_vDefBurstOffset", 0x1358};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hBreaker{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_hBreaker", 0x1364};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PerformanceMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_PerformanceMode", 0x1368};  // PerformanceMode_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPreventDamageBeforeTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_flPreventDamageBeforeTime", 0x136C};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_BreakableContentsType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_BreakableContentsType", 0x1370};  // BreakableContentsType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strBreakableContentsPropGroupOverride{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_strBreakableContentsPropGroupOverride", 0x1378};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strBreakableContentsParticleOverride{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_strBreakableContentsParticleOverride", 0x1380};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasBreakPiecesOrCommands{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_bHasBreakPiecesOrCommands", 0x1388};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_explodeDamage{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_explodeDamage", 0x138C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_explodeRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_explodeRadius", 0x1390};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sExplosionType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_sExplosionType", 0x1398};  // CGlobalSymbol
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_explosionDelay{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_explosionDelay", 0x13A0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_explosionBuildupSound{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_explosionBuildupSound", 0x13A8};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_explosionCustomEffect{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_explosionCustomEffect", 0x13B0};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_explosionCustomSound{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_explosionCustomSound", 0x13B8};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_explosionModifier{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_explosionModifier", 0x13C0};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hPhysicsAttacker{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_hPhysicsAttacker", 0x13C8};  // CHandle<C_BasePlayerPawn>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastPhysicsInfluenceTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_flLastPhysicsInfluenceTime", 0x13CC};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDefaultFadeScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_flDefaultFadeScale", 0x13D0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hLastAttacker{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BreakableProp", "m_hLastAttacker", 0x13D4};  // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 6
            namespace C_RetakeGameRules {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMatchSeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RetakeGameRules", "m_nMatchSeed", 0x138};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBlockersPresent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RetakeGameRules", "m_bBlockersPresent", 0x13C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRoundInProgress{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RetakeGameRules", "m_bRoundInProgress", 0x13D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iFirstSecondHalfRound{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RetakeGameRules", "m_iFirstSecondHalfRound", 0x140};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iBombSite{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RetakeGameRules", "m_iBombSite", 0x144};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hBombPlanter{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RetakeGameRules", "m_hBombPlanter", 0x148};  // CHandle<C_CSPlayerPawn>
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace C_SoundOpvarSetDomeEntity {
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPrecipitationVData {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szParticlePrecipitationEffect{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPrecipitationVData", "m_szParticlePrecipitationEffect", 0x28};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szParticlePrecipitationPuddleEffect{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPrecipitationVData", "m_szParticlePrecipitationPuddleEffect", 0x108};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szParticlePrecipitationPostEffect{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPrecipitationVData", "m_szParticlePrecipitationPostEffect", 0x1E8};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInnerDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPrecipitationVData", "m_flInnerDistance", 0x2C8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nAttachType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPrecipitationVData", "m_nAttachType", 0x2CC};  // ParticleAttachment_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBatchSameVolumeType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPrecipitationVData", "m_bBatchSameVolumeType", 0x2D0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRTEnvCP{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPrecipitationVData", "m_nRTEnvCP", 0x2D4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRTEnvCPComponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPrecipitationVData", "m_nRTEnvCPComponent", 0x2D8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szModifier{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPrecipitationVData", "m_szModifier", 0x2E0};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nUseSnapshotFromSurfaceGraph{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPrecipitationVData", "m_nUseSnapshotFromSurfaceGraph", 0x2E8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_snapshotFilter{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPrecipitationVData", "m_snapshotFilter", 0x2EC};  // PrecipitationFilter_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_WaitForObservable {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Condition{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_WaitForObservable", "m_Condition", 0xD8};  // CPulseObservableExpression<bool>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnTrue{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_WaitForObservable", "m_OnTrue", 0x168};  // CPulse_ResumePoint
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 1
            namespace C_SoundAreaEntitySphere {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundAreaEntitySphere", "m_flRadius", 0x628};  // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_EntFire {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Input{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Step_EntFire", "m_Input", 0x48};  // CUtlString
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponAWP {
            }
            // Parent: C_BaseModelEntity
            // Field count: 3
            namespace C_BaseButton {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_glowEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseButton", "m_glowEntity", 0x1098};  // CHandle<C_BaseModelEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_usable{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseButton", "m_usable", 0x109C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szDisplayText{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseButton", "m_szDisplayText", 0x10A0};  // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            namespace CCSObserver_ObserverServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_obsInterpState{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSObserver_ObserverServices", "m_obsInterpState", 0x68};  // ObserverInterpState_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CHitboxComponent {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBoundsExpandRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "CHitboxComponent", "m_flBoundsExpandRadius", 0x14};  // float32
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace C_SoundEventBoxHelper {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventBoxHelper", "m_vMins", 0x600};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventBoxHelper", "m_vMaxs", 0x60C};  // Vector
            }
            // Parent: C_SoundEventMultiPointEntity
            // Field count: 1
            namespace C_SoundEventBoxEntity {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecBoxHelpersNetworked{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventBoxEntity", "m_vecBoxHelpersNetworked", 0x6C0};  // C_NetworkUtlVectorBase<SoundeventBoxHelperNetworked_t>
            }
            // Parent: None
            // Field count: 3
            namespace ServerAuthoritativeWeaponSlot_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant unClass{::cs2_dumper::runtime::Category::Schema, "client.dll", "ServerAuthoritativeWeaponSlot_t", "unClass", 0x30};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant unSlot{::cs2_dumper::runtime::Category::Schema, "client.dll", "ServerAuthoritativeWeaponSlot_t", "unSlot", 0x32};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant unItemDefIdx{::cs2_dumper::runtime::Category::Schema, "client.dll", "ServerAuthoritativeWeaponSlot_t", "unItemDefIdx", 0x34};  // uint16
            }
            // Parent: None
            // Field count: 0
            namespace C_CSMinimapBoundary {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPathQueryComponent {
            }
            // Parent: None
            // Field count: 8
            namespace C_Precipitation {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDensity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Precipitation", "m_flDensity", 0x1180};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flParticleInnerDist{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Precipitation", "m_flParticleInnerDist", 0x1190};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pParticleDef{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Precipitation", "m_pParticleDef", 0x1198};  // char*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_tParticlePrecipTraceTimer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Precipitation", "m_tParticlePrecipTraceTimer", 0x11AC};  // TimedEvent[1]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bActiveParticlePrecipEmitter{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Precipitation", "m_bActiveParticlePrecipEmitter", 0x11B4};  // bool[1]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bParticlePrecipInitialized{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Precipitation", "m_bParticlePrecipInitialized", 0x11B5};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasSimulatedSinceLastSceneObjectUpdate{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Precipitation", "m_bHasSimulatedSinceLastSceneObjectUpdate", 0x11B6};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nAvailableSheetSequencesMaxIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Precipitation", "m_nAvailableSheetSequencesMaxIndex", 0x11B8};  // int32
            }
            // Parent: C_BaseEntity
            // Field count: 7
            namespace CLogicRelay {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnSpawn{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLogicRelay", "m_OnSpawn", 0x600};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnTrigger{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLogicRelay", "m_OnTrigger", 0x618};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLogicRelay", "m_bDisabled", 0x630};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWaitForRefire{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLogicRelay", "m_bWaitForRefire", 0x631};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bTriggerOnce{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLogicRelay", "m_bTriggerOnce", 0x632};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFastRetrigger{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLogicRelay", "m_bFastRetrigger", 0x633};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPassthoughCaller{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLogicRelay", "m_bPassthoughCaller", 0x634};  // bool
            }
            // Parent: None
            // Field count: 6
            namespace SequenceHistory_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hSequence{::cs2_dumper::runtime::Category::Schema, "client.dll", "SequenceHistory_t", "m_hSequence", 0x0};  // HSequence
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSeqStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "SequenceHistory_t", "m_flSeqStartTime", 0x4};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSeqFixedCycle{::cs2_dumper::runtime::Category::Schema, "client.dll", "SequenceHistory_t", "m_flSeqFixedCycle", 0x8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSeqLoopMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "SequenceHistory_t", "m_nSeqLoopMode", 0xC};  // AnimLoopMode_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPlaybackRate{::cs2_dumper::runtime::Category::Schema, "client.dll", "SequenceHistory_t", "m_flPlaybackRate", 0x10};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCyclesPerSecond{::cs2_dumper::runtime::Category::Schema, "client.dll", "SequenceHistory_t", "m_flCyclesPerSecond", 0x14};  // float32
            }
            // Parent: None
            // Field count: 0
            namespace CPlayer_ItemServices {
            }
            // Parent: None
            // Field count: 4
            namespace CPulse_OutflowConnection {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SourceOutflowName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_OutflowConnection", "m_SourceOutflowName", 0x0};  // PulseSymbol_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDestChunk{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_OutflowConnection", "m_nDestChunk", 0x10};  // PulseRuntimeChunkIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nInstruction{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_OutflowConnection", "m_nInstruction", 0x14};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OutflowRegisterMap{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_OutflowConnection", "m_OutflowRegisterMap", 0x18};  // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponUMP45 {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponG3SG1 {
            }
            // Parent: None
            // Field count: 2
            namespace C_SpotlightEnd {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLightScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SpotlightEnd", "m_flLightScale", 0x1098};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Radius{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SpotlightEnd", "m_Radius", 0x109C};  // float32
            }
            // Parent: None
            // Field count: 23
            namespace C_Fish {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pos{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_pos", 0x1268};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vel{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_vel", 0x1274};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_angles{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_angles", 0x1280};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_localLifeState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_localLifeState", 0x128C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_deathDepth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_deathDepth", 0x1290};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_deathAngle{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_deathAngle", 0x1294};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_buoyancy{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_buoyancy", 0x1298};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_wiggleTimer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_wiggleTimer", 0x12A0};  // CountdownTimer
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_wigglePhase{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_wigglePhase", 0x12B8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_wiggleRate{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_wiggleRate", 0x12BC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_actualPos{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_actualPos", 0x12C0};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_actualAngles{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_actualAngles", 0x12CC};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_poolOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_poolOrigin", 0x12D8};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_waterLevel{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_waterLevel", 0x12E4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_gotUpdate{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_gotUpdate", 0x12E8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_x{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_x", 0x12EC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_y{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_y", 0x12F0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_z{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_z", 0x12F4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_angle{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_angle", 0x12F8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_errorHistory{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_errorHistory", 0x12FC};  // float32[20]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_errorHistoryIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_errorHistoryIndex", 0x134C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_errorHistoryCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_errorHistoryCount", 0x1350};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_averageError{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Fish", "m_averageError", 0x1354};  // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponFamas {
            }
            // Parent: C_BaseEntity
            // Field count: 36
            namespace C_EnvVolumetricFogController {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flScattering{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_flScattering", 0x600};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_TintColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_TintColor", 0x604};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAnisotropy{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_flAnisotropy", 0x608};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_flFadeSpeed", 0x60C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDrawDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_flDrawDistance", 0x610};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeInStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_flFadeInStart", 0x614};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeInEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_flFadeInEnd", 0x618};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flIndirectStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_flIndirectStrength", 0x61C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nVolumeDepth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_nVolumeDepth", 0x620};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fFirstVolumeSliceThickness{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_fFirstVolumeSliceThickness", 0x624};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nIndirectTextureDimX{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_nIndirectTextureDimX", 0x628};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nIndirectTextureDimY{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_nIndirectTextureDimY", 0x62C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nIndirectTextureDimZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_nIndirectTextureDimZ", 0x630};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vBoxMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_vBoxMins", 0x634};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vBoxMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_vBoxMaxs", 0x640};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bActive{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_bActive", 0x64C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartAnisoTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_flStartAnisoTime", 0x650};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartScatterTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_flStartScatterTime", 0x654};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartDrawDistanceTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_flStartDrawDistanceTime", 0x658};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartAnisotropy{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_flStartAnisotropy", 0x65C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartScattering{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_flStartScattering", 0x660};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartDrawDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_flStartDrawDistance", 0x664};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDefaultAnisotropy{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_flDefaultAnisotropy", 0x668};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDefaultScattering{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_flDefaultScattering", 0x66C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDefaultDrawDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_flDefaultDrawDistance", 0x670};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStartDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_bStartDisabled", 0x674};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnableIndirect{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_bEnableIndirect", 0x675};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsMaster{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_bIsMaster", 0x676};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hFogIndirectTexture{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_hFogIndirectTexture", 0x678};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nForceRefreshCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_nForceRefreshCount", 0x680};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fNoiseSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_fNoiseSpeed", 0x684};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fNoiseStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_fNoiseStrength", 0x688};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vNoiseScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_vNoiseScale", 0x68C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fWindSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_fWindSpeed", 0x698};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vWindDirection{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_vWindDirection", 0x69C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFirstTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvVolumetricFogController", "m_bFirstTime", 0x6A8};  // bool
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseGraphDef {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_DomainIdentifier{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGraphDef", "m_DomainIdentifier", 0x8};  // PulseSymbol_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_DomainSubType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGraphDef", "m_DomainSubType", 0x18};  // CPulseValueFullType
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ParentMapName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGraphDef", "m_ParentMapName", 0x30};  // PulseSymbol_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ParentXmlName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGraphDef", "m_ParentXmlName", 0x40};  // PulseSymbol_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Chunks{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGraphDef", "m_Chunks", 0x50};  // CUtlVector<CPulse_Chunk*>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Cells{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGraphDef", "m_Cells", 0x68};  // CUtlVector<CPulseCell_Base*>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Vars{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGraphDef", "m_Vars", 0x80};  // CUtlVector<CPulse_Variable>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_TempVarBanks{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGraphDef", "m_TempVarBanks", 0x98};  // CUtlVector<CPulse_TempVarBankDefinition*>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PublicOutputs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGraphDef", "m_PublicOutputs", 0xB0};  // CUtlVector<CPulse_PublicOutput>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_InvokeBindings{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGraphDef", "m_InvokeBindings", 0xC8};  // CUtlVector<CPulse_InvokeBinding*>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_CallInfos{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGraphDef", "m_CallInfos", 0xE0};  // CUtlVector<CPulse_CallInfo*>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Constants{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGraphDef", "m_Constants", 0xF8};  // CUtlVector<CPulse_Constant>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_DomainValues{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGraphDef", "m_DomainValues", 0x110};  // CUtlVector<CPulse_DomainValue>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_BlackboardReferences{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGraphDef", "m_BlackboardReferences", 0x128};  // CUtlVector<CPulse_BlackboardReference>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OutputConnections{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGraphDef", "m_OutputConnections", 0x140};  // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace C_EnvDetailController {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeStartDist{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvDetailController", "m_flFadeStartDist", 0x600};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeEndDist{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvDetailController", "m_flFadeEndDist", 0x604};  // float32
            }
            // Parent: None
            // Field count: 0
            namespace CHostageRescueZoneShim {
            }
            // Parent: None
            // Field count: 0
            namespace CEnvSoundscapeAlias_snd_soundscape {
            }
            // Parent: None
            // Field count: 2
            namespace CCSPlayer_HostageServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hCarriedHostage{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_HostageServices", "m_hCarriedHostage", 0x48};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hCarriedHostageProp{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_HostageServices", "m_hCarriedHostageProp", 0x4C};  // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 0
            namespace C_GameRulesProxy {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRenderComponent {
                inline constexpr ::cs2_dumper::runtime::dumper_constant __m_pChainEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CRenderComponent", "__m_pChainEntity", 0x10};  // CNetworkVarChainer
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsRenderingWithViewModels{::cs2_dumper::runtime::Category::Schema, "client.dll", "CRenderComponent", "m_bIsRenderingWithViewModels", 0x50};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSplitscreenFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "CRenderComponent", "m_nSplitscreenFlags", 0x54};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnableRendering{::cs2_dumper::runtime::Category::Schema, "client.dll", "CRenderComponent", "m_bEnableRendering", 0x58};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInterpolationReadyToDraw{::cs2_dumper::runtime::Category::Schema, "client.dll", "CRenderComponent", "m_bInterpolationReadyToDraw", 0xA8};  // bool
            }
            // Parent: C_BaseEntity
            // Field count: 4
            namespace C_Team {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_aPlayerControllers{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Team", "m_aPlayerControllers", 0x600};  // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_aPlayers{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Team", "m_aPlayers", 0x618};  // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iScore{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Team", "m_iScore", 0x630};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szTeamname{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Team", "m_szTeamname", 0x634};  // char[129]
            }
            // Parent: None
            // Field count: 0
            namespace C_PathParticleRopeAlias_path_particle_rope_clientside {
            }
            // Parent: C_PointEntity
            // Field count: 1
            namespace CPointChildModifier {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bOrphanInsteadOfDeletingChildrenOnRemove{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointChildModifier", "m_bOrphanInsteadOfDeletingChildrenOnRemove", 0x600};  // bool
            }
            // Parent: None
            // Field count: 2
            namespace CCSPlayerLegacyJump {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bOldJumpPressed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerLegacyJump", "m_bOldJumpPressed", 0x10};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flJumpPressedTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerLegacyJump", "m_flJumpPressedTime", 0x14};  // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponNOVA {
            }
            // Parent: None
            // Field count: 0
            namespace C_CS2HudModelAddon {
            }
            // Parent: None
            // Field count: 0
            namespace C_DEagle {
            }
            // Parent: None
            // Field count: 0
            namespace C_TriggerMultiple {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TerroristRushIntroCamera {
            }
            // Parent: C_CSGO_MapPreviewCameraPath
            // Field count: 1
            namespace C_CSGO_TeamPreviewCamera {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nVariant{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_TeamPreviewCamera", "m_nVariant", 0x688};  // int32
            }
            // Parent: None
            // Field count: 9
            namespace C_ColorCorrectionVolume {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_LastEnterWeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrectionVolume", "m_LastEnterWeight", 0x1180};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_LastEnterTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrectionVolume", "m_LastEnterTime", 0x1184};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_LastExitWeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrectionVolume", "m_LastExitWeight", 0x1188};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_LastExitTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrectionVolume", "m_LastExitTime", 0x118C};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrectionVolume", "m_bEnabled", 0x1190};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_MaxWeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrectionVolume", "m_MaxWeight", 0x1194};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_FadeDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrectionVolume", "m_FadeDuration", 0x1198};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Weight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrectionVolume", "m_Weight", 0x119C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_lookupFilename{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrectionVolume", "m_lookupFilename", 0x11A0};  // char[512]
            }
            // Parent: None
            // Field count: 18
            namespace CPlayer_MovementServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nImpulse{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_nImpulse", 0x48};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nButtons{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_nButtons", 0x50};  // CInButtonState
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nQueuedButtonDownMask{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_nQueuedButtonDownMask", 0x70};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nQueuedButtonChangeMask{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_nQueuedButtonChangeMask", 0x78};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nButtonDoublePressed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_nButtonDoublePressed", 0x80};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pButtonPressedCmdNumber{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_pButtonPressedCmdNumber", 0x88};  // uint32[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLastCommandNumberProcessed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_nLastCommandNumberProcessed", 0x188};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nToggleButtonDownMask{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_nToggleButtonDownMask", 0x190};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCmdForwardMove{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_flCmdForwardMove", 0x1A0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCmdLeftMove{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_flCmdLeftMove", 0x1A4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCmdUpMove{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_flCmdUpMove", 0x1A8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMaxspeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_flMaxspeed", 0x1AC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_arrForceSubtickMoveWhen{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_arrForceSubtickMoveWhen", 0x1B0};  // float32[4]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flForwardMove{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_flForwardMove", 0x1C0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLeftMove{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_flLeftMove", 0x1C4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flUpMove{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_flUpMove", 0x1C8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecLastMovementImpulses{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_vecLastMovementImpulses", 0x1CC};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecOldViewAngles{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices", "m_vecOldViewAngles", 0x240};  // QAngle
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            namespace CInfoDynamicShadowHintBox {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vBoxMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoDynamicShadowHintBox", "m_vBoxMins", 0x618};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vBoxMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoDynamicShadowHintBox", "m_vBoxMaxs", 0x624};  // Vector
            }
            // Parent: CSkeletonAnimationController
            // Field count: 32
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseAnimGraphController {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nAnimationAlgorithm{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_nAnimationAlgorithm", 0x18};  // AnimationAlgorithm_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nNextExternalGraphHandle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_nNextExternalGraphHandle", 0x1C};  // ExternalAnimGraphHandle_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecSecondarySkeletonSlotIDs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_vecSecondarySkeletonSlotIDs", 0x20};  // C_NetworkUtlVectorBase<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecSecondarySkeletons{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_vecSecondarySkeletons", 0x38};  // C_NetworkUtlVectorBase<CHandle<CBaseAnimGraph>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSecondarySkeletonMasterCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_nSecondarySkeletonMasterCount", 0x50};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSoundSyncTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_flSoundSyncTime", 0x58};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nActiveIKChainMask{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_nActiveIKChainMask", 0x5C};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hSequence{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_hSequence", 0xB0};  // HSequence
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSeqStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_flSeqStartTime", 0xB4};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSeqFixedCycle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_flSeqFixedCycle", 0xB8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nAnimLoopMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_nAnimLoopMode", 0xBC};  // AnimLoopMode_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPlaybackRate{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_flPlaybackRate", 0xC0};  // CNetworkedQuantizedFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nNotifyState{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_nNotifyState", 0xCC};  // SequenceFinishNotifyState_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNetworkedAnimationInputsChanged{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_bNetworkedAnimationInputsChanged", 0xCD};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNetworkedSequenceChanged{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_bNetworkedSequenceChanged", 0xCE};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bLastUpdateSkipped{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_bLastUpdateSkipped", 0xCF};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSequenceFinished{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_bSequenceFinished", 0xD0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPrevAnimUpdateTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_nPrevAnimUpdateTick", 0xD4};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hGraphDefinitionAG2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_hGraphDefinitionAG2", 0x370};  // CStrongHandle<InfoForResourceTypeCNmGraphDefinition>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SerializePoseRecipeAG2Slots{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_SerializePoseRecipeAG2Slots", 0x378};  // C_UtlVectorEmbeddedNetworkVar<AnimGraph2SerializedPoseRecipeSlot_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SerializePoseRecipeAG2Dynamic{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_SerializePoseRecipeAG2Dynamic", 0x3E0};  // C_NetworkUtlVectorBase<uint8>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSerializePoseRecipeAG2ActiveSlot{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_nSerializePoseRecipeAG2ActiveSlot", 0x3F8};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSerializePoseRecipeVersionAG2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_nSerializePoseRecipeVersionAG2", 0x3FC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nServerGraphInstanceIteration{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_nServerGraphInstanceIteration", 0x400};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nServerSerializationContextIteration{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_nServerSerializationContextIteration", 0x404};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_primaryGraphId{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_primaryGraphId", 0x408};  // ResourceId_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecExternalGraphIds{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_vecExternalGraphIds", 0x410};  // C_NetworkUtlVectorBase<ResourceId_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecExternalClipIds{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_vecExternalClipIds", 0x428};  // C_NetworkUtlVectorBase<ResourceId_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sAnimGraph2Identifier{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_sAnimGraph2Identifier", 0x440};  // CGlobalSymbol
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pGraphInstanceAG2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_pGraphInstanceAG2", 0x448};  // CAnimGraph2InstancePtr
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecExternalGraphs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_vecExternalGraphs", 0x668};  // CExternalAnimGraphList
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPrevAnimationAlgorithm{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraphController", "m_nPrevAnimationAlgorithm", 0x699};  // AnimationAlgorithm_t
            }
            // Parent: None
            // Field count: 18
            namespace C_ColorCorrection {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_vecOrigin", 0x600};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_MinFalloff{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_MinFalloff", 0x60C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_MaxFalloff{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_MaxFalloff", 0x610};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeInDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_flFadeInDuration", 0x614};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeOutDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_flFadeOutDuration", 0x618};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMaxWeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_flMaxWeight", 0x61C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCurWeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_flCurWeight", 0x620};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_netlookupFilename{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_netlookupFilename", 0x624};  // char[512]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_bEnabled", 0x824};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bMaster{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_bMaster", 0x825};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bClientSide{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_bClientSide", 0x826};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bExclusive{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_bExclusive", 0x827};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnabledOnClient{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_bEnabledOnClient", 0x828};  // bool[1]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCurWeightOnClient{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_flCurWeightOnClient", 0x82C};  // float32[1]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFadingIn{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_bFadingIn", 0x830};  // bool[1]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeStartWeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_flFadeStartWeight", 0x834};  // float32[1]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_flFadeStartTime", 0x838};  // float32[1]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ColorCorrection", "m_flFadeDuration", 0x83C};  // float32[1]
            }
            // Parent: None
            // Field count: 1
            namespace AnimGraph2SerializedPoseRecipeSlot_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_topology{::cs2_dumper::runtime::Category::Schema, "client.dll", "AnimGraph2SerializedPoseRecipeSlot_t", "m_topology", 0x30};  // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBuoyancyHelper {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pController{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBuoyancyHelper", "m_pController", 0x8};  // IPhysicsMotionController*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFluidType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBuoyancyHelper", "m_nFluidType", 0x18};  // CUtlStringToken
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFluidDensity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBuoyancyHelper", "m_flFluidDensity", 0x1C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNeutrallyBuoyantGravity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBuoyancyHelper", "m_flNeutrallyBuoyantGravity", 0x20};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNeutrallyBuoyantLinearDamping{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBuoyancyHelper", "m_flNeutrallyBuoyantLinearDamping", 0x24};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNeutrallyBuoyantAngularDamping{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBuoyancyHelper", "m_flNeutrallyBuoyantAngularDamping", 0x28};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNeutrallyBuoyant{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBuoyancyHelper", "m_bNeutrallyBuoyant", 0x2C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecFractionOfWheelSubmergedForWheelFriction{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBuoyancyHelper", "m_vecFractionOfWheelSubmergedForWheelFriction", 0x30};  // CUtlVector<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecWheelFrictionScales{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBuoyancyHelper", "m_vecWheelFrictionScales", 0x48};  // CUtlVector<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecFractionOfWheelSubmergedForWheelDrag{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBuoyancyHelper", "m_vecFractionOfWheelSubmergedForWheelDrag", 0x60};  // CUtlVector<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecWheelDrag{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBuoyancyHelper", "m_vecWheelDrag", 0x78};  // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 0
            namespace C_PhysBox {
            }
            // Parent: None
            // Field count: 4
            namespace CCSPlayer_CameraServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDeathCamTilt{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_CameraServices", "m_flDeathCamTilt", 0x2B0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hDeathCamBounds{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_CameraServices", "m_hDeathCamBounds", 0x2B4};  // CHandle<C_PointDeathcamBounds>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDeathCamBoundsSearched{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_CameraServices", "m_bDeathCamBoundsSearched", 0x2B8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vClientScopeInaccuracy{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_CameraServices", "m_vClientScopeInaccuracy", 0x2C0};  // Vector
            }
            // Parent: CBaseFilter
            // Field count: 3
            namespace CFilterMultiple {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFilterType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFilterMultiple", "m_nFilterType", 0x638};  // filter_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iFilterName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFilterMultiple", "m_iFilterName", 0x640};  // CUtlSymbolLarge[10]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hFilter{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFilterMultiple", "m_hFilter", 0x690};  // CHandle<C_BaseEntity>[10]
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_FireCursors {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Outflows{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_FireCursors", "m_Outflows", 0xD8};  // CUtlVector<CPulse_OutflowConnection>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWaitForChildOutflows{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_FireCursors", "m_bWaitForChildOutflows", 0xF0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnFinished{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_FireCursors", "m_OnFinished", 0xF8};  // CPulse_ResumePoint
            }
            // Parent: C_BaseEntity
            // Field count: 11
            namespace CEnvSoundscape {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnPlay{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEnvSoundscape", "m_OnPlay", 0x600};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEnvSoundscape", "m_flRadius", 0x618};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_soundEventName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEnvSoundscape", "m_soundEventName", 0x620};  // CGameSoundEventName
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bOverrideWithEvent{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEnvSoundscape", "m_bOverrideWithEvent", 0x628};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_soundscapeIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEnvSoundscape", "m_soundscapeIndex", 0x62C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_soundscapeEntityListId{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEnvSoundscape", "m_soundscapeEntityListId", 0x630};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_positionNames{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEnvSoundscape", "m_positionNames", 0x638};  // CUtlSymbolLarge[8]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hProxySoundscape{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEnvSoundscape", "m_hProxySoundscape", 0x678};  // CHandle<CEnvSoundscape>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEnvSoundscape", "m_bDisabled", 0x67C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_soundscapeName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEnvSoundscape", "m_soundscapeName", 0x680};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_soundEventHash{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEnvSoundscape", "m_soundEventHash", 0x688};  // uint32
            }
            // Parent: None
            // Field count: 0
            namespace C_SoundEventEntityAlias_snd_event_point {
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace C_FogController {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fog{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FogController", "m_fog", 0x600};  // fogparams_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUseAngles{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FogController", "m_bUseAngles", 0x668};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iChangedVariables{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FogController", "m_iChangedVariables", 0x66C};  // int32
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            namespace C_SoundOpvarSetOBBWindEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_MolotovGrenade {
            }
            // Parent: None
            // Field count: 0
            namespace C_NetTestBaseCombatCharacter {
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBodyComponentPoint {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sceneNode{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBodyComponentPoint", "m_sceneNode", 0x80};  // CGameSceneNode
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponM4A1Silencer {
            }
            // Parent: C_BaseEntity
            // Field count: 11
            namespace C_SkyCameraVolume {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vBoxMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCameraVolume", "m_vBoxMins", 0x618};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vBoxMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCameraVolume", "m_vBoxMaxs", 0x624};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hTarget{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCameraVolume", "m_hTarget", 0x630};  // CHandle<C_SkyCameraVolumeTarget>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPriority{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCameraVolume", "m_nPriority", 0x634};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCameraVolume", "m_bIsEnabled", 0x638};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSkyboxBlurEffect{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCameraVolume", "m_bSkyboxBlurEffect", 0x639};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vBlurOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCameraVolume", "m_vBlurOrigin", 0x63C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSkyboxReceivesWorldCsm{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCameraVolume", "m_bSkyboxReceivesWorldCsm", 0x648};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWorldReceivesSkyboxCsm{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCameraVolume", "m_bWorldReceivesSkyboxCsm", 0x649};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStartDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCameraVolume", "m_bStartDisabled", 0x64A};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszTargetName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCameraVolume", "m_iszTargetName", 0x650};  // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 31
            namespace C_EconItemView {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInventoryImageRgbaRequested{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_bInventoryImageRgbaRequested", 0x60};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInventoryImageTriedCache{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_bInventoryImageTriedCache", 0x61};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nInventoryImageRgbaWidth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_nInventoryImageRgbaWidth", 0x80};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nInventoryImageRgbaHeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_nInventoryImageRgbaHeight", 0x84};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szCurrentLoadCachedFileName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_szCurrentLoadCachedFileName", 0x88};  // char[260]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRestoreCustomMaterialAfterPrecache{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_bRestoreCustomMaterialAfterPrecache", 0x1B8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iItemDefinitionIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_iItemDefinitionIndex", 0x1BA};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEntityQuality{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_iEntityQuality", 0x1BC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEntityLevel{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_iEntityLevel", 0x1C0};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iItemID{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_iItemID", 0x1C8};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iItemIDHigh{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_iItemIDHigh", 0x1D0};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iItemIDLow{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_iItemIDLow", 0x1D4};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iAccountID{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_iAccountID", 0x1D8};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iInventoryPosition{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_iInventoryPosition", 0x1DC};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInitialized{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_bInitialized", 0x1E8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDisallowSOC{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_bDisallowSOC", 0x1E9};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsStoreItem{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_bIsStoreItem", 0x1EA};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsTradeItem{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_bIsTradeItem", 0x1EB};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEntityQuantity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_iEntityQuantity", 0x1EC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRarityOverride{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_iRarityOverride", 0x1F0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iQualityOverride{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_iQualityOverride", 0x1F4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iOriginOverride{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_iOriginOverride", 0x1F8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ubStyleOverride{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_ubStyleOverride", 0x1FC};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unClientFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_unClientFlags", 0x1FD};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_AttributeList{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_AttributeList", 0x208};  // CAttributeList
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_NetworkedDynamicAttributes{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_NetworkedDynamicAttributes", 0x280};  // CAttributeList
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szCustomName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_szCustomName", 0x2F8};  // char[161]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szCustomNameOverride{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_szCustomNameOverride", 0x399};  // char[161]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szCustomNameOverride2{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_szCustomNameOverride2", 0x43A};  // char[161]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szCustomNameOverride3{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_szCustomNameOverride3", 0x4DB};  // char[161]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInitializedTags{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconItemView", "m_bInitializedTags", 0x5A8};  // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Timeline__TimelineEvent_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTimeFromPrevious{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Timeline__TimelineEvent_t", "m_flTimeFromPrevious", 0x0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_EventOutflow{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Timeline__TimelineEvent_t", "m_EventOutflow", 0x8};  // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_IntervalTimer__CursorState_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_StartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_IntervalTimer__CursorState_t", "m_StartTime", 0x0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_EndTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_IntervalTimer__CursorState_t", "m_EndTime", 0x4};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWaitInterval{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_IntervalTimer__CursorState_t", "m_flWaitInterval", 0x8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWaitIntervalHigh{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_IntervalTimer__CursorState_t", "m_flWaitIntervalHigh", 0xC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCompleteOnNextWake{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_IntervalTimer__CursorState_t", "m_bCompleteOnNextWake", 0x10};  // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseRequirement {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            namespace CPulseCell_BaseState {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace OutflowWithRequirements_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Connection{::cs2_dumper::runtime::Category::Schema, "client.dll", "OutflowWithRequirements_t", "m_Connection", 0x0};  // CPulse_OutflowConnection
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_DestinationFlowNodeID{::cs2_dumper::runtime::Category::Schema, "client.dll", "OutflowWithRequirements_t", "m_DestinationFlowNodeID", 0x48};  // PulseDocNodeID_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_RequirementNodeIDs{::cs2_dumper::runtime::Category::Schema, "client.dll", "OutflowWithRequirements_t", "m_RequirementNodeIDs", 0x50};  // CUtlVector<PulseDocNodeID_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCursorStateBlockIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "OutflowWithRequirements_t", "m_nCursorStateBlockIndex", 0x68};  // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_IsRequirementValid {
            }
            // Parent: C_SoundEventMultiPointEntity
            // Field count: 1
            namespace C_SoundEventPathCornerEntity {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecCornerPairsNetworked{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventPathCornerEntity", "m_vecCornerPairsNetworked", 0x6C0};  // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace C_InfoVisibilityBox {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_InfoVisibilityBox", "m_nMode", 0x604};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vBoxSize{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_InfoVisibilityBox", "m_vBoxSize", 0x608};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_InfoVisibilityBox", "m_bEnabled", 0x614};  // bool
            }
            // Parent: None
            // Field count: 2
            namespace CCSPlayer_ItemServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasDefuser{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_ItemServices", "m_bHasDefuser", 0x48};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasHelmet{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_ItemServices", "m_bHasHelmet", 0x49};  // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CPulseCell_Value_Gradient {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Gradient{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Value_Gradient", "m_Gradient", 0x48};  // CColorGradient
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace IntervalTimer {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_timestamp{::cs2_dumper::runtime::Category::Schema, "client.dll", "IntervalTimer", "m_timestamp", 0x8};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nWorldGroupId{::cs2_dumper::runtime::Category::Schema, "client.dll", "IntervalTimer", "m_nWorldGroupId", 0xC};  // WorldGroupId_t
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace audioparams_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant localSound{::cs2_dumper::runtime::Category::Schema, "client.dll", "audioparams_t", "localSound", 0x8};  // VectorWS[8]
                inline constexpr ::cs2_dumper::runtime::dumper_constant soundscapeIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "audioparams_t", "soundscapeIndex", 0x68};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant localBits{::cs2_dumper::runtime::Category::Schema, "client.dll", "audioparams_t", "localBits", 0x6C};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant soundscapeEntityListIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "audioparams_t", "soundscapeEntityListIndex", 0x70};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant soundEventHash{::cs2_dumper::runtime::Category::Schema, "client.dll", "audioparams_t", "soundEventHash", 0x74};  // uint32
            }
            // Parent: C_BaseEntity
            // Field count: 16
            namespace C_PathParticleRope {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStartActive{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PathParticleRope", "m_bStartActive", 0x608};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMaxSimulationTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PathParticleRope", "m_flMaxSimulationTime", 0x60C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszEffectName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PathParticleRope", "m_iszEffectName", 0x610};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PathNodes_Name{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PathParticleRope", "m_PathNodes_Name", 0x618};  // CUtlVector<CUtlSymbolLarge>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flParticleSpacing{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PathParticleRope", "m_flParticleSpacing", 0x630};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSlack{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PathParticleRope", "m_flSlack", 0x634};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PathParticleRope", "m_flRadius", 0x638};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ColorTint{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PathParticleRope", "m_ColorTint", 0x63C};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nEffectState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PathParticleRope", "m_nEffectState", 0x640};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEffectIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PathParticleRope", "m_iEffectIndex", 0x648};  // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PathNodes_Position{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PathParticleRope", "m_PathNodes_Position", 0x650};  // C_NetworkUtlVectorBase<Vector>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PathNodes_TangentIn{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PathParticleRope", "m_PathNodes_TangentIn", 0x668};  // C_NetworkUtlVectorBase<Vector>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PathNodes_TangentOut{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PathParticleRope", "m_PathNodes_TangentOut", 0x680};  // C_NetworkUtlVectorBase<Vector>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PathNodes_Color{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PathParticleRope", "m_PathNodes_Color", 0x698};  // C_NetworkUtlVectorBase<Vector>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PathNodes_PinEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PathParticleRope", "m_PathNodes_PinEnabled", 0x6B0};  // C_NetworkUtlVectorBase<bool>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PathNodes_RadiusScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PathParticleRope", "m_PathNodes_RadiusScale", 0x6C8};  // C_NetworkUtlVectorBase<float32>
            }
            // Parent: None
            // Field count: 3
            namespace C_DecoyProjectile {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDecoyShotTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DecoyProjectile", "m_nDecoyShotTick", 0x1348};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nClientLastKnownDecoyShotTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DecoyProjectile", "m_nClientLastKnownDecoyShotTick", 0x134C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTimeParticleEffectSpawn{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DecoyProjectile", "m_flTimeParticleEffectSpawn", 0x1370};  // GameTime_t
            }
            // Parent: None
            // Field count: 3
            namespace C_AttributeContainer {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Item{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_AttributeContainer", "m_Item", 0x50};  // C_EconItemView
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iExternalItemProviderRegisteredToken{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_AttributeContainer", "m_iExternalItemProviderRegisteredToken", 0x600};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ullRegisteredAsItemID{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_AttributeContainer", "m_ullRegisteredAsItemID", 0x608};  // uint64
            }
            // Parent: C_BasePlayerWeapon
            // Field count: 57
            namespace C_CSWeaponBase {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iWeaponGameplayAnimState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_iWeaponGameplayAnimState", 0x19A8};  // WeaponGameplayAnimState
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWeaponGameplayAnimStateTimestamp{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flWeaponGameplayAnimStateTimestamp", 0x19AC};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInspectCancelCompleteTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flInspectCancelCompleteTime", 0x19B0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInspectPending{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bInspectPending", 0x19B4};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInspectShouldLoop{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bInspectShouldLoop", 0x19B5};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLastEmptySoundCmdNum{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_nLastEmptySoundCmdNum", 0x19E0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFireOnEmpty{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bFireOnEmpty", 0x19E4};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnPlayerPickup{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_OnPlayerPickup", 0x19E8};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_weaponMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_weaponMode", 0x1A00};  // CSWeaponMode
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTurningInaccuracyDelta{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flTurningInaccuracyDelta", 0x1A04};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecTurningInaccuracyEyeDirLast{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_vecTurningInaccuracyEyeDirLast", 0x1A08};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTurningInaccuracy{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flTurningInaccuracy", 0x1A14};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fAccuracyPenalty{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_fAccuracyPenalty", 0x1A18};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastAccuracyUpdateTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flLastAccuracyUpdateTime", 0x1A1C};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fAccuracySmoothedForZoom{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_fAccuracySmoothedForZoom", 0x1A20};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRecoilIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_iRecoilIndex", 0x1A24};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRecoilIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flRecoilIndex", 0x1A28};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBurstMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bBurstMode", 0x1A2C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastBurstModeChangeTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flLastBurstModeChangeTime", 0x1A30};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPostponeFireReadyTicks{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_nPostponeFireReadyTicks", 0x1A34};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPostponeFireReadyFrac{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flPostponeFireReadyFrac", 0x1A38};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInReload{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bInReload", 0x1A3C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDeployTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_nDeployTick", 0x1A40};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAttackHoldStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flAttackHoldStartTime", 0x1A44};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDroppedAtTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flDroppedAtTime", 0x1A48};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsHauledBack{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bIsHauledBack", 0x1A50};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSilencerOn{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bSilencerOn", 0x1A51};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTimeSilencerSwitchComplete{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flTimeSilencerSwitchComplete", 0x1A54};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStealthy{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bStealthy", 0x1A58};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInSilentReloadSection{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bInSilentReloadSection", 0x1A59};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStealthHoldStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flStealthHoldStartTime", 0x1A5C};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bReloadHeldSinceStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bReloadHeldSinceStart", 0x1A60};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWeaponActionPlaybackRate{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flWeaponActionPlaybackRate", 0x1A64};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iOriginalTeamNumber{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_iOriginalTeamNumber", 0x1A68};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMostRecentTeamNumber{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_iMostRecentTeamNumber", 0x1A6C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDroppedNearBuyZone{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bDroppedNearBuyZone", 0x1A70};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNextAttackRenderTimeOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flNextAttackRenderTimeOffset", 0x1A74};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bClearWeaponIdentifyingUGC{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bClearWeaponIdentifyingUGC", 0x1B20};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bVisualsDataSet{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bVisualsDataSet", 0x1B21};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUIWeapon{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bUIWeapon", 0x1B22};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCustomEconReloadEventId{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_nCustomEconReloadEventId", 0x1B24};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCanBePickedUp{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bCanBePickedUp", 0x1B30};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nextPrevOwnerUseTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_nextPrevOwnerUseTime", 0x1B34};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hPrevOwner{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_hPrevOwner", 0x1B38};  // CHandle<C_CSPlayerPawn>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDropTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_nDropTick", 0x1B3C};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWasActiveWeaponWhenDropped{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bWasActiveWeaponWhenDropped", 0x1B40};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_donated{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_donated", 0x1B64};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fLastShotTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_fLastShotTime", 0x1B68};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWasOwnedByCT{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bWasOwnedByCT", 0x1B6C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWasOwnedByTerrorist{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_bWasOwnedByTerrorist", 0x1B6D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNextClientFireBulletTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flNextClientFireBulletTime", 0x1B70};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNextClientFireBulletTime_Repredict{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flNextClientFireBulletTime_Repredict", 0x1B74};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_IronSightController{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_IronSightController", 0x1BD0};  // C_IronSightController
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iIronSightMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_iIronSightMode", 0x1C80};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastLOSTraceFailureTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flLastLOSTraceFailureTime", 0x1CF8};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWatTickOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flWatTickOffset", 0x1D58};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastShakeTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBase", "m_flLastShakeTime", 0x1D6C};  // GameTime_t
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTimeline {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flValues{::cs2_dumper::runtime::Category::Schema, "client.dll", "CTimeline", "m_flValues", 0x10};  // float32[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nValueCounts{::cs2_dumper::runtime::Category::Schema, "client.dll", "CTimeline", "m_nValueCounts", 0x110};  // int32[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBucketCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CTimeline", "m_nBucketCount", 0x210};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInterval{::cs2_dumper::runtime::Category::Schema, "client.dll", "CTimeline", "m_flInterval", 0x214};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFinalValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "CTimeline", "m_flFinalValue", 0x218};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCompressionType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CTimeline", "m_nCompressionType", 0x21C};  // TimelineCompression_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStopped{::cs2_dumper::runtime::Category::Schema, "client.dll", "CTimeline", "m_bStopped", 0x220};  // bool
            }
            // Parent: C_BaseEntity
            // Field count: 5
            namespace C_TonemapController2 {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAutoExposureMin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TonemapController2", "m_flAutoExposureMin", 0x600};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAutoExposureMax{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TonemapController2", "m_flAutoExposureMax", 0x604};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flExposureAdaptationSpeedUp{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TonemapController2", "m_flExposureAdaptationSpeedUp", 0x608};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flExposureAdaptationSpeedDown{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TonemapController2", "m_flExposureAdaptationSpeedDown", 0x60C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTonemapEVSmoothingRange{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TonemapController2", "m_flTonemapEVSmoothingRange", 0x610};  // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CountdownTimer {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_duration{::cs2_dumper::runtime::Category::Schema, "client.dll", "CountdownTimer", "m_duration", 0x8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_timestamp{::cs2_dumper::runtime::Category::Schema, "client.dll", "CountdownTimer", "m_timestamp", 0xC};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_timescale{::cs2_dumper::runtime::Category::Schema, "client.dll", "CountdownTimer", "m_timescale", 0x10};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nWorldGroupId{::cs2_dumper::runtime::Category::Schema, "client.dll", "CountdownTimer", "m_nWorldGroupId", 0x14};  // WorldGroupId_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            // MVDataAssociatedFile
            // MVDataPreviewWidget
            namespace CNoiseStreamData {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Stream{::cs2_dumper::runtime::Category::Schema, "client.dll", "CNoiseStreamData", "m_Stream", 0x0};  // NoiseStreamDef_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OutflowID{::cs2_dumper::runtime::Category::Schema, "client.dll", "PulseNodeDynamicOutflows_t__DynamicOutflow_t", "m_OutflowID", 0x0};  // CGlobalSymbol
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Connection{::cs2_dumper::runtime::Category::Schema, "client.dll", "PulseNodeDynamicOutflows_t__DynamicOutflow_t", "m_Connection", 0x8};  // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponMag7 {
            }
            // Parent: None
            // Field count: 2
            namespace WeaponPurchaseCount_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nItemDefIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "WeaponPurchaseCount_t", "m_nItemDefIndex", 0x30};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "WeaponPurchaseCount_t", "m_nCount", 0x32};  // uint16
            }
            // Parent: None
            // Field count: 0
            namespace CBasePulseGraphInstance {
            }
            // Parent: CBaseFilter
            // Field count: 3
            namespace FilterHealth {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAdrenalineActive{::cs2_dumper::runtime::Category::Schema, "client.dll", "FilterHealth", "m_bAdrenalineActive", 0x638};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iHealthMin{::cs2_dumper::runtime::Category::Schema, "client.dll", "FilterHealth", "m_iHealthMin", 0x63C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iHealthMax{::cs2_dumper::runtime::Category::Schema, "client.dll", "FilterHealth", "m_iHealthMax", 0x640};  // int32
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 13
            namespace C_PointClientUIHUD {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCheckCSSClasses{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIHUD", "m_bCheckCSSClasses", 0x10D0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIgnoreInput{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIHUD", "m_bIgnoreInput", 0x1248};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWidth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIHUD", "m_flWidth", 0x124C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flHeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIHUD", "m_flHeight", 0x1250};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDPI{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIHUD", "m_flDPI", 0x1254};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInteractDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIHUD", "m_flInteractDistance", 0x1258};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDepthOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIHUD", "m_flDepthOffset", 0x125C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unOwnerContext{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIHUD", "m_unOwnerContext", 0x1260};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unHorizontalAlign{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIHUD", "m_unHorizontalAlign", 0x1264};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unVerticalAlign{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIHUD", "m_unVerticalAlign", 0x1268};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unOrientation{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIHUD", "m_unOrientation", 0x126C};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAllowInteractionFromAllSceneWorlds{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIHUD", "m_bAllowInteractionFromAllSceneWorlds", 0x1270};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecCSSClasses{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIHUD", "m_vecCSSClasses", 0x1278};  // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_GraphHook {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_HookName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Inflow_GraphHook", "m_HookName", 0x80};  // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            namespace SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 0
            namespace C_InfoLadderDismount {
            }
            // Parent: None
            // Field count: 14
            namespace C_PointCommentaryNode {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bActive{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCommentaryNode", "m_bActive", 0x1280};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWasActive{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCommentaryNode", "m_bWasActive", 0x1281};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flEndTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCommentaryNode", "m_flEndTime", 0x1284};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCommentaryNode", "m_flStartTime", 0x1288};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartTimeInCommentary{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCommentaryNode", "m_flStartTimeInCommentary", 0x128C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszCommentaryFile{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCommentaryNode", "m_iszCommentaryFile", 0x1290};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszTitle{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCommentaryNode", "m_iszTitle", 0x1298};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszSpeakers{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCommentaryNode", "m_iszSpeakers", 0x12A0};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iNodeNumber{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCommentaryNode", "m_iNodeNumber", 0x12A8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iNodeNumberMax{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCommentaryNode", "m_iNodeNumberMax", 0x12AC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bListenedTo{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCommentaryNode", "m_bListenedTo", 0x12B0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sndCommentary{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCommentaryNode", "m_sndCommentary", 0x12B8};  // CSoundPatch*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hViewPosition{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCommentaryNode", "m_hViewPosition", 0x12C0};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRestartAfterRestore{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCommentaryNode", "m_bRestartAfterRestore", 0x12C4};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace CSpriteOriented {
            }
            // Parent: None
            // Field count: 13
            namespace shard_model_desc_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nModelID{::cs2_dumper::runtime::Category::Schema, "client.dll", "shard_model_desc_t", "m_nModelID", 0x8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hMaterialBase{::cs2_dumper::runtime::Category::Schema, "client.dll", "shard_model_desc_t", "m_hMaterialBase", 0x10};  // CStrongHandle<InfoForResourceTypeIMaterial2>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hMaterialDamageOverlay{::cs2_dumper::runtime::Category::Schema, "client.dll", "shard_model_desc_t", "m_hMaterialDamageOverlay", 0x18};  // CStrongHandle<InfoForResourceTypeIMaterial2>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_solid{::cs2_dumper::runtime::Category::Schema, "client.dll", "shard_model_desc_t", "m_solid", 0x20};  // ShardSolid_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecPanelSize{::cs2_dumper::runtime::Category::Schema, "client.dll", "shard_model_desc_t", "m_vecPanelSize", 0x24};  // Vector2D
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecStressPositionA{::cs2_dumper::runtime::Category::Schema, "client.dll", "shard_model_desc_t", "m_vecStressPositionA", 0x2C};  // Vector2D
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecStressPositionB{::cs2_dumper::runtime::Category::Schema, "client.dll", "shard_model_desc_t", "m_vecStressPositionB", 0x34};  // Vector2D
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecPanelVertices{::cs2_dumper::runtime::Category::Schema, "client.dll", "shard_model_desc_t", "m_vecPanelVertices", 0x40};  // C_NetworkUtlVectorBase<Vector2D>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vInitialPanelVertices{::cs2_dumper::runtime::Category::Schema, "client.dll", "shard_model_desc_t", "m_vInitialPanelVertices", 0x58};  // C_NetworkUtlVectorBase<Vector4D>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flGlassHalfThickness{::cs2_dumper::runtime::Category::Schema, "client.dll", "shard_model_desc_t", "m_flGlassHalfThickness", 0x70};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasParent{::cs2_dumper::runtime::Category::Schema, "client.dll", "shard_model_desc_t", "m_bHasParent", 0x74};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bParentFrozen{::cs2_dumper::runtime::Category::Schema, "client.dll", "shard_model_desc_t", "m_bParentFrozen", 0x75};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SurfacePropStringToken{::cs2_dumper::runtime::Category::Schema, "client.dll", "shard_model_desc_t", "m_SurfacePropStringToken", 0x78};  // CUtlStringToken
            }
            // Parent: None
            // Field count: 2
            namespace C_KeychainModule {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nKeychainDefID{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_KeychainModule", "m_nKeychainDefID", 0x1270};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nKeychainSeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_KeychainModule", "m_nKeychainSeed", 0x1274};  // uint32
            }
            // Parent: None
            // Field count: 1
            namespace CFuncWater {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_BuoyancyHelper{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFuncWater", "m_BuoyancyHelper", 0x1098};  // CBuoyancyHelper
            }
            // Parent: None
            // Field count: 0
            namespace CCSPlayer_GlowServices {
            }
            // Parent: None
            // Field count: 1
            namespace CCSGameModeRules {
                inline constexpr ::cs2_dumper::runtime::dumper_constant __m_pChainEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSGameModeRules", "__m_pChainEntity", 0x8};  // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 0
            namespace C_Flashbang {
            }
            // Parent: C_PointClientUIWorldPanel
            // Field count: 1
            namespace C_PointClientUIWorldTextPanel {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_messageText{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldTextPanel", "m_messageText", 0x1300};  // char[512]
            }
            // Parent: None
            // Field count: 3
            namespace CCSPlayer_WaterServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWaterJumpTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_WaterServices", "m_flWaterJumpTime", 0x48};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecWaterJumpVel{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_WaterServices", "m_vecWaterJumpVel", 0x4C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSwimSoundTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_WaterServices", "m_flSwimSoundTime", 0x58};  // float32
            }
            // Parent: C_CSPlayerPawnBase
            // Field count: 1
            namespace C_CSObserverPawn {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hDetectParentChange{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSObserverPawn", "m_hDetectParentChange", 0x1568};  // CEntityHandle
            }
            // Parent: None
            // Field count: 3
            namespace ViewAngleServerChange_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant nType{::cs2_dumper::runtime::Category::Schema, "client.dll", "ViewAngleServerChange_t", "nType", 0x30};  // FixAngleSet_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant qAngle{::cs2_dumper::runtime::Category::Schema, "client.dll", "ViewAngleServerChange_t", "qAngle", 0x34};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant nIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "ViewAngleServerChange_t", "nIndex", 0x40};  // uint32
            }
            // Parent: C_BaseModelEntity
            // Field count: 9
            namespace C_FuncLadder {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecLadderDir{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncLadder", "m_vecLadderDir", 0x1098};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Dismounts{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncLadder", "m_Dismounts", 0x10A8};  // CUtlVector<CHandle<C_InfoLadderDismount>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecLocalTop{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncLadder", "m_vecLocalTop", 0x10C0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecPlayerMountPositionTop{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncLadder", "m_vecPlayerMountPositionTop", 0x10CC};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecPlayerMountPositionBottom{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncLadder", "m_vecPlayerMountPositionBottom", 0x10D8};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAutoRideSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncLadder", "m_flAutoRideSpeed", 0x10E4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncLadder", "m_bDisabled", 0x10E8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFakeLadder{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncLadder", "m_bFakeLadder", 0x10E9};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasSlack{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncLadder", "m_bHasSlack", 0x10EA};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponMP5SD {
            }
            // Parent: None
            // Field count: 0
            namespace C_World {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponGalilAR {
            }
            // Parent: None
            // Field count: 6
            namespace CCSPlayerBase_CameraServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iFOV{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerBase_CameraServices", "m_iFOV", 0x298};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iFOVStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerBase_CameraServices", "m_iFOVStart", 0x29C};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFOVTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerBase_CameraServices", "m_flFOVTime", 0x2A0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFOVRate{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerBase_CameraServices", "m_flFOVRate", 0x2A4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hZoomOwner{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerBase_CameraServices", "m_hZoomOwner", 0x2A8};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastShotFOV{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerBase_CameraServices", "m_flLastShotFOV", 0x2AC};  // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_TeamplayRules {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_BaseEntrypoint {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_EntryChunk{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Inflow_BaseEntrypoint", "m_EntryChunk", 0x48};  // PulseRuntimeChunkIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_RegisterMap{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Inflow_BaseEntrypoint", "m_RegisterMap", 0x50};  // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponSG556 {
            }
            // Parent: C_CSPlayerPawnBase
            // Field count: 104
            namespace C_CSPlayerPawn {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pBulletServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_pBulletServices", 0x1570};  // CCSPlayer_BulletServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pHostageServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_pHostageServices", 0x1578};  // CCSPlayer_HostageServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pBuyServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_pBuyServices", 0x1580};  // CCSPlayer_BuyServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pGlowServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_pGlowServices", 0x1588};  // CCSPlayer_GlowServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pActionTrackingServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_pActionTrackingServices", 0x1590};  // CCSPlayer_ActionTrackingServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pAimPunchServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_pAimPunchServices", 0x1598};  // CCSPlayer_AimPunchServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pDamageReactServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_pDamageReactServices", 0x15A0};  // CCSPlayer_DamageReactServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flHealthShotBoostExpirationTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_flHealthShotBoostExpirationTime", 0x15A8};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastFiredWeaponTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_flLastFiredWeaponTime", 0x15AC};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasFemaleVoice{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bHasFemaleVoice", 0x15B0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLandingTimeSeconds{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_flLandingTimeSeconds", 0x15B4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flOldFallVelocity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_flOldFallVelocity", 0x15B8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szLastPlaceName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_szLastPlaceName", 0x15BC};  // char[18]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPrevDefuser{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bPrevDefuser", 0x15CE};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPrevHelmet{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bPrevHelmet", 0x15CF};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPrevArmorVal{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_nPrevArmorVal", 0x15D0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPrevGrenadeAmmoCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_nPrevGrenadeAmmoCount", 0x15D4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unPreviousWeaponHash{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_unPreviousWeaponHash", 0x15D8};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unWeaponHash{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_unWeaponHash", 0x15DC};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInBuyZone{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bInBuyZone", 0x15E0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPreviouslyInBuyZone{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bPreviouslyInBuyZone", 0x15E1};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInLanding{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bInLanding", 0x15E2};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLandingStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_flLandingStartTime", 0x15E4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInHostageRescueZone{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bInHostageRescueZone", 0x15E8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInBombZone{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bInBombZone", 0x15E9};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsBuyMenuOpen{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bIsBuyMenuOpen", 0x15EA};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTimeOfLastInjury{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_flTimeOfLastInjury", 0x15EC};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNextSprayDecalTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_flNextSprayDecalTime", 0x15F0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRetakesOffering{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_iRetakesOffering", 0x1758};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRetakesOfferingCard{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_iRetakesOfferingCard", 0x175C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRetakesHasDefuseKit{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bRetakesHasDefuseKit", 0x1760};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRetakesMVPLastRound{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bRetakesMVPLastRound", 0x1761};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRetakesMVPBoostItem{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_iRetakesMVPBoostItem", 0x1764};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_RetakesMVPBoostExtraUtility{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_RetakesMVPBoostExtraUtility", 0x1768};  // loadout_slot_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNeedToReApplyGloves{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bNeedToReApplyGloves", 0x176D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_EconGloves{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_EconGloves", 0x1770};  // C_EconItemView
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nEconGlovesChanged{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_nEconGlovesChanged", 0x1D20};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bMustSyncRagdollState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bMustSyncRagdollState", 0x1D21};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRagdollDamageBone{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_nRagdollDamageBone", 0x1D24};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vRagdollDamageForce{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_vRagdollDamageForce", 0x1D28};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szRagdollDamageWeaponName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_szRagdollDamageWeaponName", 0x1D34};  // char[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRagdollDamageHeadshot{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bRagdollDamageHeadshot", 0x1D74};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vRagdollServerOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_vRagdollServerOrigin", 0x1D78};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_lastLandTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_lastLandTime", 0x1D84};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bOnGroundLastTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bOnGroundLastTick", 0x1D88};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hActiveMinimapVolume{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_hActiveMinimapVolume", 0x1DA4};  // CHandle<CCSMinimapVolume>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hHudModelArms{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_hHudModelArms", 0x1DA8};  // CHandle<C_CS2HudModelArms>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_qDeathEyeAngles{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_qDeathEyeAngles", 0x1DAC};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bLeftHanded{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bLeftHanded", 0x1DB8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fSwitchedHandednessTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_fSwitchedHandednessTime", 0x1DBC};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flViewmodelOffsetX{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_flViewmodelOffsetX", 0x1DC0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flViewmodelOffsetY{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_flViewmodelOffsetY", 0x1DC4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flViewmodelOffsetZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_flViewmodelOffsetZ", 0x1DC8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flViewmodelFOV{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_flViewmodelFOV", 0x1DCC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecPlayerPatchEconIndices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_vecPlayerPatchEconIndices", 0x1DD0};  // uint32[5]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_GunGameImmunityColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_GunGameImmunityColor", 0x1E18};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecBulletHitModels{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_vecBulletHitModels", 0x1E68};  // CUtlVector<C_BulletHitModel*>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsWalking{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bIsWalking", 0x1E80};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_entitySpottedState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_entitySpottedState", 0x1E88};  // EntitySpottedState_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsScoped{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bIsScoped", 0x1EA0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bResumeZoom{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bResumeZoom", 0x1EA1};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsDefusing{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bIsDefusing", 0x1EA2};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsGrabbingHostage{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bIsGrabbingHostage", 0x1EA3};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iBlockingUseActionInProgress{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_iBlockingUseActionInProgress", 0x1EA4};  // CSPlayerBlockingUseAction_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flEmitSoundTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_flEmitSoundTime", 0x1EA8};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInNoDefuseArea{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bInNoDefuseArea", 0x1EAC};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nWhichBombZone{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_nWhichBombZone", 0x1EB0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iShotsFired{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_iShotsFired", 0x1EB4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFlinchStack{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_flFlinchStack", 0x1EB8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flVelocityModifier{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_flVelocityModifier", 0x1EBC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWaitForNoAttack{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bWaitForNoAttack", 0x1EC0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ignoreLadderJumpTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_ignoreLadderJumpTime", 0x1EC4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bKilledByHeadshot{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bKilledByHeadshot", 0x1EC9};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ArmorValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_ArmorValue", 0x1ECC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unCurrentEquipmentValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_unCurrentEquipmentValue", 0x1ED0};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unRoundStartEquipmentValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_unRoundStartEquipmentValue", 0x1ED2};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unFreezetimeEndEquipmentValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_unFreezetimeEndEquipmentValue", 0x1ED4};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLastKillerIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_nLastKillerIndex", 0x1ED8};  // CEntityIndex
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bOldIsScoped{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bOldIsScoped", 0x1EDC};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasDeathInfo{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bHasDeathInfo", 0x1EDD};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDeathInfoTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_flDeathInfoTime", 0x1EE0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecDeathInfoOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_vecDeathInfoOrigin", 0x1EE4};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_grenadeParameterStashTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_grenadeParameterStashTime", 0x1F20};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bGrenadeParametersStashed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bGrenadeParametersStashed", 0x1F24};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_angStashedShootAngles{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_angStashedShootAngles", 0x1F28};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecStashedGrenadeThrowPosition{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_vecStashedGrenadeThrowPosition", 0x1F34};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecStashedGrenadeThrowPawnCenter{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_vecStashedGrenadeThrowPawnCenter", 0x1F40};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecStashedVelocity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_vecStashedVelocity", 0x1F4C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInterpolatedInaccuracy{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_flInterpolatedInaccuracy", 0x1F58};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bShouldAutobuyDMWeapons{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bShouldAutobuyDMWeapons", 0x3500};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fImmuneToGunGameDamageTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_fImmuneToGunGameDamageTime", 0x3504};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bGunGameImmunity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_bGunGameImmunity", 0x3508};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fImmuneToGunGameDamageTimeLast{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_fImmuneToGunGameDamageTimeLast", 0x350C};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fMolotovDamageTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_fMolotovDamageTime", 0x3510};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPlayerInfernoBodyFx{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_nPlayerInfernoBodyFx", 0x357C};  // ParticleIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_angEyeAngles{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_angEyeAngles", 0x35F0};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_arrOldEyeAnglesTimes{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_arrOldEyeAnglesTimes", 0x3680};  // GameTime_t[4]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_arrOldEyeAngles{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_arrOldEyeAngles", 0x3690};  // QAngle[4]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_angEyeAnglesVelocity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_angEyeAnglesVelocity", 0x36C0};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iIDEntIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_iIDEntIndex", 0x36CC};  // CEntityIndex
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_delayTargetIDTimer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_delayTargetIDTimer", 0x36D0};  // CountdownTimer
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iTargetItemEntIdx{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_iTargetItemEntIdx", 0x36E8};  // CEntityIndex
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iOldIDEntIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_iOldIDEntIndex", 0x36EC};  // CEntityIndex
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_holdTargetIDTimer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerPawn", "m_holdTargetIDTimer", 0x36F0};  // CountdownTimer
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_WaitForCursorsWithTagBase {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCursorsAllowedToWait{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_WaitForCursorsWithTagBase", "m_nCursorsAllowedToWait", 0xD8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_WaitComplete{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_WaitForCursorsWithTagBase", "m_WaitComplete", 0xE0};  // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 23
            namespace C_Hostage {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_entitySpottedState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_entitySpottedState", 0x12F0};  // EntitySpottedState_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_leader{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_leader", 0x1308};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_reuseTimer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_reuseTimer", 0x1310};  // CountdownTimer
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vel{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_vel", 0x1328};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_isRescued{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_isRescued", 0x1334};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_jumpedThisFrame{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_jumpedThisFrame", 0x1335};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nHostageState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_nHostageState", 0x1338};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHandsHaveBeenCut{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_bHandsHaveBeenCut", 0x133C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hHostageGrabber{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_hHostageGrabber", 0x1340};  // CHandle<C_CSPlayerPawn>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fLastGrabTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_fLastGrabTime", 0x1344};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecGrabbedPos{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_vecGrabbedPos", 0x1348};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRescueStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_flRescueStartTime", 0x1354};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flGrabSuccessTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_flGrabSuccessTime", 0x1358};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDropStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_flDropStartTime", 0x135C};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDeadOrRescuedTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_flDeadOrRescuedTime", 0x1360};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_blinkTimer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_blinkTimer", 0x1368};  // CountdownTimer
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_lookAt{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_lookAt", 0x1380};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_lookAroundTimer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_lookAroundTimer", 0x1390};  // CountdownTimer
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_isInit{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_isInit", 0x13A8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_eyeAttachment{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_eyeAttachment", 0x13A9};  // AttachmentHandle_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_chestAttachment{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_chestAttachment", 0x13AA};  // AttachmentHandle_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pPredictionOwner{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_pPredictionOwner", 0x13B0};  // CBasePlayerController*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fNewestAlphaThinkTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Hostage", "m_fNewestAlphaThinkTime", 0x13B8};  // GameTime_t
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_fogplayerparams_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hCtrl{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_fogplayerparams_t", "m_hCtrl", 0x8};  // CHandle<C_FogController>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTransitionTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_fogplayerparams_t", "m_flTransitionTime", 0xC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OldColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_fogplayerparams_t", "m_OldColor", 0x10};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flOldStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_fogplayerparams_t", "m_flOldStart", 0x14};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flOldEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_fogplayerparams_t", "m_flOldEnd", 0x18};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flOldMaxDensity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_fogplayerparams_t", "m_flOldMaxDensity", 0x1C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flOldHDRColorScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_fogplayerparams_t", "m_flOldHDRColorScale", 0x20};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flOldFarZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_fogplayerparams_t", "m_flOldFarZ", 0x24};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_NewColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_fogplayerparams_t", "m_NewColor", 0x28};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNewStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_fogplayerparams_t", "m_flNewStart", 0x2C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNewEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_fogplayerparams_t", "m_flNewEnd", 0x30};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNewMaxDensity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_fogplayerparams_t", "m_flNewMaxDensity", 0x34};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNewHDRColorScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_fogplayerparams_t", "m_flNewHDRColorScale", 0x38};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNewFarZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_fogplayerparams_t", "m_flNewFarZ", 0x3C};  // float32
            }
            // Parent: None
            // Field count: 34
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGameSceneNode {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nodeToWorld{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_nodeToWorld", 0x10};  // CTransformWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pOwner{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_pOwner", 0x30};  // CEntityInstance*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pParent{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_pParent", 0x38};  // CGameSceneNode*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pChild{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_pChild", 0x40};  // CGameSceneNode*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pNextSibling{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_pNextSibling", 0x48};  // CGameSceneNode*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hParent{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_hParent", 0x70};  // CGameSceneNodeHandle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_vecOrigin", 0x80};  // CNetworkOriginCellCoordQuantizedVector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_angRotation{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_angRotation", 0xB8};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_flScale", 0xC4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecAbsOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_vecAbsOrigin", 0xC8};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_angAbsRotation{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_angAbsRotation", 0xD4};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAbsScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_flAbsScale", 0xE0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecWrappedLocalOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_vecWrappedLocalOrigin", 0xE4};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_angWrappedLocalRotation{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_angWrappedLocalRotation", 0xF0};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWrappedScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_flWrappedScale", 0xFC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nParentAttachmentOrBone{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_nParentAttachmentOrBone", 0x100};  // int16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDebugAbsOriginChanges{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_bDebugAbsOriginChanges", 0x102};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDormant{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_bDormant", 0x103};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bForceParentToBeNetworked{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_bForceParentToBeNetworked", 0x104};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDirtyHierarchy{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_bDirtyHierarchy", 0x0};  // bitfield:1
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDirtyBoneMergeInfo{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_bDirtyBoneMergeInfo", 0x0};  // bitfield:1
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNetworkedPositionChanged{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_bNetworkedPositionChanged", 0x0};  // bitfield:1
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNetworkedAnglesChanged{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_bNetworkedAnglesChanged", 0x0};  // bitfield:1
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNetworkedScaleChanged{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_bNetworkedScaleChanged", 0x0};  // bitfield:1
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWillBeCallingPostDataUpdate{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_bWillBeCallingPostDataUpdate", 0x0};  // bitfield:1
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBoneMergeFlex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_bBoneMergeFlex", 0x0};  // bitfield:1
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLatchAbsOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_nLatchAbsOrigin", 0x0};  // bitfield:2
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDirtyBoneMergeBoneToRoot{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_bDirtyBoneMergeBoneToRoot", 0x0};  // bitfield:1
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nHierarchicalDepth{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_nHierarchicalDepth", 0x107};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nHierarchyType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_nHierarchyType", 0x108};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDoNotSetAnimTimeInInvalidatePhysicsCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_nDoNotSetAnimTimeInInvalidatePhysicsCount", 0x109};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_name{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_name", 0x10C};  // CUtlStringToken
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hierarchyAttachName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_hierarchyAttachName", 0x120};  // CUtlStringToken
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flClientLocalScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNode", "m_flClientLocalScale", 0x124};  // float32
            }
            // Parent: None
            // Field count: 6
            namespace CPlayer_ObserverServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iObserverMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_ObserverServices", "m_iObserverMode", 0x48};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hObserverTarget{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_ObserverServices", "m_hObserverTarget", 0x4C};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iObserverLastMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_ObserverServices", "m_iObserverLastMode", 0x50};  // ObserverMode_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bForcedObserverMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_ObserverServices", "m_bForcedObserverMode", 0x54};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flObserverChaseDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_ObserverServices", "m_flObserverChaseDistance", 0x58};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flObserverChaseDistanceCalcTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_ObserverServices", "m_flObserverChaseDistanceCalcTime", 0x5C};  // GameTime_t
            }
            // Parent: None
            // Field count: 1
            namespace CCashStack {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCashStackValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCashStack", "m_nCashStackValue", 0x1098};  // int32
            }
            // Parent: C_BaseEntity
            // Field count: 4
            namespace C_SoundAreaEntityBase {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundAreaEntityBase", "m_bDisabled", 0x600};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWasEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundAreaEntityBase", "m_bWasEnabled", 0x608};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszSoundAreaType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundAreaEntityBase", "m_iszSoundAreaType", 0x610};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPos{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundAreaEntityBase", "m_vPos", 0x618};  // Vector
            }
            // Parent: C_BaseEntity
            // Field count: 6
            namespace C_PlayerVisibility {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flVisibilityStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerVisibility", "m_flVisibilityStrength", 0x600};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogDistanceMultiplier{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerVisibility", "m_flFogDistanceMultiplier", 0x604};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogMaxDensityMultiplier{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerVisibility", "m_flFogMaxDensityMultiplier", 0x608};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerVisibility", "m_flFadeTime", 0x60C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStartDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerVisibility", "m_bStartDisabled", 0x610};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerVisibility", "m_bIsEnabled", 0x611};  // bool
            }
            // Parent: None
            // Field count: 3
            namespace CAttributeManager__cached_attribute_float_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant flIn{::cs2_dumper::runtime::Category::Schema, "client.dll", "CAttributeManager__cached_attribute_float_t", "flIn", 0x0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant iAttribHook{::cs2_dumper::runtime::Category::Schema, "client.dll", "CAttributeManager__cached_attribute_float_t", "iAttribHook", 0x8};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant flOut{::cs2_dumper::runtime::Category::Schema, "client.dll", "CAttributeManager__cached_attribute_float_t", "flOut", 0x10};  // float32
            }
            // Parent: CBaseAnimGraph
            // Field count: 7
            namespace C_BasePlayerWeapon {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nNextPrimaryAttackTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerWeapon", "m_nNextPrimaryAttackTick", 0x1918};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNextPrimaryAttackTickRatio{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerWeapon", "m_flNextPrimaryAttackTickRatio", 0x191C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nNextSecondaryAttackTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerWeapon", "m_nNextSecondaryAttackTick", 0x1920};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNextSecondaryAttackTickRatio{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerWeapon", "m_flNextSecondaryAttackTickRatio", 0x1924};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iClip1{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerWeapon", "m_iClip1", 0x1928};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iClip2{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerWeapon", "m_iClip2", 0x192C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pReserveAmmo{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerWeapon", "m_pReserveAmmo", 0x1930};  // int32[2]
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace CRagdollManager {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iCurrentMaxRagdollCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CRagdollManager", "m_iCurrentMaxRagdollCount", 0x600};  // int8
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace CSoundOpvarSetBoxEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_HEGrenade {
            }
            // Parent: C_BaseModelEntity
            // Field count: 12
            namespace C_EnvSky {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hSkyMaterial{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvSky", "m_hSkyMaterial", 0x1098};  // CStrongHandle<InfoForResourceTypeIMaterial2>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hSkyMaterialLightingOnly{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvSky", "m_hSkyMaterialLightingOnly", 0x10A0};  // CStrongHandle<InfoForResourceTypeIMaterial2>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStartDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvSky", "m_bStartDisabled", 0x10A8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vTintColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvSky", "m_vTintColor", 0x10AC};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vTintColorLightingOnly{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvSky", "m_vTintColorLightingOnly", 0x10B0};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBrightnessScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvSky", "m_flBrightnessScale", 0x10B4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFogType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvSky", "m_nFogType", 0x10B8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogMinStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvSky", "m_flFogMinStart", 0x10BC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogMinEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvSky", "m_flFogMinEnd", 0x10C0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogMaxStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvSky", "m_flFogMaxStart", 0x10C4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogMaxEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvSky", "m_flFogMaxEnd", 0x10C8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvSky", "m_bEnabled", 0x10CC};  // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_InvokeBinding {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_RegisterMap{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_InvokeBinding", "m_RegisterMap", 0x0};  // PulseRegisterMap_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_FuncName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_InvokeBinding", "m_FuncName", 0x30};  // PulseSymbol_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCellIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_InvokeBinding", "m_nCellIndex", 0x40};  // PulseRuntimeCellIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSrcChunk{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_InvokeBinding", "m_nSrcChunk", 0x44};  // PulseRuntimeChunkIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSrcInstruction{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_InvokeBinding", "m_nSrcInstruction", 0x48};  // int32
            }
            // Parent: None
            // Field count: 4
            namespace C_GameRules {
                inline constexpr ::cs2_dumper::runtime::dumper_constant __m_pChainEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GameRules", "__m_pChainEntity", 0x8};  // CNetworkVarChainer
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTotalPausedTicks{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GameRules", "m_nTotalPausedTicks", 0x30};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPauseStartTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GameRules", "m_nPauseStartTick", 0x34};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bGamePaused{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GameRules", "m_bGamePaused", 0x38};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponMAC10 {
            }
            // Parent: C_BaseEntity
            // Field count: 14
            namespace C_CSGO_MapPreviewCameraPath {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flZFar{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPath", "m_flZFar", 0x600};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flZNear{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPath", "m_flZNear", 0x604};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bLoop{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPath", "m_bLoop", 0x608};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bVerticalFOV{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPath", "m_bVerticalFOV", 0x609};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bConstantSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPath", "m_bConstantSpeed", 0x60A};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPath", "m_flDuration", 0x60C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPathLength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPath", "m_flPathLength", 0x650};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPathDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPath", "m_flPathDuration", 0x654};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDofEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPath", "m_bDofEnabled", 0x66C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDofNearBlurry{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPath", "m_flDofNearBlurry", 0x670};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDofNearCrisp{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPath", "m_flDofNearCrisp", 0x674};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDofFarCrisp{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPath", "m_flDofFarCrisp", 0x678};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDofFarBlurry{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPath", "m_flDofFarBlurry", 0x67C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDofTiltToGround{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPath", "m_flDofTiltToGround", 0x680};  // float32
            }
            // Parent: C_BaseModelEntity
            // Field count: 19
            namespace C_PointWorldText {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bForceRecreateNextUpdate{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_bForceRecreateNextUpdate", 0x10A0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTextWidthPx{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_nTextWidthPx", 0x10B8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTextHeightPx{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_nTextHeightPx", 0x10BC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_messageText{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_messageText", 0x10C0};  // char[512]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_FontName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_FontName", 0x12C0};  // char[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_BackgroundMaterialName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_BackgroundMaterialName", 0x1300};  // char[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_bEnabled", 0x1340};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFullbright{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_bFullbright", 0x1341};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWorldUnitsPerPx{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_flWorldUnitsPerPx", 0x1344};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFontSize{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_flFontSize", 0x1348};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDepthOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_flDepthOffset", 0x134C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDrawBackground{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_bDrawBackground", 0x1350};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBackgroundBorderWidth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_flBackgroundBorderWidth", 0x1354};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBackgroundBorderHeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_flBackgroundBorderHeight", 0x1358};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBackgroundWorldToUV{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_flBackgroundWorldToUV", 0x135C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Color{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_Color", 0x1360};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nJustifyHorizontal{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_nJustifyHorizontal", 0x1364};  // PointWorldTextJustifyHorizontal_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nJustifyVertical{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_nJustifyVertical", 0x1368};  // PointWorldTextJustifyVertical_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nReorientMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointWorldText", "m_nReorientMode", 0x136C};  // PointWorldTextReorientMode_t
            }
            // Parent: None
            // Field count: 40
            namespace C_RopeKeyframe {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_LinksTouchingSomething{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_LinksTouchingSomething", 0x10A0};  // CBitVec<10>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLinksTouchingSomething{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_nLinksTouchingSomething", 0x10A4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bApplyWind{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_bApplyWind", 0x10A8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fPrevLockedPoints{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_fPrevLockedPoints", 0x10AC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iForcePointMoveCounter{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_iForcePointMoveCounter", 0x10B0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPrevEndPointPos{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_bPrevEndPointPos", 0x10B4};  // bool[2]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrevEndPointPos{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_vPrevEndPointPos", 0x10B8};  // VectorWS[2]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCurScroll{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_flCurScroll", 0x10D0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flScrollSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_flScrollSpeed", 0x10D4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_RopeFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_RopeFlags", 0x10D8};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRopeMaterialModelIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_iRopeMaterialModelIndex", 0x10E0};  // CStrongHandle<InfoForResourceTypeIMaterial2>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSegments{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_nSegments", 0x1358};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hStartPoint{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_hStartPoint", 0x135C};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hEndPoint{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_hEndPoint", 0x1360};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iStartAttachment{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_iStartAttachment", 0x1364};  // AttachmentHandle_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEndAttachment{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_iEndAttachment", 0x1365};  // AttachmentHandle_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Subdiv{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_Subdiv", 0x1366};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_RopeLength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_RopeLength", 0x1368};  // int16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Slack{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_Slack", 0x136A};  // int16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_TextureScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_TextureScale", 0x136C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fLockedPoints{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_fLockedPoints", 0x1370};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nChangeCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_nChangeCount", 0x1371};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Width{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_Width", 0x1374};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PhysicsDelegate{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_PhysicsDelegate", 0x1378};  // C_RopeKeyframe::CPhysicsDelegate
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hMaterial{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_hMaterial", 0x1388};  // CStrongHandle<InfoForResourceTypeIMaterial2>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_TextureHeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_TextureHeight", 0x1390};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecImpulse{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_vecImpulse", 0x1394};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecPreviousImpulse{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_vecPreviousImpulse", 0x13A0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCurrentGustTimer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_flCurrentGustTimer", 0x13AC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCurrentGustLifetime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_flCurrentGustLifetime", 0x13B0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTimeToNextGust{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_flTimeToNextGust", 0x13B4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vWindDir{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_vWindDir", 0x13B8};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vColorMod{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_vColorMod", 0x13C4};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vCachedEndPointAttachmentPos{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_vCachedEndPointAttachmentPos", 0x13D0};  // VectorWS[2]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vCachedEndPointAttachmentAngle{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_vCachedEndPointAttachmentAngle", 0x13E8};  // QAngle[2]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bConstrainBetweenEndpoints{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_bConstrainBetweenEndpoints", 0x1400};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEndPointAttachmentPositionsDirty{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_bEndPointAttachmentPositionsDirty", 0x0};  // bitfield:1
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEndPointAttachmentAnglesDirty{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_bEndPointAttachmentAnglesDirty", 0x0};  // bitfield:1
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNewDataThisFrame{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_bNewDataThisFrame", 0x0};  // bitfield:1
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPhysicsInitted{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe", "m_bPhysicsInitted", 0x0};  // bitfield:1
            }
            // Parent: None
            // Field count: 0
            namespace C_BaseToggle {
            }
            // Parent: None
            // Field count: 0
            namespace C_EnvCubemapBox {
            }
            // Parent: None
            // Field count: 0
            namespace C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
            }
            // Parent: None
            // Field count: 1
            namespace C_RopeKeyframe__CPhysicsDelegate {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pKeyframe{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RopeKeyframe__CPhysicsDelegate", "m_pKeyframe", 0x8};  // C_RopeKeyframe*
            }
            // Parent: C_PointEntity
            // Field count: 5
            namespace CInfoDynamicShadowHint {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoDynamicShadowHint", "m_bDisabled", 0x600};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRange{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoDynamicShadowHint", "m_flRange", 0x604};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nImportance{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoDynamicShadowHint", "m_nImportance", 0x608};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLightChoice{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoDynamicShadowHint", "m_nLightChoice", 0x60C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hLight{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoDynamicShadowHint", "m_hLight", 0x610};  // CHandle<C_BaseEntity>
            }
            // Parent: C_PointEntity
            // Field count: 6
            namespace CPathNode {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vInTangentLocal{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPathNode", "m_vInTangentLocal", 0x600};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vOutTangentLocal{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPathNode", "m_vOutTangentLocal", 0x60C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strParentPathUniqueID{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPathNode", "m_strParentPathUniqueID", 0x618};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strPathNodeParameter{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPathNode", "m_strPathNodeParameter", 0x620};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_xWSPrevParent{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPathNode", "m_xWSPrevParent", 0x630};  // CTransformWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hPath{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPathNode", "m_hPath", 0x650};  // CHandle<CPathWithDynamicNodes>
            }
            // Parent: None
            // Field count: 0
            namespace C_FuncMoveLinear {
            }
            // Parent: C_BaseEntity
            // Field count: 6
            namespace C_EnvShakeVolume {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vBoxMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvShakeVolume", "m_vBoxMins", 0x618};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vBoxMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvShakeVolume", "m_vBoxMaxs", 0x624};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAmplitude{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvShakeVolume", "m_flAmplitude", 0x630};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFrequency{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvShakeVolume", "m_flFrequency", 0x634};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFalloffDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvShakeVolume", "m_flFalloffDistance", 0x638};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRollScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvShakeVolume", "m_flRollScale", 0x63C};  // float32
            }
            // Parent: None
            // Field count: 0
            namespace CServerOnlyModelEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamSelectCamera {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_IntervalTimer {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Completed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_IntervalTimer", "m_Completed", 0xD8};  // CPulse_ResumePoint
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnInterval{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_IntervalTimer", "m_OnInterval", 0x120};  // SignatureOutflow_Continue
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponXM1014 {
            }
            // Parent: None
            // Field count: 0
            namespace C_WorldModelGloves {
            }
            // Parent: None
            // Field count: 0
            namespace C_PhysicsPropMultiplayer {
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
            namespace C_SoundEventOBBEntity {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventOBBEntity", "m_vMins", 0x6C0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventOBBEntity", "m_vMaxs", 0x6CC};  // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseLerp {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_WakeResume{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_BaseLerp", "m_WakeResume", 0xD8};  // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponAug {
            }
            // Parent: None
            // Field count: 8
            namespace C_BasePropDoor {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_eDoorState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePropDoor", "m_eDoorState", 0x14C0};  // DoorState_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_modelChanged{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePropDoor", "m_modelChanged", 0x14C4};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bLocked{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePropDoor", "m_bLocked", 0x14C5};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNoNPCs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePropDoor", "m_bNoNPCs", 0x14C6};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_closedPosition{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePropDoor", "m_closedPosition", 0x14C8};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_closedAngles{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePropDoor", "m_closedAngles", 0x14D4};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hMaster{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePropDoor", "m_hMaster", 0x14E0};  // CHandle<C_BasePropDoor>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vWhereToSetLightingOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePropDoor", "m_vWhereToSetLightingOrigin", 0x14E4};  // VectorWS
            }
            // Parent: None
            // Field count: 0
            namespace CChoreoInfoTarget {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNetworkedSequenceOperation {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hSequence{::cs2_dumper::runtime::Category::Schema, "client.dll", "CNetworkedSequenceOperation", "m_hSequence", 0x8};  // HSequence
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPrevCycle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CNetworkedSequenceOperation", "m_flPrevCycle", 0xC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCycle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CNetworkedSequenceOperation", "m_flCycle", 0x10};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "CNetworkedSequenceOperation", "m_flWeight", 0x14};  // CNetworkedQuantizedFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSequenceChangeNetworked{::cs2_dumper::runtime::Category::Schema, "client.dll", "CNetworkedSequenceOperation", "m_bSequenceChangeNetworked", 0x1C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDiscontinuity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CNetworkedSequenceOperation", "m_bDiscontinuity", 0x1D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPrevCycleFromDiscontinuity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CNetworkedSequenceOperation", "m_flPrevCycleFromDiscontinuity", 0x20};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPrevCycleForAnimEventDetection{::cs2_dumper::runtime::Category::Schema, "client.dll", "CNetworkedSequenceOperation", "m_flPrevCycleForAnimEventDetection", 0x24};  // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_Item_Healthshot {
            }
            // Parent: C_BaseEntity
            // Field count: 7
            namespace CCSCustomHudLayout {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strLayout{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomHudLayout", "m_strLayout", 0x618};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bObservable{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomHudLayout", "m_bObservable", 0x620};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecPlayerLayoutStates{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomHudLayout", "m_vecPlayerLayoutStates", 0x628};  // C_UtlVectorEmbeddedNetworkVar<CCSCustomHudLayoutState>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_globalLayoutState{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomHudLayout", "m_globalLayoutState", 0x690};  // CCSCustomHudLayoutState
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecPanelIds{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomHudLayout", "m_vecPanelIds", 0x798};  // C_NetworkUtlVectorBase<CUtlString>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecClassNames{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomHudLayout", "m_vecClassNames", 0x7B0};  // C_NetworkUtlVectorBase<CUtlString>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecDialogVariableNames{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomHudLayout", "m_vecDialogVariableNames", 0x7C8};  // C_NetworkUtlVectorBase<CUtlString>
            }
            // Parent: None
            // Field count: 3
            namespace CEntityInstance {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszPrivateVScripts{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEntityInstance", "m_iszPrivateVScripts", 0x8};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEntityInstance", "m_pEntity", 0x10};  // CEntityIdentity*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_CScriptComponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEntityInstance", "m_CScriptComponent", 0x28};  // CScriptComponent*
            }
            // Parent: C_BaseEntity
            // Field count: 47
            namespace C_BaseModelEntity {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_CRenderComponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_CRenderComponent", 0xAF8};  // CRenderComponent*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_CHitboxComponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_CHitboxComponent", 0xB00};  // CHitboxComponent
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pChoreoComponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_pChoreoComponent", 0xB18};  // CChoreoComponent*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDestructiblePartInitialStateDestructed0{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_nDestructiblePartInitialStateDestructed0", 0xB20};  // HitGroup_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDestructiblePartInitialStateDestructed1{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_nDestructiblePartInitialStateDestructed1", 0xB24};  // HitGroup_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDestructiblePartInitialStateDestructed2{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_nDestructiblePartInitialStateDestructed2", 0xB28};  // HitGroup_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDestructiblePartInitialStateDestructed3{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_nDestructiblePartInitialStateDestructed3", 0xB2C};  // HitGroup_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDestructiblePartInitialStateDestructed4{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_nDestructiblePartInitialStateDestructed4", 0xB30};  // HitGroup_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDestructiblePartInitialStateDestructed0_PartIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_nDestructiblePartInitialStateDestructed0_PartIndex", 0xB34};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDestructiblePartInitialStateDestructed1_PartIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_nDestructiblePartInitialStateDestructed1_PartIndex", 0xB38};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDestructiblePartInitialStateDestructed2_PartIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_nDestructiblePartInitialStateDestructed2_PartIndex", 0xB3C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDestructiblePartInitialStateDestructed3_PartIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_nDestructiblePartInitialStateDestructed3_PartIndex", 0xB40};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDestructiblePartInitialStateDestructed4_PartIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_nDestructiblePartInitialStateDestructed4_PartIndex", 0xB44};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces", 0xB48};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces", 0xB49};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces", 0xB4A};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces", 0xB4B};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces", 0xB4C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pDestructiblePartsSystemComponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_pDestructiblePartsSystemComponent", 0xB50};  // CDestructiblePartsComponent*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInitModelEffects{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_bInitModelEffects", 0xC78};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDoingModelEffects{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_bDoingModelEffects", 0xC79};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iOldHealth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_iOldHealth", 0xC7C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRenderMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_nRenderMode", 0xC80};  // RenderMode_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRenderFX{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_nRenderFX", 0xC81};  // RenderFx_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAllowFadeInView{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_bAllowFadeInView", 0xC82};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_clrRender{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_clrRender", 0xCA0};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecRenderAttributes{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_vecRenderAttributes", 0xCA8};  // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRenderToCubemaps{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_bRenderToCubemaps", 0xD28};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bExpandRenderBoundsToIncludeCloth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_bExpandRenderBoundsToIncludeCloth", 0xD29};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNoInterpolate{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_bNoInterpolate", 0xD2A};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Collision{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_Collision", 0xD30};  // CCollisionProperty
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Glow{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_Glow", 0xDE8};  // CGlowProperty
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flGlowBackfaceMult{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_flGlowBackfaceMult", 0xE40};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fadeMinDist{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_fadeMinDist", 0xE44};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fadeMaxDist{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_fadeMaxDist", 0xE48};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_flFadeScale", 0xE4C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flShadowStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_flShadowStrength", 0xE50};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nObjectCulling{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_nObjectCulling", 0xE54};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRequiredDecalRtEncoding{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_nRequiredDecalRtEncoding", 0xE55};  // DecalRtEncoding_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bodyGroupTotalRequestCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_bodyGroupTotalRequestCount", 0xE58};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bodyGroupRequests{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_bodyGroupRequests", 0xE60};  // CUtlVectorFixedGrowable<C_BaseModelEntity::BodyGroupRequest_t,8>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bodyGroupChoices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_bodyGroupChoices", 0xF38};  // CUtlOrderedMap<CGlobalSymbol,int32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecViewOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_vecViewOffset", 0xF60};  // CNetworkViewOffsetVector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pClientAlphaProperty{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_pClientAlphaProperty", 0x1040};  // CClientAlphaProperty*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ClientOverrideTint{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_ClientOverrideTint", 0x1048};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUseClientOverrideTint{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_bUseClientOverrideTint", 0x104C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bvDisabledHitGroups{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity", "m_bvDisabledHitGroups", 0x1088};  // uint32[1]
            }
            // Parent: None
            // Field count: 1
            namespace CCSPlayer_BulletServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_totalHitsOnServer{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_BulletServices", "m_totalHitsOnServer", 0x48};  // int32
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace C_SoundOpvarSetAutoRoomEntity {
            }
            // Parent: C_BaseEntity
            // Field count: 27
            namespace C_EnvCombinedLightProbeVolume {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_Color{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_Color", 0x718};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_flBrightness{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_flBrightness", 0x71C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_hCubemapTexture{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_hCubemapTexture", 0x720};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_bCustomCubemapTexture{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_bCustomCubemapTexture", 0x728};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_hLightProbeTexture_AmbientCube{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_hLightProbeTexture_AmbientCube", 0x730};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_hLightProbeTexture_SDF{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_hLightProbeTexture_SDF", 0x738};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_hLightProbeTexture_SH2_DC{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_hLightProbeTexture_SH2_DC", 0x740};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_hLightProbeTexture_SH2_L1{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_hLightProbeTexture_SH2_L1", 0x748};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_hLightProbeDirectLightIndicesTexture{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_hLightProbeDirectLightIndicesTexture", 0x750};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_hLightProbeDirectLightScalarsTexture{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_hLightProbeDirectLightScalarsTexture", 0x758};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_hLightProbeDirectLightShadowsTexture{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_hLightProbeDirectLightShadowsTexture", 0x760};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_vBoxMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_vBoxMins", 0x768};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_vBoxMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_vBoxMaxs", 0x774};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_bMoveable{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_bMoveable", 0x780};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nHandshake{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_nHandshake", 0x784};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nEnvCubeMapArrayIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_nEnvCubeMapArrayIndex", 0x788};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nPriority{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_nPriority", 0x78C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_bStartDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_bStartDisabled", 0x790};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_flEdgeFadeDist{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_flEdgeFadeDist", 0x794};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_vEdgeFadeDists{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_vEdgeFadeDists", 0x798};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nLightProbeSizeX{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_nLightProbeSizeX", 0x7A4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nLightProbeSizeY{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_nLightProbeSizeY", 0x7A8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nLightProbeSizeZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_nLightProbeSizeZ", 0x7AC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nLightProbeAtlasX{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_nLightProbeAtlasX", 0x7B0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nLightProbeAtlasY{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_nLightProbeAtlasY", 0x7B4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nLightProbeAtlasZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_nLightProbeAtlasZ", 0x7B8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_bEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCombinedLightProbeVolume", "m_Entity_bEnabled", 0x7D1};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_EndOfMatchLineupEnd {
            }
            // Parent: None
            // Field count: 0
            namespace C_MultiplayRules {
            }
            // Parent: None
            // Field count: 0
            namespace CPlayer_AutoaimServices {
            }
            // Parent: None
            // Field count: 0
            namespace C_LightDirectionalEntity {
            }
            // Parent: None
            // Field count: 82
            namespace C_BaseEntity {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_CBodyComponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_CBodyComponent", 0x30};  // CBodyComponent*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_NetworkTransmitComponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_NetworkTransmitComponent", 0x38};  // CNetworkTransmitComponent
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLastThinkTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nLastThinkTick", 0x328};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pGameSceneNode{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_pGameSceneNode", 0x330};  // CGameSceneNode*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pRenderComponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_pRenderComponent", 0x338};  // CRenderComponent*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pCollision{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_pCollision", 0x340};  // CCollisionProperty*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMaxHealth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_iMaxHealth", 0x348};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iHealth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_iHealth", 0x34C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDamageAccumulator{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_flDamageAccumulator", 0x350};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_lifeState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_lifeState", 0x354};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bTakesDamage{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_bTakesDamage", 0x355};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTakeDamageFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nTakeDamageFlags", 0x358};  // TakeDamageFlags_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPlatformType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nPlatformType", 0x360};  // EntityPlatformTypes_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ubInterpolationFrame{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_ubInterpolationFrame", 0x361};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hSceneObjectController{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_hSceneObjectController", 0x364};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nNoInterpolationTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nNoInterpolationTick", 0x368};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nVisibilityNoInterpolationTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nVisibilityNoInterpolationTick", 0x36C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flProxyRandomValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_flProxyRandomValue", 0x370};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_iEFlags", 0x374};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nWaterType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nWaterType", 0x378};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInterpolateEvenWithNoModel{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_bInterpolateEvenWithNoModel", 0x379};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPredictionEligible{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_bPredictionEligible", 0x37A};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bApplyLayerMatchIDToModel{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_bApplyLayerMatchIDToModel", 0x37B};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_tokLayerMatchID{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_tokLayerMatchID", 0x37C};  // CUtlStringToken
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSubclassID{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nSubclassID", 0x380};  // CUtlStringToken
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSimulationTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nSimulationTick", 0x390};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iCurrentThinkContext{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_iCurrentThinkContext", 0x394};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_aThinkFunctions{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_aThinkFunctions", 0x398};  // CUtlVector<thinkfunc_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDisabledContextThinks{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_bDisabledContextThinks", 0x3B0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAnimTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_flAnimTime", 0x3B4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSimulationTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_flSimulationTime", 0x3B8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSceneObjectOverrideFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nSceneObjectOverrideFlags", 0x3BC};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasSuccessfullyInterpolated{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_bHasSuccessfullyInterpolated", 0x3BD};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasAddedVarsToInterpolation{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_bHasAddedVarsToInterpolation", 0x3BE};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRenderEvenWhenNotSuccessfullyInterpolated{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_bRenderEvenWhenNotSuccessfullyInterpolated", 0x3BF};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nInterpolationLatchDirtyFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nInterpolationLatchDirtyFlags", 0x3C0};  // int32[2]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ListEntry{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_ListEntry", 0x3C8};  // uint16[11]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCreateTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_flCreateTime", 0x3E0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_EntClientFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_EntClientFlags", 0x3E4};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bClientSideRagdoll{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_bClientSideRagdoll", 0x3E6};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iTeamNum{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_iTeamNum", 0x3E7};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_spawnflags{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_spawnflags", 0x3E8};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nNextThinkTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nNextThinkTick", 0x3EC};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_fFlags", 0x3F4};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecAbsVelocity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_vecAbsVelocity", 0x3F8};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecServerVelocity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_vecServerVelocity", 0x404};  // CNetworkVelocityVector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecVelocity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_vecVelocity", 0x430};  // CNetworkVelocityVector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecBaseVelocity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_vecBaseVelocity", 0x510};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hEffectEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_hEffectEntity", 0x51C};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hOwnerEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_hOwnerEntity", 0x520};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_MoveCollide{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_MoveCollide", 0x524};  // MoveCollide_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_MoveType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_MoveType", 0x525};  // MoveType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nActualMoveType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nActualMoveType", 0x526};  // MoveType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWaterLevel{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_flWaterLevel", 0x528};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fEffects{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_fEffects", 0x52C};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hGroundEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_hGroundEntity", 0x530};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nGroundBodyIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nGroundBodyIndex", 0x534};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFriction{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_flFriction", 0x538};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flElasticity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_flElasticity", 0x53C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flGravityScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_flGravityScale", 0x540};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTimeScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_flTimeScale", 0x544};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAnimatedEveryTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_bAnimatedEveryTick", 0x548};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bGravityDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_bGravityDisabled", 0x549};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNavIgnoreUntilTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_flNavIgnoreUntilTime", 0x54C};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hThink{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_hThink", 0x550};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fBBoxVisFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_fBBoxVisFlags", 0x560};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flActualGravityScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_flActualGravityScale", 0x564};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bGravityActuallyDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_bGravityActuallyDisabled", 0x568};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPredictable{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_bPredictable", 0x569};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRenderWithViewModels{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_bRenderWithViewModels", 0x56A};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFirstPredictableCommand{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nFirstPredictableCommand", 0x56C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLastPredictableCommand{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nLastPredictableCommand", 0x570};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hOldMoveParent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_hOldMoveParent", 0x574};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Particles{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_Particles", 0x578};  // CParticleProperty
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecAngVelocity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_vecAngVelocity", 0x5A8};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_DataChangeEventRef{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_DataChangeEventRef", 0x5B4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_dependencies{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_dependencies", 0x5B8};  // CUtlVector<CEntityHandle>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCreationTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nCreationTick", 0x5D0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAnimTimeChanged{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_bAnimTimeChanged", 0x5E1};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSimulationTimeChanged{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_bSimulationTimeChanged", 0x5E2};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sUniqueHammerID{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_sUniqueHammerID", 0x5F0};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBloodType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity", "m_nBloodType", 0x5F8};  // BloodType
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ActiveModelConfig_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Handle{::cs2_dumper::runtime::Category::Schema, "client.dll", "ActiveModelConfig_t", "m_Handle", 0x30};  // ModelConfigHandle_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Name{::cs2_dumper::runtime::Category::Schema, "client.dll", "ActiveModelConfig_t", "m_Name", 0x38};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_AssociatedEntities{::cs2_dumper::runtime::Category::Schema, "client.dll", "ActiveModelConfig_t", "m_AssociatedEntities", 0x40};  // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_AssociatedEntityNames{::cs2_dumper::runtime::Category::Schema, "client.dll", "ActiveModelConfig_t", "m_AssociatedEntityNames", 0x58};  // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponSSG08 {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CPulseCell_Value_Curve {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Curve{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Value_Curve", "m_Curve", 0x48};  // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 7
            namespace C_Chicken {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_leader{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Chicken", "m_leader", 0x14C0};  // CHandle<C_CSPlayerPawn>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_owner{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Chicken", "m_owner", 0x14C4};  // CHandle<CCSPlayerController>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_AttributeManager{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Chicken", "m_AttributeManager", 0x14C8};  // C_AttributeContainer
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAttributesInitialized{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Chicken", "m_bAttributesInitialized", 0x1AD8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hWaterWakeParticles{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Chicken", "m_hWaterWakeParticles", 0x1ADC};  // ParticleIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsPreviewModel{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Chicken", "m_bIsPreviewModel", 0x1AE0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSpawnDyingParticles{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Chicken", "m_bSpawnDyingParticles", 0x1B68};  // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 28
            namespace C_BasePlayerPawn {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pWeaponServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_pWeaponServices", 0x12F0};  // CPlayer_WeaponServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pItemServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_pItemServices", 0x12F8};  // CPlayer_ItemServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pAutoaimServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_pAutoaimServices", 0x1300};  // CPlayer_AutoaimServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pObserverServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_pObserverServices", 0x1308};  // CPlayer_ObserverServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pWaterServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_pWaterServices", 0x1310};  // CPlayer_WaterServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pUseServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_pUseServices", 0x1318};  // CPlayer_UseServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pFlashlightServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_pFlashlightServices", 0x1320};  // CPlayer_FlashlightServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pCameraServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_pCameraServices", 0x1328};  // CPlayer_CameraServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pMovementServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_pMovementServices", 0x1330};  // CPlayer_MovementServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ServerViewAngleChanges{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_ServerViewAngleChanges", 0x1340};  // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant v_angle{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "v_angle", 0x13A8};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant v_anglePrevious{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "v_anglePrevious", 0x13B4};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iHideHUD{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_iHideHUD", 0x13C0};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_skybox3d{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_skybox3d", 0x13C8};  // sky3dparams_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDeathTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_flDeathTime", 0x1458};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecPredictionError{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_vecPredictionError", 0x1460};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPredictionErrorTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_flPredictionErrorTime", 0x146C};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecLastCameraSetupLocalOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_vecLastCameraSetupLocalOrigin", 0x148C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastCameraSetupTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_flLastCameraSetupTime", 0x1498};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFOVSensitivityAdjust{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_flFOVSensitivityAdjust", 0x149C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMouseSensitivity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_flMouseSensitivity", 0x14A0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vOldOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_vOldOrigin", 0x14A4};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flOldSimulationTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_flOldSimulationTime", 0x14B0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLastExecutedCommandNumber{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_nLastExecutedCommandNumber", 0x14B4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLastExecutedCommandTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_nLastExecutedCommandTick", 0x14B8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hController{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_hController", 0x14BC};  // CHandle<CBasePlayerController>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hDefaultController{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_hDefaultController", 0x14C0};  // CHandle<CBasePlayerController>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsSwappingToPredictableController{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BasePlayerPawn", "m_bIsSwappingToPredictableController", 0x14C4};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_SoundOpvarSetAABBEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponBizon {
            }
            // Parent: None
            // Field count: 1
            namespace C_StattrakModule {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bKnife{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_StattrakModule", "m_bKnife", 0x1270};  // bool
            }
            // Parent: None
            // Field count: 1
            namespace CCSObserver_CameraServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hPrevPostProcessingVolume{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSObserver_CameraServices", "m_hPrevPostProcessingVolume", 0x2B0};  // CHandle<C_PostProcessingVolume>
            }
            // Parent: CEnvSoundscape
            // Field count: 1
            namespace CEnvSoundscapeProxy {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_MainSoundscapeName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEnvSoundscapeProxy", "m_MainSoundscapeName", 0x690};  // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 15
            namespace C_SoundEventEntity {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStartOnSpawn{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventEntity", "m_bStartOnSpawn", 0x600};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bToLocalPlayer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventEntity", "m_bToLocalPlayer", 0x601};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStopOnNew{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventEntity", "m_bStopOnNew", 0x602};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSaveRestore{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventEntity", "m_bSaveRestore", 0x603};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSavedIsPlaying{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventEntity", "m_bSavedIsPlaying", 0x604};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSavedElapsedTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventEntity", "m_flSavedElapsedTime", 0x608};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszSourceEntityName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventEntity", "m_iszSourceEntityName", 0x610};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszAttachmentName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventEntity", "m_iszAttachmentName", 0x618};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_onGUIDChanged{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventEntity", "m_onGUIDChanged", 0x620};  // CEntityOutputTemplate<SndOpEventGuid_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_onSoundFinished{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventEntity", "m_onSoundFinished", 0x650};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flClientCullRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventEntity", "m_flClientCullRadius", 0x668};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszSoundName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventEntity", "m_iszSoundName", 0x698};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hSource{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventEntity", "m_hSource", 0x6B4};  // CEntityHandle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nEntityIndexSelection{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventEntity", "m_nEntityIndexSelection", 0x6B8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bClientSideOnly{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventEntity", "m_bClientSideOnly", 0x0};  // bitfield:1
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_EventHandler {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_EventName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Inflow_EventHandler", "m_EventName", 0x80};  // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            namespace C_LightOrthoEntity {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseFlow {
            }
            // Parent: C_BaseTrigger
            // Field count: 1
            namespace CBombTarget {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBombPlantedHere{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBombTarget", "m_bBombPlantedHere", 0x1180};  // bool
            }
            // Parent: None
            // Field count: 1
            namespace C_Knife {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFirstAttack{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Knife", "m_bFirstAttack", 0x1F20};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TerroristWingmanIntroCamera {
            }
            // Parent: CGameSceneNode
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSkeletonInstance {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_modelState{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSkeletonInstance", "m_modelState", 0x140};  // CModelState
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUseParentRenderBounds{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSkeletonInstance", "m_bUseParentRenderBounds", 0x3F0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDisableSolidCollisionsForHierarchy{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSkeletonInstance", "m_bDisableSolidCollisionsForHierarchy", 0x3F1};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDirtyMotionType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSkeletonInstance", "m_bDirtyMotionType", 0x3F2};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsGeneratingLatchedParentSpaceState{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSkeletonInstance", "m_bIsGeneratingLatchedParentSpaceState", 0x3F3};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_materialGroup{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSkeletonInstance", "m_materialGroup", 0x3F8};  // CUtlStringToken
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nHitboxSet{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSkeletonInstance", "m_nHitboxSet", 0x3FC};  // uint8
            }
            // Parent: None
            // Field count: 0
            namespace CEntityComponent {
            }
            // Parent: None
            // Field count: 2
            namespace C_ItemDogtags {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OwningPlayer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ItemDogtags", "m_OwningPlayer", 0x1A18};  // CHandle<C_CSPlayerPawn>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_KillingPlayer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ItemDogtags", "m_KillingPlayer", 0x1A1C};  // CHandle<C_CSPlayerPawn>
            }
            // Parent: None
            // Field count: 0
            namespace C_LateUpdatedAnimating {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamPreviewCameraBone {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Shuffle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Outflow_CycleShuffled__InstanceState_t", "m_Shuffle", 0x0};  // CUtlVectorFixedGrowable<uint8,8>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nNextShuffle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Outflow_CycleShuffled__InstanceState_t", "m_nNextShuffle", 0x20};  // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseLerp__CursorState_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_StartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_BaseLerp__CursorState_t", "m_StartTime", 0x0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_EndTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_BaseLerp__CursorState_t", "m_EndTime", 0x4};  // GameTime_t
            }
            // Parent: C_BaseModelEntity
            // Field count: 4
            namespace C_BaseClientUIEntity {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseClientUIEntity", "m_bEnabled", 0x10A0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_DialogXMLName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseClientUIEntity", "m_DialogXMLName", 0x10A8};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PanelClassName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseClientUIEntity", "m_PanelClassName", 0x10B0};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PanelID{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseClientUIEntity", "m_PanelID", 0x10B8};  // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponUSPSilencer {
            }
            // Parent: None
            // Field count: 1
            namespace C_MolotovProjectile {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsIncGrenade{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_MolotovProjectile", "m_bIsIncGrenade", 0x1348};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_TriggerLerpObject {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponRevolver {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponElite {
            }
            // Parent: None
            // Field count: 0
            namespace C_DynamicPropAlias_cable_dynamic {
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            namespace CBaseProp {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bModelOverrodeBlockLOS{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseProp", "m_bModelOverrodeBlockLOS", 0x1268};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iShapeType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseProp", "m_iShapeType", 0x126C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bConformToCollisionBounds{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseProp", "m_bConformToCollisionBounds", 0x1270};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_mPreferredCatchTransform{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseProp", "m_mPreferredCatchTransform", 0x1280};  // CTransform
            }
            // Parent: C_PointEntity
            // Field count: 13
            namespace CInfoOffscreenPanoramaTexture {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoOffscreenPanoramaTexture", "m_bDisabled", 0x600};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnableMipGen{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoOffscreenPanoramaTexture", "m_bEnableMipGen", 0x601};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nResolutionX{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoOffscreenPanoramaTexture", "m_nResolutionX", 0x604};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nResolutionY{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoOffscreenPanoramaTexture", "m_nResolutionY", 0x608};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szPanelType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoOffscreenPanoramaTexture", "m_szPanelType", 0x610};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szLayoutFileName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoOffscreenPanoramaTexture", "m_szLayoutFileName", 0x618};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_RenderAttrName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoOffscreenPanoramaTexture", "m_RenderAttrName", 0x620};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_TargetEntities{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoOffscreenPanoramaTexture", "m_TargetEntities", 0x628};  // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTargetChangeCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoOffscreenPanoramaTexture", "m_nTargetChangeCount", 0x640};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecCSSClasses{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoOffscreenPanoramaTexture", "m_vecCSSClasses", 0x648};  // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szTargetsName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoOffscreenPanoramaTexture", "m_szTargetsName", 0x660};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_AdditionalTargetEntities{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoOffscreenPanoramaTexture", "m_AdditionalTargetEntities", 0x668};  // CUtlVector<CHandle<C_BaseModelEntity>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCheckCSSClasses{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoOffscreenPanoramaTexture", "m_bCheckCSSClasses", 0x7E0};  // bool
            }
            // Parent: None
            // Field count: 83
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertySuppressBaseClassField
            // MPropertySuppressBaseClassField
            namespace CCSWeaponBaseVData {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_WeaponType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_WeaponType", 0x520};  // CSWeaponType
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_WeaponCategory{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_WeaponCategory", 0x524};  // CSWeaponCategory
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szAnimSkeleton{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_szAnimSkeleton", 0x528};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCNmSkeleton>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecMuzzlePos0{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_vecMuzzlePos0", 0x608};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecMuzzlePos1{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_vecMuzzlePos1", 0x614};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szTracerParticle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_szTracerParticle", 0x620};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_GearSlot{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_GearSlot", 0x700};  // gear_slot_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_GearSlotPosition{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_GearSlotPosition", 0x704};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_DefaultLoadoutSlot{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_DefaultLoadoutSlot", 0x708};  // loadout_slot_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPrice{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_nPrice", 0x70C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nKillAward{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_nKillAward", 0x710};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPrimaryReserveAmmoMax{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_nPrimaryReserveAmmoMax", 0x714};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSecondaryReserveAmmoMax{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_nSecondaryReserveAmmoMax", 0x718};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bMeleeWeapon{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_bMeleeWeapon", 0x71C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasBurstMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_bHasBurstMode", 0x71D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsRevolver{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_bIsRevolver", 0x71E};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCannotShootUnderwater{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_bCannotShootUnderwater", 0x71F};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_szName", 0x720};  // CGlobalSymbol
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_eSilencerType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_eSilencerType", 0x728};  // CSWeaponSilencerType
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bShowCrosshair{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_bShowCrosshair", 0x72C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsFullAuto{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_bIsFullAuto", 0x72D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nNumBullets{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_nNumBullets", 0x730};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bReloadsSingleShells{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_bReloadsSingleShells", 0x734};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCycleTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flCycleTime", 0x738};  // CFiringModeFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCycleTimeWhenInBurstMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flCycleTimeWhenInBurstMode", 0x740};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTimeBetweenBurstShots{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flTimeBetweenBurstShots", 0x744};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMaxSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flMaxSpeed", 0x748};  // CFiringModeFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSpread{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flSpread", 0x750};  // CFiringModeFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInaccuracyCrouch{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flInaccuracyCrouch", 0x758};  // CFiringModeFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInaccuracyStand{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flInaccuracyStand", 0x760};  // CFiringModeFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInaccuracyJump{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flInaccuracyJump", 0x768};  // CFiringModeFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInaccuracyLand{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flInaccuracyLand", 0x770};  // CFiringModeFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInaccuracyLadder{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flInaccuracyLadder", 0x778};  // CFiringModeFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInaccuracyFire{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flInaccuracyFire", 0x780};  // CFiringModeFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInaccuracyMove{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flInaccuracyMove", 0x788};  // CFiringModeFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRecoilAngle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flRecoilAngle", 0x790};  // CFiringModeFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRecoilAngleVariance{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flRecoilAngleVariance", 0x798};  // CFiringModeFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRecoilMagnitude{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flRecoilMagnitude", 0x7A0};  // CFiringModeFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRecoilMagnitudeVariance{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flRecoilMagnitudeVariance", 0x7A8};  // CFiringModeFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTracerFrequency{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_nTracerFrequency", 0x7B0};  // CFiringModeInt
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInaccuracyJumpInitial{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flInaccuracyJumpInitial", 0x7B8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInaccuracyJumpApex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flInaccuracyJumpApex", 0x7BC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInaccuracyReload{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flInaccuracyReload", 0x7C0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDeployDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flDeployDuration", 0x7C4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDisallowAttackAfterReloadStartDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flDisallowAttackAfterReloadStartDuration", 0x7C8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBurstShotCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_nBurstShotCount", 0x7CC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAllowBurstHolster{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_bAllowBurstHolster", 0x7D0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRecoilSeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_nRecoilSeed", 0x7D4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSpreadSeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_nSpreadSeed", 0x7D8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAttackMovespeedFactor{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flAttackMovespeedFactor", 0x7DC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInaccuracyPitchShift{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flInaccuracyPitchShift", 0x7E0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInaccuracyAltSoundThreshold{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flInaccuracyAltSoundThreshold", 0x7E4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szUseRadioSubtitle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_szUseRadioSubtitle", 0x7E8};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUnzoomsAfterShot{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_bUnzoomsAfterShot", 0x7F0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHideViewModelWhenZoomed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_bHideViewModelWhenZoomed", 0x7F1};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nZoomLevels{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_nZoomLevels", 0x7F4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nZoomFOV1{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_nZoomFOV1", 0x7F8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nZoomFOV2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_nZoomFOV2", 0x7FC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flZoomTime0{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flZoomTime0", 0x800};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flZoomTime1{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flZoomTime1", 0x804};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flZoomTime2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flZoomTime2", 0x808};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flIronSightPullUpSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flIronSightPullUpSpeed", 0x80C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flIronSightPutDownSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flIronSightPutDownSpeed", 0x810};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flIronSightFOV{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flIronSightFOV", 0x814};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flIronSightPivotForward{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flIronSightPivotForward", 0x818};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flIronSightLooseness{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flIronSightLooseness", 0x81C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDamage{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_nDamage", 0x820};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flHeadshotMultiplier{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flHeadshotMultiplier", 0x824};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flArmorRatio{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flArmorRatio", 0x828};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPenetration{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flPenetration", 0x82C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRange{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flRange", 0x830};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRangeModifier{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flRangeModifier", 0x834};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFlinchVelocityModifierLarge{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flFlinchVelocityModifierLarge", 0x838};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFlinchVelocityModifierSmall{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flFlinchVelocityModifierSmall", 0x83C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRecoveryTimeCrouch{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flRecoveryTimeCrouch", 0x840};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRecoveryTimeStand{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flRecoveryTimeStand", 0x844};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRecoveryTimeCrouchFinal{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flRecoveryTimeCrouchFinal", 0x848};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRecoveryTimeStandFinal{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flRecoveryTimeStandFinal", 0x84C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRecoveryTransitionStartBullet{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_nRecoveryTransitionStartBullet", 0x850};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRecoveryTransitionEndBullet{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_nRecoveryTransitionEndBullet", 0x854};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flThrowVelocity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_flThrowVelocity", 0x858};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vSmokeColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_vSmokeColor", 0x85C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szAnimClass{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSWeaponBaseVData", "m_szAnimClass", 0x868};  // CGlobalSymbol
            }
            // Parent: None
            // Field count: 6
            namespace CAttributeManager {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Providers{::cs2_dumper::runtime::Category::Schema, "client.dll", "CAttributeManager", "m_Providers", 0x8};  // CUtlVector<CHandle<C_BaseEntity>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iReapplyProvisionParity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CAttributeManager", "m_iReapplyProvisionParity", 0x20};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hOuter{::cs2_dumper::runtime::Category::Schema, "client.dll", "CAttributeManager", "m_hOuter", 0x24};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPreventLoopback{::cs2_dumper::runtime::Category::Schema, "client.dll", "CAttributeManager", "m_bPreventLoopback", 0x28};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ProviderType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CAttributeManager", "m_ProviderType", 0x2C};  // attributeprovidertypes_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_CachedResults{::cs2_dumper::runtime::Category::Schema, "client.dll", "CAttributeManager", "m_CachedResults", 0x30};  // CUtlVector<CAttributeManager::cached_attribute_float_t>
            }
            // Parent: None
            // Field count: 0
            namespace SignatureOutflow_Continue {
            }
            // Parent: None
            // Field count: 0
            namespace CInfoTarget {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 20
            namespace CPlayer_CameraServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecCsViewPunchAngle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_vecCsViewPunchAngle", 0x48};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCsViewPunchAngleTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_nCsViewPunchAngleTick", 0x54};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCsViewPunchAngleTickRatio{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_flCsViewPunchAngleTickRatio", 0x58};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PlayerFog{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_PlayerFog", 0x60};  // C_fogplayerparams_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hColorCorrectionCtrl{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_hColorCorrectionCtrl", 0xA0};  // CHandle<C_ColorCorrection>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hViewEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_hViewEntity", 0xA4};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hTonemapController{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_hTonemapController", 0xA8};  // CHandle<C_TonemapController2>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_audio{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_audio", 0xB0};  // audioparams_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PostProcessingVolumes{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_PostProcessingVolumes", 0x128};  // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flOldPlayerZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_flOldPlayerZ", 0x140};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flOldPlayerViewOffsetZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_flOldPlayerViewOffsetZ", 0x144};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_CurrentFog{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_CurrentFog", 0x148};  // fogparams_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hOldFogController{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_hOldFogController", 0x1B0};  // CHandle<C_FogController>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bOverrideFogColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_bOverrideFogColor", 0x1B4};  // bool[5]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OverrideFogColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_OverrideFogColor", 0x1BC};  // Color[5]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bOverrideFogStartEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_bOverrideFogStartEnd", 0x1D0};  // bool[5]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fOverrideFogStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_fOverrideFogStart", 0x1D8};  // float32[5]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fOverrideFogEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_fOverrideFogEnd", 0x1EC};  // float32[5]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hActivePostProcessingVolume{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_hActivePostProcessingVolume", 0x200};  // CHandle<C_PostProcessingVolume>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_angDemoViewAngles{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_CameraServices", "m_angDemoViewAngles", 0x208};  // QAngle
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Timeline {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_TimelineEvents{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Timeline", "m_TimelineEvents", 0xD8};  // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWaitForChildOutflows{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Timeline", "m_bWaitForChildOutflows", 0xF0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnFinished{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Timeline", "m_OnFinished", 0xF8};  // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_EntOutputHandler {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SourceEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Inflow_EntOutputHandler", "m_SourceEntity", 0x80};  // PulseSymbol_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SourceOutput{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Inflow_EntOutputHandler", "m_SourceOutput", 0x90};  // PulseSymbol_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ExpectedParamType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Inflow_EntOutputHandler", "m_ExpectedParamType", 0xA0};  // CPulseValueFullType
            }
            // Parent: None
            // Field count: 14
            namespace C_BaseCSGrenade {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bClientPredictDelete{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenade", "m_bClientPredictDelete", 0x1F20};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRedraw{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenade", "m_bRedraw", 0x1F21};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsHeldByPlayer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenade", "m_bIsHeldByPlayer", 0x1F22};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPinPulled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenade", "m_bPinPulled", 0x1F23};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bJumpThrow{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenade", "m_bJumpThrow", 0x1F24};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bThrowAnimating{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenade", "m_bThrowAnimating", 0x1F25};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fThrowTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenade", "m_fThrowTime", 0x1F28};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flThrowStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenade", "m_flThrowStrength", 0x1F30};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fDropTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenade", "m_fDropTime", 0x1FA8};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fPinPullTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenade", "m_fPinPullTime", 0x1FAC};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bJustPulledPin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenade", "m_bJustPulledPin", 0x1FB0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nNextHoldTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenade", "m_nNextHoldTick", 0x1FB4};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNextHoldFrac{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenade", "m_flNextHoldFrac", 0x1FB8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hSwitchToWeaponAfterThrow{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenade", "m_hSwitchToWeaponAfterThrow", 0x1FBC};  // CHandle<C_CSWeaponBase>
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterAttributeInt {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sAttributeName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFilterAttributeInt", "m_sAttributeName", 0x638};  // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 12
            namespace CPointTemplate {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszWorldName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointTemplate", "m_iszWorldName", 0x600};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszSource2EntityLumpName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointTemplate", "m_iszSource2EntityLumpName", 0x608};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszEntityFilterName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointTemplate", "m_iszEntityFilterName", 0x610};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTimeoutInterval{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointTemplate", "m_flTimeoutInterval", 0x618};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAsynchronouslySpawnEntities{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointTemplate", "m_bAsynchronouslySpawnEntities", 0x61C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_clientOnlyEntityBehavior{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointTemplate", "m_clientOnlyEntityBehavior", 0x620};  // PointTemplateClientOnlyEntityBehavior_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ownerSpawnGroupType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointTemplate", "m_ownerSpawnGroupType", 0x624};  // PointTemplateOwnerSpawnGroupType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_createdSpawnGroupHandles{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointTemplate", "m_createdSpawnGroupHandles", 0x628};  // CUtlVector<uint32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SpawnedEntityHandles{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointTemplate", "m_SpawnedEntityHandles", 0x640};  // CUtlVector<CEntityHandle>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ScriptSpawnCallback{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointTemplate", "m_ScriptSpawnCallback", 0x658};  // HSCRIPT
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ScriptCallbackScope{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointTemplate", "m_ScriptCallbackScope", 0x660};  // HSCRIPT
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnEntitySpawned{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointTemplate", "m_OnEntitySpawned", 0x668};  // CEntityOutputTemplate<CUtlVector<CEntityHandle>>
            }
            // Parent: None
            // Field count: 0
            namespace CPlayer_FlashlightServices {
            }
            // Parent: CBasePlayerController
            // Field count: 70
            namespace CCSPlayerController {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pInGameMoneyServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_pInGameMoneyServices", 0x818};  // CCSPlayerController_InGameMoneyServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pInventoryServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_pInventoryServices", 0x820};  // CCSPlayerController_InventoryServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pActionTrackingServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_pActionTrackingServices", 0x828};  // CCSPlayerController_ActionTrackingServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pDamageServices{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_pDamageServices", 0x830};  // CCSPlayerController_DamageServices*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iPing{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iPing", 0x838};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasCommunicationAbuseMute{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bHasCommunicationAbuseMute", 0x83C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_uiCommunicationMuteFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_uiCommunicationMuteFlags", 0x840};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szCrosshairCodes{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_szCrosshairCodes", 0x848};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iPendingTeamNum{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iPendingTeamNum", 0x850};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flForceTeamTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_flForceTeamTime", 0x854};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iCompTeammateColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iCompTeammateColor", 0x858};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEverPlayedOnTeam{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bEverPlayedOnTeam", 0x85C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPreviousForceJoinTeamTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_flPreviousForceJoinTeamTime", 0x860};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szClan{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_szClan", 0x868};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unClanId32bit{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_unClanId32bit", 0x870};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sSanitizedPlayerName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_sSanitizedPlayerName", 0x878};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sSanitizedClanTag{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_sSanitizedClanTag", 0x880};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iCoachingTeam{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iCoachingTeam", 0x888};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPlayerDominated{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_nPlayerDominated", 0x890};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPlayerDominatingMe{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_nPlayerDominatingMe", 0x898};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iCompetitiveRanking{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iCompetitiveRanking", 0x8A0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iCompetitiveWins{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iCompetitiveWins", 0x8A4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iCompetitiveRankType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iCompetitiveRankType", 0x8A8};  // int8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iCompetitiveRankingPredicted_Win{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iCompetitiveRankingPredicted_Win", 0x8AC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iCompetitiveRankingPredicted_Loss{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iCompetitiveRankingPredicted_Loss", 0x8B0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iCompetitiveRankingPredicted_Tie{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iCompetitiveRankingPredicted_Tie", 0x8B4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nEndMatchNextMapVote{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_nEndMatchNextMapVote", 0x8B8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unActiveQuestId{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_unActiveQuestId", 0x8BC};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_rtActiveMissionPeriod{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_rtActiveMissionPeriod", 0x8C0};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nQuestProgressReason{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_nQuestProgressReason", 0x8C4};  // QuestProgress::Reason
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unPlayerTvControlFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_unPlayerTvControlFlags", 0x8C8};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iDraftIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iDraftIndex", 0x8F8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_msQueuedModeDisconnectionTimestamp{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_msQueuedModeDisconnectionTimestamp", 0x8FC};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_uiAbandonRecordedReason{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_uiAbandonRecordedReason", 0x900};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_eNetworkDisconnectionReason{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_eNetworkDisconnectionReason", 0x904};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCannotBeKicked{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bCannotBeKicked", 0x908};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEverFullyConnected{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bEverFullyConnected", 0x909};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAbandonAllowsSurrender{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bAbandonAllowsSurrender", 0x90A};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAbandonOffersInstantSurrender{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bAbandonOffersInstantSurrender", 0x90B};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDisconnection1MinWarningPrinted{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bDisconnection1MinWarningPrinted", 0x90C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bScoreReported{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bScoreReported", 0x90D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDisconnectionTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_nDisconnectionTick", 0x910};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bControllingBot{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bControllingBot", 0x920};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasControlledBotThisRound{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bHasControlledBotThisRound", 0x921};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasBeenControlledByPlayerThisRound{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bHasBeenControlledByPlayerThisRound", 0x922};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBotsControlledThisRound{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_nBotsControlledThisRound", 0x924};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCanControlObservedBot{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bCanControlObservedBot", 0x928};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hPlayerPawn{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_hPlayerPawn", 0x92C};  // CHandle<C_CSPlayerPawn>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hObserverPawn{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_hObserverPawn", 0x930};  // CHandle<C_CSObserverPawn>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPawnIsAlive{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bPawnIsAlive", 0x934};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iPawnHealth{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iPawnHealth", 0x938};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iPawnArmor{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iPawnArmor", 0x93C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPawnHasDefuser{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bPawnHasDefuser", 0x940};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPawnHasHelmet{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bPawnHasHelmet", 0x941};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPawnCharacterDefIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_nPawnCharacterDefIndex", 0x942};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iPawnLifetimeStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iPawnLifetimeStart", 0x944};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iPawnLifetimeEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iPawnLifetimeEnd", 0x948};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iPawnBotDifficulty{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iPawnBotDifficulty", 0x94C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hOriginalControllerOfCurrentPawn{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_hOriginalControllerOfCurrentPawn", 0x950};  // CHandle<CCSPlayerController>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iScore{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iScore", 0x954};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_recentKillQueue{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_recentKillQueue", 0x958};  // uint8[8]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFirstKill{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_nFirstKill", 0x960};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nKillCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_nKillCount", 0x961};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bMvpNoMusic{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bMvpNoMusic", 0x962};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_eMvpReason{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_eMvpReason", 0x964};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMusicKitID{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iMusicKitID", 0x968};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMusicKitMVPs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iMusicKitMVPs", 0x96C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMVPs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_iMVPs", 0x970};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsPlayerNameDirty{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bIsPlayerNameDirty", 0x974};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFireBulletsSeedSynchronized{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController", "m_bFireBulletsSeedSynchronized", 0x97C};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_CounterTerroristRushIntroCamera {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamIntroCounterTerroristPosition {
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            namespace C_CSGO_PreviewModel {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_defaultAnim{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_PreviewModel", "m_defaultAnim", 0x1268};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDefaultAnimLoopMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_PreviewModel", "m_nDefaultAnimLoopMode", 0x1270};  // AnimLoopMode_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInitialModelScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_PreviewModel", "m_flInitialModelScale", 0x1274};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sInitialWeaponState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_PreviewModel", "m_sInitialWeaponState", 0x1278};  // CUtlString
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamSelectCharacterPosition {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nNextIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Outflow_CycleOrdered__InstanceState_t", "m_nNextIndex", 0x0};  // int32
            }
            // Parent: C_BaseEntity
            // Field count: 4
            namespace CCSObservableElement {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszObservableModelEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSObservableElement", "m_iszObservableModelEntity", 0x618};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hObservableModelEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSObservableElement", "m_hObservableModelEntity", 0x620};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hObservableModelEntity2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSObservableElement", "m_hObservableModelEntity2", 0x624};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTeamFilter{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSObservableElement", "m_nTeamFilter", 0x628};  // uint32
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
            namespace C_SoundEventAABBEntity {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventAABBEntity", "m_vMins", 0x6C0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventAABBEntity", "m_vMaxs", 0x6CC};  // Vector
            }
            // Parent: None
            // Field count: 49
            namespace CCSPlayer_MovementServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_AnimationState{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_AnimationState", 0x310};  // CCSPlayerAnimationState
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUsingGroundTopologyOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_bUsingGroundTopologyOffset", 0x3F0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flUsingGroundTopologyOffsetTransitionSmoothing{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flUsingGroundTopologyOffsetTransitionSmoothing", 0x3F4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecLadderNormal{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_vecLadderNormal", 0x3F8};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLadderSurfacePropIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_nLadderSurfacePropIndex", 0x404};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDucked{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_bDucked", 0x408};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDuckAmount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flDuckAmount", 0x40C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDuckSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flDuckSpeed", 0x410};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDuckOverride{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_bDuckOverride", 0x414};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDesiresDuck{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_bDesiresDuck", 0x415};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDucking{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_bDucking", 0x416};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDuckRootOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flDuckRootOffset", 0x418};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDuckViewOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flDuckViewOffset", 0x41C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastDuckTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flLastDuckTime", 0x420};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBombPlantViewOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flBombPlantViewOffset", 0x424};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecLastPositionAtFullCrouchSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_vecLastPositionAtFullCrouchSpeed", 0x430};  // Vector2D
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_duckUntilOnGround{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_duckUntilOnGround", 0x438};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasWalkMovedSinceLastJump{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_bHasWalkMovedSinceLastJump", 0x439};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInStuckTest{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_bInStuckTest", 0x43A};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTraceCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_nTraceCount", 0x648};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_StuckLast{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_StuckLast", 0x64C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSpeedCropped{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_bSpeedCropped", 0x650};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nOldWaterLevel{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_nOldWaterLevel", 0x654};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWaterEntryTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flWaterEntryTime", 0x658};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecForward{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_vecForward", 0x65C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecLeft{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_vecLeft", 0x668};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecUp{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_vecUp", 0x674};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nGameCodeHasMovedPlayerAfterCommand{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_nGameCodeHasMovedPlayerAfterCommand", 0x680};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fStashGrenadeParameterWhen{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_fStashGrenadeParameterWhen", 0x684};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUseFrictionStashedSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_bUseFrictionStashedSpeed", 0x688};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flUseFrictionStashedSpeedUntilFrac{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flUseFrictionStashedSpeedUntilFrac", 0x68C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFrictionStashedSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flFrictionStashedSpeed", 0x690};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStamina{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flStamina", 0x694};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flHeightAtJumpStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flHeightAtJumpStart", 0x698};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMaxJumpHeightThisJump{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flMaxJumpHeightThisJump", 0x69C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMaxJumpHeightLastJump{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flMaxJumpHeightLastJump", 0x6A0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStaminaAtJumpStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flStaminaAtJumpStart", 0x6A4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flVelMulAtJumpStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flVelMulAtJumpStart", 0x6A8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAccumulatedJumpError{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flAccumulatedJumpError", 0x6AC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_LegacyJump{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_LegacyJump", 0x6B0};  // CCSPlayerLegacyJump
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ModernJump{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_ModernJump", 0x6C8};  // CCSPlayerModernJump
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLastJumpTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_nLastJumpTick", 0x700};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastJumpFrac{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flLastJumpFrac", 0x704};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastJumpVelocityZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flLastJumpVelocityZ", 0x708};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bJumpApexPending{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_bJumpApexPending", 0x70C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTicksSinceLastSurfingDetected{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_flTicksSinceLastSurfingDetected", 0x710};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWasSurfing{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_bWasSurfing", 0x714};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecWalkWishVel{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_vecWalkWishVel", 0x7A4};  // Vector2D
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasEverProcessedCommand{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_MovementServices", "m_bHasEverProcessedCommand", 0xFD0};  // bool
            }
            // Parent: None
            // Field count: 5
            namespace SellbackPurchaseEntry_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unDefIdx{::cs2_dumper::runtime::Category::Schema, "client.dll", "SellbackPurchaseEntry_t", "m_unDefIdx", 0x30};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCost{::cs2_dumper::runtime::Category::Schema, "client.dll", "SellbackPurchaseEntry_t", "m_nCost", 0x34};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPrevArmor{::cs2_dumper::runtime::Category::Schema, "client.dll", "SellbackPurchaseEntry_t", "m_nPrevArmor", 0x38};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPrevHelmet{::cs2_dumper::runtime::Category::Schema, "client.dll", "SellbackPurchaseEntry_t", "m_bPrevHelmet", 0x3C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hItem{::cs2_dumper::runtime::Category::Schema, "client.dll", "SellbackPurchaseEntry_t", "m_hItem", 0x40};  // CEntityHandle
            }
            // Parent: None
            // Field count: 0
            namespace C_TintController {
            }
            // Parent: None
            // Field count: 2
            namespace C_WeaponBaseItem {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSequenceInProgress{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_WeaponBaseItem", "m_bSequenceInProgress", 0x1F20};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRedraw{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_WeaponBaseItem", "m_bRedraw", 0x1F21};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace CWaterSplasher {
            }
            // Parent: None
            // Field count: 0
            namespace C_FuncBrush {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PhysicsRagdollPose_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_RelativeTransforms{::cs2_dumper::runtime::Category::Schema, "client.dll", "PhysicsRagdollPose_t", "m_RelativeTransforms", 0x8};  // C_NetworkUtlVectorBase<CTransform>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hOwner{::cs2_dumper::runtime::Category::Schema, "client.dll", "PhysicsRagdollPose_t", "m_hOwner", 0x20};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSetFromDebugHistory{::cs2_dumper::runtime::Category::Schema, "client.dll", "PhysicsRagdollPose_t", "m_bSetFromDebugHistory", 0x24};  // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPropDataComponent {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDmgModBullet{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPropDataComponent", "m_flDmgModBullet", 0x10};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDmgModClub{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPropDataComponent", "m_flDmgModClub", 0x14};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDmgModExplosive{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPropDataComponent", "m_flDmgModExplosive", 0x18};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDmgModFire{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPropDataComponent", "m_flDmgModFire", 0x1C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszPhysicsDamageTableName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPropDataComponent", "m_iszPhysicsDamageTableName", 0x20};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszBasePropData{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPropDataComponent", "m_iszBasePropData", 0x28};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nInteractions{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPropDataComponent", "m_nInteractions", 0x30};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSpawnMotionDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPropDataComponent", "m_bSpawnMotionDisabled", 0x34};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDisableTakePhysicsDamageSpawnFlag{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPropDataComponent", "m_nDisableTakePhysicsDamageSpawnFlag", 0x38};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMotionDisabledSpawnFlag{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPropDataComponent", "m_nMotionDisabledSpawnFlag", 0x3C};  // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_LimitCount__InstanceState_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCurrentCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_LimitCount__InstanceState_t", "m_nCurrentCount", 0x0};  // int32
            }
            // Parent: None
            // Field count: 1
            namespace C_WeaponCZ75a {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bMagazineRemoved{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_WeaponCZ75a", "m_bMagazineRemoved", 0x1F50};  // bool
            }
            // Parent: None
            // Field count: 7
            namespace C_DynamicLight {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Flags{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicLight", "m_Flags", 0x1098};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_LightStyle{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicLight", "m_LightStyle", 0x1099};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Radius{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicLight", "m_Radius", 0x109C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Exponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicLight", "m_Exponent", 0x10A0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_InnerAngle{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicLight", "m_InnerAngle", 0x10A4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OuterAngle{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicLight", "m_OuterAngle", 0x10A8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SpotRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicLight", "m_SpotRadius", 0x10AC};  // float32
            }
            // Parent: None
            // Field count: 28
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCS2PawnGraphController {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsDefusing{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_bIsDefusing", 0x2D8};  // CAnimGraph2ParamOptionalRef<bool>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_moveType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_moveType", 0x2F0};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_moveDirectionID{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_moveDirectionID", 0x308};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMoveSpeedX{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flMoveSpeedX", 0x320};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMoveSpeedY{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flMoveSpeedY", 0x338};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMoveSpeedHorizontal{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flMoveSpeedHorizontal", 0x350};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPreviousMoveSpeedHorizontal{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flPreviousMoveSpeedHorizontal", 0x368};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCrouchAmount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flCrouchAmount", 0x380};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsWalking{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_bIsWalking", 0x398};  // CAnimGraph2ParamOptionalRef<bool>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWeaponDropAmount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flWeaponDropAmount", 0x3B0};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_groundAction{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_groundAction", 0x3C8};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_groundActionDirectionID{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_groundActionDirectionID", 0x3E0};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flGroundTurnAngleOrVelocity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flGroundTurnAngleOrVelocity", 0x3F8};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLadderCycle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flLadderCycle", 0x410};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLadderYaw{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flLadderYaw", 0x428};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLadderYawBackwards{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flLadderYawBackwards", 0x440};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_airAction{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_airAction", 0x458};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAirHeightAboveGround{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flAirHeightAboveGround", 0x470};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_leftFootTarget{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_leftFootTarget", 0x488};  // CAnimGraph2ParamOptionalRef<CNmTarget>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_rightFootTarget{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_rightFootTarget", 0x4A0};  // CAnimGraph2ParamOptionalRef<CNmTarget>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFlashedAmount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flFlashedAmount", 0x4B8};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAimPitchAngle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flAimPitchAngle", 0x4D0};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAimYawAngle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flAimYawAngle", 0x4E8};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flinchHead{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flinchHead", 0x500};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flinchHeadRestart{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flinchHeadRestart", 0x518};  // CAnimGraph2ParamOptionalRef<bool>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flinchBody{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flinchBody", 0x530};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flinchBodyRestart{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flinchBodyRestart", 0x548};  // CAnimGraph2ParamOptionalRef<bool>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flinchIsOnFire{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2PawnGraphController", "m_flinchIsOnFire", 0x560};  // CAnimGraph2ParamOptionalRef<bool>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace EngineCountdownTimer {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_duration{::cs2_dumper::runtime::Category::Schema, "client.dll", "EngineCountdownTimer", "m_duration", 0x8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_timestamp{::cs2_dumper::runtime::Category::Schema, "client.dll", "EngineCountdownTimer", "m_timestamp", 0xC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_timescale{::cs2_dumper::runtime::Category::Schema, "client.dll", "EngineCountdownTimer", "m_timescale", 0x10};  // float32
            }
            // Parent: C_SoundEventEntity
            // Field count: 1
            namespace C_SoundEventSphereEntity {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventSphereEntity", "m_flRadius", 0x6C0};  // float32
            }
            // Parent: None
            // Field count: 2
            namespace CCSPlayerController_DamageServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSendUpdate{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_DamageServices", "m_nSendUpdate", 0x40};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_DamageList{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_DamageServices", "m_DamageList", 0x48};  // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamPreviewModel {
            }
            // Parent: None
            // Field count: 0
            namespace C_TonemapController2Alias_env_tonemap_controller2 {
            }
            // Parent: None
            // Field count: 24
            namespace C_Inferno {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nfxFireDamageEffect{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_nfxFireDamageEffect", 0x10D8};  // ParticleIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hInfernoPointsSnapshot{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_hInfernoPointsSnapshot", 0x10E0};  // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hInfernoFillerPointsSnapshot{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_hInfernoFillerPointsSnapshot", 0x10E8};  // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hInfernoOutlinePointsSnapshot{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_hInfernoOutlinePointsSnapshot", 0x10F0};  // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hInfernoClimbingOutlinePointsSnapshot{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_hInfernoClimbingOutlinePointsSnapshot", 0x10F8};  // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hInfernoDecalsSnapshot{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_hInfernoDecalsSnapshot", 0x1100};  // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_firePositions{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_firePositions", 0x1108};  // VectorWS[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fireParentPositions{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_fireParentPositions", 0x1408};  // VectorWS[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFireIsBurning{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_bFireIsBurning", 0x1708};  // bool[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_BurnNormal{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_BurnNormal", 0x1748};  // Vector[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fireCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_fireCount", 0x1A48};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nInfernoType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_nInfernoType", 0x1A4C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFireLifetime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_nFireLifetime", 0x1A50};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInPostEffectTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_bInPostEffectTime", 0x1A54};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_lastFireCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_lastFireCount", 0x1A58};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFireEffectTickBegin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_nFireEffectTickBegin", 0x1A5C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_drawableCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_drawableCount", 0x8660};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_blosCheck{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_blosCheck", 0x8664};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nlosperiod{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_nlosperiod", 0x8668};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_maxFireHalfWidth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_maxFireHalfWidth", 0x866C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_maxFireHeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_maxFireHeight", 0x8670};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_minBounds{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_minBounds", 0x8674};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_maxBounds{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_maxBounds", 0x8680};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastGrassBurnThink{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Inferno", "m_flLastGrassBurnThink", 0x868C};  // float32
            }
            // Parent: None
            // Field count: 0
            namespace CFilterLOS {
            }
            // Parent: C_BaseEntity
            // Field count: 7
            namespace CPointOrient {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszSpawnTargetName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointOrient", "m_iszSpawnTargetName", 0x600};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hTarget{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointOrient", "m_hTarget", 0x608};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bActive{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointOrient", "m_bActive", 0x60C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nGoalDirection{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointOrient", "m_nGoalDirection", 0x610};  // PointOrientGoalDirectionType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nConstraint{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointOrient", "m_nConstraint", 0x614};  // PointOrientConstraint_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMaxTurnRate{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointOrient", "m_flMaxTurnRate", 0x618};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastGameTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPointOrient", "m_flLastGameTime", 0x61C};  // GameTime_t
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace C_GlobalLight {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_WindClothForceHandle{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GlobalLight", "m_WindClothForceHandle", 0xAC0};  // uint16
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace C_EnvWindClientside {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_EnvWindShared{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWindClientside", "m_EnvWindShared", 0x600};  // C_EnvWindShared
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace sky3dparams_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant scale{::cs2_dumper::runtime::Category::Schema, "client.dll", "sky3dparams_t", "scale", 0x8};  // int16
                inline constexpr ::cs2_dumper::runtime::dumper_constant origin{::cs2_dumper::runtime::Category::Schema, "client.dll", "sky3dparams_t", "origin", 0xC};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant bClip3DSkyBoxNearToWorldFar{::cs2_dumper::runtime::Category::Schema, "client.dll", "sky3dparams_t", "bClip3DSkyBoxNearToWorldFar", 0x18};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant flClip3DSkyBoxNearToWorldFarOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "sky3dparams_t", "flClip3DSkyBoxNearToWorldFarOffset", 0x1C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant fog{::cs2_dumper::runtime::Category::Schema, "client.dll", "sky3dparams_t", "fog", 0x20};  // fogparams_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nWorldGroupID{::cs2_dumper::runtime::Category::Schema, "client.dll", "sky3dparams_t", "m_nWorldGroupID", 0x88};  // WorldGroupId_t
            }
            // Parent: C_BaseGrenade
            // Field count: 0
            namespace C_FlashbangProjectile {
            }
            // Parent: C_SoundEventEntity
            // Field count: 5
            namespace C_SoundEventConeEntity {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flEmitterAngle{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventConeEntity", "m_flEmitterAngle", 0x6C0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSweetSpotAngle{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventConeEntity", "m_flSweetSpotAngle", 0x6C4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAttenMin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventConeEntity", "m_flAttenMin", 0x6C8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAttenMax{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventConeEntity", "m_flAttenMax", 0x6CC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszParameterName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundEventConeEntity", "m_iszParameterName", 0x6D0};  // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDestructiblePartsComponent {
                inline constexpr ::cs2_dumper::runtime::dumper_constant __m_pChainEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDestructiblePartsComponent", "__m_pChainEntity", 0x0};  // CNetworkVarChainer
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecDamageTakenByHitGroup{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDestructiblePartsComponent", "m_vecDamageTakenByHitGroup", 0x48};  // CUtlVector<uint16>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hOwner{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDestructiblePartsComponent", "m_hOwner", 0x60};  // CHandle<C_BaseModelEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pAnimGraphDestructibleGraphController{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDestructiblePartsComponent", "m_pAnimGraphDestructibleGraphController", 0x68};  // CAnimGraphControllerPtr
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponP90 {
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace C_EnvWind {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_EnvWindShared{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvWind", "m_EnvWindShared", 0x600};  // C_EnvWindShared
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TerroristTeamIntroCamera {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_DebugLog {
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace C_PointDeathcamBounds {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vBoxMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointDeathcamBounds", "m_vBoxMins", 0x600};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vBoxMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointDeathcamBounds", "m_vBoxMaxs", 0x60C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLerpDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointDeathcamBounds", "m_flLerpDistance", 0x618};  // float32
            }
            // Parent: None
            // Field count: 5
            namespace CCSPlayerController_ActionTrackingServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_perRoundStats{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_ActionTrackingServices", "m_perRoundStats", 0x40};  // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_matchStats{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_ActionTrackingServices", "m_matchStats", 0xA8};  // CSMatchStats_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iNumRoundKills{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_ActionTrackingServices", "m_iNumRoundKills", 0x128};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iNumRoundKillsHeadshots{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_ActionTrackingServices", "m_iNumRoundKillsHeadshots", 0x12C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTotalRoundDamageDealt{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_ActionTrackingServices", "m_flTotalRoundDamageDealt", 0x130};  // float32
            }
            // Parent: CBodyComponentSkeletonInstance
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBodyComponentBaseAnimGraph {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_animationController{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBodyComponentBaseAnimGraph", "m_animationController", 0x510};  // CBaseAnimGraphController
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
            }
            // Parent: None
            // Field count: 0
            namespace C_InfoInstructorHintHostageRescueZone {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            namespace CPulseCell_BaseYieldingInflow {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_BaseFlow_OnAfterCancel{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_BaseYieldingInflow", "m_BaseFlow_OnAfterCancel", 0x48};  // CPulse_ResumePoint
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_BaseFlow_WhileActive{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_BaseYieldingInflow", "m_BaseFlow_WhileActive", 0x90};  // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseNodeDynamicOutflows_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Outflows{::cs2_dumper::runtime::Category::Schema, "client.dll", "PulseNodeDynamicOutflows_t", "m_Outflows", 0x0};  // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
            }
            // Parent: C_BaseTrigger
            // Field count: 2
            namespace C_TriggerBuoyancy {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_BuoyancyHelper{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TriggerBuoyancy", "m_BuoyancyHelper", 0x1180};  // CBuoyancyHelper
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFluidDensity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TriggerBuoyancy", "m_flFluidDensity", 0x1298};  // float32
            }
            // Parent: None
            // Field count: 6
            namespace CPlayer_MovementServices_Humanoid {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStepSoundTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices_Humanoid", "m_flStepSoundTime", 0x258};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFallVelocity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices_Humanoid", "m_flFallVelocity", 0x25C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_groundNormal{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices_Humanoid", "m_groundNormal", 0x260};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSurfaceFriction{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices_Humanoid", "m_flSurfaceFriction", 0x26C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_surfaceProps{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices_Humanoid", "m_surfaceProps", 0x270};  // CUtlStringToken
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nStepside{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_MovementServices_Humanoid", "m_nStepside", 0x280};  // int32
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_IsRequirementValid__Criteria_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsValid{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_IsRequirementValid__Criteria_t", "m_bIsValid", 0x0};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponTec9 {
            }
            // Parent: C_BreakableProp
            // Field count: 5
            namespace C_PhysPropClientside {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTouchDelta{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PhysPropClientside", "m_flTouchDelta", 0x13E0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fDeathTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PhysPropClientside", "m_fDeathTime", 0x13E4};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecDamagePosition{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PhysPropClientside", "m_vecDamagePosition", 0x13E8};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecDamageDirection{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PhysPropClientside", "m_vecDamageDirection", 0x13F4};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDamageType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PhysPropClientside", "m_nDamageType", 0x1400};  // DamageTypes_t
            }
            // Parent: None
            // Field count: 1
            namespace C_BaseDoor {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsUsable{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseDoor", "m_bIsUsable", 0x1098};  // bool
            }
            // Parent: None
            // Field count: 5
            namespace CSMatchStats_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEnemy5Ks{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSMatchStats_t", "m_iEnemy5Ks", 0x68};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEnemy4Ks{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSMatchStats_t", "m_iEnemy4Ks", 0x6C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEnemy3Ks{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSMatchStats_t", "m_iEnemy3Ks", 0x70};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEnemyKnifeKills{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSMatchStats_t", "m_iEnemyKnifeKills", 0x74};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEnemyTaserKills{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSMatchStats_t", "m_iEnemyTaserKills", 0x78};  // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace EntityRenderAttribute_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ID{::cs2_dumper::runtime::Category::Schema, "client.dll", "EntityRenderAttribute_t", "m_ID", 0x30};  // CUtlStringToken
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Values{::cs2_dumper::runtime::Category::Schema, "client.dll", "EntityRenderAttribute_t", "m_Values", 0x34};  // Vector4D
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_ObservableVariableListener {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBlackboardReference{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Inflow_ObservableVariableListener", "m_nBlackboardReference", 0x80};  // PulseRuntimeBlackboardReferenceIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSelfReference{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Inflow_ObservableVariableListener", "m_bSelfReference", 0x82};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_RushIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            namespace CHostageRescueZone {
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelState {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hModel{::cs2_dumper::runtime::Category::Schema, "client.dll", "CModelState", "m_hModel", 0xA0};  // CStrongHandle<InfoForResourceTypeCModel>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ModelName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CModelState", "m_ModelName", 0xA8};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pVPhysicsAggregate{::cs2_dumper::runtime::Category::Schema, "client.dll", "CModelState", "m_pVPhysicsAggregate", 0xE0};  // IPhysAggregateInstance*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRootBoneOffset_x{::cs2_dumper::runtime::Category::Schema, "client.dll", "CModelState", "m_flRootBoneOffset_x", 0xE8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRootBoneOffset_y{::cs2_dumper::runtime::Category::Schema, "client.dll", "CModelState", "m_flRootBoneOffset_y", 0xEC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRootBoneOffset_z{::cs2_dumper::runtime::Category::Schema, "client.dll", "CModelState", "m_flRootBoneOffset_z", 0xF0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRootBoneOffsetResetSerialNumber{::cs2_dumper::runtime::Category::Schema, "client.dll", "CModelState", "m_nRootBoneOffsetResetSerialNumber", 0xF4};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bClientClothCreationSuppressed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CModelState", "m_bClientClothCreationSuppressed", 0x110};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nAnimStateNoInterpSerialNumber{::cs2_dumper::runtime::Category::Schema, "client.dll", "CModelState", "m_nAnimStateNoInterpSerialNumber", 0x200};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_MeshGroupMask{::cs2_dumper::runtime::Category::Schema, "client.dll", "CModelState", "m_MeshGroupMask", 0x208};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBodyGroupChoices{::cs2_dumper::runtime::Category::Schema, "client.dll", "CModelState", "m_nBodyGroupChoices", 0x258};  // C_NetworkUtlVectorBase<int32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nIdealMotionType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CModelState", "m_nIdealMotionType", 0x2A2};  // int8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nForceLOD{::cs2_dumper::runtime::Category::Schema, "client.dll", "CModelState", "m_nForceLOD", 0x2A3};  // int8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nClothUpdateFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "CModelState", "m_nClothUpdateFlags", 0x2A4};  // int8
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_LerpCameraSettings__CursorState_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hCamera{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_LerpCameraSettings__CursorState_t", "m_hCamera", 0x8};  // CHandle<C_PointCamera>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OverlaidStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_LerpCameraSettings__CursorState_t", "m_OverlaidStart", 0xC};  // PointCameraSettings_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OverlaidEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_LerpCameraSettings__CursorState_t", "m_OverlaidEnd", 0x1C};  // PointCameraSettings_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleOrdered {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Outputs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Outflow_CycleOrdered", "m_Outputs", 0x48};  // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 7
            namespace C_CSWeaponBaseGun {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_zoomLevel{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBaseGun", "m_zoomLevel", 0x1F20};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iBurstShotsRemaining{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBaseGun", "m_iBurstShotsRemaining", 0x1F24};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iSilencerBodygroup{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBaseGun", "m_iSilencerBodygroup", 0x1F28};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_silencedModelIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBaseGun", "m_silencedModelIndex", 0x1F38};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_inPrecache{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBaseGun", "m_inPrecache", 0x1F3C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNeedsBoltAction{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBaseGun", "m_bNeedsBoltAction", 0x1F3D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRevolverCylinderIdx{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSWeaponBaseGun", "m_nRevolverCylinderIdx", 0x1F40};  // int32
            }
            // Parent: None
            // Field count: 1
            namespace C_CSGameRulesProxy {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pGameRules{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRulesProxy", "m_pGameRules", 0x600};  // C_CSGameRules*
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCollisionProperty {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_collisionAttribute{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_collisionAttribute", 0x10};  // VPhysicsCollisionAttribute_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_vecMins", 0x40};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_vecMaxs", 0x4C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_usSolidFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_usSolidFlags", 0x5A};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSolidType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_nSolidType", 0x5B};  // SolidType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_triggerBloat{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_triggerBloat", 0x5C};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSurroundType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_nSurroundType", 0x5D};  // SurroundingBoundsType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_CollisionGroup{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_CollisionGroup", 0x5E};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nEnablePhysics{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_nEnablePhysics", 0x5F};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBoundingRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_flBoundingRadius", 0x60};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecSpecifiedSurroundingMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_vecSpecifiedSurroundingMins", 0x64};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecSpecifiedSurroundingMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_vecSpecifiedSurroundingMaxs", 0x70};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecSurroundingMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_vecSurroundingMaxs", 0x7C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecSurroundingMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_vecSurroundingMins", 0x88};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vCapsuleCenter1{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_vCapsuleCenter1", 0x94};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vCapsuleCenter2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_vCapsuleCenter2", 0xA0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCapsuleRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCollisionProperty", "m_flCapsuleRadius", 0xAC};  // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponP250 {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterMassGreater {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fFilterMass{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFilterMassGreater", "m_fFilterMass", 0x638};  // float32
            }
            // Parent: None
            // Field count: 1
            namespace C_ShatterGlassShardPhysics {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ShardDesc{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ShatterGlassShardPhysics", "m_ShardDesc", 0x10A0};  // shard_model_desc_t
            }
            // Parent: None
            // Field count: 13
            namespace C_EntityDissolve {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EntityDissolve", "m_flStartTime", 0x10A0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeInStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EntityDissolve", "m_flFadeInStart", 0x10A4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeInLength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EntityDissolve", "m_flFadeInLength", 0x10A8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeOutModelStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EntityDissolve", "m_flFadeOutModelStart", 0x10AC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeOutModelLength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EntityDissolve", "m_flFadeOutModelLength", 0x10B0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeOutStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EntityDissolve", "m_flFadeOutStart", 0x10B4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeOutLength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EntityDissolve", "m_flFadeOutLength", 0x10B8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDissolveType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EntityDissolve", "m_nDissolveType", 0x10BC};  // EntityDissolveType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMagnitude{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EntityDissolve", "m_nMagnitude", 0x10C0};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vDissolverOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EntityDissolve", "m_vDissolverOrigin", 0x10C4};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNextSparkTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EntityDissolve", "m_flNextSparkTime", 0x10D0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCoreExplode{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EntityDissolve", "m_bCoreExplode", 0x10D4};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bLinkedToServerEnt{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EntityDissolve", "m_bLinkedToServerEnt", 0x10D5};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_SoundOpvarSetOBBEntity {
            }
            // Parent: None
            // Field count: 8
            namespace CCSCustomPlayerCamera {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hPawn{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomPlayerCamera", "m_hPawn", 0x600};  // CHandle<C_CSPlayerPawnBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCameraMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomPlayerCamera", "m_nCameraMode", 0x604};  // CustomCameraMode_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hFollowEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomPlayerCamera", "m_hFollowEntity", 0x608};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFollowEyes{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomPlayerCamera", "m_bFollowEyes", 0x60C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecFollowOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomPlayerCamera", "m_vecFollowOffset", 0x610};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecCameraOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomPlayerCamera", "m_vecCameraOffset", 0x61C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bClipCameraOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomPlayerCamera", "m_bClipCameraOffset", 0x628};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCameraOffsetReturnStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomPlayerCamera", "m_flCameraOffsetReturnStrength", 0x62C};  // float32
            }
            // Parent: None
            // Field count: 1
            namespace CCSGameModeRules_ArmsRace {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_WeaponSequence{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSGameModeRules_ArmsRace", "m_WeaponSequence", 0x30};  // C_NetworkUtlVectorBase<CUtlString>
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
            namespace C_FuncMonitor {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_targetCamera{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncMonitor", "m_targetCamera", 0x1098};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nResolutionEnum{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncMonitor", "m_nResolutionEnum", 0x10A0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRenderShadows{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncMonitor", "m_bRenderShadows", 0x10A4};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUseUniqueColorTarget{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncMonitor", "m_bUseUniqueColorTarget", 0x10A5};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_brushModelName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncMonitor", "m_brushModelName", 0x10A8};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hTargetCamera{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncMonitor", "m_hTargetCamera", 0x10B0};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncMonitor", "m_bEnabled", 0x10B4};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDraw3DSkybox{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncMonitor", "m_bDraw3DSkybox", 0x10B5};  // bool
            }
            // Parent: None
            // Field count: 14
            namespace C_ClientRagdoll {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFadeOut{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ClientRagdoll", "m_bFadeOut", 0x1268};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bImportant{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ClientRagdoll", "m_bImportant", 0x1269};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flEffectTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ClientRagdoll", "m_flEffectTime", 0x126C};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_gibDespawnTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ClientRagdoll", "m_gibDespawnTime", 0x1270};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iCurrentFriction{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ClientRagdoll", "m_iCurrentFriction", 0x1274};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMinFriction{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ClientRagdoll", "m_iMinFriction", 0x1278};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMaxFriction{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ClientRagdoll", "m_iMaxFriction", 0x127C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iFrictionAnimState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ClientRagdoll", "m_iFrictionAnimState", 0x1280};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bReleaseRagdoll{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ClientRagdoll", "m_bReleaseRagdoll", 0x1284};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEyeAttachment{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ClientRagdoll", "m_iEyeAttachment", 0x1285};  // AttachmentHandle_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFadingOut{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ClientRagdoll", "m_bFadingOut", 0x1286};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flScaleEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ClientRagdoll", "m_flScaleEnd", 0x1288};  // float32[10]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flScaleTimeStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ClientRagdoll", "m_flScaleTimeStart", 0x12B0};  // GameTime_t[10]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flScaleTimeEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ClientRagdoll", "m_flScaleTimeEnd", 0x12D8};  // GameTime_t[10]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseSelectorOutflowList_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Outflows{::cs2_dumper::runtime::Category::Schema, "client.dll", "PulseSelectorOutflowList_t", "m_Outflows", 0x0};  // CUtlVector<OutflowWithRequirements_t>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_BaseModelEntity__BodyGroupRequest_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_uRequestID{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity__BodyGroupRequest_t", "m_uRequestID", 0x0};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nGroupName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity__BodyGroupRequest_t", "m_nGroupName", 0x4};  // CUtlStringToken
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sChoiceName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity__BodyGroupRequest_t", "m_sChoiceName", 0x8};  // CGlobalSymbol
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nGroup{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity__BodyGroupRequest_t", "m_nGroup", 0x10};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_uChoice{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity__BodyGroupRequest_t", "m_uChoice", 0x14};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_uRefCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseModelEntity__BodyGroupRequest_t", "m_uRefCount", 0x16};  // uint16
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_PlaySequence__CursorState_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hTarget{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_PlaySequence__CursorState_t", "m_hTarget", 0x0};  // CHandle<CBaseAnimGraph>
            }
            // Parent: CBodyComponent
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBodyComponentSkeletonInstance {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_skeletonInstance{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBodyComponentSkeletonInstance", "m_skeletonInstance", 0x80};  // CSkeletonInstance
            }
            // Parent: None
            // Field count: 0
            namespace C_CS2WeaponModuleBase {
            }
            // Parent: C_BaseEntity
            // Field count: 9
            namespace C_CSGO_TeamPreviewCharacterPosition {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nVariant{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_TeamPreviewCharacterPosition", "m_nVariant", 0x600};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRandom{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_TeamPreviewCharacterPosition", "m_nRandom", 0x604};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nOrdinal{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_TeamPreviewCharacterPosition", "m_nOrdinal", 0x608};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sWeaponName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_TeamPreviewCharacterPosition", "m_sWeaponName", 0x610};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_xuid{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_TeamPreviewCharacterPosition", "m_xuid", 0x618};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_agentItem{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_TeamPreviewCharacterPosition", "m_agentItem", 0x620};  // C_EconItemView
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_glovesItem{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_TeamPreviewCharacterPosition", "m_glovesItem", 0xBD0};  // C_EconItemView
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_weaponItem{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_TeamPreviewCharacterPosition", "m_weaponItem", 0x1180};  // C_EconItemView
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_petItem{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_TeamPreviewCharacterPosition", "m_petItem", 0x1730};  // C_EconItemView
            }
            // Parent: None
            // Field count: 11
            namespace C_SmokeGrenadeProjectile {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSmokeEffectTickBegin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SmokeGrenadeProjectile", "m_nSmokeEffectTickBegin", 0x1360};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDidSmokeEffect{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SmokeGrenadeProjectile", "m_bDidSmokeEffect", 0x1364};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRandomSeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SmokeGrenadeProjectile", "m_nRandomSeed", 0x1368};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vSmokeColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SmokeGrenadeProjectile", "m_vSmokeColor", 0x136C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vSmokeDetonationPos{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SmokeGrenadeProjectile", "m_vSmokeDetonationPos", 0x1378};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_VoxelFrameData{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SmokeGrenadeProjectile", "m_VoxelFrameData", 0x1388};  // C_NetworkUtlVectorBase<uint8>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nVoxelFrameDataSize{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SmokeGrenadeProjectile", "m_nVoxelFrameDataSize", 0x13A0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nVoxelUpdate{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SmokeGrenadeProjectile", "m_nVoxelUpdate", 0x13A4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSmokeLightProbeRegen{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SmokeGrenadeProjectile", "m_nSmokeLightProbeRegen", 0x13A8};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSmokeVolumeDataReceived{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SmokeGrenadeProjectile", "m_bSmokeVolumeDataReceived", 0x13A9};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSmokeEffectSpawned{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SmokeGrenadeProjectile", "m_bSmokeEffectSpawned", 0x13AA};  // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CScriptComponent {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_scriptClassName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CScriptComponent", "m_scriptClassName", 0x30};  // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            namespace CCSPlayer_BuyServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecSellbackPurchaseEntries{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_BuyServices", "m_vecSellbackPurchaseEntries", 0x48};  // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace C_SkyCameraVolumeTarget {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSkyboxScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCameraVolumeTarget", "m_nSkyboxScale", 0x600};  // int16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hSkyMaterial{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SkyCameraVolumeTarget", "m_hSkyMaterial", 0x608};  // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 0
            namespace C_PortraitWorldCallbackHandler {
            }
            // Parent: C_BreakableProp
            // Field count: 25
            namespace C_DynamicProp {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bGraphControllerEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_bGraphControllerEnabled", 0x13E0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUseHitboxesForRenderBox{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_bUseHitboxesForRenderBox", 0x13E1};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUseAnimGraph{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_bUseAnimGraph", 0x13E2};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pOutputAnimBegun{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_pOutputAnimBegun", 0x13E8};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pOutputAnimOver{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_pOutputAnimOver", 0x1400};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pOutputAnimLoopCycleOver{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_pOutputAnimLoopCycleOver", 0x1418};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnAnimReachedStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_OnAnimReachedStart", 0x1430};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnAnimReachedEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_OnAnimReachedEnd", 0x1448};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszIdleAnim{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_iszIdleAnim", 0x1460};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nIdleAnimLoopMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_nIdleAnimLoopMode", 0x1468};  // AnimLoopMode_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRandomizeCycle{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_bRandomizeCycle", 0x146C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStartDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_bStartDisabled", 0x146D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFiredStartEndOutput{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_bFiredStartEndOutput", 0x146E};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bForceNpcExclude{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_bForceNpcExclude", 0x146F};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCreateMovableSurfaceGraph{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_bCreateMovableSurfaceGraph", 0x1470};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCreateNonSolid{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_bCreateNonSolid", 0x1471};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsOverrideProp{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_bIsOverrideProp", 0x1472};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iInitialGlowState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_iInitialGlowState", 0x1474};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nGlowRange{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_nGlowRange", 0x1478};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nGlowRangeMin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_nGlowRangeMin", 0x147C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_glowColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_glowColor", 0x1480};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nGlowTeam{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_nGlowTeam", 0x1484};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iCachedFrameCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_iCachedFrameCount", 0x1488};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecCachedRenderMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_vecCachedRenderMins", 0x148C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecCachedRenderMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_DynamicProp", "m_vecCachedRenderMaxs", 0x1498};  // Vector
            }
            // Parent: None
            // Field count: 10
            namespace C_CSTeam {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szTeamMatchStat{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSTeam", "m_szTeamMatchStat", 0x6B8};  // char[512]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_numMapVictories{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSTeam", "m_numMapVictories", 0x8B8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSurrendered{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSTeam", "m_bSurrendered", 0x8BC};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_scoreFirstHalf{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSTeam", "m_scoreFirstHalf", 0x8C0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_scoreSecondHalf{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSTeam", "m_scoreSecondHalf", 0x8C4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_scoreOvertime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSTeam", "m_scoreOvertime", 0x8C8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szClanTeamname{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSTeam", "m_szClanTeamname", 0x8CC};  // char[129]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iClanID{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSTeam", "m_iClanID", 0x950};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szTeamFlagImage{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSTeam", "m_szTeamFlagImage", 0x954};  // char[8]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szTeamLogoImage{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSTeam", "m_szTeamLogoImage", 0x95C};  // char[8]
            }
            // Parent: None
            // Field count: 0
            namespace C_CS2HudModelWeapon {
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
            namespace C_TextureBasedAnimatable {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bLoop{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TextureBasedAnimatable", "m_bLoop", 0x1098};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFPS{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TextureBasedAnimatable", "m_flFPS", 0x109C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hPositionKeys{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TextureBasedAnimatable", "m_hPositionKeys", 0x10A0};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hRotationKeys{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TextureBasedAnimatable", "m_hRotationKeys", 0x10A8};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vAnimationBoundsMin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TextureBasedAnimatable", "m_vAnimationBoundsMin", 0x10B0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vAnimationBoundsMax{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TextureBasedAnimatable", "m_vAnimationBoundsMax", 0x10BC};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TextureBasedAnimatable", "m_flStartTime", 0x10C8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartFrame{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TextureBasedAnimatable", "m_flStartFrame", 0x10CC};  // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_LightEnvironmentEntity {
            }
            // Parent: C_BaseTrigger
            // Field count: 14
            namespace C_TriggerPhysics {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_gravityScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TriggerPhysics", "m_gravityScale", 0x1180};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_linearLimit{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TriggerPhysics", "m_linearLimit", 0x1184};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_linearDamping{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TriggerPhysics", "m_linearDamping", 0x1188};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_angularLimit{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TriggerPhysics", "m_angularLimit", 0x118C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_angularDamping{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TriggerPhysics", "m_angularDamping", 0x1190};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_linearForce{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TriggerPhysics", "m_linearForce", 0x1194};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFrequency{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TriggerPhysics", "m_flFrequency", 0x1198};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDampingRatio{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TriggerPhysics", "m_flDampingRatio", 0x119C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecLinearForcePointAt{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TriggerPhysics", "m_vecLinearForcePointAt", 0x11A0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCollapseToForcePoint{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TriggerPhysics", "m_bCollapseToForcePoint", 0x11AC};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecLinearForcePointAtWorld{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TriggerPhysics", "m_vecLinearForcePointAtWorld", 0x11B0};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecLinearForceDirection{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TriggerPhysics", "m_vecLinearForceDirection", 0x11BC};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bForceDirectionIsInLocalSpace{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TriggerPhysics", "m_bForceDirectionIsInLocalSpace", 0x11C8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bConvertToDebrisWhenPossible{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_TriggerPhysics", "m_bConvertToDebrisWhenPossible", 0x11C9};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_PropDoorRotating {
            }
            // Parent: None
            // Field count: 2
            namespace C_HandleTest {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Handle{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_HandleTest", "m_Handle", 0x600};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSendHandle{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_HandleTest", "m_bSendHandle", 0x604};  // bool
            }
            // Parent: C_BaseEntity
            // Field count: 8
            namespace CInfoWorldLayer {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pOutputOnEntitiesSpawned{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoWorldLayer", "m_pOutputOnEntitiesSpawned", 0x600};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_worldName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoWorldLayer", "m_worldName", 0x618};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_layerName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoWorldLayer", "m_layerName", 0x620};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWorldLayerVisible{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoWorldLayer", "m_bWorldLayerVisible", 0x628};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEntitiesSpawned{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoWorldLayer", "m_bEntitiesSpawned", 0x629};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCreateAsChildSpawnGroup{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoWorldLayer", "m_bCreateAsChildSpawnGroup", 0x62A};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hLayerSpawnGroup{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoWorldLayer", "m_hLayerSpawnGroup", 0x62C};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWorldLayerActuallyVisible{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInfoWorldLayer", "m_bWorldLayerActuallyVisible", 0x630};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace CBodyComponentBaseModelEntity {
            }
            // Parent: None
            // Field count: 1
            namespace C_Multimeter {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hTargetC4{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Multimeter", "m_hTargetC4", 0x1268};  // CHandle<C_PlantedC4>
            }
            // Parent: C_BaseModelEntity
            // Field count: 12
            namespace C_BaseTrigger {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnStartTouch{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseTrigger", "m_OnStartTouch", 0x1098};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnStartTouchAll{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseTrigger", "m_OnStartTouchAll", 0x10B0};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnEndTouch{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseTrigger", "m_OnEndTouch", 0x10C8};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnEndTouchAll{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseTrigger", "m_OnEndTouchAll", 0x10E0};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnTouching{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseTrigger", "m_OnTouching", 0x10F8};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnTouchingEachEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseTrigger", "m_OnTouchingEachEntity", 0x1110};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnNotTouching{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseTrigger", "m_OnNotTouching", 0x1128};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnTouchingChanged{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseTrigger", "m_OnTouchingChanged", 0x1140};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hTouchingEntities{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseTrigger", "m_hTouchingEntities", 0x1158};  // CUtlVector<CHandle<C_BaseEntity>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iFilterName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseTrigger", "m_iFilterName", 0x1170};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hFilter{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseTrigger", "m_hFilter", 0x1178};  // CHandle<CBaseFilter>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseTrigger", "m_bDisabled", 0x117C};  // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace FilterDamageType {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iDamageType{::cs2_dumper::runtime::Category::Schema, "client.dll", "FilterDamageType", "m_iDamageType", 0x638};  // int32
            }
            // Parent: None
            // Field count: 2
            namespace CAttributeList {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Attributes{::cs2_dumper::runtime::Category::Schema, "client.dll", "CAttributeList", "m_Attributes", 0x8};  // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pManager{::cs2_dumper::runtime::Category::Schema, "client.dll", "CAttributeList", "m_pManager", 0x70};  // CAttributeManager*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_Inflow_Wait {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_WakeResume{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Inflow_Wait", "m_WakeResume", 0xD8};  // CPulse_ResumePoint
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterProximity {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFilterProximity", "m_flRadius", 0x638};  // float32
            }
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCS2WeaponGraphController {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_action{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_action", 0xC0};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bActionReset{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_bActionReset", 0xD8};  // CAnimGraph2ParamOptionalRef<bool>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWeaponActionSpeedScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_flWeaponActionSpeedScale", 0xF0};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_weaponCategory{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_weaponCategory", 0x108};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_weaponType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_weaponType", 0x120};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_weaponExtraInfo{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_weaponExtraInfo", 0x138};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWeaponAmmo{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_flWeaponAmmo", 0x150};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWeaponAmmoMax{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_flWeaponAmmoMax", 0x168};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWeaponAmmoReserve{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_flWeaponAmmoReserve", 0x180};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWeaponIsSilenced{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_bWeaponIsSilenced", 0x198};  // CAnimGraph2ParamOptionalRef<bool>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWeaponIronsightAmount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_flWeaponIronsightAmount", 0x1B0};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsUsingLegacyModel{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_bIsUsingLegacyModel", 0x1C8};  // CAnimGraph2ParamOptionalRef<bool>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_idleVariation{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_idleVariation", 0x1E0};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_deployVariation{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_deployVariation", 0x1F8};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_attackType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_attackType", 0x210};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_attackThrowStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_attackThrowStrength", 0x228};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAttackVariation{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_flAttackVariation", 0x240};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_inspectVariation{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_inspectVariation", 0x258};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_inspectExtraInfo{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_inspectExtraInfo", 0x270};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_reloadStage{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2WeaponGraphController", "m_reloadStage", 0x288};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 20
            namespace CEffectData {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_vOrigin", 0x8};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_vStart", 0x14};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vNormal{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_vNormal", 0x20};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vAngles{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_vAngles", 0x2C};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_hEntity", 0x38};  // CEntityHandle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hOtherEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_hOtherEntity", 0x3C};  // CEntityHandle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_flScale", 0x40};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMagnitude{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_flMagnitude", 0x44};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_flRadius", 0x48};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSurfaceProp{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_nSurfaceProp", 0x4C};  // CUtlStringToken
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nEffectIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_nEffectIndex", 0x50};  // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDamageType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_nDamageType", 0x58};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPenetrate{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_nPenetrate", 0x5C};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMaterial{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_nMaterial", 0x5E};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nHitBox{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_nHitBox", 0x60};  // int16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_nColor", 0x62};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_fFlags", 0x63};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nAttachmentIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_nAttachmentIndex", 0x64};  // AttachmentHandle_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nAttachmentName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_nAttachmentName", 0x68};  // CUtlStringToken
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEffectName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEffectData", "m_iEffectName", 0x6C};  // uint16
            }
            // Parent: C_BaseModelEntity
            // Field count: 26
            namespace C_ParticleSystem {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szSnapshotFileName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_szSnapshotFileName", 0x1098};  // char[512]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bActive{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_bActive", 0x1298};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFrozen{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_bFrozen", 0x1299};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFreezeTransitionDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_flFreezeTransitionDuration", 0x129C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nStopType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_nStopType", 0x12A0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAnimateDuringGameplayPause{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_bAnimateDuringGameplayPause", 0x12A4};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEffectIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_iEffectIndex", 0x12A8};  // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_flStartTime", 0x12B0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPreSimTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_flPreSimTime", 0x12B4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vServerControlPoints{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_vServerControlPoints", 0x12B8};  // Vector[4]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iServerControlPointAssignments{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_iServerControlPointAssignments", 0x12E8};  // uint8[4]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hControlPointEnts{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_hControlPointEnts", 0x12EC};  // CHandle<C_BaseEntity>[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDataStringLocalized{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_bDataStringLocalized", 0x13EC};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strDataString{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_strDataString", 0x13F0};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNoSave{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_bNoSave", 0x13F8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNoFreeze{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_bNoFreeze", 0x13F9};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNoRamp{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_bNoRamp", 0x13FA};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStartActive{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_bStartActive", 0x13FB};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszEffectName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_iszEffectName", 0x1400};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszControlPointNames{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_iszControlPointNames", 0x1408};  // CUtlSymbolLarge[64]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDataCP{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_nDataCP", 0x1608};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecDataCPValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_vecDataCPValue", 0x160C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTintCP{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_nTintCP", 0x1618};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_clrTint{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_clrTint", 0x161C};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bOldActive{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_bOldActive", 0x1640};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bOldFrozen{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_ParticleSystem", "m_bOldFrozen", 0x1641};  // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Outputs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Outflow_CycleShuffled", "m_Outputs", 0x48};  // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponSCAR20 {
            }
            // Parent: None
            // Field count: 0
            namespace C_FuncMover {
            }
            // Parent: None
            // Field count: 3
            namespace CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant pItem{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t", "pItem", 0x0};  // C_EconItemView*
                inline constexpr ::cs2_dumper::runtime::dumper_constant team{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t", "team", 0x8};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant slot{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t", "slot", 0xA};  // uint16
            }
            // Parent: CEntityComponent
            // Field count: 84
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLightComponent {
                inline constexpr ::cs2_dumper::runtime::dumper_constant __m_pChainEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "__m_pChainEntity", 0x38};  // CNetworkVarChainer
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Color{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_Color", 0x78};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SecondaryColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_SecondaryColor", 0x7C};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBrightness{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flBrightness", 0x80};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBrightnessScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flBrightnessScale", 0x84};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBrightnessMult{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flBrightnessMult", 0x88};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRange{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flRange", 0x8C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFalloff{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flFalloff", 0x90};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAttenuation0{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flAttenuation0", 0x94};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAttenuation1{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flAttenuation1", 0x98};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAttenuation2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flAttenuation2", 0x9C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTheta{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flTheta", 0xA0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPhi{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flPhi", 0xA4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hLightCookie{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_hLightCookie", 0xA8};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCascades{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nCascades", 0xB0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCastShadows{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nCastShadows", 0xB4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nShadowWidth{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nShadowWidth", 0xB8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nShadowHeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nShadowHeight", 0xBC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRenderDiffuse{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_bRenderDiffuse", 0xC0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRenderSpecular{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nRenderSpecular", 0xC4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRenderTransmissive{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_bRenderTransmissive", 0xC8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flOrthoLightWidth{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flOrthoLightWidth", 0xCC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flOrthoLightHeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flOrthoLightHeight", 0xD0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nStyle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nStyle", 0xD4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Pattern{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_Pattern", 0xD8};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCascadeRenderStaticObjects{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nCascadeRenderStaticObjects", 0xE0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flShadowCascadeCrossFade{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flShadowCascadeCrossFade", 0xE4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flShadowCascadeDistanceFade{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flShadowCascadeDistanceFade", 0xE8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flShadowCascadeDistance0{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flShadowCascadeDistance0", 0xEC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flShadowCascadeDistance1{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flShadowCascadeDistance1", 0xF0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flShadowCascadeDistance2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flShadowCascadeDistance2", 0xF4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flShadowCascadeDistance3{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flShadowCascadeDistance3", 0xF8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nShadowCascadeResolution0{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nShadowCascadeResolution0", 0xFC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nShadowCascadeResolution1{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nShadowCascadeResolution1", 0x100};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nShadowCascadeResolution2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nShadowCascadeResolution2", 0x104};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nShadowCascadeResolution3{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nShadowCascadeResolution3", 0x108};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUsesBakedShadowing{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_bUsesBakedShadowing", 0x10C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nShadowPriority{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nShadowPriority", 0x110};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBakedShadowIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nBakedShadowIndex", 0x114};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLightPathUniqueId{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nLightPathUniqueId", 0x118};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLightMapUniqueId{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nLightMapUniqueId", 0x11C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRenderToCubemaps{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_bRenderToCubemaps", 0x120};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAllowSSTGeneration{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_bAllowSSTGeneration", 0x121};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDirectLight{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nDirectLight", 0x124};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBounceLight{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nBounceLight", 0x128};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBounceScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flBounceScale", 0x12C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeMinDist{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flFadeMinDist", 0x130};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeMaxDist{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flFadeMaxDist", 0x134};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flShadowFadeMinDist{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flShadowFadeMinDist", 0x138};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flShadowFadeMaxDist{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flShadowFadeMaxDist", 0x13C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_bEnabled", 0x140};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFlicker{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_bFlicker", 0x141};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPrecomputedFieldsValid{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_bPrecomputedFieldsValid", 0x142};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedBoundsMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_vPrecomputedBoundsMins", 0x144};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedBoundsMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_vPrecomputedBoundsMaxs", 0x150};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_vPrecomputedOBBOrigin", 0x15C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBAngles{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_vPrecomputedOBBAngles", 0x168};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vPrecomputedOBBExtent{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_vPrecomputedOBBExtent", 0x174};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPrecomputedMaxRange{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flPrecomputedMaxRange", 0x180};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFogLightingMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_nFogLightingMode", 0x184};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogContributionStength{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flFogContributionStength", 0x188};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNearClipPlane{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flNearClipPlane", 0x18C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SkyColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_SkyColor", 0x190};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSkyIntensity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flSkyIntensity", 0x194};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SkyAmbientBounce{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_SkyAmbientBounce", 0x198};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUseSecondaryColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_bUseSecondaryColor", 0x19C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bMixedShadows{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_bMixedShadows", 0x19D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLightStyleStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flLightStyleStartTime", 0x1A0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCapsuleLength{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flCapsuleLength", 0x1A4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMinRoughness{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flMinRoughness", 0x1A8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAmbientOcclusionProxyOverride{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_bAmbientOcclusionProxyOverride", 0x1AC};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hAmbientOcclusionProxyPosition0{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_hAmbientOcclusionProxyPosition0", 0x1B0};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hAmbientOcclusionProxyPosition1{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_hAmbientOcclusionProxyPosition1", 0x1B4};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hAmbientOcclusionProxyPosition2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_hAmbientOcclusionProxyPosition2", 0x1B8};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hAmbientOcclusionProxyPosition3{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_hAmbientOcclusionProxyPosition3", 0x1BC};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAmbientOcclusionProxyStrength0{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flAmbientOcclusionProxyStrength0", 0x1C0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAmbientOcclusionProxyStrength1{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flAmbientOcclusionProxyStrength1", 0x1C4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAmbientOcclusionProxyStrength2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flAmbientOcclusionProxyStrength2", 0x1C8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAmbientOcclusionProxyStrength3{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flAmbientOcclusionProxyStrength3", 0x1CC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAmbientOcclusionProxyAmbientStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flAmbientOcclusionProxyAmbientStrength", 0x1D0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAmbientOcclusionProxyConeAngle0{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flAmbientOcclusionProxyConeAngle0", 0x1D4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAmbientOcclusionProxyConeAngle1{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flAmbientOcclusionProxyConeAngle1", 0x1D8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAmbientOcclusionProxyConeAngle2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flAmbientOcclusionProxyConeAngle2", 0x1DC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAmbientOcclusionProxyConeAngle3{::cs2_dumper::runtime::Category::Schema, "client.dll", "CLightComponent", "m_flAmbientOcclusionProxyConeAngle3", 0x1E0};  // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_DecoyGrenade {
            }
            // Parent: None
            // Field count: 0
            namespace C_WaterBullet {
            }
            // Parent: None
            // Field count: 5
            namespace CCSPlayer_ActionTrackingServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hLastWeaponBeforeC4AutoSwitch{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_ActionTrackingServices", "m_hLastWeaponBeforeC4AutoSwitch", 0x48};  // CHandle<C_BasePlayerWeapon>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsRescuing{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_ActionTrackingServices", "m_bIsRescuing", 0x4C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_weaponPurchasesThisMatch{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_ActionTrackingServices", "m_weaponPurchasesThisMatch", 0x50};  // WeaponPurchaseTracker_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_weaponPurchasesThisRound{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_ActionTrackingServices", "m_weaponPurchasesThisRound", 0xC0};  // WeaponPurchaseTracker_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_weaponCarryOverIntoThisRound{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_ActionTrackingServices", "m_weaponCarryOverIntoThisRound", 0x130};  // WeaponPurchaseTracker_t
            }
            // Parent: None
            // Field count: 0
            namespace CBrokenGlassTrap {
            }
            // Parent: C_BaseEntity
            // Field count: 18
            namespace C_EnvCubemap {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_hCubemapTexture{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_hCubemapTexture", 0x680};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_bCustomCubemapTexture{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_bCustomCubemapTexture", 0x688};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_flInfluenceRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_flInfluenceRadius", 0x68C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_vBoxProjectMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_vBoxProjectMins", 0x690};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_vBoxProjectMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_vBoxProjectMaxs", 0x69C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_bMoveable{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_bMoveable", 0x6A8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nHandshake{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_nHandshake", 0x6AC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nEnvCubeMapArrayIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_nEnvCubeMapArrayIndex", 0x6B0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nPriority{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_nPriority", 0x6B4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_flEdgeFadeDist{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_flEdgeFadeDist", 0x6B8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_vEdgeFadeDists{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_vEdgeFadeDists", 0x6BC};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_flDiffuseScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_flDiffuseScale", 0x6C8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_bStartDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_bStartDisabled", 0x6CC};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_bDefaultEnvMap{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_bDefaultEnvMap", 0x6CD};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_bDefaultSpecEnvMap{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_bDefaultSpecEnvMap", 0x6CE};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_bIndoorCubeMap{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_bIndoorCubeMap", 0x6CF};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_bCopyDiffuseFromDefaultCubemap{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_bCopyDiffuseFromDefaultCubemap", 0x6D0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_bEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvCubemap", "m_Entity_bEnabled", 0x6E0};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace CCSObserver_MovementServices {
            }
            // Parent: CEntityComponent
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBodyComponent {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pSceneNode{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBodyComponent", "m_pSceneNode", 0x8};  // CGameSceneNode*
                inline constexpr ::cs2_dumper::runtime::dumper_constant __m_pChainEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBodyComponent", "__m_pChainEntity", 0x48};  // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_Method {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_MethodName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Inflow_Method", "m_MethodName", 0x80};  // PulseSymbol_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Description{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Inflow_Method", "m_Description", 0x90};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsPublic{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Inflow_Method", "m_bIsPublic", 0x98};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Args{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Inflow_Method", "m_Args", 0xA0};  // CUtlLeanVector<CPulseRuntimeMethodArg>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ReturnValues{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Inflow_Method", "m_ReturnValues", 0xB0};  // CUtlLeanVector<CPulseRuntimeMethodArg>
            }
            // Parent: None
            // Field count: 6
            namespace C_BaseCombatCharacter {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hMyWearables{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCombatCharacter", "m_hMyWearables", 0x1268};  // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_leftFootAttachment{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCombatCharacter", "m_leftFootAttachment", 0x1280};  // AttachmentHandle_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_rightFootAttachment{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCombatCharacter", "m_rightFootAttachment", 0x1281};  // AttachmentHandle_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nWaterWakeMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCombatCharacter", "m_nWaterWakeMode", 0x1284};  // C_BaseCombatCharacter::WaterWakeMode_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWaterWorldZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCombatCharacter", "m_flWaterWorldZ", 0x1288};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWaterNextTraceTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCombatCharacter", "m_flWaterNextTraceTime", 0x128C};  // float32
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGlowProperty {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fGlowColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlowProperty", "m_fGlowColor", 0x8};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iGlowType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlowProperty", "m_iGlowType", 0x30};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iGlowTeam{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlowProperty", "m_iGlowTeam", 0x34};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nGlowRange{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlowProperty", "m_nGlowRange", 0x38};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nGlowRangeMin{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlowProperty", "m_nGlowRangeMin", 0x3C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_glowColorOverride{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlowProperty", "m_glowColorOverride", 0x40};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFlashing{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlowProperty", "m_bFlashing", 0x44};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flGlowTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlowProperty", "m_flGlowTime", 0x48};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flGlowStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlowProperty", "m_flGlowStartTime", 0x4C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEligibleForScreenHighlight{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlowProperty", "m_bEligibleForScreenHighlight", 0x50};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bGlowing{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlowProperty", "m_bGlowing", 0x51};  // bool
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 2
            namespace C_PointClientUIDialog {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hActivator{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIDialog", "m_hActivator", 0x10C8};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStartEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIDialog", "m_bStartEnabled", 0x10CC};  // bool
            }
            // Parent: C_SoundEventEntity
            // Field count: 0
            namespace C_SoundEventMultiPointEntity {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseValue {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponHKP2000 {
            }
            // Parent: C_BaseTrigger
            // Field count: 2
            namespace C_FootstepControl {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_source{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FootstepControl", "m_source", 0x1180};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_destination{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FootstepControl", "m_destination", 0x1188};  // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 8
            namespace CCitadelSoundOpvarSetOBB {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszStackName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCitadelSoundOpvarSetOBB", "m_iszStackName", 0x618};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszOperatorName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCitadelSoundOpvarSetOBB", "m_iszOperatorName", 0x620};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszOpvarName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCitadelSoundOpvarSetOBB", "m_iszOpvarName", 0x628};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vDistanceInnerMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCitadelSoundOpvarSetOBB", "m_vDistanceInnerMins", 0x630};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vDistanceInnerMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCitadelSoundOpvarSetOBB", "m_vDistanceInnerMaxs", 0x63C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vDistanceOuterMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCitadelSoundOpvarSetOBB", "m_vDistanceOuterMins", 0x648};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vDistanceOuterMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCitadelSoundOpvarSetOBB", "m_vDistanceOuterMaxs", 0x654};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nAABBDirection{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCitadelSoundOpvarSetOBB", "m_nAABBDirection", 0x660};  // int32
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_EndOfMatchLineupStart {
            }
            // Parent: None
            // Field count: 0
            namespace CPlayer_WaterServices {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_BooleanSwitchState {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Condition{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_BooleanSwitchState", "m_Condition", 0xD8};  // CPulseObservableExpression<bool>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_WhenTrue{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_BooleanSwitchState", "m_WhenTrue", 0x168};  // CPulse_OutflowConnection
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_WhenFalse{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_BooleanSwitchState", "m_WhenFalse", 0x1B0};  // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 15
            namespace CDamageRecord {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PlayerDamager{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDamageRecord", "m_PlayerDamager", 0x30};  // CHandle<C_CSPlayerPawn>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PlayerRecipient{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDamageRecord", "m_PlayerRecipient", 0x34};  // CHandle<C_CSPlayerPawn>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hPlayerControllerDamager{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDamageRecord", "m_hPlayerControllerDamager", 0x38};  // CHandle<CCSPlayerController>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hPlayerControllerRecipient{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDamageRecord", "m_hPlayerControllerRecipient", 0x3C};  // CHandle<CCSPlayerController>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szPlayerDamagerName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDamageRecord", "m_szPlayerDamagerName", 0x40};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szPlayerRecipientName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDamageRecord", "m_szPlayerRecipientName", 0x48};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_DamagerXuid{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDamageRecord", "m_DamagerXuid", 0x50};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_RecipientXuid{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDamageRecord", "m_RecipientXuid", 0x58};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBulletsDamage{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDamageRecord", "m_flBulletsDamage", 0x60};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDamage{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDamageRecord", "m_flDamage", 0x64};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flActualHealthRemoved{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDamageRecord", "m_flActualHealthRemoved", 0x68};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iNumHits{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDamageRecord", "m_iNumHits", 0x6C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iLastBulletUpdate{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDamageRecord", "m_iLastBulletUpdate", 0x70};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsOtherEnemy{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDamageRecord", "m_bIsOtherEnemy", 0x74};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_killType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CDamageRecord", "m_killType", 0x75};  // EKillTypes_t
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysicsCollisionAttribute_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nInteractsAs{::cs2_dumper::runtime::Category::Schema, "client.dll", "VPhysicsCollisionAttribute_t", "m_nInteractsAs", 0x8};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nInteractsWith{::cs2_dumper::runtime::Category::Schema, "client.dll", "VPhysicsCollisionAttribute_t", "m_nInteractsWith", 0x10};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nInteractsExclude{::cs2_dumper::runtime::Category::Schema, "client.dll", "VPhysicsCollisionAttribute_t", "m_nInteractsExclude", 0x18};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nEntityId{::cs2_dumper::runtime::Category::Schema, "client.dll", "VPhysicsCollisionAttribute_t", "m_nEntityId", 0x20};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nOwnerId{::cs2_dumper::runtime::Category::Schema, "client.dll", "VPhysicsCollisionAttribute_t", "m_nOwnerId", 0x24};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nHierarchyId{::cs2_dumper::runtime::Category::Schema, "client.dll", "VPhysicsCollisionAttribute_t", "m_nHierarchyId", 0x28};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDetailLayerMask{::cs2_dumper::runtime::Category::Schema, "client.dll", "VPhysicsCollisionAttribute_t", "m_nDetailLayerMask", 0x2A};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDetailLayerMaskType{::cs2_dumper::runtime::Category::Schema, "client.dll", "VPhysicsCollisionAttribute_t", "m_nDetailLayerMaskType", 0x2C};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTargetDetailLayer{::cs2_dumper::runtime::Category::Schema, "client.dll", "VPhysicsCollisionAttribute_t", "m_nTargetDetailLayer", 0x2D};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCollisionGroup{::cs2_dumper::runtime::Category::Schema, "client.dll", "VPhysicsCollisionAttribute_t", "m_nCollisionGroup", 0x2E};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCollisionFunctionMask{::cs2_dumper::runtime::Category::Schema, "client.dll", "VPhysicsCollisionAttribute_t", "m_nCollisionFunctionMask", 0x2F};  // uint8
            }
            // Parent: None
            // Field count: 0
            namespace C_DynamicPropAlias_dynamic_prop {
            }
            // Parent: None
            // Field count: 0
            namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            }
            // Parent: C_BarnLight
            // Field count: 3
            namespace C_OmniLight {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInnerAngle{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_OmniLight", "m_flInnerAngle", 0x13A8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flOuterAngle{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_OmniLight", "m_flOuterAngle", 0x13AC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bShowLight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_OmniLight", "m_bShowLight", 0x13B0};  // bool
            }
            // Parent: None
            // Field count: 13
            namespace C_SceneEntity {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsPlayingBack{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SceneEntity", "m_bIsPlayingBack", 0x608};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPaused{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SceneEntity", "m_bPaused", 0x609};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bMultiplayer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SceneEntity", "m_bMultiplayer", 0x60A};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAutogenerated{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SceneEntity", "m_bAutogenerated", 0x60B};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAllRequirementsComplete{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SceneEntity", "m_bAllRequirementsComplete", 0x60C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flForceClientTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SceneEntity", "m_flForceClientTime", 0x610};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSceneStringIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SceneEntity", "m_nSceneStringIndex", 0x614};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bClientOnly{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SceneEntity", "m_bClientOnly", 0x616};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hOwner{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SceneEntity", "m_hOwner", 0x618};  // CHandle<C_BaseModelEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hActorList{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SceneEntity", "m_hActorList", 0x620};  // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWasPlaying{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SceneEntity", "m_bWasPlaying", 0x638};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_QueuedEvents{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SceneEntity", "m_QueuedEvents", 0x648};  // CUtlVector<C_SceneEntity::QueuedEvents_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCurrentTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SceneEntity", "m_flCurrentTime", 0x660};  // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_Yield {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_UnyieldResume{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Inflow_Yield", "m_UnyieldResume", 0xD8};  // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 1
            namespace C_NametagModule {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strNametagString{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_NametagModule", "m_strNametagString", 0x1270};  // CUtlString
            }
            // Parent: None
            // Field count: 20
            namespace C_EconEntity {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFlexDelayTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_flFlexDelayTime", 0x1278};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFlexDelayedWeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_flFlexDelayedWeight", 0x1280};  // float32*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAttributesInitialized{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_bAttributesInitialized", 0x1288};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_AttributeManager{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_AttributeManager", 0x1290};  // C_AttributeContainer
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OriginalOwnerXuidLow{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_OriginalOwnerXuidLow", 0x18A0};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OriginalOwnerXuidHigh{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_OriginalOwnerXuidHigh", 0x18A4};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFallbackPaintKit{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_nFallbackPaintKit", 0x18A8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFallbackSeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_nFallbackSeed", 0x18AC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFallbackWear{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_flFallbackWear", 0x18B0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFallbackStatTrak{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_nFallbackStatTrak", 0x18B4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bClientside{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_bClientside", 0x18B8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bParticleSystemsCreated{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_bParticleSystemsCreated", 0x18B9};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecAttachedParticles{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_vecAttachedParticles", 0x18C0};  // CUtlVector<int32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hViewmodelAttachment{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_hViewmodelAttachment", 0x18D8};  // CHandle<CBaseAnimGraph>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iOldTeam{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_iOldTeam", 0x18DC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAttachmentDirty{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_bAttachmentDirty", 0x18E0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nUnloadedModelIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_nUnloadedModelIndex", 0x18E4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iNumOwnerValidationRetries{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_iNumOwnerValidationRetries", 0x18E8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hOldProvidee{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_hOldProvidee", 0x18F8};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecAttachedModels{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconEntity", "m_vecAttachedModels", 0x1900};  // CUtlVector<C_EconEntity::AttachedModelData_t>
            }
            // Parent: None
            // Field count: 0
            namespace CPlayer_UseServices {
            }
            // Parent: C_BaseEntity
            // Field count: 25
            namespace C_PointValueRemapper {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_bDisabled", 0x600};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDisabledOld{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_bDisabledOld", 0x601};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUpdateOnClient{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_bUpdateOnClient", 0x602};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nInputType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_nInputType", 0x604};  // ValueRemapperInputType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hRemapLineStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_hRemapLineStart", 0x608};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hRemapLineEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_hRemapLineEnd", 0x60C};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMaximumChangePerSecond{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_flMaximumChangePerSecond", 0x610};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDisengageDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_flDisengageDistance", 0x614};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flEngageDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_flEngageDistance", 0x618};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRequiresUseKey{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_bRequiresUseKey", 0x61C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nOutputType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_nOutputType", 0x620};  // ValueRemapperOutputType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hOutputEntities{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_hOutputEntities", 0x628};  // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nHapticsType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_nHapticsType", 0x640};  // ValueRemapperHapticsType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMomentumType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_nMomentumType", 0x644};  // ValueRemapperMomentumType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMomentumModifier{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_flMomentumModifier", 0x648};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSnapValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_flSnapValue", 0x64C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCurrentMomentum{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_flCurrentMomentum", 0x650};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRatchetType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_nRatchetType", 0x654};  // ValueRemapperRatchetType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRatchetOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_flRatchetOffset", 0x658};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInputOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_flInputOffset", 0x65C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEngaged{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_bEngaged", 0x660};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFirstUpdate{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_bFirstUpdate", 0x661};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPreviousValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_flPreviousValue", 0x664};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flPreviousUpdateTickTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_flPreviousUpdateTickTime", 0x668};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecPreviousTestPoint{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointValueRemapper", "m_vecPreviousTestPoint", 0x66C};  // VectorWS
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGameSceneNodeHandle {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hOwner{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNodeHandle", "m_hOwner", 0x8};  // CEntityHandle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_name{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGameSceneNodeHandle", "m_name", 0xC};  // CUtlStringToken
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_Unknown {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_UnknownKeys{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Unknown", "m_UnknownKeys", 0x48};  // KeyValues3
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponMP7 {
            }
            // Parent: None
            // Field count: 13
            namespace CSPerRoundStats_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iKills{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSPerRoundStats_t", "m_iKills", 0x30};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iDeaths{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSPerRoundStats_t", "m_iDeaths", 0x34};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iAssists{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSPerRoundStats_t", "m_iAssists", 0x38};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iDamage{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSPerRoundStats_t", "m_iDamage", 0x3C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEquipmentValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSPerRoundStats_t", "m_iEquipmentValue", 0x40};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMoneySaved{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSPerRoundStats_t", "m_iMoneySaved", 0x44};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iKillReward{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSPerRoundStats_t", "m_iKillReward", 0x48};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iLiveTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSPerRoundStats_t", "m_iLiveTime", 0x4C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iHeadShotKills{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSPerRoundStats_t", "m_iHeadShotKills", 0x50};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iObjective{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSPerRoundStats_t", "m_iObjective", 0x54};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iCashEarned{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSPerRoundStats_t", "m_iCashEarned", 0x58};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iUtilityDamage{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSPerRoundStats_t", "m_iUtilityDamage", 0x5C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEnemiesFlashed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSPerRoundStats_t", "m_iEnemiesFlashed", 0x60};  // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleRandom {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Outputs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Outflow_CycleRandom", "m_Outputs", 0x48};  // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_PublicOutput {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OutputIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Step_PublicOutput", "m_OutputIndex", 0x48};  // PulseRuntimeOutputIndex_t
            }
            // Parent: None
            // Field count: 0
            namespace C_CS2HudModelBase {
            }
            // Parent: None
            // Field count: 98
            namespace C_CSGameRules {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFreezePeriod{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bFreezePeriod", 0x40};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWarmupPeriod{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bWarmupPeriod", 0x41};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fWarmupPeriodEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_fWarmupPeriodEnd", 0x44};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fWarmupPeriodStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_fWarmupPeriodStart", 0x48};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bTerroristTimeOutActive{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bTerroristTimeOutActive", 0x4C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCTTimeOutActive{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bCTTimeOutActive", 0x4D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTerroristTimeOutRemaining{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_flTerroristTimeOutRemaining", 0x50};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCTTimeOutRemaining{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_flCTTimeOutRemaining", 0x54};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTerroristTimeOuts{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nTerroristTimeOuts", 0x58};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCTTimeOuts{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nCTTimeOuts", 0x5C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bTechnicalTimeOut{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bTechnicalTimeOut", 0x60};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bMatchWaitingForResume{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bMatchWaitingForResume", 0x61};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iFreezeTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iFreezeTime", 0x64};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRoundTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iRoundTime", 0x68};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fMatchStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_fMatchStartTime", 0x6C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fRoundStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_fRoundStartTime", 0x70};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRestartRoundTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_flRestartRoundTime", 0x74};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bGameRestart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bGameRestart", 0x78};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flGameStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_flGameStartTime", 0x7C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_timeUntilNextPhaseStarts{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_timeUntilNextPhaseStarts", 0x80};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_gamePhase{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_gamePhase", 0x84};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_totalRoundsPlayed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_totalRoundsPlayed", 0x88};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRoundsPlayedThisPhase{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nRoundsPlayedThisPhase", 0x8C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nOvertimePlaying{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nOvertimePlaying", 0x90};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iHostagesRemaining{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iHostagesRemaining", 0x94};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAnyHostageReached{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bAnyHostageReached", 0x98};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bMapHasBombTarget{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bMapHasBombTarget", 0x99};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bMapHasRescueZone{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bMapHasRescueZone", 0x9A};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bMapHasBuyZone{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bMapHasBuyZone", 0x9B};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsQueuedMatchmaking{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bIsQueuedMatchmaking", 0x9C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nQueuedMatchmakingMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nQueuedMatchmakingMode", 0xA0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsValveDS{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bIsValveDS", 0xA4};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bLogoMap{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bLogoMap", 0xA5};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPlayAllStepSoundsOnServer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bPlayAllStepSoundsOnServer", 0xA6};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iSpectatorSlotCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iSpectatorSlotCount", 0xA8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_MatchDevice{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_MatchDevice", 0xAC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasMatchStarted{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bHasMatchStarted", 0xB0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nNextMapInMapgroup{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nNextMapInMapgroup", 0xB4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szTournamentEventName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_szTournamentEventName", 0xB8};  // char[512]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szTournamentEventStage{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_szTournamentEventStage", 0x2B8};  // char[512]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szMatchStatTxt{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_szMatchStatTxt", 0x4B8};  // char[512]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szTournamentPredictionsTxt{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_szTournamentPredictionsTxt", 0x6B8};  // char[512]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTournamentPredictionsPct{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nTournamentPredictionsPct", 0x8B8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCMMItemDropRevealStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_flCMMItemDropRevealStartTime", 0x8BC};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCMMItemDropRevealEndTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_flCMMItemDropRevealEndTime", 0x8C0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsDroppingItems{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bIsDroppingItems", 0x8C4};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsQuestEligible{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bIsQuestEligible", 0x8C5};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsHltvActive{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bIsHltvActive", 0x8C6};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBombPlanted{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bBombPlanted", 0x8C7};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_arrProhibitedItemIndices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_arrProhibitedItemIndices", 0x8C8};  // uint16[100]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_arrTournamentActiveCasterAccounts{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_arrTournamentActiveCasterAccounts", 0x990};  // uint32[4]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_numBestOfMaps{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_numBestOfMaps", 0x9A0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nHalloweenMaskListSeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nHalloweenMaskListSeed", 0x9A4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBombDropped{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bBombDropped", 0x9A8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRoundWinStatus{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iRoundWinStatus", 0x9AC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_eRoundWinReason{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_eRoundWinReason", 0x9B0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bTCantBuy{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bTCantBuy", 0x9B4};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCTCantBuy{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bCTCantBuy", 0x9B5};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMatchStats_RoundResults{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iMatchStats_RoundResults", 0x9B8};  // int32[30]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMatchStats_PlayersAlive_CT{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iMatchStats_PlayersAlive_CT", 0xA30};  // int32[30]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMatchStats_PlayersAlive_T{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iMatchStats_PlayersAlive_T", 0xAA8};  // int32[30]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_TeamRespawnWaveTimes{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_TeamRespawnWaveTimes", 0xB20};  // float32[32]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNextRespawnWave{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_flNextRespawnWave", 0xBA0};  // GameTime_t[32]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vMinimapMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_vMinimapMins", 0xC20};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vMinimapMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_vMinimapMaxs", 0xC2C};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_MinimapVerticalSectionHeights{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_MinimapVerticalSectionHeights", 0xC38};  // float32[8]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ullLocalMatchID{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_ullLocalMatchID", 0xC58};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nEndMatchMapGroupVoteTypes{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nEndMatchMapGroupVoteTypes", 0xC60};  // int32[10]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nEndMatchMapGroupVoteOptions{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nEndMatchMapGroupVoteOptions", 0xC88};  // int32[10]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nEndMatchMapVoteWinner{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nEndMatchMapVoteWinner", 0xCB0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iNumConsecutiveCTLoses{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iNumConsecutiveCTLoses", 0xCB4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iNumConsecutiveTerroristLoses{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iNumConsecutiveTerroristLoses", 0xCB8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMatchAbortedEarlyReason{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nMatchAbortedEarlyReason", 0xD78};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasTriggeredRoundStartMusic{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bHasTriggeredRoundStartMusic", 0xD7C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSwitchingTeamsAtRoundReset{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bSwitchingTeamsAtRoundReset", 0xD7D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pGameModeRules{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_pGameModeRules", 0xD98};  // CCSGameModeRules*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_RetakeRules{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_RetakeRules", 0xDA0};  // C_RetakeGameRules
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMatchEndCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nMatchEndCount", 0xEF8};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTTeamIntroVariant{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nTTeamIntroVariant", 0xEFC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCTTeamIntroVariant{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nCTTeamIntroVariant", 0xF00};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bTeamIntroPeriod{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bTeamIntroPeriod", 0xF04};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRoundEndWinnerTeam{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iRoundEndWinnerTeam", 0xF08};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_eRoundEndReason{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_eRoundEndReason", 0xF0C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRoundEndShowTimerDefend{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bRoundEndShowTimerDefend", 0xF10};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRoundEndTimerTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iRoundEndTimerTime", 0xF14};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sRoundEndFunFactToken{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_sRoundEndFunFactToken", 0xF18};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRoundEndFunFactPlayerSlot{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iRoundEndFunFactPlayerSlot", 0xF20};  // CPlayerSlot
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRoundEndFunFactData1{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iRoundEndFunFactData1", 0xF24};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRoundEndFunFactData2{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iRoundEndFunFactData2", 0xF28};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRoundEndFunFactData3{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iRoundEndFunFactData3", 0xF2C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sRoundEndMessage{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_sRoundEndMessage", 0xF30};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRoundEndPlayerCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iRoundEndPlayerCount", 0xF38};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRoundEndNoMusic{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_bRoundEndNoMusic", 0xF3C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRoundEndLegacy{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iRoundEndLegacy", 0xF40};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRoundEndCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nRoundEndCount", 0xF44};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRoundStartRoundNumber{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_iRoundStartRoundNumber", 0xF48};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRoundStartCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_nRoundStartCount", 0xF4C};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastPerfSampleTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGameRules", "m_flLastPerfSampleTime", 0x4F58};  // float64
            }
            // Parent: C_BaseModelEntity
            // Field count: 2
            namespace CGrenadeTracer {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTracerDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGrenadeTracer", "m_flTracerDuration", 0x10B0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGrenadeTracer", "m_nType", 0x10B4};  // GrenadeType_t
            }
            // Parent: None
            // Field count: 0
            namespace CCSGameModeRules_Noop {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_BlackboardReference {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hBlackboardResource{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_BlackboardReference", "m_hBlackboardResource", 0x0};  // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_BlackboardResource{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_BlackboardReference", "m_BlackboardResource", 0x8};  // PulseSymbol_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nNodeID{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_BlackboardReference", "m_nNodeID", 0x18};  // PulseDocNodeID_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_NodeName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_BlackboardReference", "m_NodeName", 0x20};  // CGlobalSymbol
            }
            // Parent: None
            // Field count: 16
            namespace C_BaseCSGrenadeProjectile {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vInitialPosition{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenadeProjectile", "m_vInitialPosition", 0x12B0};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vInitialVelocity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenadeProjectile", "m_vInitialVelocity", 0x12BC};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBounces{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenadeProjectile", "m_nBounces", 0x12C8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nExplodeEffectIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenadeProjectile", "m_nExplodeEffectIndex", 0x12D0};  // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nExplodeEffectTickBegin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenadeProjectile", "m_nExplodeEffectTickBegin", 0x12D8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecExplodeEffectOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenadeProjectile", "m_vecExplodeEffectOrigin", 0x12DC};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSpawnTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenadeProjectile", "m_flSpawnTime", 0x12E8};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant vecLastTrailLinePos{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenadeProjectile", "vecLastTrailLinePos", 0x12EC};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant flNextTrailLineTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenadeProjectile", "flNextTrailLineTime", 0x12F8};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bExplodeEffectBegan{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenadeProjectile", "m_bExplodeEffectBegan", 0x12FC};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCanCreateGrenadeTrail{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenadeProjectile", "m_bCanCreateGrenadeTrail", 0x12FD};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSnapshotTrajectoryEffectIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenadeProjectile", "m_nSnapshotTrajectoryEffectIndex", 0x1300};  // ParticleIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hSnapshotTrajectoryParticleSnapshot{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenadeProjectile", "m_hSnapshotTrajectoryParticleSnapshot", 0x1308};  // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_arrTrajectoryTrailPoints{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenadeProjectile", "m_arrTrajectoryTrailPoints", 0x1310};  // CUtlVector<Vector>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_arrTrajectoryTrailPointCreationTimes{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenadeProjectile", "m_arrTrajectoryTrailPointCreationTimes", 0x1328};  // CUtlVector<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTrajectoryTrailEffectCreationTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseCSGrenadeProjectile", "m_flTrajectoryTrailEffectCreationTime", 0x1340};  // float32
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_RushIntroCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_ReturnValues {
            }
            // Parent: C_BaseEntity
            // Field count: 16
            namespace C_GradientFog {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hGradientFogTexture{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GradientFog", "m_hGradientFogTexture", 0x600};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogStartDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GradientFog", "m_flFogStartDistance", 0x608};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogEndDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GradientFog", "m_flFogEndDistance", 0x60C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHeightFogEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GradientFog", "m_bHeightFogEnabled", 0x610};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogStartHeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GradientFog", "m_flFogStartHeight", 0x614};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogEndHeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GradientFog", "m_flFogEndHeight", 0x618};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFarZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GradientFog", "m_flFarZ", 0x61C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogMaxOpacity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GradientFog", "m_flFogMaxOpacity", 0x620};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogFalloffExponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GradientFog", "m_flFogFalloffExponent", 0x624};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogVerticalExponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GradientFog", "m_flFogVerticalExponent", 0x628};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fogColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GradientFog", "m_fogColor", 0x62C};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GradientFog", "m_flFogStrength", 0x630};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GradientFog", "m_flFadeTime", 0x634};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStartDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GradientFog", "m_bStartDisabled", 0x638};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GradientFog", "m_bIsEnabled", 0x639};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bGradientFogNeedsTextures{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_GradientFog", "m_bGradientFogNeedsTextures", 0x63A};  // bool
            }
            // Parent: None
            // Field count: 4
            namespace CCSPlayerController_InGameMoneyServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iAccount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_InGameMoneyServices", "m_iAccount", 0x40};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iStartAccount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_InGameMoneyServices", "m_iStartAccount", 0x44};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iTotalCashSpent{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_InGameMoneyServices", "m_iTotalCashSpent", 0x48};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iCashSpentThisRound{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayerController_InGameMoneyServices", "m_iCashSpentThisRound", 0x4C};  // int32
            }
            // Parent: None
            // Field count: 6
            namespace CCSPlayer_AimPunchServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_predictableBaseTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_AimPunchServices", "m_predictableBaseTick", 0x48};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_predictableBaseTickInterpAmount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_AimPunchServices", "m_predictableBaseTickInterpAmount", 0x4C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_predictableBaseAngle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_AimPunchServices", "m_predictableBaseAngle", 0x50};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_predictableBaseAngleVel{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_AimPunchServices", "m_predictableBaseAngleVel", 0x5C};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unpredictableBaseTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_AimPunchServices", "m_unpredictableBaseTick", 0xA0};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unpredictableBaseAngle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_AimPunchServices", "m_unpredictableBaseAngle", 0xA4};  // QAngle
            }
            // Parent: None
            // Field count: 0
            namespace C_HEGrenadeProjectile {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterModel {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iFilterModel{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFilterModel", "m_iFilterModel", 0x638};  // CUtlSymbolLarge
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 2
            namespace C_SoundAreaEntityOrientedBox {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vMin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundAreaEntityOrientedBox", "m_vMin", 0x628};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vMax{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_SoundAreaEntityOrientedBox", "m_vMax", 0x634};  // Vector
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            namespace C_SoundOpvarSetPointEntity {
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace CPulseGameBlackboard {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strGraphName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGameBlackboard", "m_strGraphName", 0x608};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strStateBlob{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseGameBlackboard", "m_strStateBlob", 0x610};  // CUtlString
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CChoreoComponent {
                inline constexpr ::cs2_dumper::runtime::dumper_constant __m_pChainEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "CChoreoComponent", "__m_pChainEntity", 0x8};  // CNetworkVarChainer
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hOwner{::cs2_dumper::runtime::Category::Schema, "client.dll", "CChoreoComponent", "m_hOwner", 0x30};  // CHandle<C_BaseModelEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nExernalChoreoGraphCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CChoreoComponent", "m_nExernalChoreoGraphCount", 0x34};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sActiveExternalChoreoGraphSlotID{::cs2_dumper::runtime::Category::Schema, "client.dll", "CChoreoComponent", "m_sActiveExternalChoreoGraphSlotID", 0x38};  // CGlobalSymbol
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nNextSceneEventId{::cs2_dumper::runtime::Category::Schema, "client.dll", "CChoreoComponent", "m_nNextSceneEventId", 0x70};  // SceneEventId_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAllowResponsesEndTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CChoreoComponent", "m_flAllowResponsesEndTime", 0x74};  // GameTime_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_Value_RandomInt {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSWeaponBaseShotgun {
            }
            // Parent: None
            // Field count: 7
            namespace C_RagdollPropAttached {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_boneIndexAttached{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RagdollPropAttached", "m_boneIndexAttached", 0x12F0};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ragdollAttachedObjectIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RagdollPropAttached", "m_ragdollAttachedObjectIndex", 0x12F4};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_attachmentPointBoneSpace{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RagdollPropAttached", "m_attachmentPointBoneSpace", 0x12F8};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_attachmentPointRagdollSpace{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RagdollPropAttached", "m_attachmentPointRagdollSpace", 0x1304};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RagdollPropAttached", "m_vecOffset", 0x1310};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_parentTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RagdollPropAttached", "m_parentTime", 0x131C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasParent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RagdollPropAttached", "m_bHasParent", 0x1320};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_ModelPointEntity {
            }
            // Parent: C_CSPlayerPawn
            // Field count: 2
            namespace C_CSGO_PreviewPlayer {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_animgraphCharacterModeString{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_PreviewPlayer", "m_animgraphCharacterModeString", 0x3710};  // CGlobalSymbol
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInitialModelScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_PreviewPlayer", "m_flInitialModelScale", 0x3718};  // float32
            }
            // Parent: C_BarnLight
            // Field count: 1
            namespace C_RectLight {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bShowLight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RectLight", "m_bShowLight", 0x13A8};  // bool
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace CCSRadarElement {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nElementType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSRadarElement", "m_nElementType", 0x618};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nElementColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSRadarElement", "m_nElementColor", 0x61C};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTeamFilter{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSRadarElement", "m_nTeamFilter", 0x620};  // uint32
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace CPathSimple {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_CPathQueryComponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPathSimple", "m_CPathQueryComponent", 0x610};  // CPathQueryComponent
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pathString{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPathSimple", "m_pathString", 0x700};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bClosedLoop{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPathSimple", "m_bClosedLoop", 0x708};  // bool
            }
            // Parent: None
            // Field count: 3
            namespace C_FuncTrackTrain {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLongAxis{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncTrackTrain", "m_nLongAxis", 0x1098};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncTrackTrain", "m_flRadius", 0x109C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLineLength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncTrackTrain", "m_flLineLength", 0x10A0};  // float32
            }
            // Parent: None
            // Field count: 2
            namespace C_EconWearable {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nForceSkin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconWearable", "m_nForceSkin", 0x1918};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAlwaysAllow{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EconWearable", "m_bAlwaysAllow", 0x191C};  // bool
            }
            // Parent: C_BaseModelEntity
            // Field count: 9
            namespace C_EnvDecal {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hDecalMaterial{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvDecal", "m_hDecalMaterial", 0x1098};  // CStrongHandle<InfoForResourceTypeIMaterial2>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWidth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvDecal", "m_flWidth", 0x10A0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flHeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvDecal", "m_flHeight", 0x10A4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDepth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvDecal", "m_flDepth", 0x10A8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRenderOrder{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvDecal", "m_nRenderOrder", 0x10AC};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bProjectOnWorld{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvDecal", "m_bProjectOnWorld", 0x10B0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bProjectOnCharacters{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvDecal", "m_bProjectOnCharacters", 0x10B1};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bProjectOnWater{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvDecal", "m_bProjectOnWater", 0x10B2};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDepthSortBias{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvDecal", "m_flDepthSortBias", 0x10B4};  // float32
            }
            // Parent: None
            // Field count: 2
            namespace EntitySpottedState_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSpotted{::cs2_dumper::runtime::Category::Schema, "client.dll", "EntitySpottedState_t", "m_bSpotted", 0x8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSpottedByMask{::cs2_dumper::runtime::Category::Schema, "client.dll", "EntitySpottedState_t", "m_bSpottedByMask", 0xC};  // uint32[2]
            }
            // Parent: None
            // Field count: 25
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace fogparams_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant dirPrimary{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "dirPrimary", 0x8};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant colorPrimary{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "colorPrimary", 0x14};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant colorSecondary{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "colorSecondary", 0x18};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant colorPrimaryLerpTo{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "colorPrimaryLerpTo", 0x1C};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant colorSecondaryLerpTo{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "colorSecondaryLerpTo", 0x20};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant start{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "start", 0x24};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant end{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "end", 0x28};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant farz{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "farz", 0x2C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant maxdensity{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "maxdensity", 0x30};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant exponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "exponent", 0x34};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant HDRColorScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "HDRColorScale", 0x38};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant skyboxFogFactor{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "skyboxFogFactor", 0x3C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant skyboxFogFactorLerpTo{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "skyboxFogFactorLerpTo", 0x40};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant startLerpTo{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "startLerpTo", 0x44};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant endLerpTo{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "endLerpTo", 0x48};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant maxdensityLerpTo{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "maxdensityLerpTo", 0x4C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant lerptime{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "lerptime", 0x50};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant duration{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "duration", 0x54};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant blendtobackground{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "blendtobackground", 0x58};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant scattering{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "scattering", 0x5C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant locallightscale{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "locallightscale", 0x60};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant enable{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "enable", 0x64};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant blend{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "blend", 0x65};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPadding2{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "m_bPadding2", 0x66};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPadding{::cs2_dumper::runtime::Category::Schema, "client.dll", "fogparams_t", "m_bPadding", 0x67};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponM4A1 {
            }
            // Parent: None
            // Field count: 1
            namespace C_Item {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pReticleHintTextName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Item", "m_pReticleHintTextName", 0x1918};  // char[256]
            }
            // Parent: None
            // Field count: 0
            namespace C_CSPetPlacement {
            }
            // Parent: C_BaseModelEntity
            // Field count: 23
            namespace C_Beam {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFrameRate{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_flFrameRate", 0x1098};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flHDRColorScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_flHDRColorScale", 0x109C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFireTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_flFireTime", 0x10A0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDamage{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_flDamage", 0x10A4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nNumBeamEnts{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_nNumBeamEnts", 0x10A8};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_queryHandleHalo{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_queryHandleHalo", 0x10AC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hBaseMaterial{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_hBaseMaterial", 0x10D0};  // CStrongHandle<InfoForResourceTypeIMaterial2>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nHaloIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_nHaloIndex", 0x10D8};  // CStrongHandle<InfoForResourceTypeIMaterial2>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBeamType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_nBeamType", 0x10E0};  // BeamType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBeamFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_nBeamFlags", 0x10E4};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hAttachEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_hAttachEntity", 0x10E8};  // CHandle<C_BaseEntity>[10]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nAttachIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_nAttachIndex", 0x1110};  // AttachmentHandle_t[10]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fWidth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_fWidth", 0x111C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fEndWidth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_fEndWidth", 0x1120};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fFadeLength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_fFadeLength", 0x1124};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fHaloScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_fHaloScale", 0x1128};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fAmplitude{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_fAmplitude", 0x112C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fStartFrame{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_fStartFrame", 0x1130};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_fSpeed", 0x1134};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFrame{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_flFrame", 0x1138};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bTurnedOff{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_bTurnedOff", 0x113C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecEndPos{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_vecEndPos", 0x1140};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hEndEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Beam", "m_hEndEntity", 0x114C};  // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 20
            namespace C_EnvLightProbeVolume {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_hLightProbeTexture_AmbientCube{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_hLightProbeTexture_AmbientCube", 0x698};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_hLightProbeTexture_SDF{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_hLightProbeTexture_SDF", 0x6A0};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_hLightProbeTexture_SH2_DC{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_hLightProbeTexture_SH2_DC", 0x6A8};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_hLightProbeTexture_SH2_L1{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_hLightProbeTexture_SH2_L1", 0x6B0};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_hLightProbeDirectLightIndicesTexture{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_hLightProbeDirectLightIndicesTexture", 0x6B8};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_hLightProbeDirectLightScalarsTexture{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_hLightProbeDirectLightScalarsTexture", 0x6C0};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_hLightProbeDirectLightShadowsTexture{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_hLightProbeDirectLightShadowsTexture", 0x6C8};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_vBoxMins{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_vBoxMins", 0x6D0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_vBoxMaxs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_vBoxMaxs", 0x6DC};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_bMoveable{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_bMoveable", 0x6E8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nHandshake{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_nHandshake", 0x6EC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nPriority{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_nPriority", 0x6F0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_bStartDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_bStartDisabled", 0x6F4};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nLightProbeSizeX{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_nLightProbeSizeX", 0x6F8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nLightProbeSizeY{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_nLightProbeSizeY", 0x6FC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nLightProbeSizeZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_nLightProbeSizeZ", 0x700};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nLightProbeAtlasX{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_nLightProbeAtlasX", 0x704};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nLightProbeAtlasY{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_nLightProbeAtlasY", 0x708};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_nLightProbeAtlasZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_nLightProbeAtlasZ", 0x70C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Entity_bEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EnvLightProbeVolume", "m_Entity_bEnabled", 0x719};  // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            // MVDataAssociatedFile
            namespace CExplosionTypeData {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SoundName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CExplosionTypeData", "m_SoundName", 0x0};  // CSoundEventName
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ParticleEffect{::cs2_dumper::runtime::Category::Schema, "client.dll", "CExplosionTypeData", "m_ParticleEffect", 0x10};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsIncindiary{::cs2_dumper::runtime::Category::Schema, "client.dll", "CExplosionTypeData", "m_bIsIncindiary", 0xF0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasForces{::cs2_dumper::runtime::Category::Schema, "client.dll", "CExplosionTypeData", "m_bHasForces", 0xF1};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_DecalType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CExplosionTypeData", "m_DecalType", 0xF8};  // CGlobalSymbol
            }
            // Parent: None
            // Field count: 9
            namespace C_FuncConveyor {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecMoveDirEntitySpace{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncConveyor", "m_vecMoveDirEntitySpace", 0x10A0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTargetSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncConveyor", "m_flTargetSpeed", 0x10AC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTransitionStartTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncConveyor", "m_nTransitionStartTick", 0x10B0};  // GameTick_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTransitionDurationTicks{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncConveyor", "m_nTransitionDurationTicks", 0x10B4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTransitionStartSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncConveyor", "m_flTransitionStartSpeed", 0x10B8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFrictionScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncConveyor", "m_flFrictionScale", 0x10BC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hConveyorModels{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncConveyor", "m_hConveyorModels", 0x10C0};  // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCurrentConveyorOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncConveyor", "m_flCurrentConveyorOffset", 0x10D8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCurrentConveyorSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_FuncConveyor", "m_flCurrentConveyorSpeed", 0x10DC};  // float32
            }
            // Parent: None
            // Field count: 5
            namespace CCSPlayer_WeaponServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNextAttack{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_WeaponServices", "m_flNextAttack", 0xD0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nOldTotalShootPositionHistoryCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_WeaponServices", "m_nOldTotalShootPositionHistoryCount", 0xD4};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nOldTotalInputHistoryCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_WeaponServices", "m_nOldTotalInputHistoryCount", 0x370};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_networkAnimTiming{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_WeaponServices", "m_networkAnimTiming", 0x15C0};  // C_NetworkUtlVectorBase<uint8>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBlockInspectUntilNextGraphUpdate{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSPlayer_WeaponServices", "m_bBlockInspectUntilNextGraphUpdate", 0x15D8};  // bool
            }
            // Parent: None
            // Field count: 2
            namespace C_PhysMagnet {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_aAttachedObjectsFromServer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PhysMagnet", "m_aAttachedObjectsFromServer", 0x1268};  // CUtlVector<int32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_aAttachedObjects{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PhysMagnet", "m_aAttachedObjects", 0x1280};  // CUtlVector<CHandle<C_BaseEntity>>
            }
            // Parent: None
            // Field count: 0
            namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            }
            // Parent: None
            // Field count: 0
            namespace C_Breakable {
            }
            // Parent: None
            // Field count: 29
            namespace C_PlantedC4 {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBombTicking{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_bBombTicking", 0x1288};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBombSite{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_nBombSite", 0x128C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSourceSoundscapeHash{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_nSourceSoundscapeHash", 0x1290};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_entitySpottedState{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_entitySpottedState", 0x1298};  // EntitySpottedState_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNextGlow{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_flNextGlow", 0x12B0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNextBeep{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_flNextBeep", 0x12B4};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flC4Blow{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_flC4Blow", 0x12B8};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCannotBeDefused{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_bCannotBeDefused", 0x12BC};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasExploded{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_bHasExploded", 0x12BD};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flTimerLength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_flTimerLength", 0x12C0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBeingDefused{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_bBeingDefused", 0x12C4};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bTriggerWarning{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_bTriggerWarning", 0x12C8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bExplodeWarning{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_bExplodeWarning", 0x12CC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bC4Activated{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_bC4Activated", 0x12D0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bTenSecWarning{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_bTenSecWarning", 0x12D1};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDefuseLength{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_flDefuseLength", 0x12D4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDefuseCountDown{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_flDefuseCountDown", 0x12D8};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBombDefused{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_bBombDefused", 0x12DC};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hBombDefuser{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_hBombDefuser", 0x12E0};  // CHandle<C_CSPlayerPawn>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_AttributeManager{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_AttributeManager", 0x12E8};  // C_AttributeContainer
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hDefuserMultimeter{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_hDefuserMultimeter", 0x18F8};  // CHandle<C_Multimeter>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNextRadarFlashTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_flNextRadarFlashTime", 0x18FC};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRadarFlash{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_bRadarFlash", 0x1900};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pBombDefuser{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_pBombDefuser", 0x1904};  // CHandle<C_CSPlayerPawn>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fLastDefuseTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_fLastDefuseTime", 0x1908};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pPredictionOwner{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_pPredictionOwner", 0x1910};  // CBasePlayerController*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecC4ExplodeSpectatePos{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_vecC4ExplodeSpectatePos", 0x1918};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecC4ExplodeSpectateAng{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_vecC4ExplodeSpectateAng", 0x1924};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flC4ExplodeSpectateDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlantedC4", "m_flC4ExplodeSpectateDuration", 0x1930};  // float32
            }
            // Parent: None
            // Field count: 4
            namespace CCSCustomHudLayoutState {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_playerSlot{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomHudLayoutState", "m_playerSlot", 0x30};  // CPlayerSlot
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInputCaptureEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomHudLayoutState", "m_bInputCaptureEnabled", 0x34};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecHasClasses{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomHudLayoutState", "m_vecHasClasses", 0x38};  // C_NetworkUtlVectorBase<HUDPanelHasClass_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecDialogVariableStrings{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSCustomHudLayoutState", "m_vecDialogVariableStrings", 0x50};  // C_NetworkUtlVectorBase<HUDPanelDialogVariableString_t>
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterName {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iFilterName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFilterName", "m_iFilterName", 0x638};  // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 9
            namespace C_RagdollProp {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ragEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RagdollProp", "m_ragEnabled", 0x1268};  // C_NetworkUtlVectorBase<bool>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ragPos{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RagdollProp", "m_ragPos", 0x1280};  // C_NetworkUtlVectorBase<Vector>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ragAngles{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RagdollProp", "m_ragAngles", 0x1298};  // C_NetworkUtlVectorBase<QAngle>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBlendWeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RagdollProp", "m_flBlendWeight", 0x12B0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hRagdollSource{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RagdollProp", "m_hRagdollSource", 0x12B4};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iEyeAttachment{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RagdollProp", "m_iEyeAttachment", 0x12B8};  // AttachmentHandle_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBlendWeightCurrent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RagdollProp", "m_flBlendWeightCurrent", 0x12BC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_parentPhysicsBoneIndices{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RagdollProp", "m_parentPhysicsBoneIndices", 0x12C0};  // CUtlVector<int32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_worldSpaceBoneComputationOrder{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_RagdollProp", "m_worldSpaceBoneComputationOrder", 0x12D8};  // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_CallInfo {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PortName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_CallInfo", "m_PortName", 0x0};  // PulseSymbol_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nEditorNodeID{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_CallInfo", "m_nEditorNodeID", 0x10};  // PulseDocNodeID_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_RegisterMap{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_CallInfo", "m_RegisterMap", 0x18};  // PulseRegisterMap_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_CallMethodID{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_CallInfo", "m_CallMethodID", 0x48};  // PulseDocNodeID_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSrcChunk{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_CallInfo", "m_nSrcChunk", 0x4C};  // PulseRuntimeChunkIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSrcInstruction{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_CallInfo", "m_nSrcInstruction", 0x50};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBreakDestChunk{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_CallInfo", "m_nBreakDestChunk", 0x54};  // PulseRuntimeChunkIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBreakDestInstruction{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulse_CallInfo", "m_nBreakDestInstruction", 0x58};  // int32
            }
            // Parent: None
            // Field count: 0
            namespace C_MapPreviewParticleSystem {
            }
            // Parent: C_BaseModelEntity
            // Field count: 18
            namespace CBaseAnimGraph {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_graphControllerManager{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_graphControllerManager", 0x1098};  // CAnimGraphControllerManager
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pMainGraphController{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_pMainGraphController", 0x1130};  // CAnimGraphControllerPtr
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bInitiallyPopulateInterpHistory{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_bInitiallyPopulateInterpHistory", 0x1138};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSuppressAnimEventSounds{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_bSuppressAnimEventSounds", 0x113A};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnLayerCycleUpdated{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_OnLayerCycleUpdated", 0x1140};  // CEntityOutputTemplate<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnExternalChoreoGraphChanged{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_OnExternalChoreoGraphChanged", 0x1160};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAnimGraphUpdateEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_bAnimGraphUpdateEnabled", 0x1180};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAnimationUpdateScheduled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_bAnimationUpdateScheduled", 0x1181};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecForce{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_vecForce", 0x1184};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nForceBone{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_nForceBone", 0x1190};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pClientsideRagdoll{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_pClientsideRagdoll", 0x1198};  // CBaseAnimGraph*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBuiltRagdoll{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_bBuiltRagdoll", 0x11A0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pRagdollControl{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_pRagdollControl", 0x11B0};  // IPhysicsRagdollControl*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_RagdollPose{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_RagdollPose", 0x11B8};  // PhysicsRagdollPose_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRagdollEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_bRagdollEnabled", 0x1200};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRagdollClientSide{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_bRagdollClientSide", 0x1201};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bShouldUpdateTransformations{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_bShouldUpdateTransformations", 0x1202};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasAnimatedMaterialAttributes{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseAnimGraph", "m_bHasAnimatedMaterialAttributes", 0x1210};  // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_InlineNodeSkipSelector {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFlowNodeID{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_InlineNodeSkipSelector", "m_nFlowNodeID", 0x48};  // PulseDocNodeID_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_InlineNodeSkipSelector", "m_bAnd", 0x4C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PassOutflow{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_InlineNodeSkipSelector", "m_PassOutflow", 0x50};  // PulseSelectorOutflowList_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_FailOutflow{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_InlineNodeSkipSelector", "m_FailOutflow", 0x68};  // CPulse_OutflowConnection
            }
            // Parent: C_BaseModelEntity
            // Field count: 1
            namespace C_LightEntity {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_CLightComponent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LightEntity", "m_CLightComponent", 0x1098};  // CLightComponent*
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponM249 {
            }
            // Parent: None
            // Field count: 25
            namespace C_LocalTempEntity {
                inline constexpr ::cs2_dumper::runtime::dumper_constant flags{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "flags", 0x1268};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant die{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "die", 0x126C};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFrameMax{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "m_flFrameMax", 0x1270};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant x{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "x", 0x1274};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant y{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "y", 0x1278};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant fadeSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "fadeSpeed", 0x127C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant bounceFactor{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "bounceFactor", 0x1280};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant hitSound{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "hitSound", 0x1284};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant priority{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "priority", 0x1288};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant tentOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "tentOffset", 0x128C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecTempEntAngVelocity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "m_vecTempEntAngVelocity", 0x1298};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant tempent_renderamt{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "tempent_renderamt", 0x12A4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecNormal{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "m_vecNormal", 0x12A8};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSpriteScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "m_flSpriteScale", 0x12B4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nFlickerFrame{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "m_nFlickerFrame", 0x12B8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFrameRate{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "m_flFrameRate", 0x12BC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFrame{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "m_flFrame", 0x12C0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pszImpactEffect{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "m_pszImpactEffect", 0x12C8};  // char*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pszParticleEffect{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "m_pszParticleEffect", 0x12D0};  // char*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bParticleCollision{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "m_bParticleCollision", 0x12D8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iLastCollisionFrame{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "m_iLastCollisionFrame", 0x12DC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vLastCollisionOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "m_vLastCollisionOrigin", 0x12E0};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecTempEntVelocity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "m_vecTempEntVelocity", 0x12EC};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecPrevAbsOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "m_vecPrevAbsOrigin", 0x12F8};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecTempEntAcceleration{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_LocalTempEntity", "m_vecTempEntAcceleration", 0x1304};  // Vector
            }
            // Parent: None
            // Field count: 2
            namespace C_WeaponTaser {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fFireTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_WeaponTaser", "m_fFireTime", 0x1F50};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLastAttackTick{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_WeaponTaser", "m_nLastAttackTick", 0x1F54};  // int32
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_PointEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_SingleplayRules {
            }
            // Parent: None
            // Field count: 0
            namespace CLogicalEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_PrecipitationBlocker {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_CounterTerroristTeamIntroCamera {
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace C_SoundOpvarSetPathCornerEntity {
            }
            // Parent: None
            // Field count: 4
            namespace CPlayer_WeaponServices {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hMyWeapons{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_WeaponServices", "m_hMyWeapons", 0x48};  // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hActiveWeapon{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_WeaponServices", "m_hActiveWeapon", 0x60};  // CHandle<C_BasePlayerWeapon>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hLastWeapon{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_WeaponServices", "m_hLastWeapon", 0x64};  // CHandle<C_BasePlayerWeapon>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iAmmo{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPlayer_WeaponServices", "m_iAmmo", 0x68};  // uint16[32]
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponNegev {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponFiveSeven {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponSawedoff {
            }
            // Parent: None
            // Field count: 0
            namespace C_TriggerVolume {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_LimitCount {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nLimitCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_LimitCount", "m_nLimitCount", 0x48};  // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_CallExternalMethod {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_MethodName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Step_CallExternalMethod", "m_MethodName", 0xD8};  // PulseSymbol_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBlackboardIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Step_CallExternalMethod", "m_nBlackboardIndex", 0xE8};  // PulseRuntimeBlackboardReferenceIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ExpectedArgs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Step_CallExternalMethod", "m_ExpectedArgs", 0xF0};  // CUtlLeanVector<CPulseRuntimeMethodArg>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nAsyncCallMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Step_CallExternalMethod", "m_nAsyncCallMode", 0x100};  // PulseMethodCallMode_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnFinished{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_Step_CallExternalMethod", "m_OnFinished", 0x108};  // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponMP9 {
            }
            // Parent: None
            // Field count: 0
            namespace C_DynamicPropAlias_prop_dynamic_override {
            }
            // Parent: None
            // Field count: 0
            namespace CEnvSoundscapeTriggerable {
            }
            // Parent: None
            // Field count: 5
            namespace C_PlayerPing {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hPlayer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerPing", "m_hPlayer", 0x630};  // CHandle<C_CSPlayerPawn>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hPingedEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerPing", "m_hPingedEntity", 0x634};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iType{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerPing", "m_iType", 0x638};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUrgent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerPing", "m_bUrgent", 0x63C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szPlaceName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerPing", "m_szPlaceName", 0x63D};  // char[18]
            }
            // Parent: None
            // Field count: 0
            namespace C_AK47 {
            }
            // Parent: C_BaseEntity
            // Field count: 10
            namespace C_CSGO_MapPreviewCameraPathNode {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szParentPathUniqueID{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPathNode", "m_szParentPathUniqueID", 0x600};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPathIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPathNode", "m_nPathIndex", 0x608};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vInTangentLocal{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPathNode", "m_vInTangentLocal", 0x60C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vOutTangentLocal{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPathNode", "m_vOutTangentLocal", 0x618};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFOV{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPathNode", "m_flFOV", 0x624};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCameraSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPathNode", "m_flCameraSpeed", 0x628};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flEaseIn{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPathNode", "m_flEaseIn", 0x62C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flEaseOut{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPathNode", "m_flEaseOut", 0x630};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vInTangentWorld{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPathNode", "m_vInTangentWorld", 0x634};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vOutTangentWorld{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSGO_MapPreviewCameraPathNode", "m_vOutTangentWorld", 0x640};  // Vector
            }
            // Parent: None
            // Field count: 10
            namespace C_CSPlayerResource {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHostageAlive{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerResource", "m_bHostageAlive", 0x600};  // bool[12]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_isHostageFollowingSomeone{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerResource", "m_isHostageFollowingSomeone", 0x60C};  // bool[12]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iHostageEntityIDs{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerResource", "m_iHostageEntityIDs", 0x618};  // CEntityIndex[12]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bombsiteCenterA{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerResource", "m_bombsiteCenterA", 0x648};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bombsiteCenterB{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerResource", "m_bombsiteCenterB", 0x654};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hostageRescueX{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerResource", "m_hostageRescueX", 0x660};  // int32[4]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hostageRescueY{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerResource", "m_hostageRescueY", 0x670};  // int32[4]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hostageRescueZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerResource", "m_hostageRescueZ", 0x680};  // int32[4]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEndMatchNextMapAllVoted{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerResource", "m_bEndMatchNextMapAllVoted", 0x690};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_foundGoalPositions{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CSPlayerResource", "m_foundGoalPositions", 0x691};  // bool
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace CSkyboxReference {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_worldGroupId{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSkyboxReference", "m_worldGroupId", 0x600};  // WorldGroupId_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hSkyCamera{::cs2_dumper::runtime::Category::Schema, "client.dll", "CSkyboxReference", "m_hSkyCamera", 0x604};  // CHandle<C_SkyCamera>
            }
            // Parent: None
            // Field count: 0
            namespace C_IncendiaryGrenade {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterClass {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iFilterClass{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFilterClass", "m_iFilterClass", 0x638};  // CUtlSymbolLarge
            }
            // Parent: C_PointCamera
            // Field count: 1
            namespace C_PointCameraVFOV {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flVerticalFOV{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCameraVFOV", "m_flVerticalFOV", 0x660};  // float32
            }
            // Parent: C_BaseEntity
            // Field count: 26
            namespace C_PointCamera {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_FOV{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_FOV", 0x600};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Resolution{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_Resolution", 0x604};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFogEnable{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_bFogEnable", 0x608};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_FogColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_FogColor", 0x60C};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_flFogStart", 0x610};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_flFogEnd", 0x614};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFogMaxDensity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_flFogMaxDensity", 0x618};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bActive{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_bActive", 0x61C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUseScreenAspectRatio{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_bUseScreenAspectRatio", 0x61D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAspectRatio{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_flAspectRatio", 0x620};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNoSky{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_bNoSky", 0x624};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fBrightness{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_fBrightness", 0x628};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flZFar{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_flZFar", 0x62C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flZNear{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_flZNear", 0x630};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCanHLTVUse{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_bCanHLTVUse", 0x634};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAlignWithParent{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_bAlignWithParent", 0x635};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDofEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_bDofEnabled", 0x636};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDofNearBlurry{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_flDofNearBlurry", 0x638};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDofNearCrisp{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_flDofNearCrisp", 0x63C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDofFarCrisp{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_flDofFarCrisp", 0x640};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDofFarBlurry{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_flDofFarBlurry", 0x644};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDofTiltToGround{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_flDofTiltToGround", 0x648};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_TargetFOV{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_TargetFOV", 0x64C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_DegreesPerSecond{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_DegreesPerSecond", 0x650};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsOn{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_bIsOn", 0x654};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pNext{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointCamera", "m_pNext", 0x658};  // C_PointCamera*
            }
            // Parent: CPathSimple
            // Field count: 4
            namespace CPathWithDynamicNodes {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecPathNodes{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPathWithDynamicNodes", "m_vecPathNodes", 0x710};  // C_NetworkUtlVectorBase<CHandle<CPathNode>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_xInitialPathWorldToLocal{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPathWithDynamicNodes", "m_xInitialPathWorldToLocal", 0x730};  // CTransform
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_eDesiredDirection{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPathWithDynamicNodes", "m_eDesiredDirection", 0x750};  // DirectionAlongSimplePath_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIgnoreParentRotation{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPathWithDynamicNodes", "m_bIgnoreParentRotation", 0x754};  // bool
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace CBaseFilter {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNegated{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseFilter", "m_bNegated", 0x600};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnPass{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseFilter", "m_OnPass", 0x608};  // CEntityIOOutput
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_OnFail{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBaseFilter", "m_OnFail", 0x620};  // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            namespace WeaponPurchaseTracker_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_weaponPurchases{::cs2_dumper::runtime::Category::Schema, "client.dll", "WeaponPurchaseTracker_t", "m_weaponPurchases", 0x8};  // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: C_PointEntity
            // Field count: 15
            namespace CMapInfo {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iBuyingStatus{::cs2_dumper::runtime::Category::Schema, "client.dll", "CMapInfo", "m_iBuyingStatus", 0x600};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBombRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "CMapInfo", "m_flBombRadius", 0x604};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iPetPopulation{::cs2_dumper::runtime::Category::Schema, "client.dll", "CMapInfo", "m_iPetPopulation", 0x608};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUseNormalSpawnsForDM{::cs2_dumper::runtime::Category::Schema, "client.dll", "CMapInfo", "m_bUseNormalSpawnsForDM", 0x60C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDisableAutoGeneratedDMSpawns{::cs2_dumper::runtime::Category::Schema, "client.dll", "CMapInfo", "m_bDisableAutoGeneratedDMSpawns", 0x60D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBotMaxVisionDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "CMapInfo", "m_flBotMaxVisionDistance", 0x610};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iHostageCount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CMapInfo", "m_iHostageCount", 0x614};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFadePlayerVisibilityFarZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "CMapInfo", "m_bFadePlayerVisibilityFarZ", 0x618};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRainTraceToSkyEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CMapInfo", "m_bRainTraceToSkyEnabled", 0x619};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bGPUCullSkybox{::cs2_dumper::runtime::Category::Schema, "client.dll", "CMapInfo", "m_bGPUCullSkybox", 0x61A};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flEnvRainStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "CMapInfo", "m_flEnvRainStrength", 0x61C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flEnvPuddleRippleStrength{::cs2_dumper::runtime::Category::Schema, "client.dll", "CMapInfo", "m_flEnvPuddleRippleStrength", 0x620};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flEnvPuddleRippleDirection{::cs2_dumper::runtime::Category::Schema, "client.dll", "CMapInfo", "m_flEnvPuddleRippleDirection", 0x624};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flEnvWetnessCoverage{::cs2_dumper::runtime::Category::Schema, "client.dll", "CMapInfo", "m_flEnvWetnessCoverage", 0x628};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flEnvWetnessDryingAmount{::cs2_dumper::runtime::Category::Schema, "client.dll", "CMapInfo", "m_flEnvWetnessDryingAmount", 0x62C};  // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_EndOfMatchCamera {
            }
            // Parent: CBaseAnimGraph
            // Field count: 12
            namespace C_BaseGrenade {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasWarnedAI{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseGrenade", "m_bHasWarnedAI", 0x1268};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsSmokeGrenade{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseGrenade", "m_bIsSmokeGrenade", 0x1269};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsLive{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseGrenade", "m_bIsLive", 0x126A};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_DmgRadius{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseGrenade", "m_DmgRadius", 0x126C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDetonateTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseGrenade", "m_flDetonateTime", 0x1270};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWarnAITime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseGrenade", "m_flWarnAITime", 0x1274};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDamage{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseGrenade", "m_flDamage", 0x1278};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszBounceSound{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseGrenade", "m_iszBounceSound", 0x1280};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ExplosionSound{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseGrenade", "m_ExplosionSound", 0x1288};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hThrower{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseGrenade", "m_hThrower", 0x1290};  // CHandle<C_CSPlayerPawn>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNextAttack{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseGrenade", "m_flNextAttack", 0x12A8};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hOriginalThrower{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseGrenade", "m_hOriginalThrower", 0x12AC};  // CHandle<C_CSPlayerPawn>
            }
            // Parent: None
            // Field count: 16
            namespace C_PlayerSprayDecal {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nUniqueID{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerSprayDecal", "m_nUniqueID", 0x1098};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unAccountID{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerSprayDecal", "m_unAccountID", 0x109C};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unTraceID{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerSprayDecal", "m_unTraceID", 0x10A0};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_rtGcTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerSprayDecal", "m_rtGcTime", 0x10A4};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecEndPos{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerSprayDecal", "m_vecEndPos", 0x10A8};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerSprayDecal", "m_vecStart", 0x10B4};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecLeft{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerSprayDecal", "m_vecLeft", 0x10C0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecNormal{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerSprayDecal", "m_vecNormal", 0x10CC};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPlayer{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerSprayDecal", "m_nPlayer", 0x10D8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerSprayDecal", "m_nEntity", 0x10DC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nHitbox{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerSprayDecal", "m_nHitbox", 0x10E0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCreationTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerSprayDecal", "m_flCreationTime", 0x10E4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTintID{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerSprayDecal", "m_nTintID", 0x10E8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nVersion{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerSprayDecal", "m_nVersion", 0x10EC};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ubSignature{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerSprayDecal", "m_ubSignature", 0x10ED};  // uint8[128]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SprayRenderHelper{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PlayerSprayDecal", "m_SprayRenderHelper", 0x1178};  // CPlayerSprayDecalRenderHelper
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CEntityIdentity {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nameStringTableIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEntityIdentity", "m_nameStringTableIndex", 0x14};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_name{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEntityIdentity", "m_name", 0x18};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_designerName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEntityIdentity", "m_designerName", 0x20};  // CUtlSymbolLarge
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flags{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEntityIdentity", "m_flags", 0x30};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_worldGroupId{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEntityIdentity", "m_worldGroupId", 0x38};  // WorldGroupId_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fDataObjectTypes{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEntityIdentity", "m_fDataObjectTypes", 0x3C};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PathIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEntityIdentity", "m_PathIndex", 0x40};  // ChangeAccessorFieldPathIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pAttributes{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEntityIdentity", "m_pAttributes", 0x48};  // CEntityAttributeTable*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pPrev{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEntityIdentity", "m_pPrev", 0x50};  // CEntityIdentity*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pNext{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEntityIdentity", "m_pNext", 0x58};  // CEntityIdentity*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pPrevByClass{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEntityIdentity", "m_pPrevByClass", 0x60};  // CEntityIdentity*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pNextByClass{::cs2_dumper::runtime::Category::Schema, "client.dll", "CEntityIdentity", "m_pNextByClass", 0x68};  // CEntityIdentity*
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_LimitCount__Criteria_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bLimitCountPasses{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_LimitCount__Criteria_t", "m_bLimitCountPasses", 0x0};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_CS2HudModelArms {
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerVData {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sModelName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerVData", "m_sModelName", 0x28};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sModelNameAg2Override{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerVData", "m_sModelNameAg2Override", 0x108};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flHeadDamageMultiplier{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerVData", "m_flHeadDamageMultiplier", 0x1E8};  // CSkillFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flChestDamageMultiplier{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerVData", "m_flChestDamageMultiplier", 0x1F8};  // CSkillFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStomachDamageMultiplier{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerVData", "m_flStomachDamageMultiplier", 0x208};  // CSkillFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flArmDamageMultiplier{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerVData", "m_flArmDamageMultiplier", 0x218};  // CSkillFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLegDamageMultiplier{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerVData", "m_flLegDamageMultiplier", 0x228};  // CSkillFloat
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flHoldBreathTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerVData", "m_flHoldBreathTime", 0x238};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDrowningDamageInterval{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerVData", "m_flDrowningDamageInterval", 0x23C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDrowningDamageInitial{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerVData", "m_nDrowningDamageInitial", 0x240};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDrowningDamageMax{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerVData", "m_nDrowningDamageMax", 0x244};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nWaterSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerVData", "m_nWaterSpeed", 0x248};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flUseRange{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerVData", "m_flUseRange", 0x24C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flUseAngleTolerance{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerVData", "m_flUseAngleTolerance", 0x250};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCrouchTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerVData", "m_flCrouchTime", 0x254};  // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_LightSpotEntity {
            }
            // Parent: None
            // Field count: 3
            namespace CCSGameModeRules_Deathmatch {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDMBonusStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSGameModeRules_Deathmatch", "m_flDMBonusStartTime", 0x30};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDMBonusTimeLength{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSGameModeRules_Deathmatch", "m_flDMBonusTimeLength", 0x34};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sDMBonusWeapon{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCSGameModeRules_Deathmatch", "m_sDMBonusWeapon", 0x38};  // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_CursorQueue {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCursorsAllowedToRunParallel{::cs2_dumper::runtime::Category::Schema, "client.dll", "CPulseCell_CursorQueue", "m_nCursorsAllowedToRunParallel", 0x128};  // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_Value_RandomFloat {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseExecCursor {
            }
            // Parent: C_BaseModelEntity
            // Field count: 24
            namespace C_Sprite {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hSpriteMaterial{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_hSpriteMaterial", 0x1098};  // CStrongHandle<InfoForResourceTypeIMaterial2>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hAttachedToEntity{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_hAttachedToEntity", 0x10A0};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nAttachment{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_nAttachment", 0x10A4};  // AttachmentHandle_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSpriteFramerate{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_flSpriteFramerate", 0x10A8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFrame{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_flFrame", 0x10AC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDieTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_flDieTime", 0x10B0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nBrightness{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_nBrightness", 0x10C0};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBrightnessDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_flBrightnessDuration", 0x10C4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSpriteScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_flSpriteScale", 0x10C8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flScaleDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_flScaleDuration", 0x10CC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bWorldSpaceScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_bWorldSpaceScale", 0x10D0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flGlowProxySize{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_flGlowProxySize", 0x10D4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flHDRColorScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_flHDRColorScale", 0x10D8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLastTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_flLastTime", 0x10DC};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMaxFrame{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_flMaxFrame", 0x10E0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_flStartScale", 0x10E4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDestScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_flDestScale", 0x10E8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flScaleTimeStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_flScaleTimeStart", 0x10EC};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nStartBrightness{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_nStartBrightness", 0x10F0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDestBrightness{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_nDestBrightness", 0x10F4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flBrightnessTimeStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_flBrightnessTimeStart", 0x10F8};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSpriteWidth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_nSpriteWidth", 0x1108};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSpriteHeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_nSpriteHeight", 0x110C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_Sprite", "m_flSpeed", 0x1110};  // float32
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace C_CsmFovOverride {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_cameraName{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CsmFovOverride", "m_cameraName", 0x600};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCsmFovOverrideValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CsmFovOverride", "m_flCsmFovOverrideValue", 0x608};  // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponGlock {
            }
            // Parent: None
            // Field count: 1
            namespace C_PhysicsProp {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAwake{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PhysicsProp", "m_bAwake", 0x13E0};  // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterTeam {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iFilterTeam{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFilterTeam", "m_iFilterTeam", 0x638};  // int32
            }
            // Parent: None
            // Field count: 33
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBasePlayerWeaponVData {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szWorldModel{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_szWorldModel", 0x28};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szWorldModelAg2Override{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_szWorldModelAg2Override", 0x108};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sToolsOnlyOwnerModelName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_sToolsOnlyOwnerModelName", 0x1E8};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBuiltRightHanded{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_bBuiltRightHanded", 0x2C8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAllowFlipping{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_bAllowFlipping", 0x2C9};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_sMuzzleAttachment{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_sMuzzleAttachment", 0x2D0};  // CAttachmentNameSymbolWithStorage
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szMuzzleFlashParticle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_szMuzzleFlashParticle", 0x2F0};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szMuzzleFlashParticleConfig{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_szMuzzleFlashParticleConfig", 0x3D0};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_szBarrelSmokeParticle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_szBarrelSmokeParticle", 0x3D8};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMuzzleSmokeShotThreshold{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_nMuzzleSmokeShotThreshold", 0x4B8};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMuzzleSmokeTimeout{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_flMuzzleSmokeTimeout", 0x4BC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMuzzleSmokeDecrementRate{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_flMuzzleSmokeDecrementRate", 0x4C0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bGenerateMuzzleLight{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_bGenerateMuzzleLight", 0x4C4};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bShouldAnimateInWorld{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_bShouldAnimateInWorld", 0x4C5};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bLinkedCooldowns{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_bLinkedCooldowns", 0x4C6};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iFlags{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_iFlags", 0x4C7};  // ItemFlagTypes_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iWeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_iWeight", 0x4C8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAutoSwitchTo{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_bAutoSwitchTo", 0x4CC};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAutoSwitchFrom{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_bAutoSwitchFrom", 0x4CD};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPrimaryAmmoType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_nPrimaryAmmoType", 0x4CE};  // AmmoIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSecondaryAmmoType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_nSecondaryAmmoType", 0x4CF};  // AmmoIndex_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMaxClip1{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_iMaxClip1", 0x4D0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMaxClip2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_iMaxClip2", 0x4D4};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iDefaultClip1{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_iDefaultClip1", 0x4D8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iDefaultClip2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_iDefaultClip2", 0x4DC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bReserveAmmoAsClips{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_bReserveAmmoAsClips", 0x4E0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bTreatAsSingleClip{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_bTreatAsSingleClip", 0x4E1};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bKeepLoadedAmmo{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_bKeepLoadedAmmo", 0x4E2};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iRumbleEffect{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_iRumbleEffect", 0x4E4};  // RumbleEffect_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDropSpeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_flDropSpeed", 0x4E8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iSlot{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_iSlot", 0x4EC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iPosition{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_iPosition", 0x4F0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_aShootSounds{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerWeaponVData", "m_aShootSounds", 0x4F8};  // CUtlOrderedMap<WeaponSound_t,CSoundEventName>
            }
            // Parent: None
            // Field count: 0
            namespace C_SmokeGrenade {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_RushIntroCharacterPosition {
            }
            // Parent: None
            // Field count: 0
            namespace CInfoParticleTarget {
            }
            // Parent: None
            // Field count: 0
            namespace CCSPlayer_DamageReactServices {
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 31
            namespace C_PointClientUIWorldPanel {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bForceRecreateNextUpdate{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bForceRecreateNextUpdate", 0x10D0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bMoveViewToPlayerNextThink{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bMoveViewToPlayerNextThink", 0x10D1};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCheckCSSClasses{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bCheckCSSClasses", 0x10D2};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_anchorDeltaTransform{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_anchorDeltaTransform", 0x10E0};  // CTransform
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_pOffScreenIndicator{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_pOffScreenIndicator", 0x1270};  // CPointOffScreenIndicatorUi*
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIgnoreInput{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bIgnoreInput", 0x1298};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bLit{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bLit", 0x1299};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bFollowPlayerAcrossTeleport{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bFollowPlayerAcrossTeleport", 0x129A};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWidth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_flWidth", 0x129C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flHeight{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_flHeight", 0x12A0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDPI{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_flDPI", 0x12A4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flWindowUIScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_flWindowUIScale", 0x12A8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInteractDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_flInteractDistance", 0x12AC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flDepthOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_flDepthOffset", 0x12B0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unOwnerContext{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_unOwnerContext", 0x12B4};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unHorizontalAlign{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_unHorizontalAlign", 0x12B8};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unVerticalAlign{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_unVerticalAlign", 0x12BC};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_unOrientation{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_unOrientation", 0x12C0};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAllowInteractionFromAllSceneWorlds{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bAllowInteractionFromAllSceneWorlds", 0x12C4};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecCSSClasses{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_vecCSSClasses", 0x12C8};  // C_NetworkUtlVectorBase<CUtlSymbolLarge>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bOpaque{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bOpaque", 0x12E0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNoDepth{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bNoDepth", 0x12E1};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bVisibleWhenParentNoDraw{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bVisibleWhenParentNoDraw", 0x12E2};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bRenderBackface{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bRenderBackface", 0x12E3};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bUseOffScreenIndicator{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bUseOffScreenIndicator", 0x12E4};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bExcludeFromSaveGames{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bExcludeFromSaveGames", 0x12E5};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bGrabbable{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bGrabbable", 0x12E6};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bOnlyRenderToTexture{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bOnlyRenderToTexture", 0x12E7};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bDisableMipGen{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bDisableMipGen", 0x12E8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nExplicitImageLayout{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_nExplicitImageLayout", 0x12EC};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIgnoreParentOrientation{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_PointClientUIWorldPanel", "m_bIgnoreParentOrientation", 0x12F0};  // bool
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace C_EntityFlame {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hEntAttached{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EntityFlame", "m_hEntAttached", 0x600};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hOldAttached{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EntityFlame", "m_hOldAttached", 0x628};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCheapEffect{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_EntityFlame", "m_bCheapEffect", 0x62C};  // bool
            }
            // Parent: None
            // Field count: 0
            namespace CBaseAnimGraphAlias_baseanimating {
            }
            // Parent: C_BaseEntity
            // Field count: 17
            namespace CBasePlayerController {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_CommandContext{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_CommandContext", 0x608};  // C_CommandContext
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nInButtonsWhichAreToggles{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_nInButtonsWhichAreToggles", 0x6B0};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTickBase{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_nTickBase", 0x6B8};  // uint32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hPawn{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_hPawn", 0x6BC};  // CHandle<C_BasePlayerPawn>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bKnownTeamMismatch{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_bKnownTeamMismatch", 0x6C0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hPredictedPawn{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_hPredictedPawn", 0x6C4};  // CHandle<C_BasePlayerPawn>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSplitScreenSlot{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_nSplitScreenSlot", 0x6CC};  // CSplitScreenSlot
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hSplitOwner{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_hSplitOwner", 0x6D0};  // CHandle<CBasePlayerController>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hSplitScreenPlayers{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_hSplitScreenPlayers", 0x6D8};  // CUtlVector<CHandle<CBasePlayerController>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsHLTV{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_bIsHLTV", 0x6F0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iConnected{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_iConnected", 0x6F4};  // PlayerConnectedState
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iMostConnected{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_iMostConnected", 0x6F8};  // PlayerConnectedState
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iszPlayerName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_iszPlayerName", 0x6FC};  // char[128]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_steamID{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_steamID", 0x788};  // uint64
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsLocalPlayerController{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_bIsLocalPlayerController", 0x790};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bNoClipEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_bNoClipEnabled", 0x791};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_iDesiredFOV{::cs2_dumper::runtime::Category::Schema, "client.dll", "CBasePlayerController", "m_iDesiredFOV", 0x794};  // uint32
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_EndOfMatchLineupEndpoint {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyElementNameFn
            namespace GeneratedTextureHandle_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strBitmapName{::cs2_dumper::runtime::Category::Schema, "client.dll", "GeneratedTextureHandle_t", "m_strBitmapName", 0x0};  // CUtlString
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialInputContainer_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputContainer_t", "m_bEnabled", 0x0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCompositeMaterialInputContainerSourceType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputContainer_t", "m_nCompositeMaterialInputContainerSourceType", 0x4};  // CompositeMaterialInputContainerSourceType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strSpecificContainerMaterial{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputContainer_t", "m_strSpecificContainerMaterial", 0x8};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strAttrName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputContainer_t", "m_strAttrName", 0xE8};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strAlias{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputContainer_t", "m_strAlias", 0xF0};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecLooseVariables{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputContainer_t", "m_vecLooseVariables", 0xF8};  // CUtlVector<CompositeMaterialInputLooseVariable_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strAttrNameForVar{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputContainer_t", "m_strAttrNameForVar", 0x110};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bExposeExternally{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputContainer_t", "m_bExposeExternally", 0x118};  // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialAssemblyProcedure_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecCompMatIncludes{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialAssemblyProcedure_t", "m_vecCompMatIncludes", 0x0};  // CUtlVector<CResourceNameTyped<CWeakHandle<InfoForResourceTypeCCompositeMaterialKit>>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecMatchFilters{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialAssemblyProcedure_t", "m_vecMatchFilters", 0x18};  // CUtlVector<CompositeMaterialMatchFilter_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecCompositeInputContainers{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialAssemblyProcedure_t", "m_vecCompositeInputContainers", 0x30};  // CUtlVector<CompositeMaterialInputContainer_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecPropertyMutators{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialAssemblyProcedure_t", "m_vecPropertyMutators", 0x48};  // CUtlVector<CompMatPropertyMutator_t>
            }
            // Parent: None
            // Field count: 37
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialInputLooseVariable_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_strName", 0x0};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bExposeExternally{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_bExposeExternally", 0x8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strExposedFriendlyName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_strExposedFriendlyName", 0x10};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strExposedFriendlyGroupName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_strExposedFriendlyGroupName", 0x18};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bExposedVariableIsFixedRange{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_bExposedVariableIsFixedRange", 0x20};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strExposedVisibleWhenTrue{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_strExposedVisibleWhenTrue", 0x28};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strExposedHiddenWhenTrue{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_strExposedHiddenWhenTrue", 0x30};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strExposedValueList{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_strExposedValueList", 0x38};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nVariableType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_nVariableType", 0x40};  // CompositeMaterialInputLooseVariableType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bValueBoolean{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_bValueBoolean", 0x44};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nValueIntX{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_nValueIntX", 0x48};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nValueIntY{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_nValueIntY", 0x4C};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nValueIntZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_nValueIntZ", 0x50};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nValueIntW{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_nValueIntW", 0x54};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bHasFloatBounds{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_bHasFloatBounds", 0x58};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flValueFloatX{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_flValueFloatX", 0x5C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flValueFloatX_Min{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_flValueFloatX_Min", 0x60};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flValueFloatX_Max{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_flValueFloatX_Max", 0x64};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flValueFloatY{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_flValueFloatY", 0x68};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flValueFloatY_Min{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_flValueFloatY_Min", 0x6C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flValueFloatY_Max{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_flValueFloatY_Max", 0x70};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flValueFloatZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_flValueFloatZ", 0x74};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flValueFloatZ_Min{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_flValueFloatZ_Min", 0x78};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flValueFloatZ_Max{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_flValueFloatZ_Max", 0x7C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flValueFloatW{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_flValueFloatW", 0x80};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flValueFloatW_Min{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_flValueFloatW_Min", 0x84};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flValueFloatW_Max{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_flValueFloatW_Max", 0x88};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_cValueColor4{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_cValueColor4", 0x8C};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nValueSystemVar{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_nValueSystemVar", 0x90};  // CompositeMaterialVarSystemVar_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strResourceMaterial{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_strResourceMaterial", 0x98};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strTextureContentAssetPath{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_strTextureContentAssetPath", 0x178};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strTextureRuntimeResourcePath{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_strTextureRuntimeResourcePath", 0x180};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCTextureBase>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strTextureCompilationVtexTemplate{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_strTextureCompilationVtexTemplate", 0x260};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTextureType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_nTextureType", 0x268};  // CompositeMaterialInputTextureType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strString{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_strString", 0x270};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strPanoramaPanelPath{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_strPanoramaPanelPath", 0x278};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nPanoramaRenderRes{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialInputLooseVariable_t", "m_nPanoramaRenderRes", 0x280};  // int32
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace screenshake_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant endtime{::cs2_dumper::runtime::Category::Schema, "client.dll", "screenshake_t", "endtime", 0x0};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant duration{::cs2_dumper::runtime::Category::Schema, "client.dll", "screenshake_t", "duration", 0x4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant amplitude{::cs2_dumper::runtime::Category::Schema, "client.dll", "screenshake_t", "amplitude", 0x8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant frequency{::cs2_dumper::runtime::Category::Schema, "client.dll", "screenshake_t", "frequency", 0xC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant nextShake{::cs2_dumper::runtime::Category::Schema, "client.dll", "screenshake_t", "nextShake", 0x10};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant offset{::cs2_dumper::runtime::Category::Schema, "client.dll", "screenshake_t", "offset", 0x14};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant angle{::cs2_dumper::runtime::Category::Schema, "client.dll", "screenshake_t", "angle", 0x20};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant direction{::cs2_dumper::runtime::Category::Schema, "client.dll", "screenshake_t", "direction", 0x28};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant nShakeType{::cs2_dumper::runtime::Category::Schema, "client.dll", "screenshake_t", "nShakeType", 0x34};  // uint8
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCS2UIPawnGraphController {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nAnimationSeed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2UIPawnGraphController", "m_nAnimationSeed", 0xC0};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_characterMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2UIPawnGraphController", "m_characterMode", 0xD8};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCharacterModeReset{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2UIPawnGraphController", "m_bCharacterModeReset", 0xF0};  // CAnimGraph2ParamOptionalRef<bool>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTeamPreviewVariant{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2UIPawnGraphController", "m_nTeamPreviewVariant", 0x108};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTeamPreviewRandom{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2UIPawnGraphController", "m_nTeamPreviewRandom", 0x120};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nTeamPreviewPosition{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2UIPawnGraphController", "m_nTeamPreviewPosition", 0x138};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_endOfMatchCelebration{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2UIPawnGraphController", "m_endOfMatchCelebration", 0x150};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_action{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2UIPawnGraphController", "m_action", 0x168};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bannerAnimation{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2UIPawnGraphController", "m_bannerAnimation", 0x180};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_weaponCategory{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2UIPawnGraphController", "m_weaponCategory", 0x198};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_weaponType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2UIPawnGraphController", "m_weaponType", 0x1B0};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_weaponState{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2UIPawnGraphController", "m_weaponState", 0x1C8};  // CAnimGraph2ParamOptionalRef<CGlobalSymbol>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_inspectTurnAngle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2UIPawnGraphController", "m_inspectTurnAngle", 0x1E0};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nChickSnapshotVariant{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2UIPawnGraphController", "m_nChickSnapshotVariant", 0x1F8};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nChickLifeStage{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2UIPawnGraphController", "m_nChickLifeStage", 0x210};  // CAnimGraph2ParamOptionalRef<float32>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCT{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCS2UIPawnGraphController", "m_bCT", 0x228};  // CAnimGraph2ParamOptionalRef<bool>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_light_barn_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant color{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_light_barn_t", "color", 0x0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant angle{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_light_barn_t", "angle", 0xC};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant brightness{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_light_barn_t", "brightness", 0x18};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant orbit_distance{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_light_barn_t", "orbit_distance", 0x1C};  // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_map_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant map_name{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_map_t", "map_name", 0x0};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant map_rotation{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_map_t", "map_rotation", 0x8};  // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_light_fill_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant color{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_light_fill_t", "color", 0x0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant angle{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_light_fill_t", "angle", 0xC};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant brightness{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_light_fill_t", "brightness", 0x18};  // float32
            }
            // Parent: None
            // Field count: 5
            namespace CInterpolatedValue {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInterpolatedValue", "m_flStartTime", 0x0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flEndTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInterpolatedValue", "m_flEndTime", 0x4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flStartValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInterpolatedValue", "m_flStartValue", 0x8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flEndValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInterpolatedValue", "m_flEndValue", 0xC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nInterpType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInterpolatedValue", "m_nInterpType", 0x10};  // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_item_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant position{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_item_t", "position", 0x0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant angle{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_item_t", "angle", 0xC};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant pose_sequence{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_item_t", "pose_sequence", 0x18};  // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TimedEvent {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_TimeBetweenEvents{::cs2_dumper::runtime::Category::Schema, "client.dll", "TimedEvent", "m_TimeBetweenEvents", 0x0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_fNextEvent{::cs2_dumper::runtime::Category::Schema, "client.dll", "TimedEvent", "m_fNextEvent", 0x4};  // float32
            }
            // Parent: None
            // Field count: 13
            namespace CFlashlightEffect {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsOn{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFlashlightEffect", "m_bIsOn", 0x10};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bMuzzleFlashEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFlashlightEffect", "m_bMuzzleFlashEnabled", 0x20};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flMuzzleFlashBrightness{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFlashlightEffect", "m_flMuzzleFlashBrightness", 0x24};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_quatMuzzleFlashOrientation{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFlashlightEffect", "m_quatMuzzleFlashOrientation", 0x30};  // Quaternion
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecMuzzleFlashOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFlashlightEffect", "m_vecMuzzleFlashOrigin", 0x40};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFov{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFlashlightEffect", "m_flFov", 0x4C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFarZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFlashlightEffect", "m_flFarZ", 0x50};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLinearAtten{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFlashlightEffect", "m_flLinearAtten", 0x54};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCastsShadows{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFlashlightEffect", "m_bCastsShadows", 0x58};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCurrentPullBackDist{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFlashlightEffect", "m_flCurrentPullBackDist", 0x5C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_FlashlightTexture{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFlashlightEffect", "m_FlashlightTexture", 0x60};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_MuzzleFlashTexture{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFlashlightEffect", "m_MuzzleFlashTexture", 0x68};  // CStrongHandle<InfoForResourceTypeCTextureBase>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_textureName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CFlashlightEffect", "m_textureName", 0x70};  // char[64]
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_camera_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant angle{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_camera_t", "angle", 0x0};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant fov_h{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_camera_t", "fov_h", 0xC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant fov_v{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_camera_t", "fov_v", 0x10};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant znear{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_camera_t", "znear", 0x14};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant zfar{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_camera_t", "zfar", 0x18};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant target{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_camera_t", "target", 0x1C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant target_nudge{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_camera_t", "target_nudge", 0x28};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant orbit_distance{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_camera_t", "orbit_distance", 0x34};  // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOutlinerDetailExpr
            // MVDataOverlayType
            // MVDataPreviewWidget
            // MVDataOutlinerLeafNameFn
            // MVDataOutlinerLeafColorFn
            // MVDataOutlinerLeafDetailFn
            // MVDataVirtualNodeFactoryFn
            // MVDataPreLoadFixupFn
            // MVDataPostSaveFixupFn
            namespace CInventoryImageData {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nNodeType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInventoryImageData", "m_nNodeType", 0x0};  // InventoryNodeType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant name{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInventoryImageData", "name", 0x8};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant inventory_image_data{::cs2_dumper::runtime::Category::Schema, "client.dll", "CInventoryImageData", "inventory_image_data", 0x10};  // inv_image_data_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_clearcolor_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant color{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_clearcolor_t", "color", 0x0};  // Vector
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace C_CommandContext {
                inline constexpr ::cs2_dumper::runtime::dumper_constant needsprocessing{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CommandContext", "needsprocessing", 0x0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant command_number{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_CommandContext", "command_number", 0xA0};  // int32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CompositeMaterialEditorPoint_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ModelName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialEditorPoint_t", "m_ModelName", 0x0};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSequenceIndex{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialEditorPoint_t", "m_nSequenceIndex", 0xE0};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCycle{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialEditorPoint_t", "m_flCycle", 0xE4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_KVModelStateChoices{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialEditorPoint_t", "m_KVModelStateChoices", 0xE8};  // KeyValues3
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnableChildModel{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialEditorPoint_t", "m_bEnableChildModel", 0xF8};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ChildModelName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialEditorPoint_t", "m_ChildModelName", 0x100};  // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecCompositeMaterialAssemblyProcedures{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialEditorPoint_t", "m_vecCompositeMaterialAssemblyProcedures", 0x1E0};  // CUtlVector<CompositeMaterialAssemblyProcedure_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecCompositeMaterials{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialEditorPoint_t", "m_vecCompositeMaterials", 0x1F8};  // CUtlVector<CompositeMaterial_t>
            }
            // Parent: None
            // Field count: 0
            namespace CPlayerSprayDecalRenderHelper {
            }
            // Parent: None
            // Field count: 13
            namespace C_IronSightController {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIronSightAvailable{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_IronSightController", "m_bIronSightAvailable", 0x10};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flIronSightAmount{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_IronSightController", "m_flIronSightAmount", 0x14};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flIronSightAmountGained{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_IronSightController", "m_flIronSightAmountGained", 0x18};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flIronSightAmountBiased{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_IronSightController", "m_flIronSightAmountBiased", 0x1C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flIronSightAmount_Interpolated{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_IronSightController", "m_flIronSightAmount_Interpolated", 0x20};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flIronSightAmountGained_Interpolated{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_IronSightController", "m_flIronSightAmountGained_Interpolated", 0x24};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flIronSightAmountBiased_Interpolated{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_IronSightController", "m_flIronSightAmountBiased_Interpolated", 0x28};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flInterpolationLastUpdated{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_IronSightController", "m_flInterpolationLastUpdated", 0x2C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_angDeltaAverage{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_IronSightController", "m_angDeltaAverage", 0x30};  // QAngle[8]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_angViewLast{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_IronSightController", "m_angViewLast", 0x90};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecDotCoords{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_IronSightController", "m_vecDotCoords", 0x9C};  // Vector2D
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFiringInaccuracyExtraWidthMultiplier{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_IronSightController", "m_flFiringInaccuracyExtraWidthMultiplier", 0xA4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSpeedRatio{::cs2_dumper::runtime::Category::Schema, "client.dll", "C_IronSightController", "m_flSpeedRatio", 0xA8};  // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompMatMutatorCondition_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMutatorCondition{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatMutatorCondition_t", "m_nMutatorCondition", 0x0};  // CompMatPropertyMutatorConditionType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strMutatorConditionContainerName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatMutatorCondition_t", "m_strMutatorConditionContainerName", 0x8};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strMutatorConditionContainerVarName{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatMutatorCondition_t", "m_strMutatorConditionContainerVarName", 0x10};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strMutatorConditionContainerVarValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatMutatorCondition_t", "m_strMutatorConditionContainerVarValue", 0x18};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPassWhenTrue{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatMutatorCondition_t", "m_bPassWhenTrue", 0x20};  // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_data_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant map{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_data_t", "map", 0x0};  // inv_image_map_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant item{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_data_t", "item", 0x10};  // inv_image_item_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant camera{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_data_t", "camera", 0x30};  // inv_image_camera_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant lightsun{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_data_t", "lightsun", 0x68};  // inv_image_light_sun_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant lightfill{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_data_t", "lightfill", 0x84};  // inv_image_light_fill_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant light0{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_data_t", "light0", 0xA0};  // inv_image_light_barn_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant light1{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_data_t", "light1", 0xC0};  // inv_image_light_barn_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant clearcolor{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_data_t", "clearcolor", 0xE0};  // inv_image_clearcolor_t
            }
            // Parent: None
            // Field count: 29
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompMatPropertyMutator_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_bEnabled", 0x0};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nMutatorCommandType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_nMutatorCommandType", 0x4};  // CompMatPropertyMutatorType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strInitWith_Container{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_strInitWith_Container", 0x8};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strCopyProperty_InputContainerSrc{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_strCopyProperty_InputContainerSrc", 0x10};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strCopyProperty_InputContainerProperty{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_strCopyProperty_InputContainerProperty", 0x18};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strCopyProperty_TargetProperty{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_strCopyProperty_TargetProperty", 0x20};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strRandomRollInputVars_SeedInputVar{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_strRandomRollInputVars_SeedInputVar", 0x28};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecRandomRollInputVars_InputVarsToRoll{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_vecRandomRollInputVars_InputVarsToRoll", 0x30};  // CUtlVector<CUtlString>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strCopyMatchingKeys_InputContainerSrc{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_strCopyMatchingKeys_InputContainerSrc", 0x48};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strCopyKeysWithSuffix_InputContainerSrc{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_strCopyKeysWithSuffix_InputContainerSrc", 0x50};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strCopyKeysWithSuffix_FindSuffix{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_strCopyKeysWithSuffix_FindSuffix", 0x58};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strCopyKeysWithSuffix_ReplaceSuffix{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_strCopyKeysWithSuffix_ReplaceSuffix", 0x60};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nSetValue_Value{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_nSetValue_Value", 0x68};  // CompositeMaterialInputLooseVariable_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strGenerateTexture_TargetParam{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_strGenerateTexture_TargetParam", 0x2F0};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strGenerateTexture_InitialContainer{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_strGenerateTexture_InitialContainer", 0x2F8};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nResolution{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_nResolution", 0x300};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bIsScratchTarget{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_bIsScratchTarget", 0x304};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strCompressionFormat{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_strCompressionFormat", 0x308};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSplatDebugInfo{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_bSplatDebugInfo", 0x310};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bCaptureInRenderDoc{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_bCaptureInRenderDoc", 0x311};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecTexGenInstructions{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_vecTexGenInstructions", 0x318};  // CUtlVector<CompMatPropertyMutator_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecConditionalMutators{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_vecConditionalMutators", 0x330};  // CUtlVector<CompMatPropertyMutator_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strPopInputQueue_Container{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_strPopInputQueue_Container", 0x348};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strDrawText_InputContainerSrc{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_strDrawText_InputContainerSrc", 0x350};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strDrawText_InputContainerProperty{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_strDrawText_InputContainerProperty", 0x358};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecDrawText_Position{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_vecDrawText_Position", 0x360};  // Vector2D
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_colDrawText_Color{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_colDrawText_Color", 0x368};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strDrawText_Font{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_strDrawText_Font", 0x370};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecConditions{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompMatPropertyMutator_t", "m_vecConditions", 0x378};  // CUtlVector<CompMatMutatorCondition_t>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCompositeMaterialEditorDoc {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nVersion{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCompositeMaterialEditorDoc", "m_nVersion", 0x8};  // int32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Points{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCompositeMaterialEditorDoc", "m_Points", 0x10};  // CUtlVector<CompositeMaterialEditorPoint_t>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_KVthumbnail{::cs2_dumper::runtime::Category::Schema, "client.dll", "CCompositeMaterialEditorDoc", "m_KVthumbnail", 0x28};  // KeyValues3
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CClientAlphaProperty {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDistFadeStart{::cs2_dumper::runtime::Category::Schema, "client.dll", "CClientAlphaProperty", "m_nDistFadeStart", 0x10};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDistFadeEnd{::cs2_dumper::runtime::Category::Schema, "client.dll", "CClientAlphaProperty", "m_nDistFadeEnd", 0x12};  // uint16
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nDesyncOffset{::cs2_dumper::runtime::Category::Schema, "client.dll", "CClientAlphaProperty", "m_nDesyncOffset", 0x0};  // bitfield:14
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bAlphaOverride{::cs2_dumper::runtime::Category::Schema, "client.dll", "CClientAlphaProperty", "m_bAlphaOverride", 0x0};  // bitfield:1
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bShadowAlphaOverride{::cs2_dumper::runtime::Category::Schema, "client.dll", "CClientAlphaProperty", "m_bShadowAlphaOverride", 0x0};  // bitfield:1
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRenderMode{::cs2_dumper::runtime::Category::Schema, "client.dll", "CClientAlphaProperty", "m_nRenderMode", 0x0};  // bitfield:3
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nRenderFX{::cs2_dumper::runtime::Category::Schema, "client.dll", "CClientAlphaProperty", "m_nRenderFX", 0x0};  // bitfield:5
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nAlpha{::cs2_dumper::runtime::Category::Schema, "client.dll", "CClientAlphaProperty", "m_nAlpha", 0x17};  // uint8
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFadeScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "CClientAlphaProperty", "m_flFadeScale", 0x18};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRenderFxStartTime{::cs2_dumper::runtime::Category::Schema, "client.dll", "CClientAlphaProperty", "m_flRenderFxStartTime", 0x1C};  // GameTime_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flRenderFxDuration{::cs2_dumper::runtime::Category::Schema, "client.dll", "CClientAlphaProperty", "m_flRenderFxDuration", 0x20};  // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace screenfade_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant Speed{::cs2_dumper::runtime::Category::Schema, "client.dll", "screenfade_t", "Speed", 0x0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant End{::cs2_dumper::runtime::Category::Schema, "client.dll", "screenfade_t", "End", 0x4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant Reset{::cs2_dumper::runtime::Category::Schema, "client.dll", "screenfade_t", "Reset", 0x8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_Color{::cs2_dumper::runtime::Category::Schema, "client.dll", "screenfade_t", "m_Color", 0xC};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant Flags{::cs2_dumper::runtime::Category::Schema, "client.dll", "screenfade_t", "Flags", 0x10};  // int32
            }
            // Parent: None
            // Field count: 43
            namespace CGlobalLightBase {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bSpotLight{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_bSpotLight", 0x10};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SpotLightOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_SpotLightOrigin", 0x14};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SpotLightAngles{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_SpotLightAngles", 0x20};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ShadowDirection{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_ShadowDirection", 0x2C};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_AmbientDirection{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_AmbientDirection", 0x38};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SpecularDirection{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_SpecularDirection", 0x44};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_InspectorSpecularDirection{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_InspectorSpecularDirection", 0x50};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSpecularPower{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flSpecularPower", 0x5C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSpecularIndependence{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flSpecularIndependence", 0x60};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_SpecularColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_SpecularColor", 0x64};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bStartDisabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_bStartDisabled", 0x68};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnabled{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_bEnabled", 0x69};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_LightColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_LightColor", 0x6C};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_AmbientColor1{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_AmbientColor1", 0x70};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_AmbientColor2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_AmbientColor2", 0x74};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_AmbientColor3{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_AmbientColor3", 0x78};  // Color
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flSunDistance{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flSunDistance", 0x7C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFOV{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flFOV", 0x80};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flNearZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flNearZ", 0x84};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFarZ{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flFarZ", 0x88};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnableShadows{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_bEnableShadows", 0x8C};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bOldEnableShadows{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_bOldEnableShadows", 0x8D};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bBackgroundClearNotRequired{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_bBackgroundClearNotRequired", 0x8E};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCloudScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flCloudScale", 0x90};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCloud1Speed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flCloud1Speed", 0x94};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCloud1Direction{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flCloud1Direction", 0x98};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCloud2Speed{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flCloud2Speed", 0x9C};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flCloud2Direction{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flCloud2Direction", 0xA0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAmbientScale1{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flAmbientScale1", 0xB0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flAmbientScale2{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flAmbientScale2", 0xB4};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flGroundScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flGroundScale", 0xB8};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flLightScale{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flLightScale", 0xBC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flFoWDarkness{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flFoWDarkness", 0xC0};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bEnableSeparateSkyboxFog{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_bEnableSeparateSkyboxFog", 0xC4};  // bool
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vFowColor{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_vFowColor", 0xC8};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ViewOrigin{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_ViewOrigin", 0xD4};  // VectorWS
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_ViewAngles{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_ViewAngles", 0xE0};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_flViewFoV{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_flViewFoV", 0xEC};  // float32
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_WorldPoints{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_WorldPoints", 0xF0};  // VectorWS[8]
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vFogOffsetLayer0{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_vFogOffsetLayer0", 0x4A8};  // Vector2D
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vFogOffsetLayer1{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_vFogOffsetLayer1", 0x4B0};  // Vector2D
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hEnvWind{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_hEnvWind", 0x4B8};  // CHandle<C_BaseEntity>
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_hEnvSky{::cs2_dumper::runtime::Category::Schema, "client.dll", "CGlobalLightBase", "m_hEnvSky", 0x4BC};  // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace IClientAlphaProperty {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_light_sun_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant color{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_light_sun_t", "color", 0x0};  // Vector
                inline constexpr ::cs2_dumper::runtime::dumper_constant angle{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_light_sun_t", "angle", 0xC};  // QAngle
                inline constexpr ::cs2_dumper::runtime::dumper_constant brightness{::cs2_dumper::runtime::Category::Schema, "client.dll", "inv_image_light_sun_t", "brightness", 0x18};  // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialMatchFilter_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_nCompositeMaterialMatchFilterType{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialMatchFilter_t", "m_nCompositeMaterialMatchFilterType", 0x0};  // CompositeMaterialMatchFilterType_t
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strMatchFilter{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialMatchFilter_t", "m_strMatchFilter", 0x8};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_strMatchValue{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialMatchFilter_t", "m_strMatchValue", 0x10};  // CUtlString
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_bPassWhenTrue{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterialMatchFilter_t", "m_bPassWhenTrue", 0x18};  // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MPropertyElementNameFn
            namespace CompositeMaterial_t {
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_TargetKVs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterial_t", "m_TargetKVs", 0x8};  // KeyValues3
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_PreGenerationKVs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterial_t", "m_PreGenerationKVs", 0x18};  // KeyValues3
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_FinalKVs{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterial_t", "m_FinalKVs", 0x58};  // KeyValues3
                inline constexpr ::cs2_dumper::runtime::dumper_constant m_vecGeneratedTextures{::cs2_dumper::runtime::Category::Schema, "client.dll", "CompositeMaterial_t", "m_vecGeneratedTextures", 0x80};  // CUtlVector<GeneratedTextureHandle_t>
            }
        }
    }
}
