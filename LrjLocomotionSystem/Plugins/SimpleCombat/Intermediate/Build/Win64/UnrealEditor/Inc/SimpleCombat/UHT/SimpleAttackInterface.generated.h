// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CombatInterface/SimpleAttackInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLECOMBAT_SimpleAttackInterface_generated_h
#error "SimpleAttackInterface.generated.h already included, missing '#pragma once' in SimpleAttackInterface.h"
#endif
#define SIMPLECOMBAT_SimpleAttackInterface_generated_h

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleAttackInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SIMPLECOMBAT_API USimpleAttackInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleAttackInterface(USimpleAttackInterface&&); \
	USimpleAttackInterface(const USimpleAttackInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SIMPLECOMBAT_API, USimpleAttackInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleAttackInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleAttackInterface) \
	SIMPLECOMBAT_API virtual ~USimpleAttackInterface();


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleAttackInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSimpleAttackInterface(); \
	friend struct Z_Construct_UClass_USimpleAttackInterface_Statics; \
public: \
	DECLARE_CLASS(USimpleAttackInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SimpleCombat"), SIMPLECOMBAT_API) \
	DECLARE_SERIALIZER(USimpleAttackInterface)


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleAttackInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleAttackInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleAttackInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleAttackInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISimpleAttackInterface() {} \
public: \
	typedef USimpleAttackInterface UClassType; \
	typedef ISimpleAttackInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleAttackInterface_h_11_PROLOG
#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleAttackInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleAttackInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLECOMBAT_API UClass* StaticClass<class USimpleAttackInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleAttackInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
