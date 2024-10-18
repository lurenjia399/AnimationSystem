// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTDecorator/BTDecorator_CheckTargetPointIsReachable.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_CheckTargetPointIsReachable() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_NoRegister();
SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESimpleTargetDirection();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTDecorator_CheckTargetPointIsReachable
void UBTDecorator_CheckTargetPointIsReachable::StaticRegisterNativesUBTDecorator_CheckTargetPointIsReachable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_CheckTargetPointIsReachable);
UClass* Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_NoRegister()
{
	return UBTDecorator_CheckTargetPointIsReachable::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTDecorator/BTDecorator_CheckTargetPointIsReachable.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTDecorator/BTDecorator_CheckTargetPointIsReachable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckTarget_MetaData[] = {
		{ "Category", "Target Point" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbe\x85\xe9\xaa\x8c\xe8\xaf\x81\xe7\x9a\x84\xe7\x9b\xae\xe6\xa0\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BTDecorator/BTDecorator_CheckTargetPointIsReachable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbe\x85\xe9\xaa\x8c\xe8\xaf\x81\xe7\x9a\x84\xe7\x9b\xae\xe6\xa0\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPointDirection_MetaData[] = {
		{ "Category", "Target Point" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x9b\xae\xe6\xa0\x87\xe7\x82\xb9\xe7\x9b\xb8\xe5\xaf\xb9\xe7\x9b\xae\xe6\xa0\x87\xe7\x9a\x84\xe6\x96\xb9\xe5\x90\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BTDecorator/BTDecorator_CheckTargetPointIsReachable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xae\xe6\xa0\x87\xe7\x82\xb9\xe7\x9b\xb8\xe5\xaf\xb9\xe7\x9b\xae\xe6\xa0\x87\xe7\x9a\x84\xe6\x96\xb9\xe5\x90\x91" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPointDistance_MetaData[] = {
		{ "Category", "Target Point" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x9b\xae\xe6\xa0\x87\xe7\x82\xb9\xe4\xb8\x8e\xe7\x9b\xae\xe6\xa0\x87\xe4\xb9\x8b\xe9\x97\xb4\xe8\xb7\x9d\xe7\xa6\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BTDecorator/BTDecorator_CheckTargetPointIsReachable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xae\xe6\xa0\x87\xe7\x82\xb9\xe4\xb8\x8e\xe7\x9b\xae\xe6\xa0\x87\xe4\xb9\x8b\xe9\x97\xb4\xe8\xb7\x9d\xe7\xa6\xbb" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetPointDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetPointDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetPointDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_CheckTargetPointIsReachable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::NewProp_CheckTarget = { "CheckTarget", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_CheckTargetPointIsReachable, CheckTarget), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckTarget_MetaData), NewProp_CheckTarget_MetaData) }; // 3940742986
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::NewProp_TargetPointDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::NewProp_TargetPointDirection = { "TargetPointDirection", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_CheckTargetPointIsReachable, TargetPointDirection), Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESimpleTargetDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPointDirection_MetaData), NewProp_TargetPointDirection_MetaData) }; // 2242313389
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::NewProp_TargetPointDistance = { "TargetPointDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_CheckTargetPointIsReachable, TargetPointDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPointDistance_MetaData), NewProp_TargetPointDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::NewProp_CheckTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::NewProp_TargetPointDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::NewProp_TargetPointDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::NewProp_TargetPointDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::ClassParams = {
	&UBTDecorator_CheckTargetPointIsReachable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_CheckTargetPointIsReachable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_CheckTargetPointIsReachable.OuterSingleton, Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_CheckTargetPointIsReachable.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTDecorator_CheckTargetPointIsReachable>()
{
	return UBTDecorator_CheckTargetPointIsReachable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_CheckTargetPointIsReachable);
UBTDecorator_CheckTargetPointIsReachable::~UBTDecorator_CheckTargetPointIsReachable() {}
// End Class UBTDecorator_CheckTargetPointIsReachable

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_CheckTargetPointIsReachable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_CheckTargetPointIsReachable, UBTDecorator_CheckTargetPointIsReachable::StaticClass, TEXT("UBTDecorator_CheckTargetPointIsReachable"), &Z_Registration_Info_UClass_UBTDecorator_CheckTargetPointIsReachable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_CheckTargetPointIsReachable), 1609855253U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_CheckTargetPointIsReachable_h_2517782434(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_CheckTargetPointIsReachable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTDecorator_BTDecorator_CheckTargetPointIsReachable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
