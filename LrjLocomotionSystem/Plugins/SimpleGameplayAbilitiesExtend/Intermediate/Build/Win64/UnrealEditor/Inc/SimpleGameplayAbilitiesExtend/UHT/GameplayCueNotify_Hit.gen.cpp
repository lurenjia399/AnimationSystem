// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleGameplayAbilitiesExtend/Public/Abilities/Cue/Actor/GameplayCueNotify_Hit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueNotify_Hit() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_Actor();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_AGameplayCueNotify_Hit();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_AGameplayCueNotify_Hit_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend();
// End Cross Module References

// Begin Class AGameplayCueNotify_Hit
void AGameplayCueNotify_Hit::StaticRegisterNativesAGameplayCueNotify_Hit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayCueNotify_Hit);
UClass* Z_Construct_UClass_AGameplayCueNotify_Hit_NoRegister()
{
	return AGameplayCueNotify_Hit::StaticClass();
}
struct Z_Construct_UClass_AGameplayCueNotify_Hit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Replication" },
		{ "IncludePath", "Abilities/Cue/Actor/GameplayCueNotify_Hit.h" },
		{ "ModuleRelativePath", "Public/Abilities/Cue/Actor/GameplayCueNotify_Hit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitEmitterTemplate_MetaData[] = {
		{ "Category", "GA Hit" },
		{ "ModuleRelativePath", "Public/Abilities/Cue/Actor/GameplayCueNotify_Hit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitNiagaraTemplate_MetaData[] = {
		{ "Category", "GA Hit" },
		{ "ModuleRelativePath", "Public/Abilities/Cue/Actor/GameplayCueNotify_Hit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitEmitterTemplate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitNiagaraTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayCueNotify_Hit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayCueNotify_Hit_Statics::NewProp_HitEmitterTemplate = { "HitEmitterTemplate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_Hit, HitEmitterTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitEmitterTemplate_MetaData), NewProp_HitEmitterTemplate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayCueNotify_Hit_Statics::NewProp_HitNiagaraTemplate = { "HitNiagaraTemplate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayCueNotify_Hit, HitNiagaraTemplate), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitNiagaraTemplate_MetaData), NewProp_HitNiagaraTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayCueNotify_Hit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Hit_Statics::NewProp_HitEmitterTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayCueNotify_Hit_Statics::NewProp_HitNiagaraTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_Hit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameplayCueNotify_Hit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayCueNotify_Actor,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_Hit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayCueNotify_Hit_Statics::ClassParams = {
	&AGameplayCueNotify_Hit::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameplayCueNotify_Hit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_Hit_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_Hit_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayCueNotify_Hit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameplayCueNotify_Hit()
{
	if (!Z_Registration_Info_UClass_AGameplayCueNotify_Hit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayCueNotify_Hit.OuterSingleton, Z_Construct_UClass_AGameplayCueNotify_Hit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameplayCueNotify_Hit.OuterSingleton;
}
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* StaticClass<AGameplayCueNotify_Hit>()
{
	return AGameplayCueNotify_Hit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayCueNotify_Hit);
AGameplayCueNotify_Hit::~AGameplayCueNotify_Hit() {}
// End Class AGameplayCueNotify_Hit

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_Cue_Actor_GameplayCueNotify_Hit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayCueNotify_Hit, AGameplayCueNotify_Hit::StaticClass, TEXT("AGameplayCueNotify_Hit"), &Z_Registration_Info_UClass_AGameplayCueNotify_Hit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayCueNotify_Hit), 2719764318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_Cue_Actor_GameplayCueNotify_Hit_h_3923839384(TEXT("/Script/SimpleGameplayAbilitiesExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_Cue_Actor_GameplayCueNotify_Hit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_Cue_Actor_GameplayCueNotify_Hit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
