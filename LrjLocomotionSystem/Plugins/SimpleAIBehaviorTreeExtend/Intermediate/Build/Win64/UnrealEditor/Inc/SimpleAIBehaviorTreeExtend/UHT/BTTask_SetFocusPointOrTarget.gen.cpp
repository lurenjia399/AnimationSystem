// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTTask/BTTask_SetFocusPointOrTarget.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetFocusPointOrTarget() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTTask_SetFocusPointOrTarget();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTTask_SetFocusPointOrTarget
void UBTTask_SetFocusPointOrTarget::StaticRegisterNativesUBTTask_SetFocusPointOrTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_SetFocusPointOrTarget);
UClass* Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_NoRegister()
{
	return UBTTask_SetFocusPointOrTarget::StaticClass();
}
struct Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTTask/BTTask_SetFocusPointOrTarget.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_SetFocusPointOrTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsClearFocusTarget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Focus Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe6\xb8\x85\xe9\x99\xa4""Focus\n" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_SetFocusPointOrTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\xb8\x85\xe9\x99\xa4""Focus" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFocusActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Focus Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x9b\xae\xe6\xa0\x87\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xba""Actor\n" },
#endif
		{ "EditCondition", "IsClearFocusTarget == false" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_SetFocusPointOrTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xae\xe6\xa0\x87\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xba""Actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Focus Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x9d\xe5\x90\x91\xe7\x9a\x84""Actor\n" },
#endif
		{ "EditCondition", "IsClearFocusTarget == false && IsFocusActor == true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_SetFocusPointOrTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x9d\xe5\x90\x91\xe7\x9a\x84""Actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Focus Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x9d\xe5\x90\x91\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\n" },
#endif
		{ "EditCondition", "IsClearFocusTarget == false && IsFocusActor == false" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_SetFocusPointOrTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x9d\xe5\x90\x91\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_IsClearFocusTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsClearFocusTarget;
	static void NewProp_IsFocusActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFocusActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocusActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocusLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetFocusPointOrTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::NewProp_IsClearFocusTarget_SetBit(void* Obj)
{
	((UBTTask_SetFocusPointOrTarget*)Obj)->IsClearFocusTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::NewProp_IsClearFocusTarget = { "IsClearFocusTarget", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_SetFocusPointOrTarget), &Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::NewProp_IsClearFocusTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsClearFocusTarget_MetaData), NewProp_IsClearFocusTarget_MetaData) };
void Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::NewProp_IsFocusActor_SetBit(void* Obj)
{
	((UBTTask_SetFocusPointOrTarget*)Obj)->IsFocusActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::NewProp_IsFocusActor = { "IsFocusActor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_SetFocusPointOrTarget), &Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::NewProp_IsFocusActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFocusActor_MetaData), NewProp_IsFocusActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::NewProp_FocusActor = { "FocusActor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetFocusPointOrTarget, FocusActor), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusActor_MetaData), NewProp_FocusActor_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::NewProp_FocusLocation = { "FocusLocation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetFocusPointOrTarget, FocusLocation), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusLocation_MetaData), NewProp_FocusLocation_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::NewProp_IsClearFocusTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::NewProp_IsFocusActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::NewProp_FocusActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::NewProp_FocusLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::ClassParams = {
	&UBTTask_SetFocusPointOrTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_SetFocusPointOrTarget()
{
	if (!Z_Registration_Info_UClass_UBTTask_SetFocusPointOrTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetFocusPointOrTarget.OuterSingleton, Z_Construct_UClass_UBTTask_SetFocusPointOrTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_SetFocusPointOrTarget.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTTask_SetFocusPointOrTarget>()
{
	return UBTTask_SetFocusPointOrTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetFocusPointOrTarget);
UBTTask_SetFocusPointOrTarget::~UBTTask_SetFocusPointOrTarget() {}
// End Class UBTTask_SetFocusPointOrTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_SetFocusPointOrTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetFocusPointOrTarget, UBTTask_SetFocusPointOrTarget::StaticClass, TEXT("UBTTask_SetFocusPointOrTarget"), &Z_Registration_Info_UClass_UBTTask_SetFocusPointOrTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetFocusPointOrTarget), 3955661180U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_SetFocusPointOrTarget_h_3939555025(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_SetFocusPointOrTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_SetFocusPointOrTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
