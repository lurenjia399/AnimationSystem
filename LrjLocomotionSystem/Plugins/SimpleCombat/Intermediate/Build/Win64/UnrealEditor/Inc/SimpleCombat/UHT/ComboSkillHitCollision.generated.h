// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Hit/Core/ComboSkillHitCollision.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class UPrimitiveComponent;
struct FAttackedTargetTimer;
struct FGameplayTag;
struct FHitResult;
#ifdef SIMPLECOMBAT_ComboSkillHitCollision_generated_h
#error "ComboSkillHitCollision.generated.h already included, missing '#pragma once' in ComboSkillHitCollision.h"
#endif
#define SIMPLECOMBAT_ComboSkillHitCollision_generated_h

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttackedTargetTimer_Statics; \
	SIMPLECOMBAT_API static class UScriptStruct* StaticStruct();


template<> SIMPLECOMBAT_API UScriptStruct* StaticStruct<struct FAttackedTargetTimer>();

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndHandleDamage_Inner); \
	DECLARE_FUNCTION(execStartHandleDamage_Inner); \
	DECLARE_FUNCTION(execIsLocallyInputControlled); \
	DECLARE_FUNCTION(execGetExtent); \
	DECLARE_FUNCTION(execGetIgnoreTraceActor); \
	DECLARE_FUNCTION(execGetDamageRatio); \
	DECLARE_FUNCTION(execGetAttackedTarget); \
	DECLARE_FUNCTION(execGeBuffs); \
	DECLARE_FUNCTION(execGetBuffTags); \
	DECLARE_FUNCTION(execIsExist); \
	DECLARE_FUNCTION(execGetHitID); \
	DECLARE_FUNCTION(execIsExitIgnoredActor); \
	DECLARE_FUNCTION(execGetScapegoatActor); \
	DECLARE_FUNCTION(execGetHitDamage); \
	DECLARE_FUNCTION(execSetGASTag); \
	DECLARE_FUNCTION(execRegisterHitCollision); \
	DECLARE_FUNCTION(execUnregisteredHitCollision); \
	DECLARE_FUNCTION(execInitHitBindEvent); \
	DECLARE_FUNCTION(execInitHitCollision); \
	DECLARE_FUNCTION(execCheckAutomaticallyDestroy); \
	DECLARE_FUNCTION(execSetScapegoatActor); \
	DECLARE_FUNCTION(execRemoveIgnoreActors); \
	DECLARE_FUNCTION(execAddIgnoreActors); \
	DECLARE_FUNCTION(execClearCustomIgnoreActors); \
	DECLARE_FUNCTION(execInitCustomIgnoreActors); \
	DECLARE_FUNCTION(execCollision); \
	DECLARE_FUNCTION(execSetIgnoreActors); \
	DECLARE_FUNCTION(execK2_SetBuffsByTag); \
	DECLARE_FUNCTION(execK2_SetBuffsByName); \
	DECLARE_FUNCTION(execSetHitID); \
	DECLARE_FUNCTION(execSetHitDamageRelativePosition);


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_43_CALLBACK_WRAPPERS
#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHitCollision(); \
	friend struct Z_Construct_UClass_AHitCollision_Statics; \
public: \
	DECLARE_CLASS(AHitCollision, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleCombat"), NO_API) \
	DECLARE_SERIALIZER(AHitCollision)


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHitCollision(AHitCollision&&); \
	AHitCollision(const AHitCollision&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitCollision); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitCollision); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHitCollision) \
	NO_API virtual ~AHitCollision();


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_40_PROLOG
#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_43_CALLBACK_WRAPPERS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_43_INCLASS_NO_PURE_DECLS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLECOMBAT_API UClass* StaticClass<class AHitCollision>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
