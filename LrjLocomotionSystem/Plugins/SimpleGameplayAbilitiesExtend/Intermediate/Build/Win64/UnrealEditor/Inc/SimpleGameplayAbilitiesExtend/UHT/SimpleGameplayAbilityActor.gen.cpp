// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleGameplayAbilitiesExtend/Public/Abilities/SimpleGameplayAbilityActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleGameplayAbilityActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleGameplayAbility();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleGameplayAbilityActor();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleGameplayAbilityActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend();
// End Cross Module References

// Begin Class USimpleGameplayAbilityActor
void USimpleGameplayAbilityActor::StaticRegisterNativesUSimpleGameplayAbilityActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleGameplayAbilityActor);
UClass* Z_Construct_UClass_USimpleGameplayAbilityActor_NoRegister()
{
	return USimpleGameplayAbilityActor::StaticClass();
}
struct Z_Construct_UClass_USimpleGameplayAbilityActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/SimpleGameplayAbilityActor.h" },
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorToPlay_MetaData[] = {
		{ "Category", "MontageAbility" },
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleGameplayAbilityActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USimpleGameplayAbilityActor_Statics::NewProp_ActorToPlay = { "ActorToPlay", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleGameplayAbilityActor, ActorToPlay), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorToPlay_MetaData), NewProp_ActorToPlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleGameplayAbilityActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleGameplayAbilityActor_Statics::NewProp_ActorToPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleGameplayAbilityActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleGameplayAbilityActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USimpleGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleGameplayAbilityActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleGameplayAbilityActor_Statics::ClassParams = {
	&USimpleGameplayAbilityActor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USimpleGameplayAbilityActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleGameplayAbilityActor_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleGameplayAbilityActor_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleGameplayAbilityActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleGameplayAbilityActor()
{
	if (!Z_Registration_Info_UClass_USimpleGameplayAbilityActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleGameplayAbilityActor.OuterSingleton, Z_Construct_UClass_USimpleGameplayAbilityActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleGameplayAbilityActor.OuterSingleton;
}
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* StaticClass<USimpleGameplayAbilityActor>()
{
	return USimpleGameplayAbilityActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleGameplayAbilityActor);
USimpleGameplayAbilityActor::~USimpleGameplayAbilityActor() {}
// End Class USimpleGameplayAbilityActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleGameplayAbilityActor, USimpleGameplayAbilityActor::StaticClass, TEXT("USimpleGameplayAbilityActor"), &Z_Registration_Info_UClass_USimpleGameplayAbilityActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleGameplayAbilityActor), 3137305287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityActor_h_630840519(TEXT("/Script/SimpleGameplayAbilitiesExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
