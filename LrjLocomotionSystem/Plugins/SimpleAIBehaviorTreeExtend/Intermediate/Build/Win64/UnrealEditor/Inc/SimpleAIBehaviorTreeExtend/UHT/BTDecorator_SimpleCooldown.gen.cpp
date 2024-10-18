// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTDecorator/BTDecorator_SimpleCooldown.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_SimpleCooldown() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Cooldown();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTDecorator_SimpleCooldown();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTDecorator_SimpleCooldown_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTDecorator_SimpleCooldown
void UBTDecorator_SimpleCooldown::StaticRegisterNativesUBTDecorator_SimpleCooldown()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_SimpleCooldown);
UClass* Z_Construct_UClass_UBTDecorator_SimpleCooldown_NoRegister()
{
	return UBTDecorator_SimpleCooldown::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_SimpleCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/BTDecorator/BTDecorator_SimpleCooldown.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTDecorator/BTDecorator_SimpleCooldown.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_SimpleCooldown>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTDecorator_SimpleCooldown_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator_Cooldown,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_SimpleCooldown_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_SimpleCooldown_Statics::ClassParams = {
	&UBTDecorator_SimpleCooldown::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_SimpleCooldown_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_SimpleCooldown_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_SimpleCooldown()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_SimpleCooldown.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_SimpleCooldown.OuterSingleton, Z_Construct_UClass_UBTDecorator_SimpleCooldown_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_SimpleCooldown.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTDecorator_SimpleCooldown>()
{
	return UBTDecorator_SimpleCooldown::StaticClass();
}
UBTDecorator_SimpleCooldown::UBTDecorator_SimpleCooldown(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_SimpleCooldown);
UBTDecorator_SimpleCooldown::~UBTDecorator_SimpleCooldown() {}
// End Class UBTDecorator_SimpleCooldown

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_SimpleCooldown_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_SimpleCooldown, UBTDecorator_SimpleCooldown::StaticClass, TEXT("UBTDecorator_SimpleCooldown"), &Z_Registration_Info_UClass_UBTDecorator_SimpleCooldown, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_SimpleCooldown), 1106303311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_SimpleCooldown_h_1820384482(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_SimpleCooldown_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_SimpleCooldown_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
