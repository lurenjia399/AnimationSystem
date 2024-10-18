// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/AIController/SAIBTModularAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIBTModularAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_ASAIBTModularAIController();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_ASAIBTModularAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class ASAIBTModularAIController
void ASAIBTModularAIController::StaticRegisterNativesASAIBTModularAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASAIBTModularAIController);
UClass* Z_Construct_UClass_ASAIBTModularAIController_NoRegister()
{
	return ASAIBTModularAIController::StaticClass();
}
struct Z_Construct_UClass_ASAIBTModularAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIController/SAIBTModularAIController.h" },
		{ "ModuleRelativePath", "Public/AIController/SAIBTModularAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAIBTModularAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASAIBTModularAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASAIBTModularAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASAIBTModularAIController_Statics::ClassParams = {
	&ASAIBTModularAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASAIBTModularAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASAIBTModularAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASAIBTModularAIController()
{
	if (!Z_Registration_Info_UClass_ASAIBTModularAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASAIBTModularAIController.OuterSingleton, Z_Construct_UClass_ASAIBTModularAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASAIBTModularAIController.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<ASAIBTModularAIController>()
{
	return ASAIBTModularAIController::StaticClass();
}
ASAIBTModularAIController::ASAIBTModularAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASAIBTModularAIController);
ASAIBTModularAIController::~ASAIBTModularAIController() {}
// End Class ASAIBTModularAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTModularAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASAIBTModularAIController, ASAIBTModularAIController::StaticClass, TEXT("ASAIBTModularAIController"), &Z_Registration_Info_UClass_ASAIBTModularAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASAIBTModularAIController), 2212080556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTModularAIController_h_2512873001(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTModularAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTModularAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
