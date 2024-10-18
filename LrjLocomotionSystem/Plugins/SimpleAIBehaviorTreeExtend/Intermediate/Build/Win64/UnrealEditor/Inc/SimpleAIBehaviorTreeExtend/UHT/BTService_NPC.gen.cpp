// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTService/BTService_NPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_NPC() {}

// Begin Cross Module References
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTService_Base();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTService_NPC();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTService_NPC_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTService_NPC
void UBTService_NPC::StaticRegisterNativesUBTService_NPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_NPC);
UClass* Z_Construct_UClass_UBTService_NPC_NoRegister()
{
	return UBTService_NPC::StaticClass();
}
struct Z_Construct_UClass_UBTService_NPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BehaviorTree/BTService/BTService_NPC.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTService/BTService_NPC.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_NPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTService_NPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_NPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_NPC_Statics::ClassParams = {
	&UBTService_NPC::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_NPC_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_NPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_NPC()
{
	if (!Z_Registration_Info_UClass_UBTService_NPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_NPC.OuterSingleton, Z_Construct_UClass_UBTService_NPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_NPC.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTService_NPC>()
{
	return UBTService_NPC::StaticClass();
}
UBTService_NPC::UBTService_NPC() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_NPC);
UBTService_NPC::~UBTService_NPC() {}
// End Class UBTService_NPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTService_BTService_NPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_NPC, UBTService_NPC::StaticClass, TEXT("UBTService_NPC"), &Z_Registration_Info_UClass_UBTService_NPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_NPC), 447124615U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTService_BTService_NPC_h_262630624(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTService_BTService_NPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTService_BTService_NPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
