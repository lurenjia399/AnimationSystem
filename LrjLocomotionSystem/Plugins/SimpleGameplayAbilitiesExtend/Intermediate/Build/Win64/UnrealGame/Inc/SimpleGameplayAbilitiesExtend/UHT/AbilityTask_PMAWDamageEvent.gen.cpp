// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleGameplayAbilitiesExtend/Public/Abilities/AbilityTask/AbilityTask_PMAWDamageEvent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_PMAWDamageEvent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_PlayMontageAndWait();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_UAbilityTask_PNAWDamageEvent();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_NoRegister();
SIMPLEGAMEPLAYABILITIESEXTEND_API UFunction* Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend();
// End Cross Module References

// Begin Class UAbilityTask_PNAWDamageEvent
void UAbilityTask_PNAWDamageEvent::StaticRegisterNativesUAbilityTask_PNAWDamageEvent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_PNAWDamageEvent);
UClass* Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_NoRegister()
{
	return UAbilityTask_PNAWDamageEvent::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ability task to simply play a montage. Many games will want to make a modified version of this task that looks for game-specific events */" },
#endif
		{ "IncludePath", "Abilities/AbilityTask/AbilityTask_PMAWDamageEvent.h" },
		{ "ModuleRelativePath", "Public/Abilities/AbilityTask/AbilityTask_PMAWDamageEvent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability task to simply play a montage. Many games will want to make a modified version of this task that looks for game-specific events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEventReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/AbilityTask/AbilityTask_PMAWDamageEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/AbilityTask/AbilityTask_PMAWDamageEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DamageEventReceived;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_PNAWDamageEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_Statics::NewProp_DamageEventReceived = { "DamageEventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PNAWDamageEvent, DamageEventReceived), Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEventReceived_MetaData), NewProp_DamageEventReceived_MetaData) }; // 425777222
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PNAWDamageEvent, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_Statics::NewProp_DamageEventReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask_PlayMontageAndWait,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_Statics::ClassParams = {
	&UAbilityTask_PNAWDamageEvent::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_PNAWDamageEvent()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_PNAWDamageEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_PNAWDamageEvent.OuterSingleton, Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_PNAWDamageEvent.OuterSingleton;
}
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* StaticClass<UAbilityTask_PNAWDamageEvent>()
{
	return UAbilityTask_PNAWDamageEvent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_PNAWDamageEvent);
UAbilityTask_PNAWDamageEvent::~UAbilityTask_PNAWDamageEvent() {}
// End Class UAbilityTask_PNAWDamageEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_AbilityTask_AbilityTask_PMAWDamageEvent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_PNAWDamageEvent, UAbilityTask_PNAWDamageEvent::StaticClass, TEXT("UAbilityTask_PNAWDamageEvent"), &Z_Registration_Info_UClass_UAbilityTask_PNAWDamageEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_PNAWDamageEvent), 1873133700U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_AbilityTask_AbilityTask_PMAWDamageEvent_h_3598466735(TEXT("/Script/SimpleGameplayAbilitiesExtend"),
	Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_AbilityTask_AbilityTask_PMAWDamageEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_AbilityTask_AbilityTask_PMAWDamageEvent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
