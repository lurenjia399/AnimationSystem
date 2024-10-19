// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_ComputerGraphics() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_ComputerGraphics();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_NoRegister();
SIMPLECOMBAT_API UEnum* Z_Construct_UEnum_SimpleCombat_ESimpleDrawCGMixingEffectType();
SIMPLECOMBAT_API UEnum* Z_Construct_UEnum_SimpleCombat_ESimpleDrawComputerGraphicsType();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_ComputerGraphics
void UAnimNotifyState_ComputerGraphics::StaticRegisterNativesUAnimNotifyState_ComputerGraphics()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_ComputerGraphics);
UClass* Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_NoRegister()
{
	return UAnimNotifyState_ComputerGraphics::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "ComputerGraphics" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComputerGraphicsType_MetaData[] = {
		{ "Category", "ComputerGraphics" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CGMixingEffectType_MetaData[] = {
		{ "Category", "ComputerGraphics" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraViewOffsetValue_MetaData[] = {
		{ "Category", "ComputerGraphics" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativePos_MetaData[] = {
		{ "Category", "ComputerGraphics" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bControllerRotation_MetaData[] = {
		{ "Category", "ComputerGraphics" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrthoNearClipPlane_MetaData[] = {
		{ "Category", "CameraSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The near plane distance of the orthographic view (in world units) */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The near plane distance of the orthographic view (in world units)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "ComputerGraphics" },
		{ "EditCondition", "bControllerRotation" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayCameraAnim_MetaData[] = {
		{ "Category", "ComputerGraphics" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
		{ "Units", "deg" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrthoFarClipPlane_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.1" },
		{ "EditCondition", "bConstrainAspectRatio" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRotatorOffset_MetaData[] = {
		{ "Category", "ComputerGraphics" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConstrainAspectRatio_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFieldOfViewForLOD_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates if PostProcessSettings should be used when using this Camera to view through. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates if PostProcessSettings should be used when using this Camera to view through." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ComputerGraphics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComputerGraphicsType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComputerGraphicsType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CGMixingEffectType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CGMixingEffectType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraViewOffsetValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativePos;
	static void NewProp_bControllerRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bControllerRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoNearClipPlane;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static void NewProp_bPlayCameraAnim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayCameraAnim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoFarClipPlane;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
	static void NewProp_bDrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterRotatorOffset;
	static void NewProp_bConstrainAspectRatio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainAspectRatio;
	static void NewProp_bUseFieldOfViewForLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFieldOfViewForLOD;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ViewObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_ComputerGraphics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_ComputerGraphicsType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_ComputerGraphicsType = { "ComputerGraphicsType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_ComputerGraphics, ComputerGraphicsType), Z_Construct_UEnum_SimpleCombat_ESimpleDrawComputerGraphicsType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComputerGraphicsType_MetaData), NewProp_ComputerGraphicsType_MetaData) }; // 1035306626
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_CGMixingEffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_CGMixingEffectType = { "CGMixingEffectType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_ComputerGraphics, CGMixingEffectType), Z_Construct_UEnum_SimpleCombat_ESimpleDrawCGMixingEffectType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CGMixingEffectType_MetaData), NewProp_CGMixingEffectType_MetaData) }; // 4142648575
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_CameraViewOffsetValue = { "CameraViewOffsetValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_ComputerGraphics, CameraViewOffsetValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraViewOffsetValue_MetaData), NewProp_CameraViewOffsetValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_RelativePos = { "RelativePos", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_ComputerGraphics, RelativePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativePos_MetaData), NewProp_RelativePos_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bControllerRotation_SetBit(void* Obj)
{
	((UAnimNotifyState_ComputerGraphics*)Obj)->bControllerRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bControllerRotation = { "bControllerRotation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_ComputerGraphics), &Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bControllerRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bControllerRotation_MetaData), NewProp_bControllerRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_OrthoNearClipPlane = { "OrthoNearClipPlane", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_ComputerGraphics, OrthoNearClipPlane), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrthoNearClipPlane_MetaData), NewProp_OrthoNearClipPlane_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_ComputerGraphics, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bPlayCameraAnim_SetBit(void* Obj)
{
	((UAnimNotifyState_ComputerGraphics*)Obj)->bPlayCameraAnim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bPlayCameraAnim = { "bPlayCameraAnim", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_ComputerGraphics), &Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bPlayCameraAnim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayCameraAnim_MetaData), NewProp_bPlayCameraAnim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_ComputerGraphics, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_OrthoWidth = { "OrthoWidth", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_ComputerGraphics, OrthoWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrthoWidth_MetaData), NewProp_OrthoWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_OrthoFarClipPlane = { "OrthoFarClipPlane", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_ComputerGraphics, OrthoFarClipPlane), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrthoFarClipPlane_MetaData), NewProp_OrthoFarClipPlane_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_ComputerGraphics, AspectRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectRatio_MetaData), NewProp_AspectRatio_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
{
	((UAnimNotifyState_ComputerGraphics*)Obj)->bDrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_ComputerGraphics), &Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebug_MetaData), NewProp_bDrawDebug_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_CharacterRotatorOffset = { "CharacterRotatorOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_ComputerGraphics, CharacterRotatorOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterRotatorOffset_MetaData), NewProp_CharacterRotatorOffset_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bConstrainAspectRatio_SetBit(void* Obj)
{
	((UAnimNotifyState_ComputerGraphics*)Obj)->bConstrainAspectRatio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bConstrainAspectRatio = { "bConstrainAspectRatio", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAnimNotifyState_ComputerGraphics), &Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bConstrainAspectRatio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConstrainAspectRatio_MetaData), NewProp_bConstrainAspectRatio_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bUseFieldOfViewForLOD_SetBit(void* Obj)
{
	((UAnimNotifyState_ComputerGraphics*)Obj)->bUseFieldOfViewForLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bUseFieldOfViewForLOD = { "bUseFieldOfViewForLOD", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAnimNotifyState_ComputerGraphics), &Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bUseFieldOfViewForLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFieldOfViewForLOD_MetaData), NewProp_bUseFieldOfViewForLOD_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_ProjectionMode = { "ProjectionMode", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_ComputerGraphics, ProjectionMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionMode_MetaData), NewProp_ProjectionMode_MetaData) }; // 785982369
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_ComputerGraphics, PostProcessBlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessBlendWeight_MetaData), NewProp_PostProcessBlendWeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_ComputerGraphics, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessSettings_MetaData), NewProp_PostProcessSettings_MetaData) }; // 1858651484
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_ViewObject = { "ViewObject", nullptr, (EPropertyFlags)0x0024080000000010, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_ComputerGraphics, ViewObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewObject_MetaData), NewProp_ViewObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_ComputerGraphicsType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_ComputerGraphicsType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_CGMixingEffectType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_CGMixingEffectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_CameraViewOffsetValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_RelativePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bControllerRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_OrthoNearClipPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bPlayCameraAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_OrthoWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_OrthoFarClipPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_AspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bDrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_CharacterRotatorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bConstrainAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_bUseFieldOfViewForLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_ProjectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_PostProcessBlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_PostProcessSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::NewProp_ViewObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::ClassParams = {
	&UAnimNotifyState_ComputerGraphics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_ComputerGraphics()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_ComputerGraphics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_ComputerGraphics.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_ComputerGraphics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_ComputerGraphics.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_ComputerGraphics>()
{
	return UAnimNotifyState_ComputerGraphics::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_ComputerGraphics);
UAnimNotifyState_ComputerGraphics::~UAnimNotifyState_ComputerGraphics() {}
// End Class UAnimNotifyState_ComputerGraphics

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_ComputerGraphics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_ComputerGraphics, UAnimNotifyState_ComputerGraphics::StaticClass, TEXT("UAnimNotifyState_ComputerGraphics"), &Z_Registration_Info_UClass_UAnimNotifyState_ComputerGraphics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_ComputerGraphics), 3854598403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_ComputerGraphics_h_3602216738(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_ComputerGraphics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_ComputerGraphics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
