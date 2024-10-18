// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTDecorator/BTDecorator_AttackRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_AttackRange() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Blackboard();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTDecorator_AttackRange();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTDecorator_AttackRange_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTDecorator_AttackRange
void UBTDecorator_AttackRange::StaticRegisterNativesUBTDecorator_AttackRange()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_AttackRange);
UClass* Z_Construct_UClass_UBTDecorator_AttackRange_NoRegister()
{
	return UBTDecorator_AttackRange::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_AttackRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/BTDecorator/BTDecorator_AttackRange.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTDecorator/BTDecorator_AttackRange.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_AttackRange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTDecorator_AttackRange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator_Blackboard,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_AttackRange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_AttackRange_Statics::ClassParams = {
	&UBTDecorator_AttackRange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_AttackRange_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_AttackRange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_AttackRange()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_AttackRange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_AttackRange.OuterSingleton, Z_Construct_UClass_UBTDecorator_AttackRange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_AttackRange.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTDecorator_AttackRange>()
{
	return UBTDecorator_AttackRange::StaticClass();
}
UBTDecorator_AttackRange::UBTDecorator_AttackRange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_AttackRange);
UBTDecorator_AttackRange::~UBTDecorator_AttackRange() {}
// End Class UBTDecorator_AttackRange

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_AttackRange_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_AttackRange, UBTDecorator_AttackRange::StaticClass, TEXT("UBTDecorator_AttackRange"), &Z_Registration_Info_UClass_UBTDecorator_AttackRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_AttackRange), 3115293327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_AttackRange_h_3008918456(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_AttackRange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_AttackRange_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
