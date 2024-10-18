// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTService/BTService_Monster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_Monster() {}

// Begin Cross Module References
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTService_Base();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTService_Monster();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTService_Monster_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTService_Monster
void UBTService_Monster::StaticRegisterNativesUBTService_Monster()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_Monster);
UClass* Z_Construct_UClass_UBTService_Monster_NoRegister()
{
	return UBTService_Monster::StaticClass();
}
struct Z_Construct_UClass_UBTService_Monster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTService/BTService_Monster.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTService/BTService_Monster.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_Monster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTService_Monster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Monster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_Monster_Statics::ClassParams = {
	&UBTService_Monster::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Monster_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_Monster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_Monster()
{
	if (!Z_Registration_Info_UClass_UBTService_Monster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_Monster.OuterSingleton, Z_Construct_UClass_UBTService_Monster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_Monster.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTService_Monster>()
{
	return UBTService_Monster::StaticClass();
}
UBTService_Monster::UBTService_Monster() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_Monster);
UBTService_Monster::~UBTService_Monster() {}
// End Class UBTService_Monster

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTService_BTService_Monster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_Monster, UBTService_Monster::StaticClass, TEXT("UBTService_Monster"), &Z_Registration_Info_UClass_UBTService_Monster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_Monster), 1945319453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTService_BTService_Monster_h_3710588014(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTService_BTService_Monster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTService_BTService_Monster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
