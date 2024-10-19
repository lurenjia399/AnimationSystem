// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_SpringArm.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_SpringArm() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_SpringArm();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_SpringArm_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_SpringArm
void UAnimNotifyState_SpringArm::StaticRegisterNativesUAnimNotifyState_SpringArm()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_SpringArm);
UClass* Z_Construct_UClass_UAnimNotifyState_SpringArm_NoRegister()
{
	return UAnimNotifyState_SpringArm::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_SpringArm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "SpringArm" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_SpringArm.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_SpringArm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentArmLength_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_SpringArm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetArmLength_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_SpringArm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetArmLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_SpringArm>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_SpringArm_Statics::NewProp_CurrentArmLength = { "CurrentArmLength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_SpringArm, CurrentArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentArmLength_MetaData), NewProp_CurrentArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_SpringArm_Statics::NewProp_TargetArmLength = { "TargetArmLength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_SpringArm, TargetArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetArmLength_MetaData), NewProp_TargetArmLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_SpringArm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_SpringArm_Statics::NewProp_CurrentArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_SpringArm_Statics::NewProp_TargetArmLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_SpringArm_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_SpringArm_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_SpringArm_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_SpringArm_Statics::ClassParams = {
	&UAnimNotifyState_SpringArm::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_SpringArm_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_SpringArm_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_SpringArm_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_SpringArm_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_SpringArm()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_SpringArm.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_SpringArm.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_SpringArm_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_SpringArm.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_SpringArm>()
{
	return UAnimNotifyState_SpringArm::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_SpringArm);
UAnimNotifyState_SpringArm::~UAnimNotifyState_SpringArm() {}
// End Class UAnimNotifyState_SpringArm

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_SpringArm_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_SpringArm, UAnimNotifyState_SpringArm::StaticClass, TEXT("UAnimNotifyState_SpringArm"), &Z_Registration_Info_UClass_UAnimNotifyState_SpringArm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_SpringArm), 1146963629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_SpringArm_h_486804905(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_SpringArm_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_SpringArm_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
