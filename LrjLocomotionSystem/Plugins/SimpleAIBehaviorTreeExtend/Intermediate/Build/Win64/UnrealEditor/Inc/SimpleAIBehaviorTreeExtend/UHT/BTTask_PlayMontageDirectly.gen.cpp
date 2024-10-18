// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTTask/BTTask_PlayMontageDirectly.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PlayMontageDirectly() {}

// Begin Cross Module References
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTTask_PlayMontageDirectly();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTTask_PlayMontageDirectly_NoRegister();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTTask_PlayMontageMulticast();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTTask_PlayMontageDirectly
void UBTTask_PlayMontageDirectly::StaticRegisterNativesUBTTask_PlayMontageDirectly()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PlayMontageDirectly);
UClass* Z_Construct_UClass_UBTTask_PlayMontageDirectly_NoRegister()
{
	return UBTTask_PlayMontageDirectly::StaticClass();
}
struct Z_Construct_UClass_UBTTask_PlayMontageDirectly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BehaviorTree/BTTask/BTTask_PlayMontageDirectly.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_PlayMontageDirectly.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Play Directly" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x9b\xae\xe6\xa0\x87\xe4\xbd\x8d\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BTTask/BTTask_PlayMontageDirectly.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xae\xe6\xa0\x87\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PlayMontageDirectly>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_PlayMontageDirectly_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PlayMontageDirectly, TargetLocation), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PlayMontageDirectly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayMontageDirectly_Statics::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayMontageDirectly_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_PlayMontageDirectly_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_PlayMontageMulticast,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayMontageDirectly_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PlayMontageDirectly_Statics::ClassParams = {
	&UBTTask_PlayMontageDirectly::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_PlayMontageDirectly_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayMontageDirectly_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayMontageDirectly_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_PlayMontageDirectly_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_PlayMontageDirectly()
{
	if (!Z_Registration_Info_UClass_UBTTask_PlayMontageDirectly.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PlayMontageDirectly.OuterSingleton, Z_Construct_UClass_UBTTask_PlayMontageDirectly_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_PlayMontageDirectly.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTTask_PlayMontageDirectly>()
{
	return UBTTask_PlayMontageDirectly::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PlayMontageDirectly);
UBTTask_PlayMontageDirectly::~UBTTask_PlayMontageDirectly() {}
// End Class UBTTask_PlayMontageDirectly

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_PlayMontageDirectly_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PlayMontageDirectly, UBTTask_PlayMontageDirectly::StaticClass, TEXT("UBTTask_PlayMontageDirectly"), &Z_Registration_Info_UClass_UBTTask_PlayMontageDirectly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PlayMontageDirectly), 2057914751U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_PlayMontageDirectly_h_1560743314(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_PlayMontageDirectly_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTTask_BTTask_PlayMontageDirectly_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
