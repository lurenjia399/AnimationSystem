// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTTask/BTTask_PlayMontageMulticast.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PlayMontageMulticast() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTTask_PlayMontageMulticast();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTTask_PlayMontageMulticast_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTTask_PlayMontageMulticast Function OnMontageEnded
struct Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics
{
	struct BTTask_PlayMontageMulticast_eventOnMontageEnded_Parms
	{
		UAnimMontage* MontageAsset;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_PlayMontageMulticast.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageAsset;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics::NewProp_MontageAsset = { "MontageAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTTask_PlayMontageMulticast_eventOnMontageEnded_Parms, MontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((BTTask_PlayMontageMulticast_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BTTask_PlayMontageMulticast_eventOnMontageEnded_Parms), &Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics::NewProp_MontageAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_PlayMontageMulticast, nullptr, "OnMontageEnded", nullptr, nullptr, Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics::BTTask_PlayMontageMulticast_eventOnMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics::BTTask_PlayMontageMulticast_eventOnMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_PlayMontageMulticast::execOnMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_MontageAsset);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageEnded(Z_Param_MontageAsset,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UBTTask_PlayMontageMulticast Function OnMontageEnded

// Begin Class UBTTask_PlayMontageMulticast
void UBTTask_PlayMontageMulticast::StaticRegisterNativesUBTTask_PlayMontageMulticast()
{
	UClass* Class = UBTTask_PlayMontageMulticast::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMontageEnded", &UBTTask_PlayMontageMulticast::execOnMontageEnded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PlayMontageMulticast);
UClass* Z_Construct_UClass_UBTTask_PlayMontageMulticast_NoRegister()
{
	return UBTTask_PlayMontageMulticast::StaticClass();
}
struct Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTTask/BTTask_PlayMontageMulticast.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_PlayMontageMulticast.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontageAsset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe8\xb5\x84\xe6\xba\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_PlayMontageMulticast.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe8\xb5\x84\xe6\xba\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe7\x8e\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_PlayMontageMulticast.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe7\x8e\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageSectionName_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x89\x87\xe6\xae\xb5\xe5\x90\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_PlayMontageMulticast.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\x87\xe6\xae\xb5\xe5\x90\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_PlayMontageMulticast.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTCompPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_PlayMontageMulticast.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontageAsset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MontageSectionName;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CharacterPtr;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_BTCompPtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_PlayMontageMulticast_OnMontageEnded, "OnMontageEnded" }, // 734600182
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PlayMontageMulticast>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::NewProp_AnimMontageAsset = { "AnimMontageAsset", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PlayMontageMulticast, AnimMontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontageAsset_MetaData), NewProp_AnimMontageAsset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PlayMontageMulticast, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::NewProp_MontageSectionName = { "MontageSectionName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PlayMontageMulticast, MontageSectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageSectionName_MetaData), NewProp_MontageSectionName_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::NewProp_CharacterPtr = { "CharacterPtr", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PlayMontageMulticast, CharacterPtr), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPtr_MetaData), NewProp_CharacterPtr_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::NewProp_BTCompPtr = { "BTCompPtr", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PlayMontageMulticast, BTCompPtr), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTCompPtr_MetaData), NewProp_BTCompPtr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::NewProp_AnimMontageAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::NewProp_MontageSectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::NewProp_CharacterPtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::NewProp_BTCompPtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::ClassParams = {
	&UBTTask_PlayMontageMulticast::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_PlayMontageMulticast()
{
	if (!Z_Registration_Info_UClass_UBTTask_PlayMontageMulticast.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PlayMontageMulticast.OuterSingleton, Z_Construct_UClass_UBTTask_PlayMontageMulticast_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_PlayMontageMulticast.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTTask_PlayMontageMulticast>()
{
	return UBTTask_PlayMontageMulticast::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PlayMontageMulticast);
UBTTask_PlayMontageMulticast::~UBTTask_PlayMontageMulticast() {}
// End Class UBTTask_PlayMontageMulticast

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_PlayMontageMulticast_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PlayMontageMulticast, UBTTask_PlayMontageMulticast::StaticClass, TEXT("UBTTask_PlayMontageMulticast"), &Z_Registration_Info_UClass_UBTTask_PlayMontageMulticast, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PlayMontageMulticast), 307963595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_PlayMontageMulticast_h_4134320632(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_PlayMontageMulticast_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_PlayMontageMulticast_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
