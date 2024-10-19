// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_StopAnimMontage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_StopAnimMontage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_StopAnimMontage();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_StopAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_StopAnimMontage
void UAnimNotifyState_StopAnimMontage::StaticRegisterNativesUAnimNotifyState_StopAnimMontage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_StopAnimMontage);
UClass* Z_Construct_UClass_UAnimNotifyState_StopAnimMontage_NoRegister()
{
	return UAnimNotifyState_StopAnimMontage::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_StopAnimMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "StopAnimMontage" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_StopAnimMontage.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StopAnimMontage.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_StopAnimMontage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotifyState_StopAnimMontage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_StopAnimMontage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_StopAnimMontage_Statics::ClassParams = {
	&UAnimNotifyState_StopAnimMontage::StaticClass,
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
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_StopAnimMontage_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_StopAnimMontage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_StopAnimMontage()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_StopAnimMontage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_StopAnimMontage.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_StopAnimMontage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_StopAnimMontage.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_StopAnimMontage>()
{
	return UAnimNotifyState_StopAnimMontage::StaticClass();
}
UAnimNotifyState_StopAnimMontage::UAnimNotifyState_StopAnimMontage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_StopAnimMontage);
UAnimNotifyState_StopAnimMontage::~UAnimNotifyState_StopAnimMontage() {}
// End Class UAnimNotifyState_StopAnimMontage

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_StopAnimMontage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_StopAnimMontage, UAnimNotifyState_StopAnimMontage::StaticClass, TEXT("UAnimNotifyState_StopAnimMontage"), &Z_Registration_Info_UClass_UAnimNotifyState_StopAnimMontage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_StopAnimMontage), 2086366895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_StopAnimMontage_h_2036534294(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_StopAnimMontage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_StopAnimMontage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
