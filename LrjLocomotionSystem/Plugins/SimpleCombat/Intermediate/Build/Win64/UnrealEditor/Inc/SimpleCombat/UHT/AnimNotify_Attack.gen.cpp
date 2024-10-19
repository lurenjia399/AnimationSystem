// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotify/AnimNotify_Attack.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_Attack() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_AHitCollision_NoRegister();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_Attack();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_Attack_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotify_Attack
void UAnimNotify_Attack::StaticRegisterNativesUAnimNotify_Attack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_Attack);
UClass* Z_Construct_UClass_UAnimNotify_Attack_NoRegister()
{
	return UAnimNotify_Attack::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_Attack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Attack" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_Attack.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitObjectClass_MetaData[] = {
		{ "Category", "General configuration" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitID_MetaData[] = {
		{ "Category", "General configuration" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitSlowTime_MetaData[] = {
		{ "Category", "General configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\x93\xe5\x8f\x97\xe5\x87\xbb\xe5\x90\x8e\xe4\xbc\x9a\xe6\x9c\x89\xe6\x85\xa2\xe9\x80\x9f\xe6\x95\x88\xe6\x9e\x9c(\xe7\xbd\x91\xe7\xbb\x9c\xe6\x9a\x82\xe6\x97\xb6\xe4\xb8\x8d\xe6\x94\xaf\xe6\x8c\x81)\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x8f\x97\xe5\x87\xbb\xe5\x90\x8e\xe4\xbc\x9a\xe6\x9c\x89\xe6\x85\xa2\xe9\x80\x9f\xe6\x95\x88\xe6\x9e\x9c(\xe7\xbd\x91\xe7\xbb\x9c\xe6\x9a\x82\xe6\x97\xb6\xe4\xb8\x8d\xe6\x94\xaf\xe6\x8c\x81)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBuffTag_MetaData[] = {
		{ "Category", "General configuration" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buffs_MetaData[] = {
		{ "Category", "General configuration" },
		{ "EditCondition", "!bEnableBuffTag" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffTags_MetaData[] = {
		{ "Category", "General configuration" },
		{ "EditCondition", "bEnableBuffTag" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GASTag_MetaData[] = {
		{ "Category", "General configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//GAS\xe6\xa0\x87\xe7\xad\xbe \xe6\x96\xb9\xe4\xbe\xbf\xe6\x8a\x80\xe8\x83\xbd""box\xe9\x87\x8a\xe6\x94\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GAS\xe6\xa0\x87\xe7\xad\xbe \xe6\x96\xb9\xe4\xbe\xbf\xe6\x8a\x80\xe8\x83\xbd""box\xe9\x87\x8a\xe6\x94\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableClientPrediction_MetaData[] = {
		{ "Category", "General configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba""false \xe4\xbb\xa3\xe8\xa1\xa8\xe5\x8f\xaa\xe8\x83\xbd\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe7\x94\x9f\xe6\x88\x90 \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xbatrue \xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe9\x83\xbd\xe5\x8f\xaf\xe4\xbb\xa5\xe7\x94\x9f\xe6\x88\x90 \n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba""false \xe4\xbb\xa3\xe8\xa1\xa8\xe5\x8f\xaa\xe8\x83\xbd\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe7\x94\x9f\xe6\x88\x90 \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xbatrue \xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe9\x83\xbd\xe5\x8f\xaf\xe4\xbb\xa5\xe7\x94\x9f\xe6\x88\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeOffsetLocation_MetaData[] = {
		{ "Category", "General configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93\xe7\x9a\x84\xe7\x9b\xb8\xe5\xaf\xb9\xe4\xbd\x8d\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93\xe7\x9a\x84\xe7\x9b\xb8\xe5\xaf\xb9\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "General configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93\xe7\x9a\x84\xe7\x9b\xb8\xe5\xaf\xb9\xe4\xbd\x8d\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93\xe7\x9a\x84\xe7\x9b\xb8\xe5\xaf\xb9\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiftTime_MetaData[] = {
		{ "Category", "General configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSocketName_MetaData[] = {
		{ "Category", "General configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "////\xe6\x96\xb9\xe5\x90\x91\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"General configuration\")\n//FVector Direction;\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\xe6\x96\xb9\xe5\x90\x91\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"General configuration\")\nFVector Direction;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBind_MetaData[] = {
		{ "Category", "General configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb0\x86""Box\xe7\xbb\x91\xe5\xae\x9a\xe5\x9c\xa8\xe8\xa7\x92\xe8\x89\xb2\xe8\xba\xab\xe4\xb8\x8a\xe5\xbc\x80\xe7\x81\xab\xe7\x82\xb9\xe4\xb8\x8a\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x86""Box\xe7\xbb\x91\xe5\xae\x9a\xe5\x9c\xa8\xe8\xa7\x92\xe8\x89\xb2\xe8\xba\xab\xe4\xb8\x8a\xe5\xbc\x80\xe7\x81\xab\xe7\x82\xb9\xe4\xb8\x8a" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCustomCaster_MetaData[] = {
		{ "Category", "General configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe6\x96\xbd\xe6\xb3\x95\xe8\x80\x85\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe6\x96\xbd\xe6\xb3\x95\xe8\x80\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSingleTarget_MetaData[] = {
		{ "Category", "General configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbe\xa4\xe4\xbd\x93\xe6\x94\xbb\xe5\x87\xbb\xe8\xbf\x98\xe6\x98\xaf\xe5\x8d\x95\xe4\xbd\x93\xe6\x94\xbb\xe5\x87\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbe\xa4\xe4\xbd\x93\xe6\x94\xbb\xe5\x87\xbb\xe8\xbf\x98\xe6\x98\xaf\xe5\x8d\x95\xe4\xbd\x93\xe6\x94\xbb\xe5\x87\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurrentCollidingBodySize_MetaData[] = {
		{ "Category", "Hit Box" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[] = {
		{ "Category", "Hit Box" },
		{ "EditCondition", "bHitBox" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Hit Sphere" },
		{ "EditCondition", "bHitSphere" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[] = {
		{ "Category", "Hit Capsule" },
		{ "EditCondition", "bHitCapsule" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleRadius_MetaData[] = {
		{ "Category", "Hit Capsule" },
		{ "EditCondition", "bHitCapsule" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitBox_MetaData[] = {
		{ "Category", "Hit" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitSphere_MetaData[] = {
		{ "Category", "Hit" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitCustom_MetaData[] = {
		{ "Category", "Hit" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitCapsule_MetaData[] = {
		{ "Category", "Hit" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_HitObjectClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HitID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitSlowTime;
	static void NewProp_bEnableBuffTag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBuffTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Buffs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuffTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BuffTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GASTag;
	static void NewProp_bEnableClientPrediction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableClientPrediction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeOffsetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LiftTime;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
	static void NewProp_bBind_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBind;
	static void NewProp_bCustomCaster_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomCaster;
	static void NewProp_bSingleTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleTarget;
	static void NewProp_bUseCurrentCollidingBodySize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurrentCollidingBodySize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
	static void NewProp_bHitBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitBox;
	static void NewProp_bHitSphere_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitSphere;
	static void NewProp_bHitCustom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitCustom;
	static void NewProp_bHitCapsule_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitCapsule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_Attack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_HitObjectClass = { "HitObjectClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attack, HitObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AHitCollision_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitObjectClass_MetaData), NewProp_HitObjectClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_HitID = { "HitID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attack, HitID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitID_MetaData), NewProp_HitID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_HitSlowTime = { "HitSlowTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attack, HitSlowTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitSlowTime_MetaData), NewProp_HitSlowTime_MetaData) };
void Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bEnableBuffTag_SetBit(void* Obj)
{
	((UAnimNotify_Attack*)Obj)->bEnableBuffTag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bEnableBuffTag = { "bEnableBuffTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Attack), &Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bEnableBuffTag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBuffTag_MetaData), NewProp_bEnableBuffTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_Buffs_Inner = { "Buffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_Buffs = { "Buffs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attack, Buffs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buffs_MetaData), NewProp_Buffs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_BuffTags_Inner = { "BuffTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_BuffTags = { "BuffTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attack, BuffTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffTags_MetaData), NewProp_BuffTags_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_GASTag = { "GASTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attack, GASTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GASTag_MetaData), NewProp_GASTag_MetaData) }; // 1298103297
void Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bEnableClientPrediction_SetBit(void* Obj)
{
	((UAnimNotify_Attack*)Obj)->bEnableClientPrediction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bEnableClientPrediction = { "bEnableClientPrediction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Attack), &Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bEnableClientPrediction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableClientPrediction_MetaData), NewProp_bEnableClientPrediction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_RelativeOffsetLocation = { "RelativeOffsetLocation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attack, RelativeOffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeOffsetLocation_MetaData), NewProp_RelativeOffsetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attack, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_LiftTime = { "LiftTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attack, LiftTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiftTime_MetaData), NewProp_LiftTime_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attack, InSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSocketName_MetaData), NewProp_InSocketName_MetaData) };
void Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bBind_SetBit(void* Obj)
{
	((UAnimNotify_Attack*)Obj)->bBind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bBind = { "bBind", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Attack), &Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bBind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBind_MetaData), NewProp_bBind_MetaData) };
void Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bCustomCaster_SetBit(void* Obj)
{
	((UAnimNotify_Attack*)Obj)->bCustomCaster = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bCustomCaster = { "bCustomCaster", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Attack), &Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bCustomCaster_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCustomCaster_MetaData), NewProp_bCustomCaster_MetaData) };
void Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bSingleTarget_SetBit(void* Obj)
{
	((UAnimNotify_Attack*)Obj)->bSingleTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bSingleTarget = { "bSingleTarget", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Attack), &Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bSingleTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSingleTarget_MetaData), NewProp_bSingleTarget_MetaData) };
void Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bUseCurrentCollidingBodySize_SetBit(void* Obj)
{
	((UAnimNotify_Attack*)Obj)->bUseCurrentCollidingBodySize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bUseCurrentCollidingBodySize = { "bUseCurrentCollidingBodySize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Attack), &Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bUseCurrentCollidingBodySize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCurrentCollidingBodySize_MetaData), NewProp_bUseCurrentCollidingBodySize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attack, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxExtent_MetaData), NewProp_BoxExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attack, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attack, CapsuleHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleHalfHeight_MetaData), NewProp_CapsuleHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attack, CapsuleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleRadius_MetaData), NewProp_CapsuleRadius_MetaData) };
void Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bHitBox_SetBit(void* Obj)
{
	((UAnimNotify_Attack*)Obj)->bHitBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bHitBox = { "bHitBox", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Attack), &Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bHitBox_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitBox_MetaData), NewProp_bHitBox_MetaData) };
void Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bHitSphere_SetBit(void* Obj)
{
	((UAnimNotify_Attack*)Obj)->bHitSphere = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bHitSphere = { "bHitSphere", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Attack), &Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bHitSphere_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitSphere_MetaData), NewProp_bHitSphere_MetaData) };
void Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bHitCustom_SetBit(void* Obj)
{
	((UAnimNotify_Attack*)Obj)->bHitCustom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bHitCustom = { "bHitCustom", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Attack), &Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bHitCustom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitCustom_MetaData), NewProp_bHitCustom_MetaData) };
void Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bHitCapsule_SetBit(void* Obj)
{
	((UAnimNotify_Attack*)Obj)->bHitCapsule = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bHitCapsule = { "bHitCapsule", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Attack), &Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bHitCapsule_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitCapsule_MetaData), NewProp_bHitCapsule_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_Attack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_HitObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_HitID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_HitSlowTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bEnableBuffTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_Buffs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_Buffs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_BuffTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_BuffTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_GASTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bEnableClientPrediction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_RelativeOffsetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_LiftTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_InSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bBind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bCustomCaster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bSingleTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bUseCurrentCollidingBodySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_BoxExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_CapsuleHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_CapsuleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bHitBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bHitSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bHitCustom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attack_Statics::NewProp_bHitCapsule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Attack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_Attack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Attack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_Attack_Statics::ClassParams = {
	&UAnimNotify_Attack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_Attack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Attack_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Attack_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_Attack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_Attack()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_Attack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_Attack.OuterSingleton, Z_Construct_UClass_UAnimNotify_Attack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_Attack.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotify_Attack>()
{
	return UAnimNotify_Attack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_Attack);
UAnimNotify_Attack::~UAnimNotify_Attack() {}
// End Class UAnimNotify_Attack

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Attack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_Attack, UAnimNotify_Attack::StaticClass, TEXT("UAnimNotify_Attack"), &Z_Registration_Info_UClass_UAnimNotify_Attack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_Attack), 1507960023U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Attack_h_3174341295(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Attack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Attack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
