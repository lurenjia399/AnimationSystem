// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleGameplayAbilitiesExtend/Public/SimpleGameplayAbilitiesExtendBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleGameplayAbilitiesExtendBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleGameplayAbilitiesExtendBPLibrary();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_USimpleGameplayAbilitiesExtendBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend();
// End Cross Module References

// Begin Class USimpleGameplayAbilitiesExtendBPLibrary Function SimpleGameplayAbilitiesExtendSampleFunction
struct Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction_Statics
{
	struct SimpleGameplayAbilitiesExtendBPLibrary_eventSimpleGameplayAbilitiesExtendSampleFunction_Parms
	{
		float Param;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleGameplayAbilitiesExtendTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "SimpleGameplayAbilitiesExtend sample test testing" },
		{ "ModuleRelativePath", "Public/SimpleGameplayAbilitiesExtendBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleGameplayAbilitiesExtendBPLibrary_eventSimpleGameplayAbilitiesExtendSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleGameplayAbilitiesExtendBPLibrary_eventSimpleGameplayAbilitiesExtendSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleGameplayAbilitiesExtendBPLibrary, nullptr, "SimpleGameplayAbilitiesExtendSampleFunction", nullptr, nullptr, Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction_Statics::SimpleGameplayAbilitiesExtendBPLibrary_eventSimpleGameplayAbilitiesExtendSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction_Statics::SimpleGameplayAbilitiesExtendBPLibrary_eventSimpleGameplayAbilitiesExtendSampleFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleGameplayAbilitiesExtendBPLibrary::execSimpleGameplayAbilitiesExtendSampleFunction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimpleGameplayAbilitiesExtendBPLibrary::SimpleGameplayAbilitiesExtendSampleFunction(Z_Param_Param);
	P_NATIVE_END;
}
// End Class USimpleGameplayAbilitiesExtendBPLibrary Function SimpleGameplayAbilitiesExtendSampleFunction

// Begin Class USimpleGameplayAbilitiesExtendBPLibrary
void USimpleGameplayAbilitiesExtendBPLibrary::StaticRegisterNativesUSimpleGameplayAbilitiesExtendBPLibrary()
{
	UClass* Class = USimpleGameplayAbilitiesExtendBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SimpleGameplayAbilitiesExtendSampleFunction", &USimpleGameplayAbilitiesExtendBPLibrary::execSimpleGameplayAbilitiesExtendSampleFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleGameplayAbilitiesExtendBPLibrary);
UClass* Z_Construct_UClass_USimpleGameplayAbilitiesExtendBPLibrary_NoRegister()
{
	return USimpleGameplayAbilitiesExtendBPLibrary::StaticClass();
}
struct Z_Construct_UClass_USimpleGameplayAbilitiesExtendBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "SimpleGameplayAbilitiesExtendBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleGameplayAbilitiesExtendBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleGameplayAbilitiesExtendBPLibrary_SimpleGameplayAbilitiesExtendSampleFunction, "SimpleGameplayAbilitiesExtendSampleFunction" }, // 2424438552
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleGameplayAbilitiesExtendBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleGameplayAbilitiesExtendBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleGameplayAbilitiesExtendBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleGameplayAbilitiesExtendBPLibrary_Statics::ClassParams = {
	&USimpleGameplayAbilitiesExtendBPLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleGameplayAbilitiesExtendBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleGameplayAbilitiesExtendBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleGameplayAbilitiesExtendBPLibrary()
{
	if (!Z_Registration_Info_UClass_USimpleGameplayAbilitiesExtendBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleGameplayAbilitiesExtendBPLibrary.OuterSingleton, Z_Construct_UClass_USimpleGameplayAbilitiesExtendBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleGameplayAbilitiesExtendBPLibrary.OuterSingleton;
}
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* StaticClass<USimpleGameplayAbilitiesExtendBPLibrary>()
{
	return USimpleGameplayAbilitiesExtendBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleGameplayAbilitiesExtendBPLibrary);
USimpleGameplayAbilitiesExtendBPLibrary::~USimpleGameplayAbilitiesExtendBPLibrary() {}
// End Class USimpleGameplayAbilitiesExtendBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_SimpleGameplayAbilitiesExtendBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleGameplayAbilitiesExtendBPLibrary, USimpleGameplayAbilitiesExtendBPLibrary::StaticClass, TEXT("USimpleGameplayAbilitiesExtendBPLibrary"), &Z_Registration_Info_UClass_USimpleGameplayAbilitiesExtendBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleGameplayAbilitiesExtendBPLibrary), 3712571991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_SimpleGameplayAbilitiesExtendBPLibrary_h_3015789473(TEXT("/Script/SimpleGameplayAbilitiesExtend"),
	Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_SimpleGameplayAbilitiesExtendBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_SimpleGameplayAbilitiesExtendBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
