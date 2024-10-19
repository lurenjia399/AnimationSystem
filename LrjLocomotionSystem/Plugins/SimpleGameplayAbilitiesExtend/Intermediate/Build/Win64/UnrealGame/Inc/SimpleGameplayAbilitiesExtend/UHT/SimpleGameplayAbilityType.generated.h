// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/SimpleGameplayAbilityType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayEventData;
struct FGameplayTag;
#ifdef SIMPLEGAMEPLAYABILITIESEXTEND_SimpleGameplayAbilityType_generated_h
#error "SimpleGameplayAbilityType.generated.h already included, missing '#pragma once' in SimpleGameplayAbilityType.h"
#endif
#define SIMPLEGAMEPLAYABILITIESEXTEND_SimpleGameplayAbilityType_generated_h

#define FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityType_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UScriptStruct* StaticStruct<struct FSimpleGameplayEffect>();

#define FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityType_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleGameplayEffects_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UScriptStruct* StaticStruct<struct FSimpleGameplayEffects>();

#define FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityType_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UScriptStruct* StaticStruct<struct FSimpleGameplayEffectSpec>();

#define FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityType_h_58_DELEGATE \
SIMPLEGAMEPLAYABILITIESEXTEND_API void FWaitSimpleForDamageEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitSimpleForDamageEventDelegate, FGameplayTag EventTag, FGameplayEventData EventData);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityType_h


#define FOREACH_ENUM_EGAMEPLAYEFFECTUSETYPE(op) \
	op(EGameplayEffectUseType::RELEASE_TARGET_COLLISION) \
	op(EGameplayEffectUseType::RELEASE_OWN_COLLISION) 

enum class EGameplayEffectUseType : uint8;
template<> struct TIsUEnumClass<EGameplayEffectUseType> { enum { Value = true }; };
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UEnum* StaticEnum<EGameplayEffectUseType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
