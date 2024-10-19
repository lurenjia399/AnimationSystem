// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_CheckCombo.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_CheckCombo() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_CheckCombo();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_CheckCombo_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_CheckCombo
void UAnimNotifyState_CheckCombo::StaticRegisterNativesUAnimNotifyState_CheckCombo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_CheckCombo);
UClass* Z_Construct_UClass_UAnimNotifyState_CheckCombo_NoRegister()
{
	return UAnimNotifyState_CheckCombo::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_CheckCombo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "CheckCombo" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_CheckCombo.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_CheckCombo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboTagKey_MetaData[] = {
		{ "Category", "AnimNotifyState_CheckCombo" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_CheckCombo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboTagKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_CheckCombo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_CheckCombo_Statics::NewProp_ComboTagKey = { "ComboTagKey", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_CheckCombo, ComboTagKey), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboTagKey_MetaData), NewProp_ComboTagKey_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_CheckCombo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_CheckCombo_Statics::NewProp_ComboTagKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_CheckCombo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_CheckCombo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_CheckCombo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_CheckCombo_Statics::ClassParams = {
	&UAnimNotifyState_CheckCombo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_CheckCombo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_CheckCombo_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_CheckCombo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_CheckCombo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_CheckCombo()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_CheckCombo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_CheckCombo.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_CheckCombo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_CheckCombo.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_CheckCombo>()
{
	return UAnimNotifyState_CheckCombo::StaticClass();
}
UAnimNotifyState_CheckCombo::UAnimNotifyState_CheckCombo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_CheckCombo);
UAnimNotifyState_CheckCombo::~UAnimNotifyState_CheckCombo() {}
// End Class UAnimNotifyState_CheckCombo

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_CheckCombo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_CheckCombo, UAnimNotifyState_CheckCombo::StaticClass, TEXT("UAnimNotifyState_CheckCombo"), &Z_Registration_Info_UClass_UAnimNotifyState_CheckCombo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_CheckCombo), 871360393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_CheckCombo_h_3791823777(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_CheckCombo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_CheckCombo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
