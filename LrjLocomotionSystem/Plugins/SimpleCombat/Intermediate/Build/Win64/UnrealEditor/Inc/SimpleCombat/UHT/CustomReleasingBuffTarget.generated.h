// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Script/CustomReleasingBuffTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UWorld;
#ifdef SIMPLECOMBAT_CustomReleasingBuffTarget_generated_h
#error "CustomReleasingBuffTarget.generated.h already included, missing '#pragma once' in CustomReleasingBuffTarget.h"
#endif
#define SIMPLECOMBAT_CustomReleasingBuffTarget_generated_h

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Script_CustomReleasingBuffTarget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllActorsOfClass); \
	DECLARE_FUNCTION(execK2_GetWorld); \
	DECLARE_FUNCTION(execK2_GetCustomReleasingBuffTarget);


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Script_CustomReleasingBuffTarget_h_14_CALLBACK_WRAPPERS
#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Script_CustomReleasingBuffTarget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomReleasingBuffTarget(); \
	friend struct Z_Construct_UClass_UCustomReleasingBuffTarget_Statics; \
public: \
	DECLARE_CLASS(UCustomReleasingBuffTarget, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleCombat"), NO_API) \
	DECLARE_SERIALIZER(UCustomReleasingBuffTarget)


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Script_CustomReleasingBuffTarget_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomReleasingBuffTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCustomReleasingBuffTarget(UCustomReleasingBuffTarget&&); \
	UCustomReleasingBuffTarget(const UCustomReleasingBuffTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomReleasingBuffTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomReleasingBuffTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomReleasingBuffTarget) \
	NO_API virtual ~UCustomReleasingBuffTarget();


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Script_CustomReleasingBuffTarget_h_11_PROLOG
#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Script_CustomReleasingBuffTarget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Script_CustomReleasingBuffTarget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Script_CustomReleasingBuffTarget_h_14_CALLBACK_WRAPPERS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Script_CustomReleasingBuffTarget_h_14_INCLASS_NO_PURE_DECLS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Script_CustomReleasingBuffTarget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLECOMBAT_API UClass* StaticClass<class UCustomReleasingBuffTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Script_CustomReleasingBuffTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
