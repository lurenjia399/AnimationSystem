// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/SimpleGameplayAbilityMontage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_PlayMontageAndWait;
class UAbilityTask_PNAWDamageEvent;
class UAnimMontage;
#ifdef SIMPLEGAMEPLAYABILITIESEXTEND_SimpleGameplayAbilityMontage_generated_h
#error "SimpleGameplayAbilityMontage.generated.h already included, missing '#pragma once' in SimpleGameplayAbilityMontage.h"
#endif
#define SIMPLEGAMEPLAYABILITIESEXTEND_SimpleGameplayAbilityMontage_generated_h

#define FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityMontage_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayMontage); \
	DECLARE_FUNCTION(execCreatePlayMontageAndWaitProxy);


#define FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityMontage_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleGameplayAbilityMontage(); \
	friend struct Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics; \
public: \
	DECLARE_CLASS(USimpleGameplayAbilityMontage, USimpleGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleGameplayAbilitiesExtend"), NO_API) \
	DECLARE_SERIALIZER(USimpleGameplayAbilityMontage)


#define FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityMontage_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleGameplayAbilityMontage(USimpleGameplayAbilityMontage&&); \
	USimpleGameplayAbilityMontage(const USimpleGameplayAbilityMontage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleGameplayAbilityMontage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleGameplayAbilityMontage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USimpleGameplayAbilityMontage) \
	NO_API virtual ~USimpleGameplayAbilityMontage();


#define FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityMontage_h_11_PROLOG
#define FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityMontage_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityMontage_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityMontage_h_14_INCLASS_NO_PURE_DECLS \
	FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityMontage_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* StaticClass<class USimpleGameplayAbilityMontage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityMontage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
