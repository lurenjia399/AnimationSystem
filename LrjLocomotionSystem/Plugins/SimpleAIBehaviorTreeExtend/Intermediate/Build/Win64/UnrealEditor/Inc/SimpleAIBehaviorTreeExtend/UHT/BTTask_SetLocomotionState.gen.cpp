// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTTask/BTTask_SetLocomotionState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetLocomotionState() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTTask_SetLocomotionState();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTTask_SetLocomotionState_NoRegister();
SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTLocomotionState();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTTask_SetLocomotionState
void UBTTask_SetLocomotionState::StaticRegisterNativesUBTTask_SetLocomotionState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_SetLocomotionState);
UClass* Z_Construct_UClass_UBTTask_SetLocomotionState_NoRegister()
{
	return UBTTask_SetLocomotionState::StaticClass();
}
struct Z_Construct_UClass_UBTTask_SetLocomotionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTTask/BTTask_SetLocomotionState.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_SetLocomotionState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkingState_MetaData[] = {
		{ "Category", "Locomotion Type" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_SetLocomotionState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_WalkingState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WalkingState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetLocomotionState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_SetLocomotionState_Statics::NewProp_WalkingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_SetLocomotionState_Statics::NewProp_WalkingState = { "WalkingState", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetLocomotionState, WalkingState), Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTLocomotionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkingState_MetaData), NewProp_WalkingState_MetaData) }; // 3592019067
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetLocomotionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetLocomotionState_Statics::NewProp_WalkingState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetLocomotionState_Statics::NewProp_WalkingState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetLocomotionState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_SetLocomotionState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetLocomotionState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetLocomotionState_Statics::ClassParams = {
	&UBTTask_SetLocomotionState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_SetLocomotionState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetLocomotionState_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetLocomotionState_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_SetLocomotionState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_SetLocomotionState()
{
	if (!Z_Registration_Info_UClass_UBTTask_SetLocomotionState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetLocomotionState.OuterSingleton, Z_Construct_UClass_UBTTask_SetLocomotionState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_SetLocomotionState.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTTask_SetLocomotionState>()
{
	return UBTTask_SetLocomotionState::StaticClass();
}
UBTTask_SetLocomotionState::UBTTask_SetLocomotionState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetLocomotionState);
UBTTask_SetLocomotionState::~UBTTask_SetLocomotionState() {}
// End Class UBTTask_SetLocomotionState

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_SetLocomotionState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetLocomotionState, UBTTask_SetLocomotionState::StaticClass, TEXT("UBTTask_SetLocomotionState"), &Z_Registration_Info_UClass_UBTTask_SetLocomotionState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetLocomotionState), 2048701545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_SetLocomotionState_h_480367539(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_SetLocomotionState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_SetLocomotionState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
