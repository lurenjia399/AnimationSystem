// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_AttachPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_AttachPoint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_AttachPoint();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_AttachPoint_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_AttachPoint
void UAnimNotifyState_AttachPoint::StaticRegisterNativesUAnimNotifyState_AttachPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_AttachPoint);
UClass* Z_Construct_UClass_UAnimNotifyState_AttachPoint_NoRegister()
{
	return UAnimNotifyState_AttachPoint::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\xbf\xab\xe9\x80\x9f\xe4\xb8\x8e\xe7\x9b\xae\xe6\xa0\x87\xe7\xbc\xa9\xe7\x9f\xad\xe8\xb7\x9d\xe7\xa6\xbb\n */" },
#endif
		{ "DisplayName", "AttachPoint" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_AttachPoint.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_AttachPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbf\xab\xe9\x80\x9f\xe4\xb8\x8e\xe7\x9b\xae\xe6\xa0\x87\xe7\xbc\xa9\xe7\x9f\xad\xe8\xb7\x9d\xe7\xa6\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "AnimNotifyState_AttachPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa6\xbb\xe7\x9b\xae\xe6\xa0\x87\xe8\xb7\x9d\xe7\xa6\xbb\xe6\x98\xaf\xe5\xa4\x9a\xe5\xb0\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_AttachPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa6\xbb\xe7\x9b\xae\xe6\xa0\x87\xe8\xb7\x9d\xe7\xa6\xbb\xe6\x98\xaf\xe5\xa4\x9a\xe5\xb0\x91" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
		{ "Category", "AnimNotifyState_AttachPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x86\xe9\x87\x8e\xe8\xa7\x92\xe5\xba\xa6 \xe8\xa7\xa6\xe5\x8f\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_AttachPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x86\xe9\x87\x8e\xe8\xa7\x92\xe5\xba\xa6 \xe8\xa7\xa6\xe5\x8f\x91" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachPointTag_MetaData[] = {
		{ "Category", "AnimNotifyState_AttachPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xba\xab\xe4\xbb\xbd\xe6\xa0\x87\xe8\xaf\x86\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_AttachPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xba\xab\xe4\xbb\xbd\xe6\xa0\x87\xe8\xaf\x86" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPointTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_AttachPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_AttachPoint, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_AttachPoint, Angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Angle_MetaData), NewProp_Angle_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics::NewProp_AttachPointTag = { "AttachPointTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_AttachPoint, AttachPointTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachPointTag_MetaData), NewProp_AttachPointTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics::NewProp_Angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics::NewProp_AttachPointTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics::ClassParams = {
	&UAnimNotifyState_AttachPoint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_AttachPoint()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_AttachPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_AttachPoint.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_AttachPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_AttachPoint.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_AttachPoint>()
{
	return UAnimNotifyState_AttachPoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_AttachPoint);
UAnimNotifyState_AttachPoint::~UAnimNotifyState_AttachPoint() {}
// End Class UAnimNotifyState_AttachPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_AttachPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_AttachPoint, UAnimNotifyState_AttachPoint::StaticClass, TEXT("UAnimNotifyState_AttachPoint"), &Z_Registration_Info_UClass_UAnimNotifyState_AttachPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_AttachPoint), 2553539970U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_AttachPoint_h_1408383063(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_AttachPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_AttachPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
