// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleGameplayAbilitiesExtend/Public/Abilities/SimpleAbilityGameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleAbilityGameplayEffect() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleAbilityGameplayEffect();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleAbilityGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend();
// End Cross Module References

// Begin Class USimpleAbilityGameplayEffect
void USimpleAbilityGameplayEffect::StaticRegisterNativesUSimpleAbilityGameplayEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleAbilityGameplayEffect);
UClass* Z_Construct_UClass_USimpleAbilityGameplayEffect_NoRegister()
{
	return USimpleAbilityGameplayEffect::StaticClass();
}
struct Z_Construct_UClass_USimpleAbilityGameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/SimpleAbilityGameplayEffect.h" },
		{ "ModuleRelativePath", "Public/Abilities/SimpleAbilityGameplayEffect.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GETag_MetaData[] = {
		{ "Category", "Tip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\xa8\xe4\xba\x8eUI\xe6\x9f\xa5\xe6\x89\xbe\xe6\x95\xb0\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SimpleAbilityGameplayEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8eUI\xe6\x9f\xa5\xe6\x89\xbe\xe6\x95\xb0\xe5\x80\xbc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GETag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleAbilityGameplayEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USimpleAbilityGameplayEffect_Statics::NewProp_GETag = { "GETag", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleAbilityGameplayEffect, GETag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GETag_MetaData), NewProp_GETag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleAbilityGameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleAbilityGameplayEffect_Statics::NewProp_GETag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAbilityGameplayEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleAbilityGameplayEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAbilityGameplayEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleAbilityGameplayEffect_Statics::ClassParams = {
	&USimpleAbilityGameplayEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USimpleAbilityGameplayEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAbilityGameplayEffect_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAbilityGameplayEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleAbilityGameplayEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleAbilityGameplayEffect()
{
	if (!Z_Registration_Info_UClass_USimpleAbilityGameplayEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleAbilityGameplayEffect.OuterSingleton, Z_Construct_UClass_USimpleAbilityGameplayEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleAbilityGameplayEffect.OuterSingleton;
}
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* StaticClass<USimpleAbilityGameplayEffect>()
{
	return USimpleAbilityGameplayEffect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleAbilityGameplayEffect);
USimpleAbilityGameplayEffect::~USimpleAbilityGameplayEffect() {}
// End Class USimpleAbilityGameplayEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleAbilityGameplayEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleAbilityGameplayEffect, USimpleAbilityGameplayEffect::StaticClass, TEXT("USimpleAbilityGameplayEffect"), &Z_Registration_Info_UClass_USimpleAbilityGameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleAbilityGameplayEffect), 1355754256U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleAbilityGameplayEffect_h_1575167276(TEXT("/Script/SimpleGameplayAbilitiesExtend"),
	Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleAbilityGameplayEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleAbilityGameplayEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
