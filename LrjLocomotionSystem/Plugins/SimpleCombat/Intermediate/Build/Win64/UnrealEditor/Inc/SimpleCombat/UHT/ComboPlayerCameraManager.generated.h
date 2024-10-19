// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Object/Camera/ComboPlayerCameraManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLECOMBAT_ComboPlayerCameraManager_generated_h
#error "ComboPlayerCameraManager.generated.h already included, missing '#pragma once' in ComboPlayerCameraManager.h"
#endif
#define SIMPLECOMBAT_ComboPlayerCameraManager_generated_h

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Object_Camera_ComboPlayerCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAComboPlayerCameraManager(); \
	friend struct Z_Construct_UClass_AComboPlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(AComboPlayerCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleCombat"), NO_API) \
	DECLARE_SERIALIZER(AComboPlayerCameraManager)


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Object_Camera_ComboPlayerCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AComboPlayerCameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AComboPlayerCameraManager(AComboPlayerCameraManager&&); \
	AComboPlayerCameraManager(const AComboPlayerCameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AComboPlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AComboPlayerCameraManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AComboPlayerCameraManager) \
	NO_API virtual ~AComboPlayerCameraManager();


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Object_Camera_ComboPlayerCameraManager_h_13_PROLOG
#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Object_Camera_ComboPlayerCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Object_Camera_ComboPlayerCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Object_Camera_ComboPlayerCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLECOMBAT_API UClass* StaticClass<class AComboPlayerCameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Object_Camera_ComboPlayerCameraManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
