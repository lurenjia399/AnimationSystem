// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/BehaviorTree/BTService/Core/BTService_Base.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_Base() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTService_Base();
SIMPLEAIBEHAVIORTREEEXTEND_API UClass* Z_Construct_UClass_UBTService_Base_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Class UBTService_Base
void UBTService_Base::StaticRegisterNativesUBTService_Base()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_Base);
UClass* Z_Construct_UClass_UBTService_Base_NoRegister()
{
	return UBTService_Base::StaticClass();
}
struct Z_Construct_UClass_UBTService_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BehaviorTree/BTService/Core/BTService_Base.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTService/Core/BTService_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackBoardKey_Target_MetaData[] = {
		{ "Category", "BlackBoard" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTService/Core/BTService_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackBoardKey_Distance_MetaData[] = {
		{ "Category", "BlackBoard" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTService/Core/BTService_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackBoardKey_Location_MetaData[] = {
		{ "Category", "BlackBoard" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTService/Core/BTService_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackBoardKey_Death_MetaData[] = {
		{ "Category", "BlackBoard" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTService/Core/BTService_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackBoardKey_Hit_MetaData[] = {
		{ "Category", "BlackBoard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x97\xe5\x87\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BTService/Core/BTService_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x97\xe5\x87\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackBoardKey_bStiff_MetaData[] = {
		{ "Category", "BlackBoard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x83\xb5\xe7\x9b\xb4 boss\xe8\x99\x9a\xe5\xbc\xb1\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BTService/Core/BTService_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x83\xb5\xe7\x9b\xb4 boss\xe8\x99\x9a\xe5\xbc\xb1\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackBoardKey_bExecution_MetaData[] = {
		{ "Category", "BlackBoard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\xaf\xe5\xa4\x84\xe5\x86\xb3\n" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BTService/Core/BTService_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe5\xa4\x84\xe5\x86\xb3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackBoardKey_State_MetaData[] = {
		{ "Category", "BlackBoard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//boss\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BTService/Core/BTService_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "boss\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackBoardKey_StopMovement_MetaData[] = {
		{ "Category", "BlackBoard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x81\x9c\xe6\xad\xa2\xe4\xb8\x80\xe5\x88\x87\n" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BTService/Core/BTService_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x81\x9c\xe6\xad\xa2\xe4\xb8\x80\xe5\x88\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchScope_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BTService/Core/BTService_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlackBoardKey_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlackBoardKey_Distance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlackBoardKey_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlackBoardKey_Death;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlackBoardKey_Hit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlackBoardKey_bStiff;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlackBoardKey_bExecution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlackBoardKey_State;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlackBoardKey_StopMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchScope;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_Target = { "BlackBoardKey_Target", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_Base, BlackBoardKey_Target), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackBoardKey_Target_MetaData), NewProp_BlackBoardKey_Target_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_Distance = { "BlackBoardKey_Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_Base, BlackBoardKey_Distance), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackBoardKey_Distance_MetaData), NewProp_BlackBoardKey_Distance_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_Location = { "BlackBoardKey_Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_Base, BlackBoardKey_Location), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackBoardKey_Location_MetaData), NewProp_BlackBoardKey_Location_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_Death = { "BlackBoardKey_Death", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_Base, BlackBoardKey_Death), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackBoardKey_Death_MetaData), NewProp_BlackBoardKey_Death_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_Hit = { "BlackBoardKey_Hit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_Base, BlackBoardKey_Hit), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackBoardKey_Hit_MetaData), NewProp_BlackBoardKey_Hit_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_bStiff = { "BlackBoardKey_bStiff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_Base, BlackBoardKey_bStiff), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackBoardKey_bStiff_MetaData), NewProp_BlackBoardKey_bStiff_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_bExecution = { "BlackBoardKey_bExecution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_Base, BlackBoardKey_bExecution), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackBoardKey_bExecution_MetaData), NewProp_BlackBoardKey_bExecution_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_State = { "BlackBoardKey_State", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_Base, BlackBoardKey_State), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackBoardKey_State_MetaData), NewProp_BlackBoardKey_State_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_StopMovement = { "BlackBoardKey_StopMovement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_Base, BlackBoardKey_StopMovement), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackBoardKey_StopMovement_MetaData), NewProp_BlackBoardKey_StopMovement_MetaData) }; // 3940742986
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_Base_Statics::NewProp_SearchScope = { "SearchScope", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_Base, SearchScope), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchScope_MetaData), NewProp_SearchScope_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_Death,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_bStiff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_bExecution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Base_Statics::NewProp_BlackBoardKey_StopMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Base_Statics::NewProp_SearchScope,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_Base_Statics::ClassParams = {
	&UBTService_Base::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_Base_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Base_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_Base()
{
	if (!Z_Registration_Info_UClass_UBTService_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_Base.OuterSingleton, Z_Construct_UClass_UBTService_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_Base.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<UBTService_Base>()
{
	return UBTService_Base::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_Base);
UBTService_Base::~UBTService_Base() {}
// End Class UBTService_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTService_Core_BTService_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_Base, UBTService_Base::StaticClass, TEXT("UBTService_Base"), &Z_Registration_Info_UClass_UBTService_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_Base), 3897257802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTService_Core_BTService_Base_h_2736705391(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTService_Core_BTService_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_BehaviorTree_BTService_Core_BTService_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
