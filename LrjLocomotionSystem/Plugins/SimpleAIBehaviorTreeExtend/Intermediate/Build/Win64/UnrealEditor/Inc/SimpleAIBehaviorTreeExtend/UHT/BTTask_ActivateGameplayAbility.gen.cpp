// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTTask/BTTask_ActivateGameplayAbility.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ActivateGameplayAbility() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTTask_ActivateGameplayAbility();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTTask_ActivateGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTTask_ActivateGameplayAbility Function OnAbilityEnded
struct Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Statics
{
	struct BTTask_ActivateGameplayAbility_eventOnAbilityEnded_Parms
	{
		UGameplayAbility* EndedAbility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_ActivateGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndedAbility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Statics::NewProp_EndedAbility = { "EndedAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTTask_ActivateGameplayAbility_eventOnAbilityEnded_Parms, EndedAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Statics::NewProp_EndedAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_ActivateGameplayAbility, nullptr, "OnAbilityEnded", nullptr, nullptr, Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Statics::BTTask_ActivateGameplayAbility_eventOnAbilityEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Statics::BTTask_ActivateGameplayAbility_eventOnAbilityEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_ActivateGameplayAbility::execOnAbilityEnded)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_EndedAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAbilityEnded(Z_Param_EndedAbility);
	P_NATIVE_END;
}
// End Class UBTTask_ActivateGameplayAbility Function OnAbilityEnded

// Begin Class UBTTask_ActivateGameplayAbility
void UBTTask_ActivateGameplayAbility::StaticRegisterNativesUBTTask_ActivateGameplayAbility()
{
	UClass* Class = UBTTask_ActivateGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAbilityEnded", &UBTTask_ActivateGameplayAbility::execOnAbilityEnded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_ActivateGameplayAbility);
UClass* Z_Construct_UClass_UBTTask_ActivateGameplayAbility_NoRegister()
{
	return UBTTask_ActivateGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTTask/BTTask_ActivateGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_ActivateGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillTag_MetaData[] = {
		{ "Category", "Gameplay Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\xa6\xe5\x8f\x91\xe6\x8a\x80\xe8\x83\xbd\xe7\x9a\x84Tag\xef\xbc\x8c\xe6\x85\x8e\xe7\x94\xa8Non Instanced\xe6\x8a\x80\xe8\x83\xbd\xe7\x9a\x84Tag\xef\xbc\x8c\xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe5\x87\xba\xe7\x8e\xb0\xe9\x97\xae\xe9\xa2\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_ActivateGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa6\xe5\x8f\x91\xe6\x8a\x80\xe8\x83\xbd\xe7\x9a\x84Tag\xef\xbc\x8c\xe6\x85\x8e\xe7\x94\xa8Non Instanced\xe6\x8a\x80\xe8\x83\xbd\xe7\x9a\x84Tag\xef\xbc\x8c\xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe5\x87\xba\xe7\x8e\xb0\xe9\x97\xae\xe9\xa2\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkillTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded, "OnAbilityEnded" }, // 405602733
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ActivateGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_SkillTag = { "SkillTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ActivateGameplayAbility, SkillTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillTag_MetaData), NewProp_SkillTag_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_SkillTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::ClassParams = {
	&UBTTask_ActivateGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_ActivateGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UBTTask_ActivateGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ActivateGameplayAbility.OuterSingleton, Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_ActivateGameplayAbility.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTTask_ActivateGameplayAbility>()
{
	return UBTTask_ActivateGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ActivateGameplayAbility);
UBTTask_ActivateGameplayAbility::~UBTTask_ActivateGameplayAbility() {}
// End Class UBTTask_ActivateGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_ActivateGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ActivateGameplayAbility, UBTTask_ActivateGameplayAbility::StaticClass, TEXT("UBTTask_ActivateGameplayAbility"), &Z_Registration_Info_UClass_UBTTask_ActivateGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ActivateGameplayAbility), 267715585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_ActivateGameplayAbility_h_1845496618(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_ActivateGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_ActivateGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
