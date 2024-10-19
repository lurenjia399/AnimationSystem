// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleGameplayAbilitiesExtend/Public/Abilities/Cue/Actor/GameplayCueNotify_PlaySound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueNotify_PlaySound() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayCueNotify_Actor();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_AGameplayCueNotify_PlaySound();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_AGameplayCueNotify_PlaySound_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend();
// End Cross Module References

// Begin Class AGameplayCueNotify_PlaySound
void AGameplayCueNotify_PlaySound::StaticRegisterNativesAGameplayCueNotify_PlaySound()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayCueNotify_PlaySound);
UClass* Z_Construct_UClass_AGameplayCueNotify_PlaySound_NoRegister()
{
	return AGameplayCueNotify_PlaySound::StaticClass();
}
struct Z_Construct_UClass_AGameplayCueNotify_PlaySound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Replication" },
		{ "IncludePath", "Abilities/Cue/Actor/GameplayCueNotify_PlaySound.h" },
		{ "ModuleRelativePath", "Public/Abilities/Cue/Actor/GameplayCueNotify_PlaySound.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayCueNotify_PlaySound>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGameplayCueNotify_PlaySound_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayCueNotify_Actor,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_PlaySound_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayCueNotify_PlaySound_Statics::ClassParams = {
	&AGameplayCueNotify_PlaySound::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayCueNotify_PlaySound_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayCueNotify_PlaySound_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameplayCueNotify_PlaySound()
{
	if (!Z_Registration_Info_UClass_AGameplayCueNotify_PlaySound.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayCueNotify_PlaySound.OuterSingleton, Z_Construct_UClass_AGameplayCueNotify_PlaySound_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameplayCueNotify_PlaySound.OuterSingleton;
}
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* StaticClass<AGameplayCueNotify_PlaySound>()
{
	return AGameplayCueNotify_PlaySound::StaticClass();
}
AGameplayCueNotify_PlaySound::AGameplayCueNotify_PlaySound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayCueNotify_PlaySound);
AGameplayCueNotify_PlaySound::~AGameplayCueNotify_PlaySound() {}
// End Class AGameplayCueNotify_PlaySound

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_Cue_Actor_GameplayCueNotify_PlaySound_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayCueNotify_PlaySound, AGameplayCueNotify_PlaySound::StaticClass, TEXT("AGameplayCueNotify_PlaySound"), &Z_Registration_Info_UClass_AGameplayCueNotify_PlaySound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayCueNotify_PlaySound), 3020445460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_Cue_Actor_GameplayCueNotify_PlaySound_h_4250909407(TEXT("/Script/SimpleGameplayAbilitiesExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_Cue_Actor_GameplayCueNotify_PlaySound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_Cue_Actor_GameplayCueNotify_PlaySound_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
