// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTDecorator/BTDecorator_CheckAIState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_CheckAIState() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_ASAIBTController_NoRegister();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTDecorator_CheckAIState();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTDecorator_CheckAIState_NoRegister();
SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTState();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTDecorator_CheckAIState Function OnAIStateChanged
struct Z_Construct_UFunction_UBTDecorator_CheckAIState_OnAIStateChanged_Statics
{
	struct BTDecorator_CheckAIState_eventOnAIStateChanged_Parms
	{
		const ASAIBTController* AIControllerPtr;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviorTree/BTDecorator/BTDecorator_CheckAIState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIControllerPtr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIControllerPtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTDecorator_CheckAIState_OnAIStateChanged_Statics::NewProp_AIControllerPtr = { "AIControllerPtr", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTDecorator_CheckAIState_eventOnAIStateChanged_Parms, AIControllerPtr), Z_Construct_UClass_ASAIBTController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIControllerPtr_MetaData), NewProp_AIControllerPtr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTDecorator_CheckAIState_OnAIStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTDecorator_CheckAIState_OnAIStateChanged_Statics::NewProp_AIControllerPtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_CheckAIState_OnAIStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTDecorator_CheckAIState_OnAIStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_CheckAIState, nullptr, "OnAIStateChanged", nullptr, nullptr, Z_Construct_UFunction_UBTDecorator_CheckAIState_OnAIStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_CheckAIState_OnAIStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTDecorator_CheckAIState_OnAIStateChanged_Statics::BTDecorator_CheckAIState_eventOnAIStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTDecorator_CheckAIState_OnAIStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTDecorator_CheckAIState_OnAIStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTDecorator_CheckAIState_OnAIStateChanged_Statics::BTDecorator_CheckAIState_eventOnAIStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTDecorator_CheckAIState_OnAIStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTDecorator_CheckAIState_OnAIStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTDecorator_CheckAIState::execOnAIStateChanged)
{
	P_GET_OBJECT(ASAIBTController,Z_Param_AIControllerPtr);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAIStateChanged(Z_Param_AIControllerPtr);
	P_NATIVE_END;
}
// End Class UBTDecorator_CheckAIState Function OnAIStateChanged

// Begin Class UBTDecorator_CheckAIState
void UBTDecorator_CheckAIState::StaticRegisterNativesUBTDecorator_CheckAIState()
{
	UClass* Class = UBTDecorator_CheckAIState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAIStateChanged", &UBTDecorator_CheckAIState::execOnAIStateChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_CheckAIState);
UClass* Z_Construct_UClass_UBTDecorator_CheckAIState_NoRegister()
{
	return UBTDecorator_CheckAIState::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_CheckAIState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BehaviorTree/BTDecorator/BTDecorator_CheckAIState.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTDecorator/BTDecorator_CheckAIState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIState_MetaData[] = {
		{ "Category", "AI State" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTDecorator/BTDecorator_CheckAIState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AIState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AIState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTDecorator_CheckAIState_OnAIStateChanged, "OnAIStateChanged" }, // 1614125410
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_CheckAIState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_CheckAIState_Statics::NewProp_AIState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTDecorator_CheckAIState_Statics::NewProp_AIState = { "AIState", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_CheckAIState, AIState), Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIState_MetaData), NewProp_AIState_MetaData) }; // 3414903778
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_CheckAIState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckAIState_Statics::NewProp_AIState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckAIState_Statics::NewProp_AIState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckAIState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_CheckAIState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckAIState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_CheckAIState_Statics::ClassParams = {
	&UBTDecorator_CheckAIState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTDecorator_CheckAIState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckAIState_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckAIState_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_CheckAIState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_CheckAIState()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_CheckAIState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_CheckAIState.OuterSingleton, Z_Construct_UClass_UBTDecorator_CheckAIState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_CheckAIState.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTDecorator_CheckAIState>()
{
	return UBTDecorator_CheckAIState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_CheckAIState);
UBTDecorator_CheckAIState::~UBTDecorator_CheckAIState() {}
// End Class UBTDecorator_CheckAIState

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_CheckAIState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_CheckAIState, UBTDecorator_CheckAIState::StaticClass, TEXT("UBTDecorator_CheckAIState"), &Z_Registration_Info_UClass_UBTDecorator_CheckAIState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_CheckAIState), 4062676459U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_CheckAIState_h_34390760(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_CheckAIState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_CheckAIState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
