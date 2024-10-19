// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleGameplayAbilitiesExtend/Public/Abilities/SimpleGameplayAbilityMontage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleGameplayAbilityMontage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_NoRegister();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_NoRegister();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleGameplayAbility();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleGameplayAbilityMontage();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleGameplayAbilityMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend();
// End Cross Module References

// Begin Class USimpleGameplayAbilityMontage Function CreatePlayMontageAndWaitProxy
struct Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics
{
	struct SimpleGameplayAbilityMontage_eventCreatePlayMontageAndWaitProxy_Parms
	{
		FName TaskInstanceName;
		UAnimMontage* InMontageToPlay;
		float Rate;
		FName StartSection;
		bool bStopWhenAbilityEnds;
		float AnimRootMotionTranslationScale;
		float StartTimeSeconds;
		UAbilityTask_PNAWDamageEvent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPGGameplayAbility|Tasks" },
		{ "CPP_Default_AnimRootMotionTranslationScale", "1.000000" },
		{ "CPP_Default_bStopWhenAbilityEnds", "true" },
		{ "CPP_Default_Rate", "1.000000" },
		{ "CPP_Default_StartSection", "None" },
		{ "CPP_Default_StartTimeSeconds", "0.000000" },
		{ "DisplayName", "PlayMontageAndWait" },
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityMontage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMontageToPlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
	static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTimeSeconds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleGameplayAbilityMontage_eventCreatePlayMontageAndWaitProxy_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_InMontageToPlay = { "InMontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleGameplayAbilityMontage_eventCreatePlayMontageAndWaitProxy_Parms, InMontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleGameplayAbilityMontage_eventCreatePlayMontageAndWaitProxy_Parms, Rate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleGameplayAbilityMontage_eventCreatePlayMontageAndWaitProxy_Parms, StartSection), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
{
	((SimpleGameplayAbilityMontage_eventCreatePlayMontageAndWaitProxy_Parms*)Obj)->bStopWhenAbilityEnds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleGameplayAbilityMontage_eventCreatePlayMontageAndWaitProxy_Parms), &Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleGameplayAbilityMontage_eventCreatePlayMontageAndWaitProxy_Parms, AnimRootMotionTranslationScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_StartTimeSeconds = { "StartTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleGameplayAbilityMontage_eventCreatePlayMontageAndWaitProxy_Parms, StartTimeSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleGameplayAbilityMontage_eventCreatePlayMontageAndWaitProxy_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_InMontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_Rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_StartSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_AnimRootMotionTranslationScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_StartTimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleGameplayAbilityMontage, nullptr, "CreatePlayMontageAndWaitProxy", nullptr, nullptr, Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::SimpleGameplayAbilityMontage_eventCreatePlayMontageAndWaitProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::SimpleGameplayAbilityMontage_eventCreatePlayMontageAndWaitProxy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleGameplayAbilityMontage::execCreatePlayMontageAndWaitProxy)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_OBJECT(UAnimMontage,Z_Param_InMontageToPlay);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
	P_GET_UBOOL(Z_Param_bStopWhenAbilityEnds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnimRootMotionTranslationScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTimeSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_PNAWDamageEvent**)Z_Param__Result=P_THIS->CreatePlayMontageAndWaitProxy(Z_Param_TaskInstanceName,Z_Param_InMontageToPlay,Z_Param_Rate,Z_Param_StartSection,Z_Param_bStopWhenAbilityEnds,Z_Param_AnimRootMotionTranslationScale,Z_Param_StartTimeSeconds);
	P_NATIVE_END;
}
// End Class USimpleGameplayAbilityMontage Function CreatePlayMontageAndWaitProxy

// Begin Class USimpleGameplayAbilityMontage Function PlayMontage
struct Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage_Statics
{
	struct SimpleGameplayAbilityMontage_eventPlayMontage_Parms
	{
		FName StartSection;
		UAbilityTask_PlayMontageAndWait* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPGGameplayAbility|Tasks" },
		{ "CPP_Default_StartSection", "None" },
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityMontage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleGameplayAbilityMontage_eventPlayMontage_Parms, StartSection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleGameplayAbilityMontage_eventPlayMontage_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage_Statics::NewProp_StartSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleGameplayAbilityMontage, nullptr, "PlayMontage", nullptr, nullptr, Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage_Statics::SimpleGameplayAbilityMontage_eventPlayMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage_Statics::SimpleGameplayAbilityMontage_eventPlayMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleGameplayAbilityMontage::execPlayMontage)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_PlayMontageAndWait**)Z_Param__Result=P_THIS->PlayMontage(Z_Param_StartSection);
	P_NATIVE_END;
}
// End Class USimpleGameplayAbilityMontage Function PlayMontage

// Begin Class USimpleGameplayAbilityMontage
void USimpleGameplayAbilityMontage::StaticRegisterNativesUSimpleGameplayAbilityMontage()
{
	UClass* Class = USimpleGameplayAbilityMontage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreatePlayMontageAndWaitProxy", &USimpleGameplayAbilityMontage::execCreatePlayMontageAndWaitProxy },
		{ "PlayMontage", &USimpleGameplayAbilityMontage::execPlayMontage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleGameplayAbilityMontage);
UClass* Z_Construct_UClass_USimpleGameplayAbilityMontage_NoRegister()
{
	return USimpleGameplayAbilityMontage::StaticClass();
}
struct Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/SimpleGameplayAbilityMontage.h" },
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageToPlay_MetaData[] = {
		{ "Category", "MontageAbility" },
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomMontageToPlay_MetaData[] = {
		{ "Category", "MontageAbility" },
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFixedMontageToPlay_MetaData[] = {
		{ "Category", "MontageAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9b\xba\xe5\xae\x9a\xe6\x92\xad\xe6\x94\xbe \xe9\x9c\x80\xe8\xa6\x81\xe7\xbb\xa7\xe6\x89\xbf ISimpleGameplayAbilitiesExtendInterface \xe9\x87\x8d\xe5\x86\x99 GetGameplayAbilitiesMontageSections \xe6\x8c\x87\xe5\xae\x9a\xe6\x92\xad\xe6\x94\xbe\xe5\x93\xaa\xe4\xb8\xaa\xe5\x8a\xa8\xe7\x94\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityMontage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9b\xba\xe5\xae\x9a\xe6\x92\xad\xe6\x94\xbe \xe9\x9c\x80\xe8\xa6\x81\xe7\xbb\xa7\xe6\x89\xbf ISimpleGameplayAbilitiesExtendInterface \xe9\x87\x8d\xe5\x86\x99 GetGameplayAbilitiesMontageSections \xe6\x8c\x87\xe5\xae\x9a\xe6\x92\xad\xe6\x94\xbe\xe5\x93\xaa\xe4\xb8\xaa\xe5\x8a\xa8\xe7\x94\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWait_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/SimpleGameplayAbilityMontage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static void NewProp_bRandomMontageToPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomMontageToPlay;
	static void NewProp_bFixedMontageToPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixedMontageToPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWait;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleGameplayAbilityMontage_CreatePlayMontageAndWaitProxy, "CreatePlayMontageAndWaitProxy" }, // 3047754611
		{ &Z_Construct_UFunction_USimpleGameplayAbilityMontage_PlayMontage, "PlayMontage" }, // 3033658375
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleGameplayAbilityMontage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleGameplayAbilityMontage, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageToPlay_MetaData), NewProp_MontageToPlay_MetaData) };
void Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::NewProp_bRandomMontageToPlay_SetBit(void* Obj)
{
	((USimpleGameplayAbilityMontage*)Obj)->bRandomMontageToPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::NewProp_bRandomMontageToPlay = { "bRandomMontageToPlay", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleGameplayAbilityMontage), &Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::NewProp_bRandomMontageToPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomMontageToPlay_MetaData), NewProp_bRandomMontageToPlay_MetaData) };
void Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::NewProp_bFixedMontageToPlay_SetBit(void* Obj)
{
	((USimpleGameplayAbilityMontage*)Obj)->bFixedMontageToPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::NewProp_bFixedMontageToPlay = { "bFixedMontageToPlay", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleGameplayAbilityMontage), &Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::NewProp_bFixedMontageToPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFixedMontageToPlay_MetaData), NewProp_bFixedMontageToPlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::NewProp_InWait = { "InWait", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleGameplayAbilityMontage, InWait), Z_Construct_UClass_UAbilityTask_PNAWDamageEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWait_MetaData), NewProp_InWait_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::NewProp_MontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::NewProp_bRandomMontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::NewProp_bFixedMontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::NewProp_InWait,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USimpleGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::ClassParams = {
	&USimpleGameplayAbilityMontage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleGameplayAbilityMontage()
{
	if (!Z_Registration_Info_UClass_USimpleGameplayAbilityMontage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleGameplayAbilityMontage.OuterSingleton, Z_Construct_UClass_USimpleGameplayAbilityMontage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleGameplayAbilityMontage.OuterSingleton;
}
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* StaticClass<USimpleGameplayAbilityMontage>()
{
	return USimpleGameplayAbilityMontage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleGameplayAbilityMontage);
USimpleGameplayAbilityMontage::~USimpleGameplayAbilityMontage() {}
// End Class USimpleGameplayAbilityMontage

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityMontage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleGameplayAbilityMontage, USimpleGameplayAbilityMontage::StaticClass, TEXT("USimpleGameplayAbilityMontage"), &Z_Registration_Info_UClass_USimpleGameplayAbilityMontage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleGameplayAbilityMontage), 2250416909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityMontage_h_4041469004(TEXT("/Script/SimpleGameplayAbilitiesExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityMontage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_SimpleGameplayAbilityMontage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
