// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleGameplayAbilitiesExtend/Public/Abilities/SimpleGameplayAbilityType.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleGameplayAbilityType() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SIMPLEGAMEPLAYABILITIESEXTEND_API UEnum* Z_Construct_UEnum_SimpleGameplayAbilitiesExtend_EGameplayEffectUseType();
SIMPLEGAMEPLAYABILITIESEXTEND_API UFunction* Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature();
SIMPLEGAMEPLAYABILITIESEXTEND_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleGameplayEffect();
SIMPLEGAMEPLAYABILITIESEXTEND_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleGameplayEffects();
SIMPLEGAMEPLAYABILITIESEXTEND_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec();
UPackage* Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend();
// End Cross Module References

// Begin Enum EGameplayEffectUseType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectUseType;
static UEnum* EGameplayEffectUseType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectUseType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayEffectUseType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleGameplayAbilitiesExtend_EGameplayEffectUseType, (UObject*)Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend(), TEXT("EGameplayEffectUseType"));
	}
	return Z_Registration_Info_UEnum_EGameplayEffectUseType.OuterSingleton;
}
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UEnum* StaticEnum<EGameplayEffectUseType>()
{
	return EGameplayEffectUseType_StaticEnum();
}
struct Z_Construct_UEnum_SimpleGameplayAbilitiesExtend_EGameplayEffectUseType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityType.h" },
		{ "RELEASE_OWN_COLLISION.Comment", "//\xe7\xa2\xb0\xe6\x92\x9e\xe5\x90\x8e\xe9\x87\x8a\xe6\x94\xbe""buff\n" },
		{ "RELEASE_OWN_COLLISION.DisplayName", "Release to own after collision" },
		{ "RELEASE_OWN_COLLISION.Name", "EGameplayEffectUseType::RELEASE_OWN_COLLISION" },
		{ "RELEASE_OWN_COLLISION.ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe5\x90\x8e\xe9\x87\x8a\xe6\x94\xbe""buff" },
		{ "RELEASE_TARGET_COLLISION.DisplayName", "Release to Taget after collision" },
		{ "RELEASE_TARGET_COLLISION.Name", "EGameplayEffectUseType::RELEASE_TARGET_COLLISION" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayEffectUseType::RELEASE_TARGET_COLLISION", (int64)EGameplayEffectUseType::RELEASE_TARGET_COLLISION },
		{ "EGameplayEffectUseType::RELEASE_OWN_COLLISION", (int64)EGameplayEffectUseType::RELEASE_OWN_COLLISION },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleGameplayAbilitiesExtend_EGameplayEffectUseType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend,
	nullptr,
	"EGameplayEffectUseType",
	"EGameplayEffectUseType",
	Z_Construct_UEnum_SimpleGameplayAbilitiesExtend_EGameplayEffectUseType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleGameplayAbilitiesExtend_EGameplayEffectUseType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleGameplayAbilitiesExtend_EGameplayEffectUseType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleGameplayAbilitiesExtend_EGameplayEffectUseType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleGameplayAbilitiesExtend_EGameplayEffectUseType()
{
	if (!Z_Registration_Info_UEnum_EGameplayEffectUseType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectUseType.InnerSingleton, Z_Construct_UEnum_SimpleGameplayAbilitiesExtend_EGameplayEffectUseType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayEffectUseType.InnerSingleton;
}
// End Enum EGameplayEffectUseType

// Begin ScriptStruct FSimpleGameplayEffect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleGameplayEffect;
class UScriptStruct* FSimpleGameplayEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleGameplayEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleGameplayEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleGameplayEffect, (UObject*)Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend(), TEXT("SimpleGameplayEffect"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleGameplayEffect.OuterSingleton;
}
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UScriptStruct* StaticStruct<FSimpleGameplayEffect>()
{
	return FSimpleGameplayEffect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectUseType_MetaData[] = {
		{ "Category", "MMOARPGGameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa2\xab\xe5\x8a\xa8""buff\xe7\xb1\xbb\xe5\x9e\x8b \xe6\x98\xaf\xe9\x87\x8a\xe6\x94\xbe\xe5\x88\xb0\xe7\x9b\xae\xe6\xa0\x87\xe8\xbf\x98\xe6\x98\xaf\xe8\x87\xaa\xe5\xb7\xb1\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa2\xab\xe5\x8a\xa8""buff\xe7\xb1\xbb\xe5\x9e\x8b \xe6\x98\xaf\xe9\x87\x8a\xe6\x94\xbe\xe5\x88\xb0\xe7\x9b\xae\xe6\xa0\x87\xe8\xbf\x98\xe6\x98\xaf\xe8\x87\xaa\xe5\xb7\xb1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectClass_MetaData[] = {
		{ "Category", "MMOARPGGameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//buff\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe7\xb1\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "buff\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe7\xb1\xbb" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GameplayEffectUseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GameplayEffectUseType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleGameplayEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics::NewProp_GameplayEffectUseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics::NewProp_GameplayEffectUseType = { "GameplayEffectUseType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleGameplayEffect, GameplayEffectUseType), Z_Construct_UEnum_SimpleGameplayAbilitiesExtend_EGameplayEffectUseType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectUseType_MetaData), NewProp_GameplayEffectUseType_MetaData) }; // 4251176236
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleGameplayEffect, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectClass_MetaData), NewProp_EffectClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics::NewProp_GameplayEffectUseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics::NewProp_GameplayEffectUseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics::NewProp_EffectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend,
	nullptr,
	&NewStructOps,
	"SimpleGameplayEffect",
	Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics::PropPointers),
	sizeof(FSimpleGameplayEffect),
	alignof(FSimpleGameplayEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleGameplayEffect()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleGameplayEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleGameplayEffect.InnerSingleton, Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleGameplayEffect.InnerSingleton;
}
// End ScriptStruct FSimpleGameplayEffect

// Begin ScriptStruct FSimpleGameplayEffects
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleGameplayEffects;
class UScriptStruct* FSimpleGameplayEffects::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleGameplayEffects.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleGameplayEffects.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleGameplayEffects, (UObject*)Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend(), TEXT("SimpleGameplayEffects"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleGameplayEffects.OuterSingleton;
}
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UScriptStruct* StaticStruct<FSimpleGameplayEffects>()
{
	return FSimpleGameplayEffects::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleGameplayEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffects_MetaData[] = {
		{ "Category", "GameplayEffects" },
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleGameplayEffects>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleGameplayEffects_Statics::NewProp_GameplayEffects_Inner = { "GameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSimpleGameplayEffect, METADATA_PARAMS(0, nullptr) }; // 973886660
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimpleGameplayEffects_Statics::NewProp_GameplayEffects = { "GameplayEffects", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleGameplayEffects, GameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffects_MetaData), NewProp_GameplayEffects_MetaData) }; // 973886660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleGameplayEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleGameplayEffects_Statics::NewProp_GameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleGameplayEffects_Statics::NewProp_GameplayEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleGameplayEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleGameplayEffects_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend,
	nullptr,
	&NewStructOps,
	"SimpleGameplayEffects",
	Z_Construct_UScriptStruct_FSimpleGameplayEffects_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleGameplayEffects_Statics::PropPointers),
	sizeof(FSimpleGameplayEffects),
	alignof(FSimpleGameplayEffects),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleGameplayEffects_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleGameplayEffects_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleGameplayEffects()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleGameplayEffects.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleGameplayEffects.InnerSingleton, Z_Construct_UScriptStruct_FSimpleGameplayEffects_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleGameplayEffects.InnerSingleton;
}
// End ScriptStruct FSimpleGameplayEffects

// Begin ScriptStruct FSimpleGameplayEffectSpec
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleGameplayEffectSpec;
class UScriptStruct* FSimpleGameplayEffectSpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleGameplayEffectSpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleGameplayEffectSpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec, (UObject*)Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend(), TEXT("SimpleGameplayEffectSpec"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleGameplayEffectSpec.OuterSingleton;
}
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UScriptStruct* StaticStruct<FSimpleGameplayEffectSpec>()
{
	return FSimpleGameplayEffectSpec::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetHandleData_MetaData[] = {
		{ "Category", "GameplayEffects" },
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetEffectSpecs_MetaData[] = {
		{ "Category", "GameplayEffects" },
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetHandleData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetEffectSpecs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetEffectSpecs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleGameplayEffectSpec>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics::NewProp_TargetHandleData = { "TargetHandleData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleGameplayEffectSpec, TargetHandleData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetHandleData_MetaData), NewProp_TargetHandleData_MetaData) }; // 2741862775
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics::NewProp_TargetEffectSpecs_Inner = { "TargetEffectSpecs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 3383902265
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics::NewProp_TargetEffectSpecs = { "TargetEffectSpecs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleGameplayEffectSpec, TargetEffectSpecs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetEffectSpecs_MetaData), NewProp_TargetEffectSpecs_MetaData) }; // 3383902265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics::NewProp_TargetHandleData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics::NewProp_TargetEffectSpecs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics::NewProp_TargetEffectSpecs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend,
	nullptr,
	&NewStructOps,
	"SimpleGameplayEffectSpec",
	Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics::PropPointers),
	sizeof(FSimpleGameplayEffectSpec),
	alignof(FSimpleGameplayEffectSpec),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleGameplayEffectSpec.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleGameplayEffectSpec.InnerSingleton, Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleGameplayEffectSpec.InnerSingleton;
}
// End ScriptStruct FSimpleGameplayEffectSpec

// Begin Delegate FWaitSimpleForDamageEventDelegate
struct Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature_Statics
{
	struct _Script_SimpleGameplayAbilitiesExtend_eventWaitSimpleForDamageEventDelegate_Parms
	{
		FGameplayTag EventTag;
		FGameplayEventData EventData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleGameplayAbilitiesExtend_eventWaitSimpleForDamageEventDelegate_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleGameplayAbilitiesExtend_eventWaitSimpleForDamageEventDelegate_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 2811136703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature_Statics::NewProp_EventData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend, nullptr, "WaitSimpleForDamageEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature_Statics::_Script_SimpleGameplayAbilitiesExtend_eventWaitSimpleForDamageEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature_Statics::_Script_SimpleGameplayAbilitiesExtend_eventWaitSimpleForDamageEventDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWaitSimpleForDamageEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitSimpleForDamageEventDelegate, FGameplayTag EventTag, FGameplayEventData EventData)
{
	struct _Script_SimpleGameplayAbilitiesExtend_eventWaitSimpleForDamageEventDelegate_Parms
	{
		FGameplayTag EventTag;
		FGameplayEventData EventData;
	};
	_Script_SimpleGameplayAbilitiesExtend_eventWaitSimpleForDamageEventDelegate_Parms Parms;
	Parms.EventTag=EventTag;
	Parms.EventData=EventData;
	WaitSimpleForDamageEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWaitSimpleForDamageEventDelegate

// Begin Registration
struct Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameplayEffectUseType_StaticEnum, TEXT("EGameplayEffectUseType"), &Z_Registration_Info_UEnum_EGameplayEffectUseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4251176236U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSimpleGameplayEffect::StaticStruct, Z_Construct_UScriptStruct_FSimpleGameplayEffect_Statics::NewStructOps, TEXT("SimpleGameplayEffect"), &Z_Registration_Info_UScriptStruct_SimpleGameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleGameplayEffect), 973886660U) },
		{ FSimpleGameplayEffects::StaticStruct, Z_Construct_UScriptStruct_FSimpleGameplayEffects_Statics::NewStructOps, TEXT("SimpleGameplayEffects"), &Z_Registration_Info_UScriptStruct_SimpleGameplayEffects, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleGameplayEffects), 3587704406U) },
		{ FSimpleGameplayEffectSpec::StaticStruct, Z_Construct_UScriptStruct_FSimpleGameplayEffectSpec_Statics::NewStructOps, TEXT("SimpleGameplayEffectSpec"), &Z_Registration_Info_UScriptStruct_SimpleGameplayEffectSpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleGameplayEffectSpec), 2407928537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityType_h_3581800082(TEXT("/Script/SimpleGameplayAbilitiesExtend"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityType_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
