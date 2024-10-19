// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotify/AnimNotify_StopAnimMontage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_StopAnimMontage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_StopAnimMontage();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_StopAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotify_StopAnimMontage
void UAnimNotify_StopAnimMontage::StaticRegisterNativesUAnimNotify_StopAnimMontage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_StopAnimMontage);
UClass* Z_Construct_UClass_UAnimNotify_StopAnimMontage_NoRegister()
{
	return UAnimNotify_StopAnimMontage::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_StopAnimMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "StopAnimMontage" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_StopAnimMontage.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_StopAnimMontage.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_StopAnimMontage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotify_StopAnimMontage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_StopAnimMontage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_StopAnimMontage_Statics::ClassParams = {
	&UAnimNotify_StopAnimMontage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_StopAnimMontage_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_StopAnimMontage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_StopAnimMontage()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_StopAnimMontage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_StopAnimMontage.OuterSingleton, Z_Construct_UClass_UAnimNotify_StopAnimMontage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_StopAnimMontage.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotify_StopAnimMontage>()
{
	return UAnimNotify_StopAnimMontage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_StopAnimMontage);
UAnimNotify_StopAnimMontage::~UAnimNotify_StopAnimMontage() {}
// End Class UAnimNotify_StopAnimMontage

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_StopAnimMontage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_StopAnimMontage, UAnimNotify_StopAnimMontage::StaticClass, TEXT("UAnimNotify_StopAnimMontage"), &Z_Registration_Info_UClass_UAnimNotify_StopAnimMontage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_StopAnimMontage), 3650915024U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_StopAnimMontage_h_4188599367(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_StopAnimMontage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_StopAnimMontage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
