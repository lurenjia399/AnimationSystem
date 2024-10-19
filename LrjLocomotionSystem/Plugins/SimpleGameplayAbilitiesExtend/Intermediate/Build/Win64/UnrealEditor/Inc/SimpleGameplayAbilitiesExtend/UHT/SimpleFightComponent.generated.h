// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/SimpleFightComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
class UGameplayEffect;
class USimpleGameplayAbility;
struct FGameplayTag;
#ifdef SIMPLEGAMEPLAYABILITIESEXTEND_SimpleFightComponent_generated_h
#error "SimpleFightComponent.generated.h already included, missing '#pragma once' in SimpleFightComponent.h"
#endif
#define SIMPLEGAMEPLAYABILITIESEXTEND_SimpleFightComponent_generated_h

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Component_SimpleFightComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNameToGameTag); \
	DECLARE_FUNCTION(execIsAir); \
	DECLARE_FUNCTION(execGetExecuteGameplayAbility); \
	DECLARE_FUNCTION(execGetGameplayAbility); \
	DECLARE_FUNCTION(execGetGameplayAbilityActiveTagBySkill); \
	DECLARE_FUNCTION(execIsExitNameTag); \
	DECLARE_FUNCTION(execGetSkillTagsNameTag); \
	DECLARE_FUNCTION(execGetSkillTagsNames); \
	DECLARE_FUNCTION(execRemoveGameplyEffectTag); \
	DECLARE_FUNCTION(execAddGameplyEffectTag); \
	DECLARE_FUNCTION(execIsUsingSkills); \
	DECLARE_FUNCTION(execDeactivationGameplayEffect); \
	DECLARE_FUNCTION(execExecuteGameplayEffect); \
	DECLARE_FUNCTION(execExecuteGameplayAbility); \
	DECLARE_FUNCTION(execRemoveGameplayAbility); \
	DECLARE_FUNCTION(execAddGameplayAbility);


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Component_SimpleFightComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleFightComponent(); \
	friend struct Z_Construct_UClass_USimpleFightComponent_Statics; \
public: \
	DECLARE_CLASS(USimpleFightComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleGameplayAbilitiesExtend"), NO_API) \
	DECLARE_SERIALIZER(USimpleFightComponent)


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Component_SimpleFightComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleFightComponent(USimpleFightComponent&&); \
	USimpleFightComponent(const USimpleFightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleFightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleFightComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USimpleFightComponent) \
	NO_API virtual ~USimpleFightComponent();


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Component_SimpleFightComponent_h_21_PROLOG
#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Component_SimpleFightComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Component_SimpleFightComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Component_SimpleFightComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Component_SimpleFightComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* StaticClass<class USimpleFightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Component_SimpleFightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
