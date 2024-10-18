// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTService/BTService_Boss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_Boss() {}

// Begin Cross Module References
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTService_Base();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTService_Boss();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTService_Boss_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTService_Boss
void UBTService_Boss::StaticRegisterNativesUBTService_Boss()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_Boss);
UClass* Z_Construct_UClass_UBTService_Boss_NoRegister()
{
	return UBTService_Boss::StaticClass();
}
struct Z_Construct_UClass_UBTService_Boss_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BehaviorTree/BTService/BTService_Boss.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTService/BTService_Boss.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_Boss>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTService_Boss_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Boss_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_Boss_Statics::ClassParams = {
	&UBTService_Boss::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Boss_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_Boss_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_Boss()
{
	if (!Z_Registration_Info_UClass_UBTService_Boss.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_Boss.OuterSingleton, Z_Construct_UClass_UBTService_Boss_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_Boss.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTService_Boss>()
{
	return UBTService_Boss::StaticClass();
}
UBTService_Boss::UBTService_Boss() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_Boss);
UBTService_Boss::~UBTService_Boss() {}
// End Class UBTService_Boss

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTService_BTService_Boss_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_Boss, UBTService_Boss::StaticClass, TEXT("UBTService_Boss"), &Z_Registration_Info_UClass_UBTService_Boss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_Boss), 1733706871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTService_BTService_Boss_h_925591633(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTService_BTService_Boss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTService_BTService_Boss_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
