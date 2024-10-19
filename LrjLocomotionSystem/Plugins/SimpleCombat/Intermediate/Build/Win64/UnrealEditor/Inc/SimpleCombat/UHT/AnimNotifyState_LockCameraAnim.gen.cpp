// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_LockCameraAnim.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_LockCameraAnim() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_LockCameraAnim();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_NoRegister();
SIMPLECOMBAT_API UEnum* Z_Construct_UEnum_SimpleCombat_ELockCameraAnimViewTargetBlendFunction();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Enum ELockCameraAnimViewTargetBlendFunction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELockCameraAnimViewTargetBlendFunction;
static UEnum* ELockCameraAnimViewTargetBlendFunction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELockCameraAnimViewTargetBlendFunction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELockCameraAnimViewTargetBlendFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleCombat_ELockCameraAnimViewTargetBlendFunction, (UObject*)Z_Construct_UPackage__Script_SimpleCombat(), TEXT("ELockCameraAnimViewTargetBlendFunction"));
	}
	return Z_Registration_Info_UEnum_ELockCameraAnimViewTargetBlendFunction.OuterSingleton;
}
template<> SIMPLECOMBAT_API UEnum* StaticEnum<ELockCameraAnimViewTargetBlendFunction>()
{
	return ELockCameraAnimViewTargetBlendFunction_StaticEnum();
}
struct Z_Construct_UEnum_SimpleCombat_ELockCameraAnimViewTargetBlendFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_LockCameraAnim.h" },
		{ "VTBlend_Cubic.Comment", "/** Camera has a slight ease in and ease out, but amount of ease cannot be tweaked. */" },
		{ "VTBlend_Cubic.Name", "ELockCameraAnimViewTargetBlendFunction::VTBlend_Cubic" },
		{ "VTBlend_Cubic.ToolTip", "Camera has a slight ease in and ease out, but amount of ease cannot be tweaked." },
		{ "VTBlend_EaseIn.Comment", "/** Camera immediately accelerates, but smoothly decelerates into the target.  Ease amount controlled by BlendExp. */" },
		{ "VTBlend_EaseIn.Name", "ELockCameraAnimViewTargetBlendFunction::VTBlend_EaseIn" },
		{ "VTBlend_EaseIn.ToolTip", "Camera immediately accelerates, but smoothly decelerates into the target.  Ease amount controlled by BlendExp." },
		{ "VTBlend_EaseInOut.Comment", "/** Camera smoothly accelerates and decelerates.  Ease amount controlled by BlendExp. */" },
		{ "VTBlend_EaseInOut.Name", "ELockCameraAnimViewTargetBlendFunction::VTBlend_EaseInOut" },
		{ "VTBlend_EaseInOut.ToolTip", "Camera smoothly accelerates and decelerates.  Ease amount controlled by BlendExp." },
		{ "VTBlend_EaseOut.Comment", "/** Camera smoothly accelerates, but does not decelerate into the target.  Ease amount controlled by BlendExp. */" },
		{ "VTBlend_EaseOut.Name", "ELockCameraAnimViewTargetBlendFunction::VTBlend_EaseOut" },
		{ "VTBlend_EaseOut.ToolTip", "Camera smoothly accelerates, but does not decelerate into the target.  Ease amount controlled by BlendExp." },
		{ "VTBlend_Linear.Comment", "/** Camera does a simple linear interpolation. */" },
		{ "VTBlend_Linear.Name", "ELockCameraAnimViewTargetBlendFunction::VTBlend_Linear" },
		{ "VTBlend_Linear.ToolTip", "Camera does a simple linear interpolation." },
		{ "VTBlend_MAX.Name", "ELockCameraAnimViewTargetBlendFunction::VTBlend_MAX" },
		{ "VTBlend_PreBlended.Comment", "/** The game's camera system has already performed the blending. Engine should not blend at all */" },
		{ "VTBlend_PreBlended.Name", "ELockCameraAnimViewTargetBlendFunction::VTBlend_PreBlended" },
		{ "VTBlend_PreBlended.ToolTip", "The game's camera system has already performed the blending. Engine should not blend at all" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELockCameraAnimViewTargetBlendFunction::VTBlend_Linear", (int64)ELockCameraAnimViewTargetBlendFunction::VTBlend_Linear },
		{ "ELockCameraAnimViewTargetBlendFunction::VTBlend_Cubic", (int64)ELockCameraAnimViewTargetBlendFunction::VTBlend_Cubic },
		{ "ELockCameraAnimViewTargetBlendFunction::VTBlend_EaseIn", (int64)ELockCameraAnimViewTargetBlendFunction::VTBlend_EaseIn },
		{ "ELockCameraAnimViewTargetBlendFunction::VTBlend_EaseOut", (int64)ELockCameraAnimViewTargetBlendFunction::VTBlend_EaseOut },
		{ "ELockCameraAnimViewTargetBlendFunction::VTBlend_EaseInOut", (int64)ELockCameraAnimViewTargetBlendFunction::VTBlend_EaseInOut },
		{ "ELockCameraAnimViewTargetBlendFunction::VTBlend_PreBlended", (int64)ELockCameraAnimViewTargetBlendFunction::VTBlend_PreBlended },
		{ "ELockCameraAnimViewTargetBlendFunction::VTBlend_MAX", (int64)ELockCameraAnimViewTargetBlendFunction::VTBlend_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleCombat_ELockCameraAnimViewTargetBlendFunction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleCombat,
	nullptr,
	"ELockCameraAnimViewTargetBlendFunction",
	"ELockCameraAnimViewTargetBlendFunction",
	Z_Construct_UEnum_SimpleCombat_ELockCameraAnimViewTargetBlendFunction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleCombat_ELockCameraAnimViewTargetBlendFunction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleCombat_ELockCameraAnimViewTargetBlendFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleCombat_ELockCameraAnimViewTargetBlendFunction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleCombat_ELockCameraAnimViewTargetBlendFunction()
{
	if (!Z_Registration_Info_UEnum_ELockCameraAnimViewTargetBlendFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELockCameraAnimViewTargetBlendFunction.InnerSingleton, Z_Construct_UEnum_SimpleCombat_ELockCameraAnimViewTargetBlendFunction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELockCameraAnimViewTargetBlendFunction.InnerSingleton;
}
// End Enum ELockCameraAnimViewTargetBlendFunction

// Begin Class UAnimNotifyState_LockCameraAnim
void UAnimNotifyState_LockCameraAnim::StaticRegisterNativesUAnimNotifyState_LockCameraAnim()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_LockCameraAnim);
UClass* Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_NoRegister()
{
	return UAnimNotifyState_LockCameraAnim::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "LockCameraAnim" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_LockCameraAnim.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_LockCameraAnim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCamera_MetaData[] = {
		{ "Category", "LockCameraAnim" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_LockCameraAnim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendValue_MetaData[] = {
		{ "Category", "LockCameraAnim" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_LockCameraAnim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockCamera_MetaData[] = {
		{ "Category", "LockCameraAnim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe8\xa6\x81\xe9\x94\x81\xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba \xe5\xb0\x86\xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe9\x94\x81\xe5\xae\x9a\xe5\x88\xb0\xe8\xa7\x92\xe8\x89\xb2\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_LockCameraAnim.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\xa6\x81\xe9\x94\x81\xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba \xe5\xb0\x86\xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe9\x94\x81\xe5\xae\x9a\xe5\x88\xb0\xe8\xa7\x92\xe8\x89\xb2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReturn_MetaData[] = {
		{ "Category", "LockCameraAnim" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_LockCameraAnim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetBlendFunction_MetaData[] = {
		{ "Category", "LockCameraAnim" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_LockCameraAnim.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendValue;
	static void NewProp_bLockCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockCamera;
	static void NewProp_bReturn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturn;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetBlendFunction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetBlendFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_LockCameraAnim>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::NewProp_CurrentCamera = { "CurrentCamera", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_LockCameraAnim, CurrentCamera), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCamera_MetaData), NewProp_CurrentCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::NewProp_BlendValue = { "BlendValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_LockCameraAnim, BlendValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendValue_MetaData), NewProp_BlendValue_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::NewProp_bLockCamera_SetBit(void* Obj)
{
	((UAnimNotifyState_LockCameraAnim*)Obj)->bLockCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::NewProp_bLockCamera = { "bLockCamera", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_LockCameraAnim), &Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::NewProp_bLockCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockCamera_MetaData), NewProp_bLockCamera_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::NewProp_bReturn_SetBit(void* Obj)
{
	((UAnimNotifyState_LockCameraAnim*)Obj)->bReturn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::NewProp_bReturn = { "bReturn", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_LockCameraAnim), &Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::NewProp_bReturn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReturn_MetaData), NewProp_bReturn_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::NewProp_TargetBlendFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::NewProp_TargetBlendFunction = { "TargetBlendFunction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_LockCameraAnim, TargetBlendFunction), Z_Construct_UEnum_SimpleCombat_ELockCameraAnimViewTargetBlendFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetBlendFunction_MetaData), NewProp_TargetBlendFunction_MetaData) }; // 1907138747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::NewProp_CurrentCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::NewProp_BlendValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::NewProp_bLockCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::NewProp_bReturn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::NewProp_TargetBlendFunction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::NewProp_TargetBlendFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::ClassParams = {
	&UAnimNotifyState_LockCameraAnim::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_LockCameraAnim()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_LockCameraAnim.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_LockCameraAnim.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_LockCameraAnim_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_LockCameraAnim.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_LockCameraAnim>()
{
	return UAnimNotifyState_LockCameraAnim::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_LockCameraAnim);
UAnimNotifyState_LockCameraAnim::~UAnimNotifyState_LockCameraAnim() {}
// End Class UAnimNotifyState_LockCameraAnim

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LockCameraAnim_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELockCameraAnimViewTargetBlendFunction_StaticEnum, TEXT("ELockCameraAnimViewTargetBlendFunction"), &Z_Registration_Info_UEnum_ELockCameraAnimViewTargetBlendFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1907138747U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_LockCameraAnim, UAnimNotifyState_LockCameraAnim::StaticClass, TEXT("UAnimNotifyState_LockCameraAnim"), &Z_Registration_Info_UClass_UAnimNotifyState_LockCameraAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_LockCameraAnim), 226969663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LockCameraAnim_h_2066034796(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LockCameraAnim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LockCameraAnim_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LockCameraAnim_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LockCameraAnim_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
