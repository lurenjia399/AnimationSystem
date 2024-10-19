// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleAdvancedAnimationBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
struct FFootIKInfo;
#ifdef SIMPLEADVANCEDANIMATION_SimpleAdvancedAnimationBPLibrary_generated_h
#error "SimpleAdvancedAnimationBPLibrary.generated.h already included, missing '#pragma once' in SimpleAdvancedAnimationBPLibrary.h"
#endif
#define SIMPLEADVANCEDANIMATION_SimpleAdvancedAnimationBPLibrary_generated_h

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationBPLibrary_h_12_RPC_WRAPPERS \
	DECLARE_FUNCTION(execDestroy); \
	DECLARE_FUNCTION(execGetButtZOffset); \
	DECLARE_FUNCTION(execFindFootIKInfo); \
	DECLARE_FUNCTION(execFindOffset); \
	DECLARE_FUNCTION(execCreateFootIK);


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationBPLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleAdvancedAnimationBPLibrary(); \
	friend struct Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USimpleAdvancedAnimationBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleAdvancedAnimation"), NO_API) \
	DECLARE_SERIALIZER(USimpleAdvancedAnimationBPLibrary)


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationBPLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleAdvancedAnimationBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleAdvancedAnimationBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleAdvancedAnimationBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleAdvancedAnimationBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleAdvancedAnimationBPLibrary(USimpleAdvancedAnimationBPLibrary&&); \
	USimpleAdvancedAnimationBPLibrary(const USimpleAdvancedAnimationBPLibrary&); \
public: \
	NO_API virtual ~USimpleAdvancedAnimationBPLibrary();


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationBPLibrary_h_9_PROLOG
#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationBPLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationBPLibrary_h_12_RPC_WRAPPERS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationBPLibrary_h_12_INCLASS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationBPLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEADVANCEDANIMATION_API UClass* StaticClass<class USimpleAdvancedAnimationBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
