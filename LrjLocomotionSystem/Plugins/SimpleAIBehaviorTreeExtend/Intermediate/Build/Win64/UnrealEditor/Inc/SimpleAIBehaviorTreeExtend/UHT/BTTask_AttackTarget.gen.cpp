// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTTask/BTTask_AttackTarget.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_AttackTarget() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTTask_AttackTarget();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTTask_AttackTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTTask_AttackTarget Function OnAbilityEnded
struct Z_Construct_UFunction_UBTTask_AttackTarget_OnAbilityEnded_Statics
{
	struct BTTask_AttackTarget_eventOnAbilityEnded_Parms
	{
		UGameplayAbility* EndedAbility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_AttackTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndedAbility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_AttackTarget_OnAbilityEnded_Statics::NewProp_EndedAbility = { "EndedAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTTask_AttackTarget_eventOnAbilityEnded_Parms, EndedAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_AttackTarget_OnAbilityEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_AttackTarget_OnAbilityEnded_Statics::NewProp_EndedAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_AttackTarget_OnAbilityEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_AttackTarget_OnAbilityEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_AttackTarget, nullptr, "OnAbilityEnded", nullptr, nullptr, Z_Construct_UFunction_UBTTask_AttackTarget_OnAbilityEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_AttackTarget_OnAbilityEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTTask_AttackTarget_OnAbilityEnded_Statics::BTTask_AttackTarget_eventOnAbilityEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_AttackTarget_OnAbilityEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_AttackTarget_OnAbilityEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTTask_AttackTarget_OnAbilityEnded_Statics::BTTask_AttackTarget_eventOnAbilityEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTTask_AttackTarget_OnAbilityEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_AttackTarget_OnAbilityEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_AttackTarget::execOnAbilityEnded)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_EndedAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAbilityEnded(Z_Param_EndedAbility);
	P_NATIVE_END;
}
// End Class UBTTask_AttackTarget Function OnAbilityEnded

// Begin Class UBTTask_AttackTarget
void UBTTask_AttackTarget::StaticRegisterNativesUBTTask_AttackTarget()
{
	UClass* Class = UBTTask_AttackTarget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAbilityEnded", &UBTTask_AttackTarget::execOnAbilityEnded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_AttackTarget);
UClass* Z_Construct_UClass_UBTTask_AttackTarget_NoRegister()
{
	return UBTTask_AttackTarget::StaticClass();
}
struct Z_Construct_UClass_UBTTask_AttackTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTTask/BTTask_AttackTarget.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_AttackTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blackboard_Actor_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_AttackTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTag_MetaData[] = {
		{ "Category", "Tag" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_AttackTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearGASTime_MetaData[] = {
		{ "Category", "Tag" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_AttackTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_AttackTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivatingAbility_MetaData[] = {
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_AttackTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Blackboard_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClearGASTime;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_BTComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ActivatingAbility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_AttackTarget_OnAbilityEnded, "OnAbilityEnded" }, // 2912225941
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_AttackTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_AttackTarget_Statics::NewProp_Blackboard_Actor = { "Blackboard_Actor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_AttackTarget, Blackboard_Actor), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blackboard_Actor_MetaData), NewProp_Blackboard_Actor_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_AttackTarget_Statics::NewProp_AttackTag = { "AttackTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_AttackTarget, AttackTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTag_MetaData), NewProp_AttackTag_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_AttackTarget_Statics::NewProp_ClearGASTime = { "ClearGASTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_AttackTarget, ClearGASTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearGASTime_MetaData), NewProp_ClearGASTime_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBTTask_AttackTarget_Statics::NewProp_BTComponent = { "BTComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_AttackTarget, BTComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTComponent_MetaData), NewProp_BTComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBTTask_AttackTarget_Statics::NewProp_ActivatingAbility = { "ActivatingAbility", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_AttackTarget, ActivatingAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivatingAbility_MetaData), NewProp_ActivatingAbility_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_AttackTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_AttackTarget_Statics::NewProp_Blackboard_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_AttackTarget_Statics::NewProp_AttackTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_AttackTarget_Statics::NewProp_ClearGASTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_AttackTarget_Statics::NewProp_BTComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_AttackTarget_Statics::NewProp_ActivatingAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_AttackTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_AttackTarget_Statics::ClassParams = {
	&UBTTask_AttackTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTTask_AttackTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackTarget_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_AttackTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_AttackTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_AttackTarget()
{
	if (!Z_Registration_Info_UClass_UBTTask_AttackTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_AttackTarget.OuterSingleton, Z_Construct_UClass_UBTTask_AttackTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_AttackTarget.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTTask_AttackTarget>()
{
	return UBTTask_AttackTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_AttackTarget);
UBTTask_AttackTarget::~UBTTask_AttackTarget() {}
// End Class UBTTask_AttackTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_AttackTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_AttackTarget, UBTTask_AttackTarget::StaticClass, TEXT("UBTTask_AttackTarget"), &Z_Registration_Info_UClass_UBTTask_AttackTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_AttackTarget), 3674859376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_AttackTarget_h_3338801594(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_AttackTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_AttackTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
