// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTTask/BTTask_ResetState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ResetState() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTTask_ResetState();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTTask_ResetState_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTTask_ResetState
void UBTTask_ResetState::StaticRegisterNativesUBTTask_ResetState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_ResetState);
UClass* Z_Construct_UClass_UBTTask_ResetState_NoRegister()
{
	return UBTTask_ResetState::StaticClass();
}
struct Z_Construct_UClass_UBTTask_ResetState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTTask/BTTask_ResetState.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_ResetState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_ResetState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ResetState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTTask_ResetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ResetState, NewState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_ResetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ResetState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ResetState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_ResetState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ResetState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ResetState_Statics::ClassParams = {
	&UBTTask_ResetState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_ResetState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ResetState_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ResetState_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ResetState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_ResetState()
{
	if (!Z_Registration_Info_UClass_UBTTask_ResetState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ResetState.OuterSingleton, Z_Construct_UClass_UBTTask_ResetState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_ResetState.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTTask_ResetState>()
{
	return UBTTask_ResetState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ResetState);
UBTTask_ResetState::~UBTTask_ResetState() {}
// End Class UBTTask_ResetState

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_ResetState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ResetState, UBTTask_ResetState::StaticClass, TEXT("UBTTask_ResetState"), &Z_Registration_Info_UClass_UBTTask_ResetState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ResetState), 3610314887U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_ResetState_h_2187888596(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_ResetState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_ResetState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
