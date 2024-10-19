// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotify/AnimNotify_ResidualShadow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_ResidualShadow() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_AResidualShadowActor_NoRegister();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_ResidualShadow();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_ResidualShadow_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotify_ResidualShadow
void UAnimNotify_ResidualShadow::StaticRegisterNativesUAnimNotify_ResidualShadow()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_ResidualShadow);
UClass* Z_Construct_UClass_UAnimNotify_ResidualShadow_NoRegister()
{
	return UAnimNotify_ResidualShadow::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_ResidualShadow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "ResidualShadow" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_ResidualShadow.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ResidualShadow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResidualShadowClass_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ResidualShadow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResidualShadowLifeTime_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ResidualShadow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ResidualShadowClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResidualShadowLifeTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_ResidualShadow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotify_ResidualShadow_Statics::NewProp_ResidualShadowClass = { "ResidualShadowClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ResidualShadow, ResidualShadowClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AResidualShadowActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResidualShadowClass_MetaData), NewProp_ResidualShadowClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_ResidualShadow_Statics::NewProp_ResidualShadowLifeTime = { "ResidualShadowLifeTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ResidualShadow, ResidualShadowLifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResidualShadowLifeTime_MetaData), NewProp_ResidualShadowLifeTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_ResidualShadow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ResidualShadow_Statics::NewProp_ResidualShadowClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ResidualShadow_Statics::NewProp_ResidualShadowLifeTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ResidualShadow_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_ResidualShadow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ResidualShadow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_ResidualShadow_Statics::ClassParams = {
	&UAnimNotify_ResidualShadow::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_ResidualShadow_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ResidualShadow_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ResidualShadow_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_ResidualShadow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_ResidualShadow()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_ResidualShadow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_ResidualShadow.OuterSingleton, Z_Construct_UClass_UAnimNotify_ResidualShadow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_ResidualShadow.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotify_ResidualShadow>()
{
	return UAnimNotify_ResidualShadow::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_ResidualShadow);
UAnimNotify_ResidualShadow::~UAnimNotify_ResidualShadow() {}
// End Class UAnimNotify_ResidualShadow

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_ResidualShadow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_ResidualShadow, UAnimNotify_ResidualShadow::StaticClass, TEXT("UAnimNotify_ResidualShadow"), &Z_Registration_Info_UClass_UAnimNotify_ResidualShadow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_ResidualShadow), 338501045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_ResidualShadow_h_1095712661(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_ResidualShadow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_ResidualShadow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
