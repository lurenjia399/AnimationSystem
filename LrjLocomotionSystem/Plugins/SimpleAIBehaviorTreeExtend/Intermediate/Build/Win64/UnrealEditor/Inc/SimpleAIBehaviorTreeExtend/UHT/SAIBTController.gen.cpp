// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/AIController/SAIBTController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIBTController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_ASAIBTController();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_ASAIBTController_NoRegister();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_ASAIBTModularAIController();
SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTState();
SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EThreatType();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class ASAIBTController Function AddThreatTarget
struct Z_Construct_UFunction_ASAIBTController_AddThreatTarget_Statics
{
	struct SAIBTController_eventAddThreatTarget_Parms
	{
		AActor* TargetPtr;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPG AI Controller|Threat" },
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIBTController_AddThreatTarget_Statics::NewProp_TargetPtr = { "TargetPtr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAIBTController_eventAddThreatTarget_Parms, TargetPtr), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIBTController_AddThreatTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_AddThreatTarget_Statics::NewProp_TargetPtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_AddThreatTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIBTController_AddThreatTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIBTController, nullptr, "AddThreatTarget", nullptr, nullptr, Z_Construct_UFunction_ASAIBTController_AddThreatTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_AddThreatTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASAIBTController_AddThreatTarget_Statics::SAIBTController_eventAddThreatTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_AddThreatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAIBTController_AddThreatTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASAIBTController_AddThreatTarget_Statics::SAIBTController_eventAddThreatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASAIBTController_AddThreatTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAIBTController_AddThreatTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASAIBTController::execAddThreatTarget)
{
	P_GET_OBJECT(AActor,Z_Param_TargetPtr);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddThreatTarget(Z_Param_TargetPtr);
	P_NATIVE_END;
}
// End Class ASAIBTController Function AddThreatTarget

// Begin Class ASAIBTController Function BP_GetTeamCaptain
struct Z_Construct_UFunction_ASAIBTController_BP_GetTeamCaptain_Statics
{
	struct SAIBTController_eventBP_GetTeamCaptain_Parms
	{
		ASAIBTController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPG AI Controller|Team" },
		{ "DisplayName", "GetTeamCaptain" },
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIBTController_BP_GetTeamCaptain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAIBTController_eventBP_GetTeamCaptain_Parms, ReturnValue), Z_Construct_UClass_ASAIBTController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIBTController_BP_GetTeamCaptain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_BP_GetTeamCaptain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_BP_GetTeamCaptain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIBTController_BP_GetTeamCaptain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIBTController, nullptr, "BP_GetTeamCaptain", nullptr, nullptr, Z_Construct_UFunction_ASAIBTController_BP_GetTeamCaptain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_BP_GetTeamCaptain_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASAIBTController_BP_GetTeamCaptain_Statics::SAIBTController_eventBP_GetTeamCaptain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_BP_GetTeamCaptain_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAIBTController_BP_GetTeamCaptain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASAIBTController_BP_GetTeamCaptain_Statics::SAIBTController_eventBP_GetTeamCaptain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASAIBTController_BP_GetTeamCaptain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAIBTController_BP_GetTeamCaptain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASAIBTController::execBP_GetTeamCaptain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASAIBTController**)Z_Param__Result=P_THIS->BP_GetTeamCaptain();
	P_NATIVE_END;
}
// End Class ASAIBTController Function BP_GetTeamCaptain

// Begin Class ASAIBTController Function CanRunBehavior
struct Z_Construct_UFunction_ASAIBTController_CanRunBehavior_Statics
{
	struct SAIBTController_eventCanRunBehavior_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPG AI Controller|Common" },
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASAIBTController_CanRunBehavior_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SAIBTController_eventCanRunBehavior_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAIBTController_CanRunBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SAIBTController_eventCanRunBehavior_Parms), &Z_Construct_UFunction_ASAIBTController_CanRunBehavior_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIBTController_CanRunBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_CanRunBehavior_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_CanRunBehavior_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIBTController_CanRunBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIBTController, nullptr, "CanRunBehavior", nullptr, nullptr, Z_Construct_UFunction_ASAIBTController_CanRunBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_CanRunBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASAIBTController_CanRunBehavior_Statics::SAIBTController_eventCanRunBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_CanRunBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAIBTController_CanRunBehavior_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASAIBTController_CanRunBehavior_Statics::SAIBTController_eventCanRunBehavior_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASAIBTController_CanRunBehavior()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAIBTController_CanRunBehavior_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASAIBTController::execCanRunBehavior)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanRunBehavior();
	P_NATIVE_END;
}
// End Class ASAIBTController Function CanRunBehavior

// Begin Class ASAIBTController Function CheckIsTargetInSight
struct Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics
{
	struct SAIBTController_eventCheckIsTargetInSight_Parms
	{
		const AActor* TargetActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPG AI Controller|Battle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x80\xe6\xb5\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe8\xa7\x86\xe9\x87\x8e\xe5\x86\x85\n" },
#endif
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\xb5\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe8\xa7\x86\xe9\x87\x8e\xe5\x86\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAIBTController_eventCheckIsTargetInSight_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
void Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SAIBTController_eventCheckIsTargetInSight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SAIBTController_eventCheckIsTargetInSight_Parms), &Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIBTController, nullptr, "CheckIsTargetInSight", nullptr, nullptr, Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics::SAIBTController_eventCheckIsTargetInSight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics::SAIBTController_eventCheckIsTargetInSight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASAIBTController::execCheckIsTargetInSight)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckIsTargetInSight(Z_Param_TargetActor);
	P_NATIVE_END;
}
// End Class ASAIBTController Function CheckIsTargetInSight

// Begin Class ASAIBTController Function GetIsTeamAI
struct Z_Construct_UFunction_ASAIBTController_GetIsTeamAI_Statics
{
	struct SAIBTController_eventGetIsTeamAI_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPG AI Controller|Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xba\xe5\xb0\x8f\xe9\x98\x9f""AI\n" },
#endif
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xba\xe5\xb0\x8f\xe9\x98\x9f""AI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASAIBTController_GetIsTeamAI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SAIBTController_eventGetIsTeamAI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAIBTController_GetIsTeamAI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SAIBTController_eventGetIsTeamAI_Parms), &Z_Construct_UFunction_ASAIBTController_GetIsTeamAI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIBTController_GetIsTeamAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_GetIsTeamAI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_GetIsTeamAI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIBTController_GetIsTeamAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIBTController, nullptr, "GetIsTeamAI", nullptr, nullptr, Z_Construct_UFunction_ASAIBTController_GetIsTeamAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_GetIsTeamAI_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASAIBTController_GetIsTeamAI_Statics::SAIBTController_eventGetIsTeamAI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_GetIsTeamAI_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAIBTController_GetIsTeamAI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASAIBTController_GetIsTeamAI_Statics::SAIBTController_eventGetIsTeamAI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASAIBTController_GetIsTeamAI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAIBTController_GetIsTeamAI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASAIBTController::execGetIsTeamAI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsTeamAI();
	P_NATIVE_END;
}
// End Class ASAIBTController Function GetIsTeamAI

// Begin Class ASAIBTController Function GetIsTeamCaptain
struct Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain_Statics
{
	struct SAIBTController_eventGetIsTeamCaptain_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPG AI Controller|Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe5\xb0\x8f\xe9\x98\x9f\xe9\x98\x9f\xe9\x95\xbf\n" },
#endif
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe5\xb0\x8f\xe9\x98\x9f\xe9\x98\x9f\xe9\x95\xbf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SAIBTController_eventGetIsTeamCaptain_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SAIBTController_eventGetIsTeamCaptain_Parms), &Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIBTController, nullptr, "GetIsTeamCaptain", nullptr, nullptr, Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain_Statics::SAIBTController_eventGetIsTeamCaptain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain_Statics::SAIBTController_eventGetIsTeamCaptain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASAIBTController::execGetIsTeamCaptain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsTeamCaptain();
	P_NATIVE_END;
}
// End Class ASAIBTController Function GetIsTeamCaptain

// Begin Class ASAIBTController Function GetMaxThreatTarget
struct Z_Construct_UFunction_ASAIBTController_GetMaxThreatTarget_Statics
{
	struct SAIBTController_eventGetMaxThreatTarget_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPG AI Controller|Threat" },
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIBTController_GetMaxThreatTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAIBTController_eventGetMaxThreatTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIBTController_GetMaxThreatTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_GetMaxThreatTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_GetMaxThreatTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIBTController_GetMaxThreatTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIBTController, nullptr, "GetMaxThreatTarget", nullptr, nullptr, Z_Construct_UFunction_ASAIBTController_GetMaxThreatTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_GetMaxThreatTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASAIBTController_GetMaxThreatTarget_Statics::SAIBTController_eventGetMaxThreatTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_GetMaxThreatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAIBTController_GetMaxThreatTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASAIBTController_GetMaxThreatTarget_Statics::SAIBTController_eventGetMaxThreatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASAIBTController_GetMaxThreatTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAIBTController_GetMaxThreatTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASAIBTController::execGetMaxThreatTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetMaxThreatTarget();
	P_NATIVE_END;
}
// End Class ASAIBTController Function GetMaxThreatTarget

// Begin Class ASAIBTController Function GetMonsterState
struct Z_Construct_UFunction_ASAIBTController_GetMonsterState_Statics
{
	struct SAIBTController_eventGetMonsterState_Parms
	{
		ESAIBTState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPG AI Controller|Battle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASAIBTController_GetMonsterState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASAIBTController_GetMonsterState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAIBTController_eventGetMonsterState_Parms, ReturnValue), Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3414903778
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIBTController_GetMonsterState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_GetMonsterState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_GetMonsterState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_GetMonsterState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIBTController_GetMonsterState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIBTController, nullptr, "GetMonsterState", nullptr, nullptr, Z_Construct_UFunction_ASAIBTController_GetMonsterState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_GetMonsterState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASAIBTController_GetMonsterState_Statics::SAIBTController_eventGetMonsterState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_GetMonsterState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAIBTController_GetMonsterState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASAIBTController_GetMonsterState_Statics::SAIBTController_eventGetMonsterState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASAIBTController_GetMonsterState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAIBTController_GetMonsterState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASAIBTController::execGetMonsterState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESAIBTState*)Z_Param__Result=P_THIS->GetMonsterState();
	P_NATIVE_END;
}
// End Class ASAIBTController Function GetMonsterState

// Begin Class ASAIBTController Function GetTarget
struct Z_Construct_UFunction_ASAIBTController_GetTarget_Statics
{
	struct SAIBTController_eventGetTarget_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPG AI Controller" },
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIBTController_GetTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAIBTController_eventGetTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIBTController_GetTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_GetTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_GetTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIBTController_GetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIBTController, nullptr, "GetTarget", nullptr, nullptr, Z_Construct_UFunction_ASAIBTController_GetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_GetTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASAIBTController_GetTarget_Statics::SAIBTController_eventGetTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_GetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAIBTController_GetTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASAIBTController_GetTarget_Statics::SAIBTController_eventGetTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASAIBTController_GetTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAIBTController_GetTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASAIBTController::execGetTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetTarget();
	P_NATIVE_END;
}
// End Class ASAIBTController Function GetTarget

// Begin Class ASAIBTController Function MMOARPGFindTarget
struct Z_Construct_UFunction_ASAIBTController_MMOARPGFindTarget_Statics
{
	struct SAIBTController_eventMMOARPGFindTarget_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPG AI Controller" },
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIBTController_MMOARPGFindTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAIBTController_eventMMOARPGFindTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIBTController_MMOARPGFindTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_MMOARPGFindTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_MMOARPGFindTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIBTController_MMOARPGFindTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIBTController, nullptr, "MMOARPGFindTarget", nullptr, nullptr, Z_Construct_UFunction_ASAIBTController_MMOARPGFindTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_MMOARPGFindTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASAIBTController_MMOARPGFindTarget_Statics::SAIBTController_eventMMOARPGFindTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_MMOARPGFindTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAIBTController_MMOARPGFindTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASAIBTController_MMOARPGFindTarget_Statics::SAIBTController_eventMMOARPGFindTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASAIBTController_MMOARPGFindTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAIBTController_MMOARPGFindTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASAIBTController::execMMOARPGFindTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->MMOARPGFindTarget();
	P_NATIVE_END;
}
// End Class ASAIBTController Function MMOARPGFindTarget

// Begin Class ASAIBTController Function OnThreatTargetAdded
struct Z_Construct_UFunction_ASAIBTController_OnThreatTargetAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPG AI Controller|Threat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbd\x93\xe7\x9b\xae\xe6\xa0\x87\xe5\x88\x97\xe8\xa1\xa8\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe7\x9b\xae\xe6\xa0\x87\xe5\x88\x97\xe8\xa1\xa8\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIBTController_OnThreatTargetAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIBTController, nullptr, "OnThreatTargetAdded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_OnThreatTargetAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAIBTController_OnThreatTargetAdded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASAIBTController_OnThreatTargetAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAIBTController_OnThreatTargetAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASAIBTController::execOnThreatTargetAdded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnThreatTargetAdded();
	P_NATIVE_END;
}
// End Class ASAIBTController Function OnThreatTargetAdded

// Begin Class ASAIBTController Function PrintThreatMap
struct Z_Construct_UFunction_ASAIBTController_PrintThreatMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPG AI Controller|Threat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xb5\x8b\xe8\xaf\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb5\x8b\xe8\xaf\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIBTController_PrintThreatMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIBTController, nullptr, "PrintThreatMap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_PrintThreatMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAIBTController_PrintThreatMap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASAIBTController_PrintThreatMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAIBTController_PrintThreatMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASAIBTController::execPrintThreatMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrintThreatMap();
	P_NATIVE_END;
}
// End Class ASAIBTController Function PrintThreatMap

// Begin Class ASAIBTController Function RemoveThreatTarget
struct Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics
{
	struct SAIBTController_eventRemoveThreatTarget_Parms
	{
		AActor* TargetPtr;
		bool bIsSpecialRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPG AI Controller|Threat" },
		{ "CPP_Default_bIsSpecialRemove", "false" },
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSpecialRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPtr;
	static void NewProp_bIsSpecialRemove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpecialRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics::NewProp_TargetPtr = { "TargetPtr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAIBTController_eventRemoveThreatTarget_Parms, TargetPtr), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics::NewProp_bIsSpecialRemove_SetBit(void* Obj)
{
	((SAIBTController_eventRemoveThreatTarget_Parms*)Obj)->bIsSpecialRemove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics::NewProp_bIsSpecialRemove = { "bIsSpecialRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SAIBTController_eventRemoveThreatTarget_Parms), &Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics::NewProp_bIsSpecialRemove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSpecialRemove_MetaData), NewProp_bIsSpecialRemove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics::NewProp_TargetPtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics::NewProp_bIsSpecialRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIBTController, nullptr, "RemoveThreatTarget", nullptr, nullptr, Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics::SAIBTController_eventRemoveThreatTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics::SAIBTController_eventRemoveThreatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASAIBTController::execRemoveThreatTarget)
{
	P_GET_OBJECT(AActor,Z_Param_TargetPtr);
	P_GET_UBOOL_REF(Z_Param_Out_bIsSpecialRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveThreatTarget(Z_Param_TargetPtr,Z_Param_Out_bIsSpecialRemove);
	P_NATIVE_END;
}
// End Class ASAIBTController Function RemoveThreatTarget

// Begin Class ASAIBTController Function UpdateBlackboardValueTarget
struct Z_Construct_UFunction_ASAIBTController_UpdateBlackboardValueTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPG AI Controller|Threat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9b\xb4\xe6\x96\xb0Target\xe9\xbb\x91\xe6\x9d\xbf\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0Target\xe9\xbb\x91\xe6\x9d\xbf\xe5\x80\xbc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIBTController_UpdateBlackboardValueTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIBTController, nullptr, "UpdateBlackboardValueTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_UpdateBlackboardValueTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAIBTController_UpdateBlackboardValueTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASAIBTController_UpdateBlackboardValueTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAIBTController_UpdateBlackboardValueTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASAIBTController::execUpdateBlackboardValueTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateBlackboardValueTarget();
	P_NATIVE_END;
}
// End Class ASAIBTController Function UpdateBlackboardValueTarget

// Begin Class ASAIBTController Function UpdateTargetThreat
struct Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics
{
	struct SAIBTController_eventUpdateTargetThreat_Parms
	{
		AActor* TargetPtr;
		EThreatType ThreatType;
		float ModifyValue;
		bool bIsOverride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMOARPG AI Controller|Threat" },
		{ "CPP_Default_bIsOverride", "false" },
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThreatType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifyValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPtr;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThreatType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThreatType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModifyValue;
	static void NewProp_bIsOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::NewProp_TargetPtr = { "TargetPtr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAIBTController_eventUpdateTargetThreat_Parms, TargetPtr), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::NewProp_ThreatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::NewProp_ThreatType = { "ThreatType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAIBTController_eventUpdateTargetThreat_Parms, ThreatType), Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EThreatType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThreatType_MetaData), NewProp_ThreatType_MetaData) }; // 1298598116
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::NewProp_ModifyValue = { "ModifyValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAIBTController_eventUpdateTargetThreat_Parms, ModifyValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifyValue_MetaData), NewProp_ModifyValue_MetaData) };
void Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::NewProp_bIsOverride_SetBit(void* Obj)
{
	((SAIBTController_eventUpdateTargetThreat_Parms*)Obj)->bIsOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::NewProp_bIsOverride = { "bIsOverride", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SAIBTController_eventUpdateTargetThreat_Parms), &Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::NewProp_bIsOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOverride_MetaData), NewProp_bIsOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::NewProp_TargetPtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::NewProp_ThreatType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::NewProp_ThreatType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::NewProp_ModifyValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::NewProp_bIsOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIBTController, nullptr, "UpdateTargetThreat", nullptr, nullptr, Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::SAIBTController_eventUpdateTargetThreat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::SAIBTController_eventUpdateTargetThreat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASAIBTController::execUpdateTargetThreat)
{
	P_GET_OBJECT(AActor,Z_Param_TargetPtr);
	P_GET_ENUM_REF(EThreatType,Z_Param_Out_ThreatType);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ModifyValue);
	P_GET_UBOOL_REF(Z_Param_Out_bIsOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTargetThreat(Z_Param_TargetPtr,(EThreatType&)(Z_Param_Out_ThreatType),Z_Param_Out_ModifyValue,Z_Param_Out_bIsOverride);
	P_NATIVE_END;
}
// End Class ASAIBTController Function UpdateTargetThreat

// Begin Class ASAIBTController
void ASAIBTController::StaticRegisterNativesASAIBTController()
{
	UClass* Class = ASAIBTController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddThreatTarget", &ASAIBTController::execAddThreatTarget },
		{ "BP_GetTeamCaptain", &ASAIBTController::execBP_GetTeamCaptain },
		{ "CanRunBehavior", &ASAIBTController::execCanRunBehavior },
		{ "CheckIsTargetInSight", &ASAIBTController::execCheckIsTargetInSight },
		{ "GetIsTeamAI", &ASAIBTController::execGetIsTeamAI },
		{ "GetIsTeamCaptain", &ASAIBTController::execGetIsTeamCaptain },
		{ "GetMaxThreatTarget", &ASAIBTController::execGetMaxThreatTarget },
		{ "GetMonsterState", &ASAIBTController::execGetMonsterState },
		{ "GetTarget", &ASAIBTController::execGetTarget },
		{ "MMOARPGFindTarget", &ASAIBTController::execMMOARPGFindTarget },
		{ "OnThreatTargetAdded", &ASAIBTController::execOnThreatTargetAdded },
		{ "PrintThreatMap", &ASAIBTController::execPrintThreatMap },
		{ "RemoveThreatTarget", &ASAIBTController::execRemoveThreatTarget },
		{ "UpdateBlackboardValueTarget", &ASAIBTController::execUpdateBlackboardValueTarget },
		{ "UpdateTargetThreat", &ASAIBTController::execUpdateTargetThreat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASAIBTController);
UClass* Z_Construct_UClass_ASAIBTController_NoRegister()
{
	return ASAIBTController::StaticClass();
}
struct Z_Construct_UClass_ASAIBTController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIController/SAIBTController.h" },
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[] = {
		{ "Category", "MMOARPG AI Controller|Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x89\xa7\xe8\xa1\x8cTick\xe7\x9a\x84\xe9\x97\xb4\xe9\x9a\x94\n" },
#endif
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\xa7\xe8\xa1\x8cTick\xe7\x9a\x84\xe9\x97\xb4\xe9\x9a\x94" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlowTickInterval_MetaData[] = {
		{ "Category", "MMOARPG AI Controller|Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x89\xa7\xe8\xa1\x8c\xe6\x85\xa2Tick\xe7\x9a\x84\xe9\x97\xb4\xe9\x9a\x94\n" },
#endif
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\xa7\xe8\xa1\x8c\xe6\x85\xa2Tick\xe7\x9a\x84\xe9\x97\xb4\xe9\x9a\x94" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonsterState_MetaData[] = {
		{ "Category", "MMOARPG AI Controller|Battle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI\xe5\xbd\x93\xe5\x89\x8d\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI\xe5\xbd\x93\xe5\x89\x8d\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonsterStateTimer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\xa8\xe4\xba\x8e""AI\xe7\x8a\xb6\xe6\x80\x81\xe7\x9a\x84\xe8\xae\xa1\xe6\x97\xb6\xe5\x99\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/AIController/SAIBTController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e""AI\xe7\x8a\xb6\xe6\x80\x81\xe7\x9a\x84\xe8\xae\xa1\xe6\x97\xb6\xe5\x99\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowTickInterval;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MonsterState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MonsterState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MonsterStateTimer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASAIBTController_AddThreatTarget, "AddThreatTarget" }, // 3428136549
		{ &Z_Construct_UFunction_ASAIBTController_BP_GetTeamCaptain, "BP_GetTeamCaptain" }, // 2637229285
		{ &Z_Construct_UFunction_ASAIBTController_CanRunBehavior, "CanRunBehavior" }, // 2825898092
		{ &Z_Construct_UFunction_ASAIBTController_CheckIsTargetInSight, "CheckIsTargetInSight" }, // 3184290867
		{ &Z_Construct_UFunction_ASAIBTController_GetIsTeamAI, "GetIsTeamAI" }, // 2840923758
		{ &Z_Construct_UFunction_ASAIBTController_GetIsTeamCaptain, "GetIsTeamCaptain" }, // 2072078481
		{ &Z_Construct_UFunction_ASAIBTController_GetMaxThreatTarget, "GetMaxThreatTarget" }, // 3472416569
		{ &Z_Construct_UFunction_ASAIBTController_GetMonsterState, "GetMonsterState" }, // 1906436484
		{ &Z_Construct_UFunction_ASAIBTController_GetTarget, "GetTarget" }, // 2732960303
		{ &Z_Construct_UFunction_ASAIBTController_MMOARPGFindTarget, "MMOARPGFindTarget" }, // 2755085932
		{ &Z_Construct_UFunction_ASAIBTController_OnThreatTargetAdded, "OnThreatTargetAdded" }, // 2544744647
		{ &Z_Construct_UFunction_ASAIBTController_PrintThreatMap, "PrintThreatMap" }, // 3639022435
		{ &Z_Construct_UFunction_ASAIBTController_RemoveThreatTarget, "RemoveThreatTarget" }, // 4076805514
		{ &Z_Construct_UFunction_ASAIBTController_UpdateBlackboardValueTarget, "UpdateBlackboardValueTarget" }, // 3519837336
		{ &Z_Construct_UFunction_ASAIBTController_UpdateTargetThreat, "UpdateTargetThreat" }, // 1552197765
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAIBTController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIBTController_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASAIBTController, TickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickInterval_MetaData), NewProp_TickInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIBTController_Statics::NewProp_SlowTickInterval = { "SlowTickInterval", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASAIBTController, SlowTickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlowTickInterval_MetaData), NewProp_SlowTickInterval_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASAIBTController_Statics::NewProp_MonsterState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASAIBTController_Statics::NewProp_MonsterState = { "MonsterState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASAIBTController, MonsterState), Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonsterState_MetaData), NewProp_MonsterState_MetaData) }; // 3414903778
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIBTController_Statics::NewProp_MonsterStateTimer = { "MonsterStateTimer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASAIBTController, MonsterStateTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonsterStateTimer_MetaData), NewProp_MonsterStateTimer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAIBTController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIBTController_Statics::NewProp_TickInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIBTController_Statics::NewProp_SlowTickInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIBTController_Statics::NewProp_MonsterState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIBTController_Statics::NewProp_MonsterState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIBTController_Statics::NewProp_MonsterStateTimer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASAIBTController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASAIBTController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASAIBTModularAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASAIBTController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASAIBTController_Statics::ClassParams = {
	&ASAIBTController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASAIBTController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASAIBTController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASAIBTController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASAIBTController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASAIBTController()
{
	if (!Z_Registration_Info_UClass_ASAIBTController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASAIBTController.OuterSingleton, Z_Construct_UClass_ASAIBTController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASAIBTController.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<ASAIBTController>()
{
	return ASAIBTController::StaticClass();
}
ASAIBTController::ASAIBTController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASAIBTController);
ASAIBTController::~ASAIBTController() {}
// End Class ASAIBTController

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASAIBTController, ASAIBTController::StaticClass, TEXT("ASAIBTController"), &Z_Registration_Info_UClass_ASAIBTController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASAIBTController), 2606843363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTController_h_3365041793(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
