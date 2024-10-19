// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleGameplayAbilitiesExtend/Public/Abilities/SimpleAbilitySystemComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleAbilitySystemComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleAbilitySystemComponent();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend();
// End Cross Module References

// Begin Class USimpleAbilitySystemComponent
void USimpleAbilitySystemComponent::StaticRegisterNativesUSimpleAbilitySystemComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleAbilitySystemComponent);
UClass* Z_Construct_UClass_USimpleAbilitySystemComponent_NoRegister()
{
	return USimpleAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_USimpleAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Abilities/SimpleAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/Abilities/SimpleAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActiveSkillTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/SimpleAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/SimpleAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentActiveSkillTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleAbilitySystemComponent_Statics::NewProp_CurrentActiveSkillTags = { "CurrentActiveSkillTags", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleAbilitySystemComponent, CurrentActiveSkillTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActiveSkillTags_MetaData), NewProp_CurrentActiveSkillTags_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleAbilitySystemComponent_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleAbilitySystemComponent, CurrentTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTime_MetaData), NewProp_CurrentTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleAbilitySystemComponent_Statics::NewProp_CurrentActiveSkillTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleAbilitySystemComponent_Statics::NewProp_CurrentTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAbilitySystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleAbilitySystemComponent_Statics::ClassParams = {
	&USimpleAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USimpleAbilitySystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAbilitySystemComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_USimpleAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_USimpleAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleAbilitySystemComponent.OuterSingleton;
}
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* StaticClass<USimpleAbilitySystemComponent>()
{
	return USimpleAbilitySystemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleAbilitySystemComponent);
USimpleAbilitySystemComponent::~USimpleAbilitySystemComponent() {}
// End Class USimpleAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleAbilitySystemComponent, USimpleAbilitySystemComponent::StaticClass, TEXT("USimpleAbilitySystemComponent"), &Z_Registration_Info_UClass_USimpleAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleAbilitySystemComponent), 3527678348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleAbilitySystemComponent_h_4015117270(TEXT("/Script/SimpleGameplayAbilitiesExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
