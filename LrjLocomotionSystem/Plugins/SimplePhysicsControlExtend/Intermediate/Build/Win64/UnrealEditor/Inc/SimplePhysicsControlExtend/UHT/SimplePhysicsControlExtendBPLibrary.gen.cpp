// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplePhysicsControlExtend/Public/SimplePhysicsControlExtendBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplePhysicsControlExtendBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SIMPLEPHYSICSCONTROLEXTEND_API UClass* Z_Construct_UClass_USimplePhysicsControlExtendBPLibrary();
SIMPLEPHYSICSCONTROLEXTEND_API UClass* Z_Construct_UClass_USimplePhysicsControlExtendBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimplePhysicsControlExtend();
// End Cross Module References

// Begin Class USimplePhysicsControlExtendBPLibrary Function SimplePhysicsControlExtendSampleFunction
struct Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction_Statics
{
	struct SimplePhysicsControlExtendBPLibrary_eventSimplePhysicsControlExtendSampleFunction_Parms
	{
		float Param;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplePhysicsControlExtendTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "SimplePhysicsControlExtend sample test testing" },
		{ "ModuleRelativePath", "Public/SimplePhysicsControlExtendBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplePhysicsControlExtendBPLibrary_eventSimplePhysicsControlExtendSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplePhysicsControlExtendBPLibrary_eventSimplePhysicsControlExtendSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplePhysicsControlExtendBPLibrary, nullptr, "SimplePhysicsControlExtendSampleFunction", nullptr, nullptr, Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction_Statics::SimplePhysicsControlExtendBPLibrary_eventSimplePhysicsControlExtendSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction_Statics::SimplePhysicsControlExtendBPLibrary_eventSimplePhysicsControlExtendSampleFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplePhysicsControlExtendBPLibrary::execSimplePhysicsControlExtendSampleFunction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplePhysicsControlExtendBPLibrary::SimplePhysicsControlExtendSampleFunction(Z_Param_Param);
	P_NATIVE_END;
}
// End Class USimplePhysicsControlExtendBPLibrary Function SimplePhysicsControlExtendSampleFunction

// Begin Class USimplePhysicsControlExtendBPLibrary
void USimplePhysicsControlExtendBPLibrary::StaticRegisterNativesUSimplePhysicsControlExtendBPLibrary()
{
	UClass* Class = USimplePhysicsControlExtendBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SimplePhysicsControlExtendSampleFunction", &USimplePhysicsControlExtendBPLibrary::execSimplePhysicsControlExtendSampleFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimplePhysicsControlExtendBPLibrary);
UClass* Z_Construct_UClass_USimplePhysicsControlExtendBPLibrary_NoRegister()
{
	return USimplePhysicsControlExtendBPLibrary::StaticClass();
}
struct Z_Construct_UClass_USimplePhysicsControlExtendBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SimplePhysicsControlExtendBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SimplePhysicsControlExtendBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimplePhysicsControlExtendBPLibrary_SimplePhysicsControlExtendSampleFunction, "SimplePhysicsControlExtendSampleFunction" }, // 2150096906
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplePhysicsControlExtendBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimplePhysicsControlExtendBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SimplePhysicsControlExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimplePhysicsControlExtendBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimplePhysicsControlExtendBPLibrary_Statics::ClassParams = {
	&USimplePhysicsControlExtendBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimplePhysicsControlExtendBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USimplePhysicsControlExtendBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimplePhysicsControlExtendBPLibrary()
{
	if (!Z_Registration_Info_UClass_USimplePhysicsControlExtendBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimplePhysicsControlExtendBPLibrary.OuterSingleton, Z_Construct_UClass_USimplePhysicsControlExtendBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimplePhysicsControlExtendBPLibrary.OuterSingleton;
}
template<> SIMPLEPHYSICSCONTROLEXTEND_API UClass* StaticClass<USimplePhysicsControlExtendBPLibrary>()
{
	return USimplePhysicsControlExtendBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimplePhysicsControlExtendBPLibrary);
USimplePhysicsControlExtendBPLibrary::~USimplePhysicsControlExtendBPLibrary() {}
// End Class USimplePhysicsControlExtendBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimplePhysicsControlExtend_Source_SimplePhysicsControlExtend_Public_SimplePhysicsControlExtendBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimplePhysicsControlExtendBPLibrary, USimplePhysicsControlExtendBPLibrary::StaticClass, TEXT("USimplePhysicsControlExtendBPLibrary"), &Z_Registration_Info_UClass_USimplePhysicsControlExtendBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimplePhysicsControlExtendBPLibrary), 2167799710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimplePhysicsControlExtend_Source_SimplePhysicsControlExtend_Public_SimplePhysicsControlExtendBPLibrary_h_3562124753(TEXT("/Script/SimplePhysicsControlExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimplePhysicsControlExtend_Source_SimplePhysicsControlExtend_Public_SimplePhysicsControlExtendBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimplePhysicsControlExtend_Source_SimplePhysicsControlExtend_Public_SimplePhysicsControlExtendBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
