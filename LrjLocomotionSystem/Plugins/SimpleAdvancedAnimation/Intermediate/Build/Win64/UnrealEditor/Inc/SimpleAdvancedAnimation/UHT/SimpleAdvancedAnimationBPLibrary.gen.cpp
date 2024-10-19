// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAdvancedAnimation/Public/SimpleAdvancedAnimationBPLibrary.h"
#include "SimpleAdvancedAnimation/Public/SimpleAdvancedAnimationType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleAdvancedAnimationBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SIMPLEADVANCEDANIMATION_API UClass* Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary();
SIMPLEADVANCEDANIMATION_API UClass* Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary_NoRegister();
SIMPLEADVANCEDANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FFootIKInfo();
UPackage* Z_Construct_UPackage__Script_SimpleAdvancedAnimation();
// End Cross Module References

// Begin Class USimpleAdvancedAnimationBPLibrary Function CreateFootIK
struct Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics
{
	struct SimpleAdvancedAnimationBPLibrary_eventCreateFootIK_Parms
	{
		ACharacter* InCharacter;
		TArray<FName> InBoneNames;
		float TraceDistance;
		float InterpSpeed;
		float InTraceStart;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleAdvancedAnimation|FootIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create and register footik for specific objects.\n\x09 * @param InCharacter\x09\x09\x09\x09You need to enter a character based on acharacter.\n\x09 * @param InBoneNames\x09\x09\x09\x09If there are more than four skeletons, it may be a multi legged animal.\n\x09 * @param TraceDistance\x09\x09\x09\x09""Additional distance of rays.\n\x09 * @param InterpSpeed\x09\x09\x09\x09How far does the ray go up at the bone point.\n\x09 * @param InTraceStart\x09\x09\x09\x09""Error message if there is an error or warning in the query, MySQL will be notified in the form of text.\n\x09 * Return a footik ID.\n\x09*/" },
#endif
		{ "CPP_Default_InterpSpeed", "18.000000" },
		{ "CPP_Default_InTraceStart", "50.000000" },
		{ "CPP_Default_TraceDistance", "50.000000" },
		{ "ModuleRelativePath", "Public/SimpleAdvancedAnimationBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create and register footik for specific objects.\n@param InCharacter                           You need to enter a character based on acharacter.\n@param InBoneNames                           If there are more than four skeletons, it may be a multi legged animal.\n@param TraceDistance                         Additional distance of rays.\n@param InterpSpeed                           How far does the ray go up at the bone point.\n@param InTraceStart                          Error message if there is an error or warning in the query, MySQL will be notified in the form of text.\nReturn a footik ID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBoneNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InBoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBoneNames;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTraceStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleAdvancedAnimationBPLibrary_eventCreateFootIK_Parms, InCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::NewProp_InBoneNames_Inner = { "InBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::NewProp_InBoneNames = { "InBoneNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleAdvancedAnimationBPLibrary_eventCreateFootIK_Parms, InBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBoneNames_MetaData), NewProp_InBoneNames_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleAdvancedAnimationBPLibrary_eventCreateFootIK_Parms, TraceDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleAdvancedAnimationBPLibrary_eventCreateFootIK_Parms, InterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::NewProp_InTraceStart = { "InTraceStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleAdvancedAnimationBPLibrary_eventCreateFootIK_Parms, InTraceStart), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleAdvancedAnimationBPLibrary_eventCreateFootIK_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::NewProp_InCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::NewProp_InBoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::NewProp_InBoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::NewProp_InTraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary, nullptr, "CreateFootIK", nullptr, nullptr, Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::SimpleAdvancedAnimationBPLibrary_eventCreateFootIK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::SimpleAdvancedAnimationBPLibrary_eventCreateFootIK_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleAdvancedAnimationBPLibrary::execCreateFootIK)
{
	P_GET_OBJECT(ACharacter,Z_Param_InCharacter);
	P_GET_TARRAY_REF(FName,Z_Param_Out_InBoneNames);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TraceDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTraceStart);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USimpleAdvancedAnimationBPLibrary::CreateFootIK(Z_Param_InCharacter,Z_Param_Out_InBoneNames,Z_Param_TraceDistance,Z_Param_InterpSpeed,Z_Param_InTraceStart);
	P_NATIVE_END;
}
// End Class USimpleAdvancedAnimationBPLibrary Function CreateFootIK

// Begin Class USimpleAdvancedAnimationBPLibrary Function Destroy
struct Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_Destroy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleAdvancedAnimation|FootIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Delete Advanced animation system. If you are developing in the editor, you'd better perform this step when closing the instance.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAdvancedAnimationBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delete Advanced animation system. If you are developing in the editor, you'd better perform this step when closing the instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_Destroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary, nullptr, "Destroy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_Destroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_Destroy_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_Destroy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_Destroy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleAdvancedAnimationBPLibrary::execDestroy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USimpleAdvancedAnimationBPLibrary::Destroy();
	P_NATIVE_END;
}
// End Class USimpleAdvancedAnimationBPLibrary Function Destroy

// Begin Class USimpleAdvancedAnimationBPLibrary Function FindFootIKInfo
struct Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics
{
	struct SimpleAdvancedAnimationBPLibrary_eventFindFootIKInfo_Parms
	{
		int32 InKey;
		FName InKeyName;
		FFootIKInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleAdvancedAnimation|FootIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Looking for more data.\n\x09 * @param InKey\x09\x09\x09\x09\x09It's footik ID.\n\x09 * @param InKeyName\x09\x09\x09\x09Which bone point offset do you want to get.\n\x09 * Returns the foot IK structure.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAdvancedAnimationBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Looking for more data.\n@param InKey                                 It's footik ID.\n@param InKeyName                             Which bone point offset do you want to get.\nReturns the foot IK structure." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InKeyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleAdvancedAnimationBPLibrary_eventFindFootIKInfo_Parms, InKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKey_MetaData), NewProp_InKey_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics::NewProp_InKeyName = { "InKeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleAdvancedAnimationBPLibrary_eventFindFootIKInfo_Parms, InKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKeyName_MetaData), NewProp_InKeyName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleAdvancedAnimationBPLibrary_eventFindFootIKInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FFootIKInfo, METADATA_PARAMS(0, nullptr) }; // 681663154
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics::NewProp_InKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary, nullptr, "FindFootIKInfo", nullptr, nullptr, Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics::SimpleAdvancedAnimationBPLibrary_eventFindFootIKInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics::SimpleAdvancedAnimationBPLibrary_eventFindFootIKInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleAdvancedAnimationBPLibrary::execFindFootIKInfo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InKey);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InKeyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFootIKInfo*)Z_Param__Result=USimpleAdvancedAnimationBPLibrary::FindFootIKInfo(Z_Param_InKey,Z_Param_Out_InKeyName);
	P_NATIVE_END;
}
// End Class USimpleAdvancedAnimationBPLibrary Function FindFootIKInfo

// Begin Class USimpleAdvancedAnimationBPLibrary Function FindOffset
struct Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics
{
	struct SimpleAdvancedAnimationBPLibrary_eventFindOffset_Parms
	{
		int32 InKey;
		FName InKeyName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleAdvancedAnimation|FootIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Find object offset.\n\x09 * @param InKey\x09\x09\x09\x09\x09It's footik ID.\n\x09 * @param InKeyName\x09\x09\x09\x09Which bone point offset do you want to get.\n\x09 * Return Offset value.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAdvancedAnimationBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find object offset.\n@param InKey                                 It's footik ID.\n@param InKeyName                             Which bone point offset do you want to get.\nReturn Offset value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InKeyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleAdvancedAnimationBPLibrary_eventFindOffset_Parms, InKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKey_MetaData), NewProp_InKey_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics::NewProp_InKeyName = { "InKeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleAdvancedAnimationBPLibrary_eventFindOffset_Parms, InKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKeyName_MetaData), NewProp_InKeyName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleAdvancedAnimationBPLibrary_eventFindOffset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics::NewProp_InKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary, nullptr, "FindOffset", nullptr, nullptr, Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics::SimpleAdvancedAnimationBPLibrary_eventFindOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics::SimpleAdvancedAnimationBPLibrary_eventFindOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleAdvancedAnimationBPLibrary::execFindOffset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InKey);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InKeyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimpleAdvancedAnimationBPLibrary::FindOffset(Z_Param_InKey,Z_Param_Out_InKeyName);
	P_NATIVE_END;
}
// End Class USimpleAdvancedAnimationBPLibrary Function FindOffset

// Begin Class USimpleAdvancedAnimationBPLibrary Function GetButtZOffset
struct Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics
{
	struct SimpleAdvancedAnimationBPLibrary_eventGetButtZOffset_Parms
	{
		TArray<float> InOffsets;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleAdvancedAnimation|FootIK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Buttock deviation.\n\x09 * @param InOffsets\x09\x09\x09\x09""Calculate the final butt offset based on the cheap value @See FindOffset.\n\x09 * Returns Bottom offset value.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAdvancedAnimationBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Buttock deviation.\n@param InOffsets                             Calculate the final butt offset based on the cheap value @See FindOffset.\nReturns Bottom offset value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOffsets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InOffsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InOffsets;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics::NewProp_InOffsets_Inner = { "InOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics::NewProp_InOffsets = { "InOffsets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleAdvancedAnimationBPLibrary_eventGetButtZOffset_Parms, InOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOffsets_MetaData), NewProp_InOffsets_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleAdvancedAnimationBPLibrary_eventGetButtZOffset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics::NewProp_InOffsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics::NewProp_InOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary, nullptr, "GetButtZOffset", nullptr, nullptr, Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics::SimpleAdvancedAnimationBPLibrary_eventGetButtZOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics::SimpleAdvancedAnimationBPLibrary_eventGetButtZOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleAdvancedAnimationBPLibrary::execGetButtZOffset)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_InOffsets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimpleAdvancedAnimationBPLibrary::GetButtZOffset(Z_Param_Out_InOffsets);
	P_NATIVE_END;
}
// End Class USimpleAdvancedAnimationBPLibrary Function GetButtZOffset

// Begin Class USimpleAdvancedAnimationBPLibrary
void USimpleAdvancedAnimationBPLibrary::StaticRegisterNativesUSimpleAdvancedAnimationBPLibrary()
{
	UClass* Class = USimpleAdvancedAnimationBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateFootIK", &USimpleAdvancedAnimationBPLibrary::execCreateFootIK },
		{ "Destroy", &USimpleAdvancedAnimationBPLibrary::execDestroy },
		{ "FindFootIKInfo", &USimpleAdvancedAnimationBPLibrary::execFindFootIKInfo },
		{ "FindOffset", &USimpleAdvancedAnimationBPLibrary::execFindOffset },
		{ "GetButtZOffset", &USimpleAdvancedAnimationBPLibrary::execGetButtZOffset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleAdvancedAnimationBPLibrary);
UClass* Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary_NoRegister()
{
	return USimpleAdvancedAnimationBPLibrary::StaticClass();
}
struct Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleAdvancedAnimationBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleAdvancedAnimationBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_CreateFootIK, "CreateFootIK" }, // 352634987
		{ &Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_Destroy, "Destroy" }, // 1337978362
		{ &Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindFootIKInfo, "FindFootIKInfo" }, // 3762010933
		{ &Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_FindOffset, "FindOffset" }, // 517347176
		{ &Z_Construct_UFunction_USimpleAdvancedAnimationBPLibrary_GetButtZOffset, "GetButtZOffset" }, // 1883830182
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleAdvancedAnimationBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAdvancedAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary_Statics::ClassParams = {
	&USimpleAdvancedAnimationBPLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary()
{
	if (!Z_Registration_Info_UClass_USimpleAdvancedAnimationBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleAdvancedAnimationBPLibrary.OuterSingleton, Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleAdvancedAnimationBPLibrary.OuterSingleton;
}
template<> SIMPLEADVANCEDANIMATION_API UClass* StaticClass<USimpleAdvancedAnimationBPLibrary>()
{
	return USimpleAdvancedAnimationBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleAdvancedAnimationBPLibrary);
USimpleAdvancedAnimationBPLibrary::~USimpleAdvancedAnimationBPLibrary() {}
// End Class USimpleAdvancedAnimationBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleAdvancedAnimationBPLibrary, USimpleAdvancedAnimationBPLibrary::StaticClass, TEXT("USimpleAdvancedAnimationBPLibrary"), &Z_Registration_Info_UClass_USimpleAdvancedAnimationBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleAdvancedAnimationBPLibrary), 3549480004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationBPLibrary_h_2048618505(TEXT("/Script/SimpleAdvancedAnimation"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_SimpleAdvancedAnimationBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
