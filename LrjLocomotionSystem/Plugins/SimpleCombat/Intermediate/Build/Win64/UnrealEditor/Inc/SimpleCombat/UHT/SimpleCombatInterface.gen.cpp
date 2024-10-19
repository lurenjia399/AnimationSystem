// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/CombatInterface/SimpleCombatInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "SimpleCombat/Public/SimpleComboType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCombatInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_USimpleComboInterface();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_USimpleComboInterface_NoRegister();
SIMPLECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleAttachPointInfo();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Interface USimpleComboInterface Function AnimSignal
struct Z_Construct_UFunction_USimpleComboInterface_AnimSignal_Statics
{
	struct SimpleComboInterface_eventAnimSignal_Parms
	{
		int32 InSignal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Combat" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CombatInterface/SimpleCombatInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSignal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleComboInterface_AnimSignal_Statics::NewProp_InSignal = { "InSignal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleComboInterface_eventAnimSignal_Parms, InSignal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleComboInterface_AnimSignal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleComboInterface_AnimSignal_Statics::NewProp_InSignal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_AnimSignal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleComboInterface_AnimSignal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleComboInterface, nullptr, "AnimSignal", nullptr, nullptr, Z_Construct_UFunction_USimpleComboInterface_AnimSignal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_AnimSignal_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleComboInterface_AnimSignal_Statics::SimpleComboInterface_eventAnimSignal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_AnimSignal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleComboInterface_AnimSignal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleComboInterface_AnimSignal_Statics::SimpleComboInterface_eventAnimSignal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleComboInterface_AnimSignal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleComboInterface_AnimSignal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISimpleComboInterface::execAnimSignal)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InSignal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimSignal(Z_Param_InSignal);
	P_NATIVE_END;
}
// End Interface USimpleComboInterface Function AnimSignal

// Begin Interface USimpleComboInterface Function CaughtUP
struct Z_Construct_UFunction_USimpleComboInterface_CaughtUP_Statics
{
	struct SimpleComboInterface_eventCaughtUP_Parms
	{
		AActor* InWho;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa2\xab\xe6\x8a\x93\xe8\xb5\xb7\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CombatInterface/SimpleCombatInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa2\xab\xe6\x8a\x93\xe8\xb5\xb7" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWho;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleComboInterface_CaughtUP_Statics::NewProp_InWho = { "InWho", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleComboInterface_eventCaughtUP_Parms, InWho), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleComboInterface_CaughtUP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleComboInterface_CaughtUP_Statics::NewProp_InWho,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_CaughtUP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleComboInterface_CaughtUP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleComboInterface, nullptr, "CaughtUP", nullptr, nullptr, Z_Construct_UFunction_USimpleComboInterface_CaughtUP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_CaughtUP_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleComboInterface_CaughtUP_Statics::SimpleComboInterface_eventCaughtUP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_CaughtUP_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleComboInterface_CaughtUP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleComboInterface_CaughtUP_Statics::SimpleComboInterface_eventCaughtUP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleComboInterface_CaughtUP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleComboInterface_CaughtUP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISimpleComboInterface::execCaughtUP)
{
	P_GET_OBJECT(AActor,Z_Param_InWho);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CaughtUP(Z_Param_InWho);
	P_NATIVE_END;
}
// End Interface USimpleComboInterface Function CaughtUP

// Begin Interface USimpleComboInterface Function ComboAttack
struct Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics
{
	struct SimpleComboInterface_eventComboAttack_Parms
	{
		int32 InKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Combat" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CombatInterface/SimpleCombatInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleComboInterface_eventComboAttack_Parms, InKey), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleComboInterface_eventComboAttack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleComboInterface_eventComboAttack_Parms), &Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleComboInterface, nullptr, "ComboAttack", nullptr, nullptr, Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics::SimpleComboInterface_eventComboAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics::SimpleComboInterface_eventComboAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleComboInterface_ComboAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleComboInterface_ComboAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISimpleComboInterface::execComboAttack)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ComboAttack(Z_Param_InKey);
	P_NATIVE_END;
}
// End Interface USimpleComboInterface Function ComboAttack

// Begin Interface USimpleComboInterface Function ComboAttackByGameplayTag
struct Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics
{
	struct SimpleComboInterface_eventComboAttackByGameplayTag_Parms
	{
		FGameplayTag InKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Combat" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CombatInterface/SimpleCombatInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleComboInterface_eventComboAttackByGameplayTag_Parms, InKey), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKey_MetaData), NewProp_InKey_MetaData) }; // 1298103297
void Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleComboInterface_eventComboAttackByGameplayTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleComboInterface_eventComboAttackByGameplayTag_Parms), &Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleComboInterface, nullptr, "ComboAttackByGameplayTag", nullptr, nullptr, Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics::SimpleComboInterface_eventComboAttackByGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics::SimpleComboInterface_eventComboAttackByGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISimpleComboInterface::execComboAttackByGameplayTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ComboAttackByGameplayTag(Z_Param_Out_InKey);
	P_NATIVE_END;
}
// End Interface USimpleComboInterface Function ComboAttackByGameplayTag

// Begin Interface USimpleComboInterface Function ComboAttackByTag
struct Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics
{
	struct SimpleComboInterface_eventComboAttackByTag_Parms
	{
		FName InKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Combat" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CombatInterface/SimpleCombatInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleComboInterface_eventComboAttackByTag_Parms, InKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKey_MetaData), NewProp_InKey_MetaData) };
void Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleComboInterface_eventComboAttackByTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleComboInterface_eventComboAttackByTag_Parms), &Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleComboInterface, nullptr, "ComboAttackByTag", nullptr, nullptr, Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics::SimpleComboInterface_eventComboAttackByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics::SimpleComboInterface_eventComboAttackByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISimpleComboInterface::execComboAttackByTag)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ComboAttackByTag(Z_Param_Out_InKey);
	P_NATIVE_END;
}
// End Interface USimpleComboInterface Function ComboAttackByTag

// Begin Interface USimpleComboInterface Function GetCharacterLevel
struct Z_Construct_UFunction_USimpleComboInterface_GetCharacterLevel_Statics
{
	struct SimpleComboInterface_eventGetCharacterLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Combat" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CombatInterface/SimpleCombatInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleComboInterface_GetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleComboInterface_eventGetCharacterLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleComboInterface_GetCharacterLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleComboInterface_GetCharacterLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_GetCharacterLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleComboInterface_GetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleComboInterface, nullptr, "GetCharacterLevel", nullptr, nullptr, Z_Construct_UFunction_USimpleComboInterface_GetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_GetCharacterLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleComboInterface_GetCharacterLevel_Statics::SimpleComboInterface_eventGetCharacterLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_GetCharacterLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleComboInterface_GetCharacterLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleComboInterface_GetCharacterLevel_Statics::SimpleComboInterface_eventGetCharacterLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleComboInterface_GetCharacterLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleComboInterface_GetCharacterLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISimpleComboInterface::execGetCharacterLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCharacterLevel();
	P_NATIVE_END;
}
// End Interface USimpleComboInterface Function GetCharacterLevel

// Begin Interface USimpleComboInterface Function GetTarget
struct Z_Construct_UFunction_USimpleComboInterface_GetTarget_Statics
{
	struct SimpleComboInterface_eventGetTarget_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Combat" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CombatInterface/SimpleCombatInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleComboInterface_GetTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleComboInterface_eventGetTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleComboInterface_GetTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleComboInterface_GetTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_GetTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleComboInterface_GetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleComboInterface, nullptr, "GetTarget", nullptr, nullptr, Z_Construct_UFunction_USimpleComboInterface_GetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_GetTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleComboInterface_GetTarget_Statics::SimpleComboInterface_eventGetTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_GetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleComboInterface_GetTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleComboInterface_GetTarget_Statics::SimpleComboInterface_eventGetTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleComboInterface_GetTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleComboInterface_GetTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISimpleComboInterface::execGetTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetTarget();
	P_NATIVE_END;
}
// End Interface USimpleComboInterface Function GetTarget

// Begin Interface USimpleComboInterface Function Throw
struct Z_Construct_UFunction_USimpleComboInterface_Throw_Statics
{
	struct SimpleComboInterface_eventThrow_Parms
	{
		AActor* InWho;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa2\xab\xe6\x89\x94\xe6\x8e\x89\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CombatInterface/SimpleCombatInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa2\xab\xe6\x89\x94\xe6\x8e\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWho;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleComboInterface_Throw_Statics::NewProp_InWho = { "InWho", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleComboInterface_eventThrow_Parms, InWho), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleComboInterface_Throw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleComboInterface_Throw_Statics::NewProp_InWho,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_Throw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleComboInterface_Throw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleComboInterface, nullptr, "Throw", nullptr, nullptr, Z_Construct_UFunction_USimpleComboInterface_Throw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_Throw_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleComboInterface_Throw_Statics::SimpleComboInterface_eventThrow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_Throw_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleComboInterface_Throw_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleComboInterface_Throw_Statics::SimpleComboInterface_eventThrow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleComboInterface_Throw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleComboInterface_Throw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISimpleComboInterface::execThrow)
{
	P_GET_OBJECT(AActor,Z_Param_InWho);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Throw(Z_Param_InWho);
	P_NATIVE_END;
}
// End Interface USimpleComboInterface Function Throw

// Begin Interface USimpleComboInterface Function Update_AttachPoint
struct Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics
{
	struct SimpleComboInterface_eventUpdate_AttachPoint_Parms
	{
		FSimpleAttachPointInfo InValue;
		FName InTag;
		bool bEnd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x92\x88\xe5\xaf\xb9\xe6\x9b\xb4\xe6\x96\xb0\xe5\x90\xb8\xe9\x99\x84\xe7\x82\xb9\xe5\x87\x86\xe5\xa4\x87\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CombatInterface/SimpleCombatInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x92\x88\xe5\xaf\xb9\xe6\x9b\xb4\xe6\x96\xb0\xe5\x90\xb8\xe9\x99\x84\xe7\x82\xb9\xe5\x87\x86\xe5\xa4\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InTag;
	static void NewProp_bEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleComboInterface_eventUpdate_AttachPoint_Parms, InValue), Z_Construct_UScriptStruct_FSimpleAttachPointInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) }; // 527398192
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleComboInterface_eventUpdate_AttachPoint_Parms, InTag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::NewProp_bEnd_SetBit(void* Obj)
{
	((SimpleComboInterface_eventUpdate_AttachPoint_Parms*)Obj)->bEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::NewProp_bEnd = { "bEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleComboInterface_eventUpdate_AttachPoint_Parms), &Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::NewProp_bEnd_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::NewProp_InTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::NewProp_bEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleComboInterface, nullptr, "Update_AttachPoint", nullptr, nullptr, Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::SimpleComboInterface_eventUpdate_AttachPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::SimpleComboInterface_eventUpdate_AttachPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISimpleComboInterface::execUpdate_AttachPoint)
{
	P_GET_STRUCT_REF(FSimpleAttachPointInfo,Z_Param_Out_InValue);
	P_GET_PROPERTY(FNameProperty,Z_Param_InTag);
	P_GET_UBOOL(Z_Param_bEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Update_AttachPoint(Z_Param_Out_InValue,Z_Param_InTag,Z_Param_bEnd);
	P_NATIVE_END;
}
// End Interface USimpleComboInterface Function Update_AttachPoint

// Begin Interface USimpleComboInterface
void USimpleComboInterface::StaticRegisterNativesUSimpleComboInterface()
{
	UClass* Class = USimpleComboInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimSignal", &ISimpleComboInterface::execAnimSignal },
		{ "CaughtUP", &ISimpleComboInterface::execCaughtUP },
		{ "ComboAttack", &ISimpleComboInterface::execComboAttack },
		{ "ComboAttackByGameplayTag", &ISimpleComboInterface::execComboAttackByGameplayTag },
		{ "ComboAttackByTag", &ISimpleComboInterface::execComboAttackByTag },
		{ "GetCharacterLevel", &ISimpleComboInterface::execGetCharacterLevel },
		{ "GetTarget", &ISimpleComboInterface::execGetTarget },
		{ "Throw", &ISimpleComboInterface::execThrow },
		{ "Update_AttachPoint", &ISimpleComboInterface::execUpdate_AttachPoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleComboInterface);
UClass* Z_Construct_UClass_USimpleComboInterface_NoRegister()
{
	return USimpleComboInterface::StaticClass();
}
struct Z_Construct_UClass_USimpleComboInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CombatInterface/SimpleCombatInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleComboInterface_AnimSignal, "AnimSignal" }, // 2338336581
		{ &Z_Construct_UFunction_USimpleComboInterface_CaughtUP, "CaughtUP" }, // 393238767
		{ &Z_Construct_UFunction_USimpleComboInterface_ComboAttack, "ComboAttack" }, // 4085687396
		{ &Z_Construct_UFunction_USimpleComboInterface_ComboAttackByGameplayTag, "ComboAttackByGameplayTag" }, // 3714908850
		{ &Z_Construct_UFunction_USimpleComboInterface_ComboAttackByTag, "ComboAttackByTag" }, // 2503655446
		{ &Z_Construct_UFunction_USimpleComboInterface_GetCharacterLevel, "GetCharacterLevel" }, // 2454228963
		{ &Z_Construct_UFunction_USimpleComboInterface_GetTarget, "GetTarget" }, // 393187340
		{ &Z_Construct_UFunction_USimpleComboInterface_Throw, "Throw" }, // 1165951098
		{ &Z_Construct_UFunction_USimpleComboInterface_Update_AttachPoint, "Update_AttachPoint" }, // 3805995004
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISimpleComboInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleComboInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleComboInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleComboInterface_Statics::ClassParams = {
	&USimpleComboInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleComboInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleComboInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleComboInterface()
{
	if (!Z_Registration_Info_UClass_USimpleComboInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleComboInterface.OuterSingleton, Z_Construct_UClass_USimpleComboInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleComboInterface.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<USimpleComboInterface>()
{
	return USimpleComboInterface::StaticClass();
}
USimpleComboInterface::USimpleComboInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleComboInterface);
USimpleComboInterface::~USimpleComboInterface() {}
// End Interface USimpleComboInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleCombatInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleComboInterface, USimpleComboInterface::StaticClass, TEXT("USimpleComboInterface"), &Z_Registration_Info_UClass_USimpleComboInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleComboInterface), 2819701339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleCombatInterface_h_3476286475(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleCombatInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_CombatInterface_SimpleCombatInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
