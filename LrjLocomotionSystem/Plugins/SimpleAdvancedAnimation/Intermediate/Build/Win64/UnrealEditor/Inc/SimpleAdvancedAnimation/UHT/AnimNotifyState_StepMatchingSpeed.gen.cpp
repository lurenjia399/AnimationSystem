// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAdvancedAnimation/Public/AnimNotifyState/AnimNotifyState_StepMatchingSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_StepMatchingSpeed() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
SIMPLEADVANCEDANIMATION_API UClass* Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed();
SIMPLEADVANCEDANIMATION_API UClass* Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_NoRegister();
SIMPLEADVANCEDANIMATION_API UEnum* Z_Construct_UEnum_SimpleAdvancedAnimation_EAdvancedAnimationPlaneAxis();
UPackage* Z_Construct_UPackage__Script_SimpleAdvancedAnimation();
// End Cross Module References

// Begin Class UAnimNotifyState_StepMatchingSpeed
void UAnimNotifyState_StepMatchingSpeed::StaticRegisterNativesUAnimNotifyState_StepMatchingSpeed()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_StepMatchingSpeed);
UClass* Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_NoRegister()
{
	return UAnimNotifyState_StepMatchingSpeed::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\xbb\xe8\xa6\x81\xe8\xa7\xa3\xe5\x86\xb3\xe9\xab\x98\xe7\xba\xa7\xe5\x8a\xa8\xe7\x94\xbb\xe4\xb8\xad\xe7\x9a\x84\xe6\xbb\x91\xe6\xad\xa5\xe9\x97\xae\xe9\xa2\x98\n" },
#endif
		{ "DisplayName", "StepMatchingSpeed" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_StepMatchingSpeed.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatchingSpeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb\xe8\xa6\x81\xe8\xa7\xa3\xe5\x86\xb3\xe9\xab\x98\xe7\xba\xa7\xe5\x8a\xa8\xe7\x94\xbb\xe4\xb8\xad\xe7\x9a\x84\xe6\xbb\x91\xe6\xad\xa5\xe9\x97\xae\xe9\xa2\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneAxis_MetaData[] = {
		{ "Category", "AnimNotifyState_StepMatching" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatchingSpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ABoneName_MetaData[] = {
		{ "Category", "AnimNotifyState_StepMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x93\xaa\xe4\xb8\xaa\xe9\xaa\xa8\xe9\xaa\xbc\xe5\xbc\x80\xe5\xa7\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatchingSpeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x93\xaa\xe4\xb8\xaa\xe9\xaa\xa8\xe9\xaa\xbc\xe5\xbc\x80\xe5\xa7\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BBoneName_MetaData[] = {
		{ "Category", "AnimNotifyState_StepMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xaa\xa8\xe9\xaa\xbc\xe7\xbb\x93\xe6\x9d\x9f\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatchingSpeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xaa\xa8\xe9\xaa\xbc\xe7\xbb\x93\xe6\x9d\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCrouched_MetaData[] = {
		{ "Category", "AnimNotifyState_StepMatching" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatchingSpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedCoefficient_MetaData[] = {
		{ "Category", "AnimNotifyState_StepMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xae\xa9\xe7\xa7\xbb\xe5\x8a\xa8\xe7\xa8\x8d\xe5\xbe\xae\xe7\xbc\x93\xe8\xa7\xa3\xe4\xb8\x80\xe4\xba\x9b\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatchingSpeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xae\xa9\xe7\xa7\xbb\xe5\x8a\xa8\xe7\xa8\x8d\xe5\xbe\xae\xe7\xbc\x93\xe8\xa7\xa3\xe4\xb8\x80\xe4\xba\x9b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumSampling_MetaData[] = {
		{ "Category", "AnimNotifyState_StepMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\xaf\xe4\xbb\xa5\xe5\xa4\x9a\xe6\xac\xa1\xe9\x80\x9f\xe5\xba\xa6\xe9\x87\x87\xe6\xa0\xb7 \xe6\xb1\x82\xe5\x87\xba\xe4\xb8\x80\xe4\xb8\xaa\xe5\xb9\xb3\xe5\x9d\x87\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatchingSpeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe4\xbb\xa5\xe5\xa4\x9a\xe6\xac\xa1\xe9\x80\x9f\xe5\xba\xa6\xe9\x87\x87\xe6\xa0\xb7 \xe6\xb1\x82\xe5\x87\xba\xe4\xb8\x80\xe4\xb8\xaa\xe5\xb9\xb3\xe5\x9d\x87\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClamp_MetaData[] = {
		{ "Category", "AnimNotifyState_StepMatching" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatchingSpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMin_MetaData[] = {
		{ "Category", "AnimNotifyState_StepMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x80\x9f\xe5\xba\xa6\xe8\x8c\x83\xe5\x9b\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatchingSpeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9f\xe5\xba\xa6\xe8\x8c\x83\xe5\x9b\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMax_MetaData[] = {
		{ "Category", "AnimNotifyState_StepMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x80\x9f\xe5\xba\xa6\xe8\x8c\x83\xe5\x9b\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatchingSpeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9f\xe5\xba\xa6\xe8\x8c\x83\xe5\x9b\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
		{ "Category", "AnimNotifyState_StepMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\xbc\x80\xe5\x90\xaf""debug\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatchingSpeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xbc\x80\xe5\x90\xaf""debug" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementMode_MetaData[] = {
		{ "Category", "Character Movement: MovementMode" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatchingSpeed.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaneAxis;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ABoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BBoneName;
	static void NewProp_bCrouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrouched;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedCoefficient;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumSampling;
	static void NewProp_bClamp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMax;
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_StepMatchingSpeed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_PlaneAxis = { "PlaneAxis", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_StepMatchingSpeed, PlaneAxis), Z_Construct_UEnum_SimpleAdvancedAnimation_EAdvancedAnimationPlaneAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneAxis_MetaData), NewProp_PlaneAxis_MetaData) }; // 2478454880
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_ABoneName = { "ABoneName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_StepMatchingSpeed, ABoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ABoneName_MetaData), NewProp_ABoneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_BBoneName = { "BBoneName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_StepMatchingSpeed, BBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BBoneName_MetaData), NewProp_BBoneName_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_bCrouched_SetBit(void* Obj)
{
	((UAnimNotifyState_StepMatchingSpeed*)Obj)->bCrouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_bCrouched = { "bCrouched", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_StepMatchingSpeed), &Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_bCrouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCrouched_MetaData), NewProp_bCrouched_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_SpeedCoefficient = { "SpeedCoefficient", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_StepMatchingSpeed, SpeedCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedCoefficient_MetaData), NewProp_SpeedCoefficient_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_MaximumSampling = { "MaximumSampling", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_StepMatchingSpeed, MaximumSampling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumSampling_MetaData), NewProp_MaximumSampling_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_bClamp_SetBit(void* Obj)
{
	((UAnimNotifyState_StepMatchingSpeed*)Obj)->bClamp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_bClamp = { "bClamp", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_StepMatchingSpeed), &Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_bClamp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClamp_MetaData), NewProp_bClamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_SpeedMin = { "SpeedMin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_StepMatchingSpeed, SpeedMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMin_MetaData), NewProp_SpeedMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_SpeedMax = { "SpeedMax", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_StepMatchingSpeed, SpeedMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMax_MetaData), NewProp_SpeedMax_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((UAnimNotifyState_StepMatchingSpeed*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_StepMatchingSpeed), &Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebug_MetaData), NewProp_bDebug_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_StepMatchingSpeed, MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementMode_MetaData), NewProp_MovementMode_MetaData) }; // 1967555749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_PlaneAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_ABoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_BBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_bCrouched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_SpeedCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_MaximumSampling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_bClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_SpeedMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_SpeedMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_bDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::NewProp_MovementMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAdvancedAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::ClassParams = {
	&UAnimNotifyState_StepMatchingSpeed::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_StepMatchingSpeed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_StepMatchingSpeed.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_StepMatchingSpeed.OuterSingleton;
}
template<> SIMPLEADVANCEDANIMATION_API UClass* StaticClass<UAnimNotifyState_StepMatchingSpeed>()
{
	return UAnimNotifyState_StepMatchingSpeed::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_StepMatchingSpeed);
UAnimNotifyState_StepMatchingSpeed::~UAnimNotifyState_StepMatchingSpeed() {}
// End Class UAnimNotifyState_StepMatchingSpeed

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_AnimNotifyState_AnimNotifyState_StepMatchingSpeed_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_StepMatchingSpeed, UAnimNotifyState_StepMatchingSpeed::StaticClass, TEXT("UAnimNotifyState_StepMatchingSpeed"), &Z_Registration_Info_UClass_UAnimNotifyState_StepMatchingSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_StepMatchingSpeed), 241510678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_AnimNotifyState_AnimNotifyState_StepMatchingSpeed_h_3820942075(TEXT("/Script/SimpleAdvancedAnimation"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_AnimNotifyState_AnimNotifyState_StepMatchingSpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_AnimNotifyState_AnimNotifyState_StepMatchingSpeed_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
