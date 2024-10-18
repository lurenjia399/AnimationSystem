// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTDecorator/BTDecorator_ExecuteRate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ExecuteRate() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTDecorator_ExecuteRate();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTDecorator_ExecuteRate_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTDecorator_ExecuteRate
void UBTDecorator_ExecuteRate::StaticRegisterNativesUBTDecorator_ExecuteRate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_ExecuteRate);
UClass* Z_Construct_UClass_UBTDecorator_ExecuteRate_NoRegister()
{
	return UBTDecorator_ExecuteRate::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_ExecuteRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BehaviorTree/BTDecorator/BTDecorator_ExecuteRate.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTDecorator/BTDecorator_ExecuteRate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteRate_MetaData[] = {
		{ "Category", "Execute Rate" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\xa6\xe5\x8f\x91\xe5\x87\xa0\xe7\x8e\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BTDecorator/BTDecorator_ExecuteRate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa6\xe5\x8f\x91\xe5\x87\xa0\xe7\x8e\x87" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExecuteRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_ExecuteRate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_ExecuteRate_Statics::NewProp_ExecuteRate = { "ExecuteRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_ExecuteRate, ExecuteRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteRate_MetaData), NewProp_ExecuteRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_ExecuteRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ExecuteRate_Statics::NewProp_ExecuteRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExecuteRate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_ExecuteRate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExecuteRate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_ExecuteRate_Statics::ClassParams = {
	&UBTDecorator_ExecuteRate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_ExecuteRate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExecuteRate_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExecuteRate_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_ExecuteRate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_ExecuteRate()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_ExecuteRate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_ExecuteRate.OuterSingleton, Z_Construct_UClass_UBTDecorator_ExecuteRate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_ExecuteRate.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTDecorator_ExecuteRate>()
{
	return UBTDecorator_ExecuteRate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ExecuteRate);
UBTDecorator_ExecuteRate::~UBTDecorator_ExecuteRate() {}
// End Class UBTDecorator_ExecuteRate

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_ExecuteRate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_ExecuteRate, UBTDecorator_ExecuteRate::StaticClass, TEXT("UBTDecorator_ExecuteRate"), &Z_Registration_Info_UClass_UBTDecorator_ExecuteRate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_ExecuteRate), 1666659161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_ExecuteRate_h_2544419462(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_ExecuteRate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_ExecuteRate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
