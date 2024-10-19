// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CombatInterface/SimpleHitCollisionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLECOMBAT_SimpleHitCollisionInterface_generated_h
#error "SimpleHitCollisionInterface.generated.h already included, missing '#pragma once' in SimpleHitCollisionInterface.h"
#endif
#define SIMPLECOMBAT_SimpleHitCollisionInterface_generated_h

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleHitCollisionInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SIMPLECOMBAT_API USimpleHitCollisionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleHitCollisionInterface(USimpleHitCollisionInterface&&); \
	USimpleHitCollisionInterface(const USimpleHitCollisionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SIMPLECOMBAT_API, USimpleHitCollisionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleHitCollisionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleHitCollisionInterface) \
	SIMPLECOMBAT_API virtual ~USimpleHitCollisionInterface();


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleHitCollisionInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSimpleHitCollisionInterface(); \
	friend struct Z_Construct_UClass_USimpleHitCollisionInterface_Statics; \
public: \
	DECLARE_CLASS(USimpleHitCollisionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SimpleCombat"), SIMPLECOMBAT_API) \
	DECLARE_SERIALIZER(USimpleHitCollisionInterface)


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleHitCollisionInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleHitCollisionInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleHitCollisionInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleHitCollisionInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISimpleHitCollisionInterface() {} \
public: \
	typedef USimpleHitCollisionInterface UClassType; \
	typedef ISimpleHitCollisionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleHitCollisionInterface_h_9_PROLOG
#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleHitCollisionInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleHitCollisionInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLECOMBAT_API UClass* StaticClass<class USimpleHitCollisionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleHitCollisionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
