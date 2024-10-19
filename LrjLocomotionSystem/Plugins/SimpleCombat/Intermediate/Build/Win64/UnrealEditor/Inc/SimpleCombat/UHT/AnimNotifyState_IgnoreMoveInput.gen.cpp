// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_IgnoreMoveInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_IgnoreMoveInput() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_IgnoreMoveInput();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_IgnoreMoveInput_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_IgnoreMoveInput
void UAnimNotifyState_IgnoreMoveInput::StaticRegisterNativesUAnimNotifyState_IgnoreMoveInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_IgnoreMoveInput);
UClass* Z_Construct_UClass_UAnimNotifyState_IgnoreMoveInput_NoRegister()
{
	return UAnimNotifyState_IgnoreMoveInput::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_IgnoreMoveInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "IgnoreMoveInput" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_IgnoreMoveInput.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_IgnoreMoveInput.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_IgnoreMoveInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotifyState_IgnoreMoveInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_IgnoreMoveInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_IgnoreMoveInput_Statics::ClassParams = {
	&UAnimNotifyState_IgnoreMoveInput::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_IgnoreMoveInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_IgnoreMoveInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_IgnoreMoveInput()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_IgnoreMoveInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_IgnoreMoveInput.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_IgnoreMoveInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_IgnoreMoveInput.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_IgnoreMoveInput>()
{
	return UAnimNotifyState_IgnoreMoveInput::StaticClass();
}
UAnimNotifyState_IgnoreMoveInput::UAnimNotifyState_IgnoreMoveInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_IgnoreMoveInput);
UAnimNotifyState_IgnoreMoveInput::~UAnimNotifyState_IgnoreMoveInput() {}
// End Class UAnimNotifyState_IgnoreMoveInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_IgnoreMoveInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_IgnoreMoveInput, UAnimNotifyState_IgnoreMoveInput::StaticClass, TEXT("UAnimNotifyState_IgnoreMoveInput"), &Z_Registration_Info_UClass_UAnimNotifyState_IgnoreMoveInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_IgnoreMoveInput), 1416033549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_IgnoreMoveInput_h_1636860286(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_IgnoreMoveInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_IgnoreMoveInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
