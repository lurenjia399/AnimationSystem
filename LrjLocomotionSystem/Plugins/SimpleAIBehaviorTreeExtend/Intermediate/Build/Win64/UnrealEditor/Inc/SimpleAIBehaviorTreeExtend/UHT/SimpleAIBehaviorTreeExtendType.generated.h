// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleAIBehaviorTreeExtendType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEAIBEHAVIORTREEEXTEND_SimpleAIBehaviorTreeExtendType_generated_h
#error "SimpleAIBehaviorTreeExtendType.generated.h already included, missing '#pragma once' in SimpleAIBehaviorTreeExtendType.h"
#endif
#define SIMPLEAIBEHAVIORTREEEXTEND_SimpleAIBehaviorTreeExtendType_generated_h

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<struct FSAIBTBattleAttribute>();

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<struct FSAIBTThreatAttribute>();

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h_174_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<struct FSAIBTLocomotionAttribute>();

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h_188_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSAIBTAttribute_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<struct FSAIBTAttribute>();

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h_206_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSAIBTSkillInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<struct FSAIBTSkillInfo>();

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h_226_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<struct FSingleBossStageInfo>();

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h_248_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSAIBTParameter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<struct FSAIBTParameter>();

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h_267_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<struct FRPCPlaySequenceParameter>();

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h_285_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<struct FMultiStageBossInfo>();

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h_303_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<struct FSpawnSingleAIActorInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h


#define FOREACH_ENUM_ESIMPLETARGETDIRECTION(op) \
	op(ESimpleTargetDirection::DIRECTION_NONE) \
	op(ESimpleTargetDirection::Forward) \
	op(ESimpleTargetDirection::Backward) \
	op(ESimpleTargetDirection::Left) \
	op(ESimpleTargetDirection::Right) 

enum class ESimpleTargetDirection : uint8;
template<> struct TIsUEnumClass<ESimpleTargetDirection> { enum { Value = true }; };
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* StaticEnum<ESimpleTargetDirection>();

#define FOREACH_ENUM_ETHREATTYPE(op) \
	op(EThreatType::TT_Damage) \
	op(EThreatType::TT_Distance) \
	op(EThreatType::TT_Others) \
	op(EThreatType::TT_None) 

enum class EThreatType : uint8;
template<> struct TIsUEnumClass<EThreatType> { enum { Value = true }; };
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* StaticEnum<EThreatType>();

#define FOREACH_ENUM_ESAIBTSTATE(op) \
	op(ESAIBTState::MS_Leisure) \
	op(ESAIBTState::MS_Alert) \
	op(ESAIBTState::MS_Battle) \
	op(ESAIBTState::MS_None) 

enum class ESAIBTState : uint8;
template<> struct TIsUEnumClass<ESAIBTState> { enum { Value = true }; };
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* StaticEnum<ESAIBTState>();

#define FOREACH_ENUM_ESAIBTDISTANCETYPE(op) \
	op(ESAIBTDistanceType::DT_SightRange) \
	op(ESAIBTDistanceType::DT_AttackRange) \
	op(ESAIBTDistanceType::DT_EffectiveRange) \
	op(ESAIBTDistanceType::DT_ChaseRange) 

enum class ESAIBTDistanceType : uint8;
template<> struct TIsUEnumClass<ESAIBTDistanceType> { enum { Value = true }; };
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* StaticEnum<ESAIBTDistanceType>();

#define FOREACH_ENUM_ESAIBTLOCOMOTIONSTATE(op) \
	op(ESAIBTLocomotionState::LS_Run) \
	op(ESAIBTLocomotionState::LS_Walk) 

enum class ESAIBTLocomotionState : uint8;
template<> struct TIsUEnumClass<ESAIBTLocomotionState> { enum { Value = true }; };
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* StaticEnum<ESAIBTLocomotionState>();

#define FOREACH_ENUM_EMULTISTAGEBOSSEXECUTION(op) \
	op(EMultiStageBossExecution::Execution_SpawnBoss) \
	op(EMultiStageBossExecution::Execution_PlaySequence) 

enum class EMultiStageBossExecution : uint8;
template<> struct TIsUEnumClass<EMultiStageBossExecution> { enum { Value = true }; };
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* StaticEnum<EMultiStageBossExecution>();

#define FOREACH_ENUM_ECHARACTERTYPE(op) \
	op(ECharacterType::CHARACTER_NONE) \
	op(ECharacterType::CHARACTER_PLAYER_MAIN) \
	op(ECharacterType::CHARACTER_PARTNER) \
	op(ECharacterType::CHARACTER_NPC_RESIDENT) \
	op(ECharacterType::CHARACTER_NPC_GUARDIAN) \
	op(ECharacterType::CHARACTER_MONSTER) \
	op(ECharacterType::CHARACTER_BOSS) 

enum class ECharacterType : uint8;
template<> struct TIsUEnumClass<ECharacterType> { enum { Value = true }; };
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* StaticEnum<ECharacterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
