// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/SimpleGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayEventData;
struct FGameplayTag;
#ifdef SIMPLEGAMEPLAYABILITIESEXTEND_SimpleGameplayAbility_generated_h
#error "SimpleGameplayAbility.generated.h already included, missing '#pragma once' in SimpleGameplayAbility.h"
#endif
#define SIMPLEGAMEPLAYABILITIESEXTEND_SimpleGameplayAbility_generated_h

#define FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbility_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDamageGameplayEvent); \
	DECLARE_FUNCTION(execOnCancelled); \
	DECLARE_FUNCTION(execOnInterrupted); \
	DECLARE_FUNCTION(execOnBlendOut); \
	DECLARE_FUNCTION(execOnCompleted);


#define FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbility_h_11_CALLBACK_WRAPPERS
#define FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbility_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleGameplayAbility(); \
	friend struct Z_Construct_UClass_USimpleGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(USimpleGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleGameplayAbilitiesExtend"), NO_API) \
	DECLARE_SERIALIZER(USimpleGameplayAbility)


#define FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbility_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleGameplayAbility(USimpleGameplayAbility&&); \
	USimpleGameplayAbility(const USimpleGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleGameplayAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USimpleGameplayAbility) \
	NO_API virtual ~USimpleGameplayAbility();


#define FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbility_h_8_PROLOG
#define FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbility_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbility_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbility_h_11_CALLBACK_WRAPPERS \
	FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbility_h_11_INCLASS_NO_PURE_DECLS \
	FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbility_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* StaticClass<class USimpleGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
