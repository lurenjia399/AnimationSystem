// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTDecorator/BTDecorator_CheckAIRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_CheckAIRange() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTDecorator_CheckAIRange();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTDecorator_CheckAIRange_NoRegister();
SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTDistanceType();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTDecorator_CheckAIRange
void UBTDecorator_CheckAIRange::StaticRegisterNativesUBTDecorator_CheckAIRange()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_CheckAIRange);
UClass* Z_Construct_UClass_UBTDecorator_CheckAIRange_NoRegister()
{
	return UBTDecorator_CheckAIRange::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_CheckAIRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BehaviorTree/BTDecorator/BTDecorator_CheckAIRange.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTDecorator/BTDecorator_CheckAIRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeType_MetaData[] = {
		{ "Category", "AI Range" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTDecorator/BTDecorator_CheckAIRange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RangeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RangeType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_CheckAIRange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_CheckAIRange_Statics::NewProp_RangeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTDecorator_CheckAIRange_Statics::NewProp_RangeType = { "RangeType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_CheckAIRange, RangeType), Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTDistanceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeType_MetaData), NewProp_RangeType_MetaData) }; // 2207982372
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_CheckAIRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckAIRange_Statics::NewProp_RangeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckAIRange_Statics::NewProp_RangeType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckAIRange_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_CheckAIRange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckAIRange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_CheckAIRange_Statics::ClassParams = {
	&UBTDecorator_CheckAIRange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_CheckAIRange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckAIRange_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckAIRange_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_CheckAIRange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_CheckAIRange()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_CheckAIRange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_CheckAIRange.OuterSingleton, Z_Construct_UClass_UBTDecorator_CheckAIRange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_CheckAIRange.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTDecorator_CheckAIRange>()
{
	return UBTDecorator_CheckAIRange::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_CheckAIRange);
UBTDecorator_CheckAIRange::~UBTDecorator_CheckAIRange() {}
// End Class UBTDecorator_CheckAIRange

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_CheckAIRange_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_CheckAIRange, UBTDecorator_CheckAIRange::StaticClass, TEXT("UBTDecorator_CheckAIRange"), &Z_Registration_Info_UClass_UBTDecorator_CheckAIRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_CheckAIRange), 1896966056U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_CheckAIRange_h_1053891605(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_CheckAIRange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_CheckAIRange_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
