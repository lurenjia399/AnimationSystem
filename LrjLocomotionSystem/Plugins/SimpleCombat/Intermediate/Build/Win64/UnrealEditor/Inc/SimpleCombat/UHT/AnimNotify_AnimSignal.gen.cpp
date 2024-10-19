// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotify/AnimNotify_AnimSignal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_AnimSignal() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_AnimSignal();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_AnimSignal_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotify_AnimSignal
void UAnimNotify_AnimSignal::StaticRegisterNativesUAnimNotify_AnimSignal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_AnimSignal);
UClass* Z_Construct_UClass_UAnimNotify_AnimSignal_NoRegister()
{
	return UAnimNotify_AnimSignal::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_AnimSignal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "AnimSignal" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_AnimSignal.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_AnimSignal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignalValue_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_AnimSignal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignalParam_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_AnimSignal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SignalValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SignalParam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_AnimSignal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimNotify_AnimSignal_Statics::NewProp_SignalValue = { "SignalValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_AnimSignal, SignalValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignalValue_MetaData), NewProp_SignalValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimNotify_AnimSignal_Statics::NewProp_SignalParam = { "SignalParam", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_AnimSignal, SignalParam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignalParam_MetaData), NewProp_SignalParam_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_AnimSignal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_AnimSignal_Statics::NewProp_SignalValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_AnimSignal_Statics::NewProp_SignalParam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_AnimSignal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_AnimSignal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_AnimSignal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_AnimSignal_Statics::ClassParams = {
	&UAnimNotify_AnimSignal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_AnimSignal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_AnimSignal_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_AnimSignal_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_AnimSignal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_AnimSignal()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_AnimSignal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_AnimSignal.OuterSingleton, Z_Construct_UClass_UAnimNotify_AnimSignal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_AnimSignal.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotify_AnimSignal>()
{
	return UAnimNotify_AnimSignal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_AnimSignal);
UAnimNotify_AnimSignal::~UAnimNotify_AnimSignal() {}
// End Class UAnimNotify_AnimSignal

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_AnimSignal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_AnimSignal, UAnimNotify_AnimSignal::StaticClass, TEXT("UAnimNotify_AnimSignal"), &Z_Registration_Info_UClass_UAnimNotify_AnimSignal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_AnimSignal), 3592357401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_AnimSignal_h_3030212784(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_AnimSignal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_AnimSignal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
