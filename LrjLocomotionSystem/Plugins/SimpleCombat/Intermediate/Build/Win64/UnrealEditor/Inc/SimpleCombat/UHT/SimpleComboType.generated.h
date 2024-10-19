// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleComboType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLECOMBAT_SimpleComboType_generated_h
#error "SimpleComboType.generated.h already included, missing '#pragma once' in SimpleComboType.h"
#endif
#define SIMPLECOMBAT_SimpleComboType_generated_h

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleComboType_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLECOMBAT_API UScriptStruct* StaticStruct<struct FContinuousReleaseSpell>();

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleComboType_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLECOMBAT_API UScriptStruct* StaticStruct<struct FSimpleHitCollisionParam>();

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleComboType_h_209_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleComboCheck_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLECOMBAT_API UScriptStruct* StaticStruct<struct FSimpleComboCheck>();

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleComboType_h_339_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleAttachPointInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLECOMBAT_API UScriptStruct* StaticStruct<struct FSimpleAttachPointInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleComboType_h


#define FOREACH_ENUM_ESIMPLEDRAWCGMIXINGEFFECTTYPE(op) \
	op(ESimpleDrawCGMixingEffectType::DRAWDEBUGTRACE_NOT_MIXED_OUT) \
	op(ESimpleDrawCGMixingEffectType::DRAWDEBUGTRACE_MIXED_OUT) \
	op(ESimpleDrawCGMixingEffectType::DRAWDEBUGTRACE_GRADIENT_MIXED_OUT) 

enum class ESimpleDrawCGMixingEffectType : uint8;
template<> struct TIsUEnumClass<ESimpleDrawCGMixingEffectType> { enum { Value = true }; };
template<> SIMPLECOMBAT_API UEnum* StaticEnum<ESimpleDrawCGMixingEffectType>();

#define FOREACH_ENUM_ESIMPLEDRAWCOMPUTERGRAPHICSTYPE(op) \
	op(ESimpleDrawComputerGraphicsType::DRAWDEBUGTRACE_NONE) \
	op(ESimpleDrawComputerGraphicsType::DRAWDEBUGTRACE_TRACK) 

enum class ESimpleDrawComputerGraphicsType : uint8;
template<> struct TIsUEnumClass<ESimpleDrawComputerGraphicsType> { enum { Value = true }; };
template<> SIMPLECOMBAT_API UEnum* StaticEnum<ESimpleDrawComputerGraphicsType>();

#define FOREACH_ENUM_ESIMPLEDRAWDEBUGTRACE(op) \
	op(ESimpleDrawDebugTrace::DRAWDEBUGTRACE_NONE) \
	op(ESimpleDrawDebugTrace::DRAWDEBUGTRACE_FORONEFRAME) \
	op(ESimpleDrawDebugTrace::DRAWDEBUGTRACE_FORDURATION) \
	op(ESimpleDrawDebugTrace::DRAWDEBUGTRACE_PERSISTENT) 

enum class ESimpleDrawDebugTrace : uint8;
template<> struct TIsUEnumClass<ESimpleDrawDebugTrace> { enum { Value = true }; };
template<> SIMPLECOMBAT_API UEnum* StaticEnum<ESimpleDrawDebugTrace>();

#define FOREACH_ENUM_EHITCOLLISIONTYPE(op) \
	op(EHitCollisionType::HITCOLLISIONTYPE_SHORT_RANGE_ATTACK) \
	op(EHitCollisionType::HITCOLLISIONTYPE_DIRECT_LINE) \
	op(EHitCollisionType::HITCOLLISIONTYPE_LINE) \
	op(EHitCollisionType::HITCOLLISIONTYPE_RAY_LINE) \
	op(EHitCollisionType::HITCOLLISIONTYPE_TRACK_LINE) \
	op(EHitCollisionType::HITCOLLISIONTYPE_VELOCITY_TRACK) \
	op(EHitCollisionType::HITCOLLISIONTYPE_RANGE_LINE) \
	op(EHitCollisionType::HITCOLLISIONTYPE_RANGE) \
	op(EHitCollisionType::HITCOLLISIONTYPE_CHAIN) 

enum class EHitCollisionType : uint8;
template<> struct TIsUEnumClass<EHitCollisionType> { enum { Value = true }; };
template<> SIMPLECOMBAT_API UEnum* StaticEnum<EHitCollisionType>();

#define FOREACH_ENUM_EITEMOBJECTSTATE(op) \
	op(EItemObjectState::DRAG_FREE) \
	op(EItemObjectState::DRAG_BUSY) 

enum class EItemObjectState : uint8;
template<> struct TIsUEnumClass<EItemObjectState> { enum { Value = true }; };
template<> SIMPLECOMBAT_API UEnum* StaticEnum<EItemObjectState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
