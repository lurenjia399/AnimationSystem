// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotify/AnimNotify_PlayGameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PlayGameplayEffect() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_PlayGameplayEffect();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_NoRegister();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UCustomReleasingBuffTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotify_PlayGameplayEffect
void UAnimNotify_PlayGameplayEffect::StaticRegisterNativesUAnimNotify_PlayGameplayEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_PlayGameplayEffect);
UClass* Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_NoRegister()
{
	return UAnimNotify_PlayGameplayEffect::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "PlayGameplayEffect" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_PlayGameplayEffect.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_PlayGameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectClass_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_PlayGameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomReleasingBuffTarget_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_PlayGameplayEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTarget_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_PlayGameplayEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomReleasingBuffTarget;
	static void NewProp_bTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PlayGameplayEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_PlayGameplayEffect, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectClass_MetaData), NewProp_EffectClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::NewProp_CustomReleasingBuffTarget = { "CustomReleasingBuffTarget", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_PlayGameplayEffect, CustomReleasingBuffTarget), Z_Construct_UClass_UClass, Z_Construct_UClass_UCustomReleasingBuffTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomReleasingBuffTarget_MetaData), NewProp_CustomReleasingBuffTarget_MetaData) };
void Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::NewProp_bTarget_SetBit(void* Obj)
{
	((UAnimNotify_PlayGameplayEffect*)Obj)->bTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::NewProp_bTarget = { "bTarget", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_PlayGameplayEffect), &Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::NewProp_bTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTarget_MetaData), NewProp_bTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::NewProp_EffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::NewProp_CustomReleasingBuffTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::NewProp_bTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::ClassParams = {
	&UAnimNotify_PlayGameplayEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_PlayGameplayEffect()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_PlayGameplayEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_PlayGameplayEffect.OuterSingleton, Z_Construct_UClass_UAnimNotify_PlayGameplayEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_PlayGameplayEffect.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotify_PlayGameplayEffect>()
{
	return UAnimNotify_PlayGameplayEffect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlayGameplayEffect);
UAnimNotify_PlayGameplayEffect::~UAnimNotify_PlayGameplayEffect() {}
// End Class UAnimNotify_PlayGameplayEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_PlayGameplayEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_PlayGameplayEffect, UAnimNotify_PlayGameplayEffect::StaticClass, TEXT("UAnimNotify_PlayGameplayEffect"), &Z_Registration_Info_UClass_UAnimNotify_PlayGameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_PlayGameplayEffect), 380642074U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_PlayGameplayEffect_h_3275288122(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_PlayGameplayEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_PlayGameplayEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
