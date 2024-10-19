// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAdvancedAnimation/Public/SimpleAdvancedAnimationType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleAdvancedAnimationType() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
SIMPLEADVANCEDANIMATION_API UEnum* Z_Construct_UEnum_SimpleAdvancedAnimation_EAdvancedAnimationPlaneAxis();
SIMPLEADVANCEDANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FFootIKInfo();
SIMPLEADVANCEDANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FFootStepInfo();
UPackage* Z_Construct_UPackage__Script_SimpleAdvancedAnimation();
// End Cross Module References

// Begin Enum EAdvancedAnimationPlaneAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAdvancedAnimationPlaneAxis;
static UEnum* EAdvancedAnimationPlaneAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAdvancedAnimationPlaneAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAdvancedAnimationPlaneAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleAdvancedAnimation_EAdvancedAnimationPlaneAxis, (UObject*)Z_Construct_UPackage__Script_SimpleAdvancedAnimation(), TEXT("EAdvancedAnimationPlaneAxis"));
	}
	return Z_Registration_Info_UEnum_EAdvancedAnimationPlaneAxis.OuterSingleton;
}
template<> SIMPLEADVANCEDANIMATION_API UEnum* StaticEnum<EAdvancedAnimationPlaneAxis::Type>()
{
	return EAdvancedAnimationPlaneAxis_StaticEnum();
}
struct Z_Construct_UEnum_SimpleAdvancedAnimation_EAdvancedAnimationPlaneAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb9\xb3\xe9\x9d\xa2\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAdvancedAnimationType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb9\xb3\xe9\x9d\xa2" },
#endif
		{ "XY.Name", "EAdvancedAnimationPlaneAxis::XY" },
		{ "XZ.Comment", "//XY\n" },
		{ "XZ.Name", "EAdvancedAnimationPlaneAxis::XZ" },
		{ "XZ.ToolTip", "XY" },
		{ "YZ.Comment", "//XZ\n" },
		{ "YZ.Name", "EAdvancedAnimationPlaneAxis::YZ" },
		{ "YZ.ToolTip", "XZ" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAdvancedAnimationPlaneAxis::XY", (int64)EAdvancedAnimationPlaneAxis::XY },
		{ "EAdvancedAnimationPlaneAxis::XZ", (int64)EAdvancedAnimationPlaneAxis::XZ },
		{ "EAdvancedAnimationPlaneAxis::YZ", (int64)EAdvancedAnimationPlaneAxis::YZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleAdvancedAnimation_EAdvancedAnimationPlaneAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleAdvancedAnimation,
	nullptr,
	"EAdvancedAnimationPlaneAxis",
	"EAdvancedAnimationPlaneAxis::Type",
	Z_Construct_UEnum_SimpleAdvancedAnimation_EAdvancedAnimationPlaneAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAdvancedAnimation_EAdvancedAnimationPlaneAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAdvancedAnimation_EAdvancedAnimationPlaneAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleAdvancedAnimation_EAdvancedAnimationPlaneAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleAdvancedAnimation_EAdvancedAnimationPlaneAxis()
{
	if (!Z_Registration_Info_UEnum_EAdvancedAnimationPlaneAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAdvancedAnimationPlaneAxis.InnerSingleton, Z_Construct_UEnum_SimpleAdvancedAnimation_EAdvancedAnimationPlaneAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAdvancedAnimationPlaneAxis.InnerSingleton;
}
// End Enum EAdvancedAnimationPlaneAxis

// Begin ScriptStruct FFootIKInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FootIKInfo;
class UScriptStruct* FFootIKInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FootIKInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FootIKInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootIKInfo, (UObject*)Z_Construct_UPackage__Script_SimpleAdvancedAnimation(), TEXT("FootIKInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FootIKInfo.OuterSingleton;
}
template<> SIMPLEADVANCEDANIMATION_API UScriptStruct* StaticStruct<FFootIKInfo>()
{
	return FFootIKInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFootIKInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleAdvancedAnimationType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "SimpleAdvancedAnimation|FootIKInfo" },
		{ "ModuleRelativePath", "Public/SimpleAdvancedAnimationType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootIKInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootIKInfo_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootIKInfo, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootIKInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootIKInfo_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootIKInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootIKInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAdvancedAnimation,
	nullptr,
	&NewStructOps,
	"FootIKInfo",
	Z_Construct_UScriptStruct_FFootIKInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootIKInfo_Statics::PropPointers),
	sizeof(FFootIKInfo),
	alignof(FFootIKInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootIKInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFootIKInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFootIKInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FootIKInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FootIKInfo.InnerSingleton, Z_Construct_UScriptStruct_FFootIKInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FootIKInfo.InnerSingleton;
}
// End ScriptStruct FFootIKInfo

// Begin ScriptStruct FFootStepInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FootStepInfo;
class UScriptStruct* FFootStepInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FootStepInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FootStepInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootStepInfo, (UObject*)Z_Construct_UPackage__Script_SimpleAdvancedAnimation(), TEXT("FootStepInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FootStepInfo.OuterSingleton;
}
template<> SIMPLEADVANCEDANIMATION_API UScriptStruct* StaticStruct<FFootStepInfo>()
{
	return FFootStepInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFootStepInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleAdvancedAnimationType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "SimpleAdvancedAnimation|FootStep" },
		{ "ModuleRelativePath", "Public/SimpleAdvancedAnimationType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalLocation_MetaData[] = {
		{ "Category", "SimpleAdvancedAnimation|FootStep" },
		{ "ModuleRelativePath", "Public/SimpleAdvancedAnimationType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateAlpha_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x92\x88\xe5\xaf\xb9\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84""Alpha\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAdvancedAnimationType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x92\x88\xe5\xaf\xb9\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84""Alpha" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "SimpleAdvancedAnimation|FootStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x96\xe5\x90\x91""Alpha\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAdvancedAnimationType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x96\xe5\x90\x91""Alpha" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalLocation;
	static void NewProp_bUpdateAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootStepInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootStepInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootStepInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootStepInfo_Statics::NewProp_LocalLocation = { "LocalLocation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootStepInfo, LocalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalLocation_MetaData), NewProp_LocalLocation_MetaData) };
void Z_Construct_UScriptStruct_FFootStepInfo_Statics::NewProp_bUpdateAlpha_SetBit(void* Obj)
{
	((FFootStepInfo*)Obj)->bUpdateAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFootStepInfo_Statics::NewProp_bUpdateAlpha = { "bUpdateAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFootStepInfo), &Z_Construct_UScriptStruct_FFootStepInfo_Statics::NewProp_bUpdateAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateAlpha_MetaData), NewProp_bUpdateAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootStepInfo_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFootStepInfo, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootStepInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootStepInfo_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootStepInfo_Statics::NewProp_LocalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootStepInfo_Statics::NewProp_bUpdateAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootStepInfo_Statics::NewProp_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootStepInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootStepInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAdvancedAnimation,
	nullptr,
	&NewStructOps,
	"FootStepInfo",
	Z_Construct_UScriptStruct_FFootStepInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootStepInfo_Statics::PropPointers),
	sizeof(FFootStepInfo),
	alignof(FFootStepInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootStepInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFootStepInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFootStepInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FootStepInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FootStepInfo.InnerSingleton, Z_Construct_UScriptStruct_FFootStepInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FootStepInfo.InnerSingleton;
}
// End ScriptStruct FFootStepInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAdvancedAnimationPlaneAxis_StaticEnum, TEXT("EAdvancedAnimationPlaneAxis"), &Z_Registration_Info_UEnum_EAdvancedAnimationPlaneAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2478454880U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFootIKInfo::StaticStruct, Z_Construct_UScriptStruct_FFootIKInfo_Statics::NewStructOps, TEXT("FootIKInfo"), &Z_Registration_Info_UScriptStruct_FootIKInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFootIKInfo), 681663154U) },
		{ FFootStepInfo::StaticStruct, Z_Construct_UScriptStruct_FFootStepInfo_Statics::NewStructOps, TEXT("FootStepInfo"), &Z_Registration_Info_UScriptStruct_FootStepInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFootStepInfo), 2868802573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationType_h_1418829869(TEXT("/Script/SimpleAdvancedAnimation"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationType_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
