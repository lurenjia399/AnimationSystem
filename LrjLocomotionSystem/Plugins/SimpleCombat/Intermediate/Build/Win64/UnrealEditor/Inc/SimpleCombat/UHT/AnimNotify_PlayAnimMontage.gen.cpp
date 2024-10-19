// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotify/AnimNotify_PlayAnimMontage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PlayAnimMontage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_PlayAnimMontage();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_PlayAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotify_PlayAnimMontage
void UAnimNotify_PlayAnimMontage::StaticRegisterNativesUAnimNotify_PlayAnimMontage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_PlayAnimMontage);
UClass* Z_Construct_UClass_UAnimNotify_PlayAnimMontage_NoRegister()
{
	return UAnimNotify_PlayAnimMontage::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_PlayAnimMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "PlayAnimMontage" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_PlayAnimMontage.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_PlayAnimMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_PlayAnimMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_PlayAnimMontage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PlayAnimMontage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_PlayAnimMontage_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_PlayAnimMontage, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_PlayAnimMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_PlayAnimMontage, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_PlayAnimMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayAnimMontage_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayAnimMontage_Statics::NewProp_PlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayAnimMontage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_PlayAnimMontage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayAnimMontage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PlayAnimMontage_Statics::ClassParams = {
	&UAnimNotify_PlayAnimMontage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_PlayAnimMontage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayAnimMontage_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayAnimMontage_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_PlayAnimMontage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_PlayAnimMontage()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_PlayAnimMontage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_PlayAnimMontage.OuterSingleton, Z_Construct_UClass_UAnimNotify_PlayAnimMontage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_PlayAnimMontage.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotify_PlayAnimMontage>()
{
	return UAnimNotify_PlayAnimMontage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlayAnimMontage);
UAnimNotify_PlayAnimMontage::~UAnimNotify_PlayAnimMontage() {}
// End Class UAnimNotify_PlayAnimMontage

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_PlayAnimMontage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_PlayAnimMontage, UAnimNotify_PlayAnimMontage::StaticClass, TEXT("UAnimNotify_PlayAnimMontage"), &Z_Registration_Info_UClass_UAnimNotify_PlayAnimMontage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_PlayAnimMontage), 1538811926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_PlayAnimMontage_h_2496002011(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_PlayAnimMontage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_PlayAnimMontage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
