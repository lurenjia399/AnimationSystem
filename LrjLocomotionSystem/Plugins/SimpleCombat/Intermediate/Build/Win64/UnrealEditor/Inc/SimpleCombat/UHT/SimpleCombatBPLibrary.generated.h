// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleCombatBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AHitCollision;
class APawn;
class AResidualShadowActor;
class UAnimMontage;
class UObject;
class USkeletalMeshComponent;
class UUI_ComboCount;
struct FGameplayTag;
struct FSimpleHitCollisionParam;
#ifdef SIMPLECOMBAT_SimpleCombatBPLibrary_generated_h
#error "SimpleCombatBPLibrary.generated.h already included, missing '#pragma once' in SimpleCombatBPLibrary.h"
#endif
#define SIMPLECOMBAT_SimpleCombatBPLibrary_generated_h

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleCombatBPLibrary_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSpawnCollision); \
	DECLARE_FUNCTION(execSpawnSimpleCollisionByTags); \
	DECLARE_FUNCTION(execSpawnSimpleCollision); \
	DECLARE_FUNCTION(execGetCaster); \
	DECLARE_FUNCTION(execPlayMontage); \
	DECLARE_FUNCTION(execSpawnResidualShadow); \
	DECLARE_FUNCTION(execComboTextDestroy); \
	DECLARE_FUNCTION(execComboPlay);


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleCombatBPLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleCombatBPLibrary(); \
	friend struct Z_Construct_UClass_USimpleCombatBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USimpleCombatBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleCombat"), NO_API) \
	DECLARE_SERIALIZER(USimpleCombatBPLibrary)


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleCombatBPLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleCombatBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleCombatBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleCombatBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleCombatBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleCombatBPLibrary(USimpleCombatBPLibrary&&); \
	USimpleCombatBPLibrary(const USimpleCombatBPLibrary&); \
public: \
	NO_API virtual ~USimpleCombatBPLibrary();


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleCombatBPLibrary_h_13_PROLOG
#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleCombatBPLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleCombatBPLibrary_h_16_RPC_WRAPPERS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleCombatBPLibrary_h_16_INCLASS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleCombatBPLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLECOMBAT_API UClass* StaticClass<class USimpleCombatBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleCombatBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
