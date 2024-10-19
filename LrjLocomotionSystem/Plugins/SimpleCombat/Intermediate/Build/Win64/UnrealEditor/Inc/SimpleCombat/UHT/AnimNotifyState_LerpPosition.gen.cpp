// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_LerpPosition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_LerpPosition() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_LerpPosition();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_LerpPosition_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_LerpPosition
void UAnimNotifyState_LerpPosition::StaticRegisterNativesUAnimNotifyState_LerpPosition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_LerpPosition);
UClass* Z_Construct_UClass_UAnimNotifyState_LerpPosition_NoRegister()
{
	return UAnimNotifyState_LerpPosition::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "LerpPosition" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_LerpPosition.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_LerpPosition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "LerpPosition" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_LerpPosition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteCoordinates_MetaData[] = {
		{ "Category", "LerpPosition" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_LerpPosition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "LerpPosition" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_LerpPosition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayOnlyServer_MetaData[] = {
		{ "Category", "LerpPosition" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_LerpPosition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalDurationConsuming_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_LerpPosition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPositionInterval_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_LerpPosition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static void NewProp_bAbsoluteCoordinates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteCoordinates;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static void NewProp_bPlayOnlyServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayOnlyServer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDurationConsuming;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPositionInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_LerpPosition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_LerpPosition, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::NewProp_bAbsoluteCoordinates_SetBit(void* Obj)
{
	((UAnimNotifyState_LerpPosition*)Obj)->bAbsoluteCoordinates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::NewProp_bAbsoluteCoordinates = { "bAbsoluteCoordinates", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_LerpPosition), &Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::NewProp_bAbsoluteCoordinates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsoluteCoordinates_MetaData), NewProp_bAbsoluteCoordinates_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_LerpPosition, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::NewProp_bPlayOnlyServer_SetBit(void* Obj)
{
	((UAnimNotifyState_LerpPosition*)Obj)->bPlayOnlyServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::NewProp_bPlayOnlyServer = { "bPlayOnlyServer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_LerpPosition), &Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::NewProp_bPlayOnlyServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayOnlyServer_MetaData), NewProp_bPlayOnlyServer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::NewProp_TotalDurationConsuming = { "TotalDurationConsuming", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_LerpPosition, TotalDurationConsuming), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalDurationConsuming_MetaData), NewProp_TotalDurationConsuming_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::NewProp_EndPositionInterval = { "EndPositionInterval", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_LerpPosition, EndPositionInterval), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPositionInterval_MetaData), NewProp_EndPositionInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::NewProp_bAbsoluteCoordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::NewProp_bPlayOnlyServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::NewProp_TotalDurationConsuming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::NewProp_EndPositionInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::ClassParams = {
	&UAnimNotifyState_LerpPosition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_LerpPosition()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_LerpPosition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_LerpPosition.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_LerpPosition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_LerpPosition.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_LerpPosition>()
{
	return UAnimNotifyState_LerpPosition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_LerpPosition);
UAnimNotifyState_LerpPosition::~UAnimNotifyState_LerpPosition() {}
// End Class UAnimNotifyState_LerpPosition

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LerpPosition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_LerpPosition, UAnimNotifyState_LerpPosition::StaticClass, TEXT("UAnimNotifyState_LerpPosition"), &Z_Registration_Info_UClass_UAnimNotifyState_LerpPosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_LerpPosition), 2910919354U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LerpPosition_h_736322563(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LerpPosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_LerpPosition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
