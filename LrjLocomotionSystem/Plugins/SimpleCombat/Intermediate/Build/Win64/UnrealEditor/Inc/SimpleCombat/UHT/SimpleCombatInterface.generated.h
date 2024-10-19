// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CombatInterface/SimpleCombatInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayTag;
struct FSimpleAttachPointInfo;
#ifdef SIMPLECOMBAT_SimpleCombatInterface_generated_h
#error "SimpleCombatInterface.generated.h already included, missing '#pragma once' in SimpleCombatInterface.h"
#endif
#define SIMPLECOMBAT_SimpleCombatInterface_generated_h

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleCombatInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdate_AttachPoint); \
	DECLARE_FUNCTION(execThrow); \
	DECLARE_FUNCTION(execCaughtUP); \
	DECLARE_FUNCTION(execGetCharacterLevel); \
	DECLARE_FUNCTION(execGetTarget); \
	DECLARE_FUNCTION(execComboAttackByGameplayTag); \
	DECLARE_FUNCTION(execComboAttackByTag); \
	DECLARE_FUNCTION(execComboAttack); \
	DECLARE_FUNCTION(execAnimSignal);


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleCombatInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SIMPLECOMBAT_API USimpleComboInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleComboInterface(USimpleComboInterface&&); \
	USimpleComboInterface(const USimpleComboInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SIMPLECOMBAT_API, USimpleComboInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleComboInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleComboInterface) \
	SIMPLECOMBAT_API virtual ~USimpleComboInterface();


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleCombatInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSimpleComboInterface(); \
	friend struct Z_Construct_UClass_USimpleComboInterface_Statics; \
public: \
	DECLARE_CLASS(USimpleComboInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SimpleCombat"), SIMPLECOMBAT_API) \
	DECLARE_SERIALIZER(USimpleComboInterface)


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleCombatInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleCombatInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleCombatInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleCombatInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISimpleComboInterface() {} \
public: \
	typedef USimpleComboInterface UClassType; \
	typedef ISimpleComboInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleCombatInterface_h_11_PROLOG
#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleCombatInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleCombatInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleCombatInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLECOMBAT_API UClass* StaticClass<class USimpleComboInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleCombatInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
