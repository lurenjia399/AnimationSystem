// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleGameplayAbilitiesExtend/Public/Component/SimpleFightComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleFightComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleAbilitySystemComponent_NoRegister();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleFightComponent();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleFightComponent_NoRegister();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend();
// End Cross Module References

// Begin Class USimpleFightComponent Function AddGameplayAbility
struct Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility_Statics
{
	struct SimpleFightComponent_eventAddGameplayAbility_Parms
	{
		const TSubclassOf<UGameplayAbility> InNewAbility;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xb7\xbb\xe5\x8a\xa0\xe8\x83\xbd\xe5\x8a\x9b\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0\xe8\x83\xbd\xe5\x8a\x9b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewAbility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InNewAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility_Statics::NewProp_InNewAbility = { "InNewAbility", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventAddGameplayAbility_Parms, InNewAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewAbility_MetaData), NewProp_InNewAbility_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventAddGameplayAbility_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility_Statics::NewProp_InNewAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleFightComponent, nullptr, "AddGameplayAbility", nullptr, nullptr, Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility_Statics::SimpleFightComponent_eventAddGameplayAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility_Statics::SimpleFightComponent_eventAddGameplayAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleFightComponent::execAddGameplayAbility)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UGameplayAbility>,Z_Param_Out_InNewAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->AddGameplayAbility(Z_Param_Out_InNewAbility);
	P_NATIVE_END;
}
// End Class USimpleFightComponent Function AddGameplayAbility

// Begin Class USimpleFightComponent Function AddGameplyEffectTag
struct Z_Construct_UFunction_USimpleFightComponent_AddGameplyEffectTag_Statics
{
	struct SimpleFightComponent_eventAddGameplyEffectTag_Parms
	{
		FGameplayTag InTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\xaa\xe9\x92\x88\xe5\xaf\xb9\xe6\xb7\xbb\xe5\x8a\xa0\xe6\xa0\x87\xe7\xad\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaa\xe9\x92\x88\xe5\xaf\xb9\xe6\xb7\xbb\xe5\x8a\xa0\xe6\xa0\x87\xe7\xad\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleFightComponent_AddGameplyEffectTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventAddGameplyEffectTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTag_MetaData), NewProp_InTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleFightComponent_AddGameplyEffectTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_AddGameplyEffectTag_Statics::NewProp_InTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_AddGameplyEffectTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleFightComponent_AddGameplyEffectTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleFightComponent, nullptr, "AddGameplyEffectTag", nullptr, nullptr, Z_Construct_UFunction_USimpleFightComponent_AddGameplyEffectTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_AddGameplyEffectTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleFightComponent_AddGameplyEffectTag_Statics::SimpleFightComponent_eventAddGameplyEffectTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_AddGameplyEffectTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleFightComponent_AddGameplyEffectTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleFightComponent_AddGameplyEffectTag_Statics::SimpleFightComponent_eventAddGameplyEffectTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleFightComponent_AddGameplyEffectTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleFightComponent_AddGameplyEffectTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleFightComponent::execAddGameplyEffectTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddGameplyEffectTag(Z_Param_Out_InTag);
	P_NATIVE_END;
}
// End Class USimpleFightComponent Function AddGameplyEffectTag

// Begin Class USimpleFightComponent Function DeactivationGameplayEffect
struct Z_Construct_UFunction_USimpleFightComponent_DeactivationGameplayEffect_Statics
{
	struct SimpleFightComponent_eventDeactivationGameplayEffect_Parms
	{
		TSubclassOf<UGameplayEffect> InGameplayEffect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa7\xbb\xe9\x99\xa4\xe6\x95\x88\xe6\x9e\x9c \xe7\xa7\xbb\xe9\x99\xa4""buff\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe9\x99\xa4\xe6\x95\x88\xe6\x9e\x9c \xe7\xa7\xbb\xe9\x99\xa4""buff" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InGameplayEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USimpleFightComponent_DeactivationGameplayEffect_Statics::NewProp_InGameplayEffect = { "InGameplayEffect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventDeactivationGameplayEffect_Parms, InGameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleFightComponent_DeactivationGameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_DeactivationGameplayEffect_Statics::NewProp_InGameplayEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_DeactivationGameplayEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleFightComponent_DeactivationGameplayEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleFightComponent, nullptr, "DeactivationGameplayEffect", nullptr, nullptr, Z_Construct_UFunction_USimpleFightComponent_DeactivationGameplayEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_DeactivationGameplayEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleFightComponent_DeactivationGameplayEffect_Statics::SimpleFightComponent_eventDeactivationGameplayEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_DeactivationGameplayEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleFightComponent_DeactivationGameplayEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleFightComponent_DeactivationGameplayEffect_Statics::SimpleFightComponent_eventDeactivationGameplayEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleFightComponent_DeactivationGameplayEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleFightComponent_DeactivationGameplayEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleFightComponent::execDeactivationGameplayEffect)
{
	P_GET_OBJECT(UClass,Z_Param_InGameplayEffect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivationGameplayEffect(Z_Param_InGameplayEffect);
	P_NATIVE_END;
}
// End Class USimpleFightComponent Function DeactivationGameplayEffect

// Begin Class USimpleFightComponent Function ExecuteGameplayAbility
struct Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics
{
	struct SimpleFightComponent_eventExecuteGameplayAbility_Parms
	{
		FGameplayTag InName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe9\x87\x8a\xe6\x94\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe9\x87\x8a\xe6\x94\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventExecuteGameplayAbility_Parms, InName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) }; // 1298103297
void Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleFightComponent_eventExecuteGameplayAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleFightComponent_eventExecuteGameplayAbility_Parms), &Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleFightComponent, nullptr, "ExecuteGameplayAbility", nullptr, nullptr, Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics::SimpleFightComponent_eventExecuteGameplayAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics::SimpleFightComponent_eventExecuteGameplayAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleFightComponent::execExecuteGameplayAbility)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ExecuteGameplayAbility(Z_Param_Out_InName);
	P_NATIVE_END;
}
// End Class USimpleFightComponent Function ExecuteGameplayAbility

// Begin Class USimpleFightComponent Function ExecuteGameplayEffect
struct Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect_Statics
{
	struct SimpleFightComponent_eventExecuteGameplayEffect_Parms
	{
		const TSubclassOf<UGameplayEffect> InGameplayEffect;
		int32 InCharacterLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x89\xa7\xe8\xa1\x8c\xe6\x95\x88\xe6\x9e\x9c \xe6\xaf\x94\xe5\xa6\x82""buff\n" },
#endif
		{ "CPP_Default_InCharacterLevel", "1" },
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\xa7\xe8\xa1\x8c\xe6\x95\x88\xe6\x9e\x9c \xe6\xaf\x94\xe5\xa6\x82""buff" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGameplayEffect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InGameplayEffect;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InCharacterLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect_Statics::NewProp_InGameplayEffect = { "InGameplayEffect", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventExecuteGameplayEffect_Parms, InGameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGameplayEffect_MetaData), NewProp_InGameplayEffect_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect_Statics::NewProp_InCharacterLevel = { "InCharacterLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventExecuteGameplayEffect_Parms, InCharacterLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect_Statics::NewProp_InGameplayEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect_Statics::NewProp_InCharacterLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleFightComponent, nullptr, "ExecuteGameplayEffect", nullptr, nullptr, Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect_Statics::SimpleFightComponent_eventExecuteGameplayEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect_Statics::SimpleFightComponent_eventExecuteGameplayEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleFightComponent::execExecuteGameplayEffect)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UGameplayEffect>,Z_Param_Out_InGameplayEffect);
	P_GET_PROPERTY(FIntProperty,Z_Param_InCharacterLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteGameplayEffect(Z_Param_Out_InGameplayEffect,Z_Param_InCharacterLevel);
	P_NATIVE_END;
}
// End Class USimpleFightComponent Function ExecuteGameplayEffect

// Begin Class USimpleFightComponent Function GetExecuteGameplayAbility
struct Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility_Statics
{
	struct SimpleFightComponent_eventGetExecuteGameplayAbility_Parms
	{
		FGameplayTag InKey;
		USimpleGameplayAbility* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\xad\xa3\xe5\x9c\xa8\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84 \xe5\x8f\xaa\xe9\x92\x88\xe5\xaf\xb9\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\xad\xa3\xe5\x9c\xa8\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84 \xe5\x8f\xaa\xe9\x92\x88\xe5\xaf\xb9\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventGetExecuteGameplayAbility_Parms, InKey), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKey_MetaData), NewProp_InKey_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventGetExecuteGameplayAbility_Parms, ReturnValue), Z_Construct_UClass_USimpleGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleFightComponent, nullptr, "GetExecuteGameplayAbility", nullptr, nullptr, Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility_Statics::SimpleFightComponent_eventGetExecuteGameplayAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility_Statics::SimpleFightComponent_eventGetExecuteGameplayAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleFightComponent::execGetExecuteGameplayAbility)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USimpleGameplayAbility**)Z_Param__Result=P_THIS->GetExecuteGameplayAbility(Z_Param_Out_InKey);
	P_NATIVE_END;
}
// End Class USimpleFightComponent Function GetExecuteGameplayAbility

// Begin Class USimpleFightComponent Function GetGameplayAbility
struct Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility_Statics
{
	struct SimpleFightComponent_eventGetGameplayAbility_Parms
	{
		FGameplayTag InKey;
		USimpleGameplayAbility* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe9\xbb\x98\xe8\xae\xa4\xe7\x9a\x84""CDO\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe9\xbb\x98\xe8\xae\xa4\xe7\x9a\x84""CDO" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventGetGameplayAbility_Parms, InKey), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKey_MetaData), NewProp_InKey_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventGetGameplayAbility_Parms, ReturnValue), Z_Construct_UClass_USimpleGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleFightComponent, nullptr, "GetGameplayAbility", nullptr, nullptr, Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility_Statics::SimpleFightComponent_eventGetGameplayAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility_Statics::SimpleFightComponent_eventGetGameplayAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleFightComponent::execGetGameplayAbility)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USimpleGameplayAbility**)Z_Param__Result=P_THIS->GetGameplayAbility(Z_Param_Out_InKey);
	P_NATIVE_END;
}
// End Class USimpleFightComponent Function GetGameplayAbility

// Begin Class USimpleFightComponent Function GetGameplayAbilityActiveTagBySkill
struct Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbilityActiveTagBySkill_Statics
{
	struct SimpleFightComponent_eventGetGameplayAbilityActiveTagBySkill_Parms
	{
		USimpleGameplayAbility* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fight" },
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbilityActiveTagBySkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventGetGameplayAbilityActiveTagBySkill_Parms, ReturnValue), Z_Construct_UClass_USimpleGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbilityActiveTagBySkill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbilityActiveTagBySkill_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbilityActiveTagBySkill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbilityActiveTagBySkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleFightComponent, nullptr, "GetGameplayAbilityActiveTagBySkill", nullptr, nullptr, Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbilityActiveTagBySkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbilityActiveTagBySkill_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbilityActiveTagBySkill_Statics::SimpleFightComponent_eventGetGameplayAbilityActiveTagBySkill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbilityActiveTagBySkill_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbilityActiveTagBySkill_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbilityActiveTagBySkill_Statics::SimpleFightComponent_eventGetGameplayAbilityActiveTagBySkill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbilityActiveTagBySkill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbilityActiveTagBySkill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleFightComponent::execGetGameplayAbilityActiveTagBySkill)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USimpleGameplayAbility**)Z_Param__Result=P_THIS->GetGameplayAbilityActiveTagBySkill();
	P_NATIVE_END;
}
// End Class USimpleFightComponent Function GetGameplayAbilityActiveTagBySkill

// Begin Class USimpleFightComponent Function GetSkillTagsNames
struct Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames_Statics
{
	struct SimpleFightComponent_eventGetSkillTagsNames_Parms
	{
		TArray<FName> OutNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8a\x80\xe8\x83\xbd\xe6\xa0\x87\xe7\xad\xbe\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8a\x80\xe8\x83\xbd\xe6\xa0\x87\xe7\xad\xbe\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames_Statics::NewProp_OutNames_Inner = { "OutNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames_Statics::NewProp_OutNames = { "OutNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventGetSkillTagsNames_Parms, OutNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames_Statics::NewProp_OutNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames_Statics::NewProp_OutNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleFightComponent, nullptr, "GetSkillTagsNames", nullptr, nullptr, Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames_Statics::SimpleFightComponent_eventGetSkillTagsNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames_Statics::SimpleFightComponent_eventGetSkillTagsNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleFightComponent::execGetSkillTagsNames)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_OutNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSkillTagsNames(Z_Param_Out_OutNames);
	P_NATIVE_END;
}
// End Class USimpleFightComponent Function GetSkillTagsNames

// Begin Class USimpleFightComponent Function GetSkillTagsNameTag
struct Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag_Statics
{
	struct SimpleFightComponent_eventGetSkillTagsNameTag_Parms
	{
		TArray<FGameplayTag> OutNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8a\x80\xe8\x83\xbd\xe6\xa0\x87\xe7\xad\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8a\x80\xe8\x83\xbd\xe6\xa0\x87\xe7\xad\xbe" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag_Statics::NewProp_OutNames_Inner = { "OutNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag_Statics::NewProp_OutNames = { "OutNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventGetSkillTagsNameTag_Parms, OutNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag_Statics::NewProp_OutNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag_Statics::NewProp_OutNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleFightComponent, nullptr, "GetSkillTagsNameTag", nullptr, nullptr, Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag_Statics::SimpleFightComponent_eventGetSkillTagsNameTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag_Statics::SimpleFightComponent_eventGetSkillTagsNameTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleFightComponent::execGetSkillTagsNameTag)
{
	P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_OutNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSkillTagsNameTag(Z_Param_Out_OutNames);
	P_NATIVE_END;
}
// End Class USimpleFightComponent Function GetSkillTagsNameTag

// Begin Class USimpleFightComponent Function IsAir
struct Z_Construct_UFunction_USimpleFightComponent_IsAir_Statics
{
	struct SimpleFightComponent_eventIsAir_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe5\xa4\xa9\xe4\xb8\x8a\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe5\xa4\xa9\xe4\xb8\x8a" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USimpleFightComponent_IsAir_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleFightComponent_eventIsAir_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleFightComponent_IsAir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleFightComponent_eventIsAir_Parms), &Z_Construct_UFunction_USimpleFightComponent_IsAir_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleFightComponent_IsAir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_IsAir_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_IsAir_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleFightComponent_IsAir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleFightComponent, nullptr, "IsAir", nullptr, nullptr, Z_Construct_UFunction_USimpleFightComponent_IsAir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_IsAir_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleFightComponent_IsAir_Statics::SimpleFightComponent_eventIsAir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_IsAir_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleFightComponent_IsAir_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleFightComponent_IsAir_Statics::SimpleFightComponent_eventIsAir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleFightComponent_IsAir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleFightComponent_IsAir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleFightComponent::execIsAir)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAir();
	P_NATIVE_END;
}
// End Class USimpleFightComponent Function IsAir

// Begin Class USimpleFightComponent Function IsExitNameTag
struct Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics
{
	struct SimpleFightComponent_eventIsExitNameTag_Parms
	{
		FGameplayTag InTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\xad\x98\xe5\x9c\xa8\xe5\xbd\x93\xe5\x89\x8d\xe6\xa0\x87\xe7\xad\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xad\x98\xe5\x9c\xa8\xe5\xbd\x93\xe5\x89\x8d\xe6\xa0\x87\xe7\xad\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventIsExitNameTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTag_MetaData), NewProp_InTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleFightComponent_eventIsExitNameTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleFightComponent_eventIsExitNameTag_Parms), &Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics::NewProp_InTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleFightComponent, nullptr, "IsExitNameTag", nullptr, nullptr, Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics::SimpleFightComponent_eventIsExitNameTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics::SimpleFightComponent_eventIsExitNameTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleFightComponent::execIsExitNameTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsExitNameTag(Z_Param_Out_InTag);
	P_NATIVE_END;
}
// End Class USimpleFightComponent Function IsExitNameTag

// Begin Class USimpleFightComponent Function IsUsingSkills
struct Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics
{
	struct SimpleFightComponent_eventIsUsingSkills_Parms
	{
		FGameplayTag InTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x80\xe8\x83\xbd\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe4\xbd\xbf\xe7\x94\xa8\xe4\xb8\xad\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe4\xbd\xbf\xe7\x94\xa8\xe4\xb8\xad" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventIsUsingSkills_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTag_MetaData), NewProp_InTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleFightComponent_eventIsUsingSkills_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleFightComponent_eventIsUsingSkills_Parms), &Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics::NewProp_InTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleFightComponent, nullptr, "IsUsingSkills", nullptr, nullptr, Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics::SimpleFightComponent_eventIsUsingSkills_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics::SimpleFightComponent_eventIsUsingSkills_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleFightComponent::execIsUsingSkills)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsUsingSkills(Z_Param_Out_InTag);
	P_NATIVE_END;
}
// End Class USimpleFightComponent Function IsUsingSkills

// Begin Class USimpleFightComponent Function NameToGameTag
struct Z_Construct_UFunction_USimpleFightComponent_NameToGameTag_Statics
{
	struct SimpleFightComponent_eventNameToGameTag_Parms
	{
		FName InTag;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fight" },
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleFightComponent_NameToGameTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventNameToGameTag_Parms, InTag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleFightComponent_NameToGameTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventNameToGameTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleFightComponent_NameToGameTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_NameToGameTag_Statics::NewProp_InTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_NameToGameTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_NameToGameTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleFightComponent_NameToGameTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleFightComponent, nullptr, "NameToGameTag", nullptr, nullptr, Z_Construct_UFunction_USimpleFightComponent_NameToGameTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_NameToGameTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleFightComponent_NameToGameTag_Statics::SimpleFightComponent_eventNameToGameTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_NameToGameTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleFightComponent_NameToGameTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleFightComponent_NameToGameTag_Statics::SimpleFightComponent_eventNameToGameTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleFightComponent_NameToGameTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleFightComponent_NameToGameTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleFightComponent::execNameToGameTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=USimpleFightComponent::NameToGameTag(Z_Param_InTag);
	P_NATIVE_END;
}
// End Class USimpleFightComponent Function NameToGameTag

// Begin Class USimpleFightComponent Function RemoveGameplayAbility
struct Z_Construct_UFunction_USimpleFightComponent_RemoveGameplayAbility_Statics
{
	struct SimpleFightComponent_eventRemoveGameplayAbility_Parms
	{
		FGameplayTag InKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa7\xbb\xe9\x99\xa4\xe8\x83\xbd\xe5\x8a\x9b\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe9\x99\xa4\xe8\x83\xbd\xe5\x8a\x9b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleFightComponent_RemoveGameplayAbility_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventRemoveGameplayAbility_Parms, InKey), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKey_MetaData), NewProp_InKey_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleFightComponent_RemoveGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_RemoveGameplayAbility_Statics::NewProp_InKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_RemoveGameplayAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleFightComponent_RemoveGameplayAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleFightComponent, nullptr, "RemoveGameplayAbility", nullptr, nullptr, Z_Construct_UFunction_USimpleFightComponent_RemoveGameplayAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_RemoveGameplayAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleFightComponent_RemoveGameplayAbility_Statics::SimpleFightComponent_eventRemoveGameplayAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_RemoveGameplayAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleFightComponent_RemoveGameplayAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleFightComponent_RemoveGameplayAbility_Statics::SimpleFightComponent_eventRemoveGameplayAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleFightComponent_RemoveGameplayAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleFightComponent_RemoveGameplayAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleFightComponent::execRemoveGameplayAbility)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGameplayAbility(Z_Param_Out_InKey);
	P_NATIVE_END;
}
// End Class USimpleFightComponent Function RemoveGameplayAbility

// Begin Class USimpleFightComponent Function RemoveGameplyEffectTag
struct Z_Construct_UFunction_USimpleFightComponent_RemoveGameplyEffectTag_Statics
{
	struct SimpleFightComponent_eventRemoveGameplyEffectTag_Parms
	{
		FGameplayTag InTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa7\xbb\xe9\x99\xa4\xe6\xa0\x87\xe7\xad\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe9\x99\xa4\xe6\xa0\x87\xe7\xad\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleFightComponent_RemoveGameplyEffectTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFightComponent_eventRemoveGameplyEffectTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTag_MetaData), NewProp_InTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleFightComponent_RemoveGameplyEffectTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleFightComponent_RemoveGameplyEffectTag_Statics::NewProp_InTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_RemoveGameplyEffectTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleFightComponent_RemoveGameplyEffectTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleFightComponent, nullptr, "RemoveGameplyEffectTag", nullptr, nullptr, Z_Construct_UFunction_USimpleFightComponent_RemoveGameplyEffectTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_RemoveGameplyEffectTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleFightComponent_RemoveGameplyEffectTag_Statics::SimpleFightComponent_eventRemoveGameplyEffectTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleFightComponent_RemoveGameplyEffectTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleFightComponent_RemoveGameplyEffectTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleFightComponent_RemoveGameplyEffectTag_Statics::SimpleFightComponent_eventRemoveGameplyEffectTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleFightComponent_RemoveGameplyEffectTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleFightComponent_RemoveGameplyEffectTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleFightComponent::execRemoveGameplyEffectTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGameplyEffectTag(Z_Param_Out_InTag);
	P_NATIVE_END;
}
// End Class USimpleFightComponent Function RemoveGameplyEffectTag

// Begin Class USimpleFightComponent
void USimpleFightComponent::StaticRegisterNativesUSimpleFightComponent()
{
	UClass* Class = USimpleFightComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGameplayAbility", &USimpleFightComponent::execAddGameplayAbility },
		{ "AddGameplyEffectTag", &USimpleFightComponent::execAddGameplyEffectTag },
		{ "DeactivationGameplayEffect", &USimpleFightComponent::execDeactivationGameplayEffect },
		{ "ExecuteGameplayAbility", &USimpleFightComponent::execExecuteGameplayAbility },
		{ "ExecuteGameplayEffect", &USimpleFightComponent::execExecuteGameplayEffect },
		{ "GetExecuteGameplayAbility", &USimpleFightComponent::execGetExecuteGameplayAbility },
		{ "GetGameplayAbility", &USimpleFightComponent::execGetGameplayAbility },
		{ "GetGameplayAbilityActiveTagBySkill", &USimpleFightComponent::execGetGameplayAbilityActiveTagBySkill },
		{ "GetSkillTagsNames", &USimpleFightComponent::execGetSkillTagsNames },
		{ "GetSkillTagsNameTag", &USimpleFightComponent::execGetSkillTagsNameTag },
		{ "IsAir", &USimpleFightComponent::execIsAir },
		{ "IsExitNameTag", &USimpleFightComponent::execIsExitNameTag },
		{ "IsUsingSkills", &USimpleFightComponent::execIsUsingSkills },
		{ "NameToGameTag", &USimpleFightComponent::execNameToGameTag },
		{ "RemoveGameplayAbility", &USimpleFightComponent::execRemoveGameplayAbility },
		{ "RemoveGameplyEffectTag", &USimpleFightComponent::execRemoveGameplyEffectTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleFightComponent);
UClass* Z_Construct_UClass_USimpleFightComponent_NoRegister()
{
	return USimpleFightComponent::StaticClass();
}
struct Z_Construct_UClass_USimpleFightComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Component/SimpleFightComponent.h" },
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/SimpleFightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleFightComponent_AddGameplayAbility, "AddGameplayAbility" }, // 996301349
		{ &Z_Construct_UFunction_USimpleFightComponent_AddGameplyEffectTag, "AddGameplyEffectTag" }, // 1018915316
		{ &Z_Construct_UFunction_USimpleFightComponent_DeactivationGameplayEffect, "DeactivationGameplayEffect" }, // 2891927878
		{ &Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayAbility, "ExecuteGameplayAbility" }, // 95858454
		{ &Z_Construct_UFunction_USimpleFightComponent_ExecuteGameplayEffect, "ExecuteGameplayEffect" }, // 4176741122
		{ &Z_Construct_UFunction_USimpleFightComponent_GetExecuteGameplayAbility, "GetExecuteGameplayAbility" }, // 1188460876
		{ &Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbility, "GetGameplayAbility" }, // 824574958
		{ &Z_Construct_UFunction_USimpleFightComponent_GetGameplayAbilityActiveTagBySkill, "GetGameplayAbilityActiveTagBySkill" }, // 2026346598
		{ &Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNames, "GetSkillTagsNames" }, // 771695020
		{ &Z_Construct_UFunction_USimpleFightComponent_GetSkillTagsNameTag, "GetSkillTagsNameTag" }, // 2174167315
		{ &Z_Construct_UFunction_USimpleFightComponent_IsAir, "IsAir" }, // 1138788271
		{ &Z_Construct_UFunction_USimpleFightComponent_IsExitNameTag, "IsExitNameTag" }, // 882335953
		{ &Z_Construct_UFunction_USimpleFightComponent_IsUsingSkills, "IsUsingSkills" }, // 29549090
		{ &Z_Construct_UFunction_USimpleFightComponent_NameToGameTag, "NameToGameTag" }, // 60218752
		{ &Z_Construct_UFunction_USimpleFightComponent_RemoveGameplayAbility, "RemoveGameplayAbility" }, // 2871048359
		{ &Z_Construct_UFunction_USimpleFightComponent_RemoveGameplyEffectTag, "RemoveGameplyEffectTag" }, // 1128309769
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleFightComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USimpleFightComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleFightComponent, AbilitySystemComponent), Z_Construct_UClass_USimpleAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleFightComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleFightComponent_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleFightComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleFightComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleFightComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleFightComponent_Statics::ClassParams = {
	&USimpleFightComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USimpleFightComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleFightComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleFightComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleFightComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleFightComponent()
{
	if (!Z_Registration_Info_UClass_USimpleFightComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleFightComponent.OuterSingleton, Z_Construct_UClass_USimpleFightComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleFightComponent.OuterSingleton;
}
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* StaticClass<USimpleFightComponent>()
{
	return USimpleFightComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleFightComponent);
USimpleFightComponent::~USimpleFightComponent() {}
// End Class USimpleFightComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Component_SimpleFightComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleFightComponent, USimpleFightComponent::StaticClass, TEXT("USimpleFightComponent"), &Z_Registration_Info_UClass_USimpleFightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleFightComponent), 3337455512U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Component_SimpleFightComponent_h_3966419895(TEXT("/Script/SimpleGameplayAbilitiesExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Component_SimpleFightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Component_SimpleFightComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
