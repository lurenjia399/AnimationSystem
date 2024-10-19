// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNotifyState/AnimNotifyState_LockCameraAnim.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLECOMBAT_AnimNotifyState_LockCameraAnim_generated_h
#error "AnimNotifyState_LockCameraAnim.generated.h already included, missing '#pragma once' in AnimNotifyState_LockCameraAnim.h"
#endif
#define SIMPLECOMBAT_AnimNotifyState_LockCameraAnim_generated_h

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LockCameraAnim_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotifyState_LockCameraAnim(); \
	friend struct Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyState_LockCameraAnim, UAnimNotifyState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleCombat"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyState_LockCameraAnim)


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LockCameraAnim_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNotifyState_LockCameraAnim(UAnimNotifyState_LockCameraAnim&&); \
	UAnimNotifyState_LockCameraAnim(const UAnimNotifyState_LockCameraAnim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyState_LockCameraAnim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyState_LockCameraAnim); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimNotifyState_LockCameraAnim) \
	NO_API virtual ~UAnimNotifyState_LockCameraAnim();


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LockCameraAnim_h_29_PROLOG
#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LockCameraAnim_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LockCameraAnim_h_32_INCLASS_NO_PURE_DECLS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LockCameraAnim_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLECOMBAT_API UClass* StaticClass<class UAnimNotifyState_LockCameraAnim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LockCameraAnim_h


#define FOREACH_ENUM_ELOCKCAMERAANIMVIEWTARGETBLENDFUNCTION(op) \
	op(ELockCameraAnimViewTargetBlendFunction::VTBlend_Linear) \
	op(ELockCameraAnimViewTargetBlendFunction::VTBlend_Cubic) \
	op(ELockCameraAnimViewTargetBlendFunction::VTBlend_EaseIn) \
	op(ELockCameraAnimViewTargetBlendFunction::VTBlend_EaseOut) \
	op(ELockCameraAnimViewTargetBlendFunction::VTBlend_EaseInOut) \
	op(ELockCameraAnimViewTargetBlendFunction::VTBlend_PreBlended) 

enum class ELockCameraAnimViewTargetBlendFunction : uint8;
template<> struct TIsUEnumClass<ELockCameraAnimViewTargetBlendFunction> { enum { Value = true }; };
template<> SIMPLECOMBAT_API UEnum* StaticEnum<ELockCameraAnimViewTargetBlendFunction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
