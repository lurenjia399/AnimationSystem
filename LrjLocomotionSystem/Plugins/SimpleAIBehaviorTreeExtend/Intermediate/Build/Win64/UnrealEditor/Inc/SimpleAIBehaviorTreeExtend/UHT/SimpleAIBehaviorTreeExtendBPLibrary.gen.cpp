// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/SimpleAIBehaviorTreeExtendBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleAIBehaviorTreeExtendBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_USimpleAIBehaviorTreeExtendBPLibrary();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_USimpleAIBehaviorTreeExtendBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class USimpleAIBehaviorTreeExtendBPLibrary Function SimpleOceanSampleFunction
struct Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction_Statics
{
	struct SimpleAIBehaviorTreeExtendBPLibrary_eventSimpleOceanSampleFunction_Parms
	{
		float Param;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleOceanTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "SimpleOcean sample test testing" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleAIBehaviorTreeExtendBPLibrary_eventSimpleOceanSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleAIBehaviorTreeExtendBPLibrary_eventSimpleOceanSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleAIBehaviorTreeExtendBPLibrary, nullptr, "SimpleOceanSampleFunction", nullptr, nullptr, Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction_Statics::SimpleAIBehaviorTreeExtendBPLibrary_eventSimpleOceanSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction_Statics::SimpleAIBehaviorTreeExtendBPLibrary_eventSimpleOceanSampleFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleAIBehaviorTreeExtendBPLibrary::execSimpleOceanSampleFunction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimpleAIBehaviorTreeExtendBPLibrary::SimpleOceanSampleFunction(Z_Param_Param);
	P_NATIVE_END;
}
// End Class USimpleAIBehaviorTreeExtendBPLibrary Function SimpleOceanSampleFunction

// Begin Class USimpleAIBehaviorTreeExtendBPLibrary
void USimpleAIBehaviorTreeExtendBPLibrary::StaticRegisterNativesUSimpleAIBehaviorTreeExtendBPLibrary()
{
	UClass* Class = USimpleAIBehaviorTreeExtendBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SimpleOceanSampleFunction", &USimpleAIBehaviorTreeExtendBPLibrary::execSimpleOceanSampleFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleAIBehaviorTreeExtendBPLibrary);
UClass* Z_Construct_UClass_USimpleAIBehaviorTreeExtendBPLibrary_NoRegister()
{
	return USimpleAIBehaviorTreeExtendBPLibrary::StaticClass();
}
struct Z_Construct_UClass_USimpleAIBehaviorTreeExtendBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "SimpleAIBehaviorTreeExtendBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleAIBehaviorTreeExtendBPLibrary_SimpleOceanSampleFunction, "SimpleOceanSampleFunction" }, // 851227757
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleAIBehaviorTreeExtendBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleAIBehaviorTreeExtendBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAIBehaviorTreeExtendBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleAIBehaviorTreeExtendBPLibrary_Statics::ClassParams = {
	&USimpleAIBehaviorTreeExtendBPLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAIBehaviorTreeExtendBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleAIBehaviorTreeExtendBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleAIBehaviorTreeExtendBPLibrary()
{
	if (!Z_Registration_Info_UClass_USimpleAIBehaviorTreeExtendBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleAIBehaviorTreeExtendBPLibrary.OuterSingleton, Z_Construct_UClass_USimpleAIBehaviorTreeExtendBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleAIBehaviorTreeExtendBPLibrary.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<USimpleAIBehaviorTreeExtendBPLibrary>()
{
	return USimpleAIBehaviorTreeExtendBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleAIBehaviorTreeExtendBPLibrary);
USimpleAIBehaviorTreeExtendBPLibrary::~USimpleAIBehaviorTreeExtendBPLibrary() {}
// End Class USimpleAIBehaviorTreeExtendBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleAIBehaviorTreeExtendBPLibrary, USimpleAIBehaviorTreeExtendBPLibrary::StaticClass, TEXT("USimpleAIBehaviorTreeExtendBPLibrary"), &Z_Registration_Info_UClass_USimpleAIBehaviorTreeExtendBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleAIBehaviorTreeExtendBPLibrary), 650456399U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendBPLibrary_h_4096138282(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
