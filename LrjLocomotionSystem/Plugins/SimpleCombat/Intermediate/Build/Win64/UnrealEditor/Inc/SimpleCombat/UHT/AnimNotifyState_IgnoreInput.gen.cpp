// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_IgnoreInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_IgnoreInput() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_IgnoreInput();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_IgnoreInput_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_IgnoreInput
void UAnimNotifyState_IgnoreInput::StaticRegisterNativesUAnimNotifyState_IgnoreInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_IgnoreInput);
UClass* Z_Construct_UClass_UAnimNotifyState_IgnoreInput_NoRegister()
{
	return UAnimNotifyState_IgnoreInput::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_IgnoreInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "IgnoreInput" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_IgnoreInput.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_IgnoreInput.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_IgnoreInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotifyState_IgnoreInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_IgnoreInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_IgnoreInput_Statics::ClassParams = {
	&UAnimNotifyState_IgnoreInput::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_IgnoreInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_IgnoreInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_IgnoreInput()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_IgnoreInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_IgnoreInput.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_IgnoreInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_IgnoreInput.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_IgnoreInput>()
{
	return UAnimNotifyState_IgnoreInput::StaticClass();
}
UAnimNotifyState_IgnoreInput::UAnimNotifyState_IgnoreInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_IgnoreInput);
UAnimNotifyState_IgnoreInput::~UAnimNotifyState_IgnoreInput() {}
// End Class UAnimNotifyState_IgnoreInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_IgnoreInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_IgnoreInput, UAnimNotifyState_IgnoreInput::StaticClass, TEXT("UAnimNotifyState_IgnoreInput"), &Z_Registration_Info_UClass_UAnimNotifyState_IgnoreInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_IgnoreInput), 2007638478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_IgnoreInput_h_4152526946(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_IgnoreInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_IgnoreInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
