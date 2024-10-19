// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/Hit/Core/ComboSkillHitCollision.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboSkillHitCollision() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_AHitCollision();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_AHitCollision_NoRegister();
SIMPLECOMBAT_API UEnum* Z_Construct_UEnum_SimpleCombat_EHitCollisionType();
SIMPLECOMBAT_API UEnum* Z_Construct_UEnum_SimpleCombat_ESimpleDrawDebugTrace();
SIMPLECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FAttackedTargetTimer();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin ScriptStruct FAttackedTargetTimer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttackedTargetTimer;
class UScriptStruct* FAttackedTargetTimer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttackedTargetTimer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttackedTargetTimer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttackedTargetTimer, (UObject*)Z_Construct_UPackage__Script_SimpleCombat(), TEXT("AttackedTargetTimer"));
	}
	return Z_Registration_Info_UScriptStruct_AttackedTargetTimer.OuterSingleton;
}
template<> SIMPLECOMBAT_API UScriptStruct* StaticStruct<FAttackedTargetTimer>()
{
	return FAttackedTargetTimer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAttackedTargetTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\xbb\xe8\xa6\x81\xe4\xbd\x9c\xe7\x94\xa8\xe4\xb8\xba\xe4\xba\x86\xe8\xae\xb0\xe5\xbd\x95\xe8\xa2\xab\xe5\xbd\x95\xe5\x85\xa5\xe7\x9a\x84\xe6\x95\x8c\xe4\xba\xba\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x8c\xe5\xb9\xb3\xe5\x9d\x87\xe4\xb8\x80\xe7\xa7\x92\xe9\x98\xbb\xe7\xa2\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb\xe8\xa6\x81\xe4\xbd\x9c\xe7\x94\xa8\xe4\xb8\xba\xe4\xba\x86\xe8\xae\xb0\xe5\xbd\x95\xe8\xa2\xab\xe5\xbd\x95\xe5\x85\xa5\xe7\x9a\x84\xe6\x95\x8c\xe4\xba\xba\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x8c\xe5\xb9\xb3\xe5\x9d\x87\xe4\xb8\x80\xe7\xa7\x92\xe9\x98\xbb\xe7\xa2\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackedTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AttackedTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttackedTargetTimer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAttackedTargetTimer_Statics::NewProp_AttackedTarget = { "AttackedTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackedTargetTimer, AttackedTarget), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackedTarget_MetaData), NewProp_AttackedTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackedTargetTimer_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackedTargetTimer, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttackedTargetTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackedTargetTimer_Statics::NewProp_AttackedTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackedTargetTimer_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackedTargetTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttackedTargetTimer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
	nullptr,
	&NewStructOps,
	"AttackedTargetTimer",
	Z_Construct_UScriptStruct_FAttackedTargetTimer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackedTargetTimer_Statics::PropPointers),
	sizeof(FAttackedTargetTimer),
	alignof(FAttackedTargetTimer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackedTargetTimer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttackedTargetTimer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttackedTargetTimer()
{
	if (!Z_Registration_Info_UScriptStruct_AttackedTargetTimer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttackedTargetTimer.InnerSingleton, Z_Construct_UScriptStruct_FAttackedTargetTimer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AttackedTargetTimer.InnerSingleton;
}
// End ScriptStruct FAttackedTargetTimer

// Begin Class AHitCollision Function AddIgnoreActors
struct Z_Construct_UFunction_AHitCollision_AddIgnoreActors_Statics
{
	struct HitCollision_eventAddIgnoreActors_Parms
	{
		AActor* InNewActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InNewActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_AddIgnoreActors_Statics::NewProp_InNewActor = { "InNewActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventAddIgnoreActors_Parms, InNewActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_AddIgnoreActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_AddIgnoreActors_Statics::NewProp_InNewActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_AddIgnoreActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_AddIgnoreActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "AddIgnoreActors", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_AddIgnoreActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_AddIgnoreActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_AddIgnoreActors_Statics::HitCollision_eventAddIgnoreActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_AddIgnoreActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_AddIgnoreActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_AddIgnoreActors_Statics::HitCollision_eventAddIgnoreActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_AddIgnoreActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_AddIgnoreActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execAddIgnoreActors)
{
	P_GET_OBJECT(AActor,Z_Param_InNewActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddIgnoreActors(Z_Param_InNewActor);
	P_NATIVE_END;
}
// End Class AHitCollision Function AddIgnoreActors

// Begin Class AHitCollision Function CheckAutomaticallyDestroy
struct Z_Construct_UFunction_AHitCollision_CheckAutomaticallyDestroy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xaf\xa5\xe6\x8e\xa5\xe5\x8f\xa3\xe7\x94\xb1\xe4\xb8\x8a\xe5\xb1\x82\xe7\x94\xa8\xe6\x88\xb7\xe8\xb0\x83\xe7\x94\xa8 \xe5\x86\xb3\xe5\xae\x9a\xe6\x98\xaf\xe5\x90\xa6\xe9\x94\x80\xe6\xaf\x81\xe8\xaf\xa5\xe5\xaf\xb9\xe8\xb1\xa1\n" },
#endif
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xa5\xe6\x8e\xa5\xe5\x8f\xa3\xe7\x94\xb1\xe4\xb8\x8a\xe5\xb1\x82\xe7\x94\xa8\xe6\x88\xb7\xe8\xb0\x83\xe7\x94\xa8 \xe5\x86\xb3\xe5\xae\x9a\xe6\x98\xaf\xe5\x90\xa6\xe9\x94\x80\xe6\xaf\x81\xe8\xaf\xa5\xe5\xaf\xb9\xe8\xb1\xa1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_CheckAutomaticallyDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "CheckAutomaticallyDestroy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_CheckAutomaticallyDestroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_CheckAutomaticallyDestroy_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHitCollision_CheckAutomaticallyDestroy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_CheckAutomaticallyDestroy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execCheckAutomaticallyDestroy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckAutomaticallyDestroy();
	P_NATIVE_END;
}
// End Class AHitCollision Function CheckAutomaticallyDestroy

// Begin Class AHitCollision Function ClearCustomIgnoreActors
struct Z_Construct_UFunction_AHitCollision_ClearCustomIgnoreActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_ClearCustomIgnoreActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "ClearCustomIgnoreActors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_ClearCustomIgnoreActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_ClearCustomIgnoreActors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHitCollision_ClearCustomIgnoreActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_ClearCustomIgnoreActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execClearCustomIgnoreActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCustomIgnoreActors();
	P_NATIVE_END;
}
// End Class AHitCollision Function ClearCustomIgnoreActors

// Begin Class AHitCollision Function Collision
struct Z_Construct_UFunction_AHitCollision_Collision_Statics
{
	struct HitCollision_eventCollision_Parms
	{
		bool bCollision;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AHitCollision_Collision_Statics::NewProp_bCollision_SetBit(void* Obj)
{
	((HitCollision_eventCollision_Parms*)Obj)->bCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHitCollision_Collision_Statics::NewProp_bCollision = { "bCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HitCollision_eventCollision_Parms), &Z_Construct_UFunction_AHitCollision_Collision_Statics::NewProp_bCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_Collision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_Collision_Statics::NewProp_bCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_Collision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_Collision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "Collision", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_Collision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_Collision_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_Collision_Statics::HitCollision_eventCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_Collision_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_Collision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_Collision_Statics::HitCollision_eventCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_Collision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_Collision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execCollision)
{
	P_GET_UBOOL(Z_Param_bCollision);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Collision(Z_Param_bCollision);
	P_NATIVE_END;
}
// End Class AHitCollision Function Collision

// Begin Class AHitCollision Function EndHandleDamage_Inner
struct Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics
{
	struct HitCollision_eventEndHandleDamage_Inner_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventEndHandleDamage_Inner_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventEndHandleDamage_Inner_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventEndHandleDamage_Inner_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventEndHandleDamage_Inner_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "EndHandleDamage_Inner", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::HitCollision_eventEndHandleDamage_Inner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::HitCollision_eventEndHandleDamage_Inner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execEndHandleDamage_Inner)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndHandleDamage_Inner(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AHitCollision Function EndHandleDamage_Inner

// Begin Class AHitCollision Function GeBuffs
struct Z_Construct_UFunction_AHitCollision_GeBuffs_Statics
{
	struct HitCollision_eventGeBuffs_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHitCollision_GeBuffs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHitCollision_GeBuffs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventGeBuffs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_GeBuffs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_GeBuffs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_GeBuffs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GeBuffs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_GeBuffs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "GeBuffs", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_GeBuffs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GeBuffs_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_GeBuffs_Statics::HitCollision_eventGeBuffs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GeBuffs_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_GeBuffs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_GeBuffs_Statics::HitCollision_eventGeBuffs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_GeBuffs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_GeBuffs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execGeBuffs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GeBuffs();
	P_NATIVE_END;
}
// End Class AHitCollision Function GeBuffs

// Begin Class AHitCollision Function GetAttackedTarget
struct Z_Construct_UFunction_AHitCollision_GetAttackedTarget_Statics
{
	struct HitCollision_eventGetAttackedTarget_Parms
	{
		TArray<FAttackedTargetTimer> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHitCollision_GetAttackedTarget_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttackedTargetTimer, METADATA_PARAMS(0, nullptr) }; // 2104485868
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHitCollision_GetAttackedTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventGetAttackedTarget_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2104485868
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_GetAttackedTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_GetAttackedTarget_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_GetAttackedTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetAttackedTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_GetAttackedTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "GetAttackedTarget", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_GetAttackedTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetAttackedTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_GetAttackedTarget_Statics::HitCollision_eventGetAttackedTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetAttackedTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_GetAttackedTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_GetAttackedTarget_Statics::HitCollision_eventGetAttackedTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_GetAttackedTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_GetAttackedTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execGetAttackedTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FAttackedTargetTimer>*)Z_Param__Result=P_THIS->GetAttackedTarget();
	P_NATIVE_END;
}
// End Class AHitCollision Function GetAttackedTarget

// Begin Class AHitCollision Function GetBuffTags
struct Z_Construct_UFunction_AHitCollision_GetBuffTags_Statics
{
	struct HitCollision_eventGetBuffTags_Parms
	{
		TArray<FGameplayTag> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHitCollision_GetBuffTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHitCollision_GetBuffTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventGetBuffTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_GetBuffTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_GetBuffTags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_GetBuffTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetBuffTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_GetBuffTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "GetBuffTags", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_GetBuffTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetBuffTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_GetBuffTags_Statics::HitCollision_eventGetBuffTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetBuffTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_GetBuffTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_GetBuffTags_Statics::HitCollision_eventGetBuffTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_GetBuffTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_GetBuffTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execGetBuffTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGameplayTag>*)Z_Param__Result=P_THIS->GetBuffTags();
	P_NATIVE_END;
}
// End Class AHitCollision Function GetBuffTags

// Begin Class AHitCollision Function GetDamageRatio
struct Z_Construct_UFunction_AHitCollision_GetDamageRatio_Statics
{
	struct HitCollision_eventGetDamageRatio_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHitCollision_GetDamageRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventGetDamageRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_GetDamageRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_GetDamageRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetDamageRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_GetDamageRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "GetDamageRatio", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_GetDamageRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetDamageRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_GetDamageRatio_Statics::HitCollision_eventGetDamageRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetDamageRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_GetDamageRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_GetDamageRatio_Statics::HitCollision_eventGetDamageRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_GetDamageRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_GetDamageRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execGetDamageRatio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDamageRatio();
	P_NATIVE_END;
}
// End Class AHitCollision Function GetDamageRatio

// Begin Class AHitCollision Function GetExtent
struct Z_Construct_UFunction_AHitCollision_GetExtent_Statics
{
	struct HitCollision_eventGetExtent_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHitCollision_GetExtent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventGetExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_GetExtent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_GetExtent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetExtent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_GetExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "GetExtent", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_GetExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetExtent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_GetExtent_Statics::HitCollision_eventGetExtent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetExtent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_GetExtent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_GetExtent_Statics::HitCollision_eventGetExtent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_GetExtent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_GetExtent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execGetExtent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetExtent();
	P_NATIVE_END;
}
// End Class AHitCollision Function GetExtent

// Begin Class AHitCollision Function GetHitDamage
struct Z_Construct_UFunction_AHitCollision_GetHitDamage_Statics
{
	struct HitCollision_eventGetHitDamage_Parms
	{
		UPrimitiveComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_GetHitDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventGetHitDamage_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_GetHitDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_GetHitDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetHitDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_GetHitDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "GetHitDamage", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_GetHitDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetHitDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_GetHitDamage_Statics::HitCollision_eventGetHitDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetHitDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_GetHitDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_GetHitDamage_Statics::HitCollision_eventGetHitDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_GetHitDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_GetHitDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execGetHitDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetHitDamage();
	P_NATIVE_END;
}
// End Class AHitCollision Function GetHitDamage

// Begin Class AHitCollision Function GetHitID
struct Z_Construct_UFunction_AHitCollision_GetHitID_Statics
{
	struct HitCollision_eventGetHitID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHitCollision_GetHitID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventGetHitID_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_GetHitID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_GetHitID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetHitID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_GetHitID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "GetHitID", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_GetHitID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetHitID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_GetHitID_Statics::HitCollision_eventGetHitID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetHitID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_GetHitID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_GetHitID_Statics::HitCollision_eventGetHitID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_GetHitID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_GetHitID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execGetHitID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHitID();
	P_NATIVE_END;
}
// End Class AHitCollision Function GetHitID

// Begin Class AHitCollision Function GetIgnoreTraceActor
struct Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor_Statics
{
	struct HitCollision_eventGetIgnoreTraceActor_Parms
	{
		TArray<AActor*> OutActorsToIgnore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActorsToIgnore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor_Statics::NewProp_OutActorsToIgnore_Inner = { "OutActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor_Statics::NewProp_OutActorsToIgnore = { "OutActorsToIgnore", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventGetIgnoreTraceActor_Parms, OutActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor_Statics::NewProp_OutActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor_Statics::NewProp_OutActorsToIgnore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "GetIgnoreTraceActor", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor_Statics::HitCollision_eventGetIgnoreTraceActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor_Statics::HitCollision_eventGetIgnoreTraceActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execGetIgnoreTraceActor)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActorsToIgnore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetIgnoreTraceActor(Z_Param_Out_OutActorsToIgnore);
	P_NATIVE_END;
}
// End Class AHitCollision Function GetIgnoreTraceActor

// Begin Class AHitCollision Function GetScapegoatActor
struct Z_Construct_UFunction_AHitCollision_GetScapegoatActor_Statics
{
	struct HitCollision_eventGetScapegoatActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_GetScapegoatActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventGetScapegoatActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_GetScapegoatActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_GetScapegoatActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetScapegoatActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_GetScapegoatActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "GetScapegoatActor", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_GetScapegoatActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetScapegoatActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_GetScapegoatActor_Statics::HitCollision_eventGetScapegoatActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_GetScapegoatActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_GetScapegoatActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_GetScapegoatActor_Statics::HitCollision_eventGetScapegoatActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_GetScapegoatActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_GetScapegoatActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execGetScapegoatActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetScapegoatActor();
	P_NATIVE_END;
}
// End Class AHitCollision Function GetScapegoatActor

// Begin Class AHitCollision Function InitCustomIgnoreActors
struct Z_Construct_UFunction_AHitCollision_InitCustomIgnoreActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_InitCustomIgnoreActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "InitCustomIgnoreActors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_InitCustomIgnoreActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_InitCustomIgnoreActors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHitCollision_InitCustomIgnoreActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_InitCustomIgnoreActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execInitCustomIgnoreActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitCustomIgnoreActors();
	P_NATIVE_END;
}
// End Class AHitCollision Function InitCustomIgnoreActors

// Begin Class AHitCollision Function InitHitBindEvent
struct Z_Construct_UFunction_AHitCollision_InitHitBindEvent_Statics
{
	struct HitCollision_eventInitHitBindEvent_Parms
	{
		AActor* InParentActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x94\xa8\xe4\xba\x8e\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe7\xbb\x91\xe5\xae\x9a\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "CPP_Default_InParentActor", "None" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe7\xbb\x91\xe5\xae\x9a\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InParentActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_InitHitBindEvent_Statics::NewProp_InParentActor = { "InParentActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventInitHitBindEvent_Parms, InParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_InitHitBindEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_InitHitBindEvent_Statics::NewProp_InParentActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_InitHitBindEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_InitHitBindEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "InitHitBindEvent", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_InitHitBindEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_InitHitBindEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_InitHitBindEvent_Statics::HitCollision_eventInitHitBindEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_InitHitBindEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_InitHitBindEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_InitHitBindEvent_Statics::HitCollision_eventInitHitBindEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_InitHitBindEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_InitHitBindEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execInitHitBindEvent)
{
	P_GET_OBJECT(AActor,Z_Param_InParentActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitHitBindEvent(Z_Param_InParentActor);
	P_NATIVE_END;
}
// End Class AHitCollision Function InitHitBindEvent

// Begin Class AHitCollision Function InitHitCollision
struct Z_Construct_UFunction_AHitCollision_InitHitCollision_Statics
{
	struct HitCollision_eventInitHitCollision_Parms
	{
		AActor* InParentActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x9d\x9e\xe5\x8a\xa8\xe7\x94\xbb""AnimNotif\xe7\x94\x9f\xe6\x88\x90 \xe6\x88\x96\xe8\x80\x85 \xe6\x98\xaf\xe9\x9d\x9eUSimpleCombatBPLibrary::SpawnSimpleCollision \xe7\x94\x9f\xe6\x88\x90\n//\xe9\x9c\x80\xe8\xa6\x81\xe8\xb0\x83\xe7\x94\xa8\xe8\xaf\xa5\xe6\x8e\xa5\xe5\x8f\xa3\xe6\x9d\xa5\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\n" },
#endif
		{ "CPP_Default_InParentActor", "None" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9d\x9e\xe5\x8a\xa8\xe7\x94\xbb""AnimNotif\xe7\x94\x9f\xe6\x88\x90 \xe6\x88\x96\xe8\x80\x85 \xe6\x98\xaf\xe9\x9d\x9eUSimpleCombatBPLibrary::SpawnSimpleCollision \xe7\x94\x9f\xe6\x88\x90\n\xe9\x9c\x80\xe8\xa6\x81\xe8\xb0\x83\xe7\x94\xa8\xe8\xaf\xa5\xe6\x8e\xa5\xe5\x8f\xa3\xe6\x9d\xa5\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InParentActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_InitHitCollision_Statics::NewProp_InParentActor = { "InParentActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventInitHitCollision_Parms, InParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_InitHitCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_InitHitCollision_Statics::NewProp_InParentActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_InitHitCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_InitHitCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "InitHitCollision", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_InitHitCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_InitHitCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_InitHitCollision_Statics::HitCollision_eventInitHitCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_InitHitCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_InitHitCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_InitHitCollision_Statics::HitCollision_eventInitHitCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_InitHitCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_InitHitCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execInitHitCollision)
{
	P_GET_OBJECT(AActor,Z_Param_InParentActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitHitCollision(Z_Param_InParentActor);
	P_NATIVE_END;
}
// End Class AHitCollision Function InitHitCollision

// Begin Class AHitCollision Function IsExist
struct Z_Construct_UFunction_AHitCollision_IsExist_Statics
{
	struct HitCollision_eventIsExist_Parms
	{
		ACharacter* InNewTaget;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InNewTaget;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_IsExist_Statics::NewProp_InNewTaget = { "InNewTaget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventIsExist_Parms, InNewTaget), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AHitCollision_IsExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HitCollision_eventIsExist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHitCollision_IsExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HitCollision_eventIsExist_Parms), &Z_Construct_UFunction_AHitCollision_IsExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_IsExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_IsExist_Statics::NewProp_InNewTaget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_IsExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_IsExist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_IsExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "IsExist", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_IsExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_IsExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_IsExist_Statics::HitCollision_eventIsExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_IsExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_IsExist_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_IsExist_Statics::HitCollision_eventIsExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_IsExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_IsExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execIsExist)
{
	P_GET_OBJECT(ACharacter,Z_Param_InNewTaget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsExist(Z_Param_InNewTaget);
	P_NATIVE_END;
}
// End Class AHitCollision Function IsExist

// Begin Class AHitCollision Function IsExitIgnoredActor
struct Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics
{
	struct HitCollision_eventIsExitIgnoredActor_Parms
	{
		AActor* InActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventIsExitIgnoredActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HitCollision_eventIsExitIgnoredActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HitCollision_eventIsExitIgnoredActor_Parms), &Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "IsExitIgnoredActor", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics::HitCollision_eventIsExitIgnoredActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics::HitCollision_eventIsExitIgnoredActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execIsExitIgnoredActor)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsExitIgnoredActor(Z_Param_InActor);
	P_NATIVE_END;
}
// End Class AHitCollision Function IsExitIgnoredActor

// Begin Class AHitCollision Function IsLocallyInputControlled
struct Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled_Statics
{
	struct HitCollision_eventIsLocallyInputControlled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HitCollision_eventIsLocallyInputControlled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HitCollision_eventIsLocallyInputControlled_Parms), &Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "IsLocallyInputControlled", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled_Statics::HitCollision_eventIsLocallyInputControlled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled_Statics::HitCollision_eventIsLocallyInputControlled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execIsLocallyInputControlled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLocallyInputControlled();
	P_NATIVE_END;
}
// End Class AHitCollision Function IsLocallyInputControlled

// Begin Class AHitCollision Function K2_OnActivateProjectileMovementHoming
static FName NAME_AHitCollision_K2_OnActivateProjectileMovementHoming = FName(TEXT("K2_OnActivateProjectileMovementHoming"));
void AHitCollision::K2_OnActivateProjectileMovementHoming()
{
	ProcessEvent(FindFunctionChecked(NAME_AHitCollision_K2_OnActivateProjectileMovementHoming),NULL);
}
struct Z_Construct_UFunction_AHitCollision_K2_OnActivateProjectileMovementHoming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gun|Event" },
		{ "DisplayName", "ActivateProjectileMovementHoming" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_K2_OnActivateProjectileMovementHoming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "K2_OnActivateProjectileMovementHoming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_K2_OnActivateProjectileMovementHoming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_K2_OnActivateProjectileMovementHoming_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHitCollision_K2_OnActivateProjectileMovementHoming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_K2_OnActivateProjectileMovementHoming_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AHitCollision Function K2_OnActivateProjectileMovementHoming

// Begin Class AHitCollision Function K2_OnAffected
static FName NAME_AHitCollision_K2_OnAffected = FName(TEXT("K2_OnAffected"));
void AHitCollision::K2_OnAffected()
{
	ProcessEvent(FindFunctionChecked(NAME_AHitCollision_K2_OnAffected),NULL);
}
struct Z_Construct_UFunction_AHitCollision_K2_OnAffected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gun|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x97\xe5\x88\xb0\xe6\x94\xbb\xe5\x87\xbb\n" },
#endif
		{ "DisplayName", "EventAffected" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x97\xe5\x88\xb0\xe6\x94\xbb\xe5\x87\xbb" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_K2_OnAffected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "K2_OnAffected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_K2_OnAffected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_K2_OnAffected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHitCollision_K2_OnAffected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_K2_OnAffected_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AHitCollision Function K2_OnAffected

// Begin Class AHitCollision Function K2_SetBuffsByName
struct Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName_Statics
{
	struct HitCollision_eventK2_SetBuffsByName_Parms
	{
		TArray<FName> InBuffs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "DisplayName", "SetBuffs(Name)" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBuffs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InBuffs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBuffs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName_Statics::NewProp_InBuffs_Inner = { "InBuffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName_Statics::NewProp_InBuffs = { "InBuffs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventK2_SetBuffsByName_Parms, InBuffs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBuffs_MetaData), NewProp_InBuffs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName_Statics::NewProp_InBuffs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName_Statics::NewProp_InBuffs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "K2_SetBuffsByName", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName_Statics::HitCollision_eventK2_SetBuffsByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName_Statics::HitCollision_eventK2_SetBuffsByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execK2_SetBuffsByName)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_InBuffs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_SetBuffsByName(Z_Param_Out_InBuffs);
	P_NATIVE_END;
}
// End Class AHitCollision Function K2_SetBuffsByName

// Begin Class AHitCollision Function K2_SetBuffsByTag
struct Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag_Statics
{
	struct HitCollision_eventK2_SetBuffsByTag_Parms
	{
		TArray<FGameplayTag> InBuffs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "DisplayName", "SetBuffs(GameplayTag)" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBuffs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBuffs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBuffs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag_Statics::NewProp_InBuffs_Inner = { "InBuffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag_Statics::NewProp_InBuffs = { "InBuffs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventK2_SetBuffsByTag_Parms, InBuffs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBuffs_MetaData), NewProp_InBuffs_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag_Statics::NewProp_InBuffs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag_Statics::NewProp_InBuffs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "K2_SetBuffsByTag", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag_Statics::HitCollision_eventK2_SetBuffsByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag_Statics::HitCollision_eventK2_SetBuffsByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execK2_SetBuffsByTag)
{
	P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_InBuffs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_SetBuffsByTag(Z_Param_Out_InBuffs);
	P_NATIVE_END;
}
// End Class AHitCollision Function K2_SetBuffsByTag

// Begin Class AHitCollision Function RegisterHitCollision
struct Z_Construct_UFunction_AHitCollision_RegisterHitCollision_Statics
{
	struct HitCollision_eventRegisterHitCollision_Parms
	{
		AActor* InActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_RegisterHitCollision_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventRegisterHitCollision_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_RegisterHitCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_RegisterHitCollision_Statics::NewProp_InActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_RegisterHitCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_RegisterHitCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "RegisterHitCollision", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_RegisterHitCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_RegisterHitCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_RegisterHitCollision_Statics::HitCollision_eventRegisterHitCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_RegisterHitCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_RegisterHitCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_RegisterHitCollision_Statics::HitCollision_eventRegisterHitCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_RegisterHitCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_RegisterHitCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execRegisterHitCollision)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterHitCollision(Z_Param_InActor);
	P_NATIVE_END;
}
// End Class AHitCollision Function RegisterHitCollision

// Begin Class AHitCollision Function RemoveIgnoreActors
struct Z_Construct_UFunction_AHitCollision_RemoveIgnoreActors_Statics
{
	struct HitCollision_eventRemoveIgnoreActors_Parms
	{
		AActor* InNewActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InNewActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_RemoveIgnoreActors_Statics::NewProp_InNewActor = { "InNewActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventRemoveIgnoreActors_Parms, InNewActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_RemoveIgnoreActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_RemoveIgnoreActors_Statics::NewProp_InNewActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_RemoveIgnoreActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_RemoveIgnoreActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "RemoveIgnoreActors", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_RemoveIgnoreActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_RemoveIgnoreActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_RemoveIgnoreActors_Statics::HitCollision_eventRemoveIgnoreActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_RemoveIgnoreActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_RemoveIgnoreActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_RemoveIgnoreActors_Statics::HitCollision_eventRemoveIgnoreActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_RemoveIgnoreActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_RemoveIgnoreActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execRemoveIgnoreActors)
{
	P_GET_OBJECT(AActor,Z_Param_InNewActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveIgnoreActors(Z_Param_InNewActor);
	P_NATIVE_END;
}
// End Class AHitCollision Function RemoveIgnoreActors

// Begin Class AHitCollision Function SetGASTag
struct Z_Construct_UFunction_AHitCollision_SetGASTag_Statics
{
	struct HitCollision_eventSetGASTag_Parms
	{
		FGameplayTag InTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xae\xbe\xe7\xbd\xae\xe5\xbd\x93\xe5\x89\x8d\xe7\x9a\x84GAS\xe6\xa0\x87\xe7\xad\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe5\xbd\x93\xe5\x89\x8d\xe7\x9a\x84GAS\xe6\xa0\x87\xe7\xad\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHitCollision_SetGASTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventSetGASTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTag_MetaData), NewProp_InTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_SetGASTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_SetGASTag_Statics::NewProp_InTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_SetGASTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_SetGASTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "SetGASTag", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_SetGASTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_SetGASTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_SetGASTag_Statics::HitCollision_eventSetGASTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_SetGASTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_SetGASTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_SetGASTag_Statics::HitCollision_eventSetGASTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_SetGASTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_SetGASTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execSetGASTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGASTag(Z_Param_Out_InTag);
	P_NATIVE_END;
}
// End Class AHitCollision Function SetGASTag

// Begin Class AHitCollision Function SetHitDamageRelativePosition
struct Z_Construct_UFunction_AHitCollision_SetHitDamageRelativePosition_Statics
{
	struct HitCollision_eventSetHitDamageRelativePosition_Parms
	{
		FVector InNewPostion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewPostion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InNewPostion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHitCollision_SetHitDamageRelativePosition_Statics::NewProp_InNewPostion = { "InNewPostion", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventSetHitDamageRelativePosition_Parms, InNewPostion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewPostion_MetaData), NewProp_InNewPostion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_SetHitDamageRelativePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_SetHitDamageRelativePosition_Statics::NewProp_InNewPostion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_SetHitDamageRelativePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_SetHitDamageRelativePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "SetHitDamageRelativePosition", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_SetHitDamageRelativePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_SetHitDamageRelativePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_SetHitDamageRelativePosition_Statics::HitCollision_eventSetHitDamageRelativePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_SetHitDamageRelativePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_SetHitDamageRelativePosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_SetHitDamageRelativePosition_Statics::HitCollision_eventSetHitDamageRelativePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_SetHitDamageRelativePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_SetHitDamageRelativePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execSetHitDamageRelativePosition)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InNewPostion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHitDamageRelativePosition(Z_Param_Out_InNewPostion);
	P_NATIVE_END;
}
// End Class AHitCollision Function SetHitDamageRelativePosition

// Begin Class AHitCollision Function SetHitID
struct Z_Construct_UFunction_AHitCollision_SetHitID_Statics
{
	struct HitCollision_eventSetHitID_Parms
	{
		int32 InNewHit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNewHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHitCollision_SetHitID_Statics::NewProp_InNewHit = { "InNewHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventSetHitID_Parms, InNewHit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_SetHitID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_SetHitID_Statics::NewProp_InNewHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_SetHitID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_SetHitID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "SetHitID", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_SetHitID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_SetHitID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_SetHitID_Statics::HitCollision_eventSetHitID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_SetHitID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_SetHitID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_SetHitID_Statics::HitCollision_eventSetHitID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_SetHitID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_SetHitID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execSetHitID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InNewHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHitID(Z_Param_InNewHit);
	P_NATIVE_END;
}
// End Class AHitCollision Function SetHitID

// Begin Class AHitCollision Function SetIgnoreActors
struct Z_Construct_UFunction_AHitCollision_SetIgnoreActors_Statics
{
	struct HitCollision_eventSetIgnoreActors_Parms
	{
		AActor* InActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_SetIgnoreActors_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventSetIgnoreActors_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_SetIgnoreActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_SetIgnoreActors_Statics::NewProp_InActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_SetIgnoreActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_SetIgnoreActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "SetIgnoreActors", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_SetIgnoreActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_SetIgnoreActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_SetIgnoreActors_Statics::HitCollision_eventSetIgnoreActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_SetIgnoreActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_SetIgnoreActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_SetIgnoreActors_Statics::HitCollision_eventSetIgnoreActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_SetIgnoreActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_SetIgnoreActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execSetIgnoreActors)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIgnoreActors(Z_Param_InActor);
	P_NATIVE_END;
}
// End Class AHitCollision Function SetIgnoreActors

// Begin Class AHitCollision Function SetScapegoatActor
struct Z_Construct_UFunction_AHitCollision_SetScapegoatActor_Statics
{
	struct HitCollision_eventSetScapegoatActor_Parms
	{
		AActor* InScapegoat;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InScapegoat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_SetScapegoatActor_Statics::NewProp_InScapegoat = { "InScapegoat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventSetScapegoatActor_Parms, InScapegoat), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_SetScapegoatActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_SetScapegoatActor_Statics::NewProp_InScapegoat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_SetScapegoatActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_SetScapegoatActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "SetScapegoatActor", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_SetScapegoatActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_SetScapegoatActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_SetScapegoatActor_Statics::HitCollision_eventSetScapegoatActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_SetScapegoatActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_SetScapegoatActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_SetScapegoatActor_Statics::HitCollision_eventSetScapegoatActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_SetScapegoatActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_SetScapegoatActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execSetScapegoatActor)
{
	P_GET_OBJECT(AActor,Z_Param_InScapegoat);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScapegoatActor(Z_Param_InScapegoat);
	P_NATIVE_END;
}
// End Class AHitCollision Function SetScapegoatActor

// Begin Class AHitCollision Function StartHandleDamage_Inner
struct Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics
{
	struct HitCollision_eventStartHandleDamage_Inner_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventStartHandleDamage_Inner_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventStartHandleDamage_Inner_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventStartHandleDamage_Inner_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventStartHandleDamage_Inner_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((HitCollision_eventStartHandleDamage_Inner_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HitCollision_eventStartHandleDamage_Inner_Parms), &Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitCollision_eventStartHandleDamage_Inner_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "StartHandleDamage_Inner", nullptr, nullptr, Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::HitCollision_eventStartHandleDamage_Inner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::HitCollision_eventStartHandleDamage_Inner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execStartHandleDamage_Inner)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartHandleDamage_Inner(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AHitCollision Function StartHandleDamage_Inner

// Begin Class AHitCollision Function UnregisteredHitCollision
struct Z_Construct_UFunction_AHitCollision_UnregisteredHitCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHitCollision_UnregisteredHitCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHitCollision, nullptr, "UnregisteredHitCollision", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHitCollision_UnregisteredHitCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHitCollision_UnregisteredHitCollision_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHitCollision_UnregisteredHitCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHitCollision_UnregisteredHitCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHitCollision::execUnregisteredHitCollision)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisteredHitCollision();
	P_NATIVE_END;
}
// End Class AHitCollision Function UnregisteredHitCollision

// Begin Class AHitCollision
void AHitCollision::StaticRegisterNativesAHitCollision()
{
	UClass* Class = AHitCollision::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddIgnoreActors", &AHitCollision::execAddIgnoreActors },
		{ "CheckAutomaticallyDestroy", &AHitCollision::execCheckAutomaticallyDestroy },
		{ "ClearCustomIgnoreActors", &AHitCollision::execClearCustomIgnoreActors },
		{ "Collision", &AHitCollision::execCollision },
		{ "EndHandleDamage_Inner", &AHitCollision::execEndHandleDamage_Inner },
		{ "GeBuffs", &AHitCollision::execGeBuffs },
		{ "GetAttackedTarget", &AHitCollision::execGetAttackedTarget },
		{ "GetBuffTags", &AHitCollision::execGetBuffTags },
		{ "GetDamageRatio", &AHitCollision::execGetDamageRatio },
		{ "GetExtent", &AHitCollision::execGetExtent },
		{ "GetHitDamage", &AHitCollision::execGetHitDamage },
		{ "GetHitID", &AHitCollision::execGetHitID },
		{ "GetIgnoreTraceActor", &AHitCollision::execGetIgnoreTraceActor },
		{ "GetScapegoatActor", &AHitCollision::execGetScapegoatActor },
		{ "InitCustomIgnoreActors", &AHitCollision::execInitCustomIgnoreActors },
		{ "InitHitBindEvent", &AHitCollision::execInitHitBindEvent },
		{ "InitHitCollision", &AHitCollision::execInitHitCollision },
		{ "IsExist", &AHitCollision::execIsExist },
		{ "IsExitIgnoredActor", &AHitCollision::execIsExitIgnoredActor },
		{ "IsLocallyInputControlled", &AHitCollision::execIsLocallyInputControlled },
		{ "K2_SetBuffsByName", &AHitCollision::execK2_SetBuffsByName },
		{ "K2_SetBuffsByTag", &AHitCollision::execK2_SetBuffsByTag },
		{ "RegisterHitCollision", &AHitCollision::execRegisterHitCollision },
		{ "RemoveIgnoreActors", &AHitCollision::execRemoveIgnoreActors },
		{ "SetGASTag", &AHitCollision::execSetGASTag },
		{ "SetHitDamageRelativePosition", &AHitCollision::execSetHitDamageRelativePosition },
		{ "SetHitID", &AHitCollision::execSetHitID },
		{ "SetIgnoreActors", &AHitCollision::execSetIgnoreActors },
		{ "SetScapegoatActor", &AHitCollision::execSetScapegoatActor },
		{ "StartHandleDamage_Inner", &AHitCollision::execStartHandleDamage_Inner },
		{ "UnregisteredHitCollision", &AHitCollision::execUnregisteredHitCollision },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHitCollision);
UClass* Z_Construct_UClass_AHitCollision_NoRegister()
{
	return AHitCollision::StaticClass();
}
struct Z_Construct_UClass_AHitCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Hit/Core/ComboSkillHitCollision.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitCollisionRootComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HitCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93\xe7\x9a\x84\xe4\xb8\xbb\xe8\xa6\x81\xe6\xa0\xb9\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93\xe7\x9a\x84\xe4\xb8\xbb\xe8\xa6\x81\xe6\xa0\xb9\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HitCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93\xe7\x9a\x84\xe4\xb8\xbb\xe8\xa6\x81\xe8\xbf\x90\xe5\x8a\xa8\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93\xe7\x9a\x84\xe4\xb8\xbb\xe8\xa6\x81\xe8\xbf\x90\xe5\x8a\xa8\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatingMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HitCollision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitCollisionType_MetaData[] = {
		{ "Category", "HitCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xb1\xbb\xe5\x9e\x8b \xe6\x98\xaf\xe5\xb8\x8c\xe6\x9c\x9b\xe5\xae\x83\xe6\x98\xaf\xe7\x9b\xb4\xe7\xba\xbf\xe6\x94\xbb\xe5\x87\xbb\xe8\xbf\x98\xe6\x98\xaf\xe5\x8f\x97\xe5\x87\xbb\xe8\xbf\x98\xe6\x98\xaf \xe8\xb7\x9f\xe8\xb8\xaa \xe8\xbf\x98\xe6\x98\xaf\xe8\x8c\x83\xe5\x9b\xb4\xe7\x88\x86\xe7\x82\xb8\xe7\xad\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb1\xbb\xe5\x9e\x8b \xe6\x98\xaf\xe5\xb8\x8c\xe6\x9c\x9b\xe5\xae\x83\xe6\x98\xaf\xe7\x9b\xb4\xe7\xba\xbf\xe6\x94\xbb\xe5\x87\xbb\xe8\xbf\x98\xe6\x98\xaf\xe5\x8f\x97\xe5\x87\xbb\xe8\xbf\x98\xe6\x98\xaf \xe8\xb7\x9f\xe8\xb8\xaa \xe8\xbf\x98\xe6\x98\xaf\xe8\x8c\x83\xe5\x9b\xb4\xe7\x88\x86\xe7\x82\xb8\xe7\xad\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenFirePoint_MetaData[] = {
		{ "Category", "HitCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x80\xe7\x81\xab\xe7\x82\xb9 \xe6\x96\xb9\xe4\xbe\xbf\xe7\xbb\x91\xe5\xae\x9a\n" },
#endif
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe7\x81\xab\xe7\x82\xb9 \xe6\x96\xb9\xe4\xbe\xbf\xe7\xbb\x91\xe5\xae\x9a" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomDirection_MetaData[] = {
		{ "Category", "HitCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x9a\x8f\xe6\x9c\xba\xe8\x8c\x83\xe5\x9b\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9a\x8f\xe6\x9c\xba\xe8\x8c\x83\xe5\x9b\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Line Trace HitCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xaf\xa5\xe5\x8f\x98\xe9\x87\x8f\xe9\x9c\x80\xe8\xa6\x81 HitCollisionType == EHitCollisionType::HITCOLLISIONTYPE_RAY_LINE \xe6\x89\x8d\xe6\x9c\x89\xe6\x95\x88\xe6\x9e\x9c,\xe5\xb0\x84\xe7\xba\xbf\xe7\x9a\x84\xe6\xa3\x80\xe6\xb5\x8b\xe8\xb7\x9d\xe7\xa6\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xa5\xe5\x8f\x98\xe9\x87\x8f\xe9\x9c\x80\xe8\xa6\x81 HitCollisionType == EHitCollisionType::HITCOLLISIONTYPE_RAY_LINE \xe6\x89\x8d\xe6\x9c\x89\xe6\x95\x88\xe6\x9e\x9c,\xe5\xb0\x84\xe7\xba\xbf\xe7\x9a\x84\xe6\xa3\x80\xe6\xb5\x8b\xe8\xb7\x9d\xe7\xa6\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceTypeQuery_MetaData[] = {
		{ "Category", "HitCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb0\x84\xe7\xba\xbf\xe7\xbb\x9f\xe4\xb8\x80\xe6\xa3\x80\xe6\xb5\x8b\xe9\x80\x9a\xe9\x81\x93\n" },
#endif
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x84\xe7\xba\xbf\xe7\xbb\x9f\xe4\xb8\x80\xe6\xa3\x80\xe6\xb5\x8b\xe9\x80\x9a\xe9\x81\x93" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Range HitCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xaf\xa5\xe5\x80\xbc\xe5\x8f\xaa\xe4\xb8\xba\xe8\x8c\x83\xe5\x9b\xb4\xe7\x88\x86\xe7\x82\xb8\xe6\x94\xbb\xe5\x87\xbb\xe6\x8f\x90\xe4\xbe\x9b\n" },
#endif
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xa5\xe5\x80\xbc\xe5\x8f\xaa\xe4\xb8\xba\xe8\x8c\x83\xe5\x9b\xb4\xe7\x88\x86\xe7\x82\xb8\xe6\x94\xbb\xe5\x87\xbb\xe6\x8f\x90\xe4\xbe\x9b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDamage_MetaData[] = {
		{ "Category", "Range HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageInnerRadius_MetaData[] = {
		{ "Category", "Range HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageOuterRadius_MetaData[] = {
		{ "Category", "Range HitCollision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSweep_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x92\x88\xe5\xaf\xb9\x09HITCOLLISIONTYPE_DIRECT_LINE \xef\xbc\x8c\x09\xe6\x97\xa0\xe9\x9a\x9c\xe7\xa2\x8d\xe7\x9b\xb4\xe7\xba\xbf\xe6\x94\xbb\xe5\x87\xbb \xe6\x9c\x89\xe5\xbc\xb9\xe9\x81\x93\n//\x09\x09HITCOLLISIONTYPE_LINE\xef\xbc\x8c\x09\x09\x09\xe9\x9d\x9e\xe8\xb7\x9f\xe8\xb8\xaa\xe7\xb1\xbb\xe5\x9e\x8b\xef\xbc\x8c\xe7\xb1\xbb\xe4\xbc\xbc\xe6\x89\x8b\xe6\x9e\xaa\xe5\xad\x90\xe5\xbc\xb9 \xe6\x9c\x89\xe5\xbc\xb9\xe9\x81\x93\xef\xbc\x9b\n//\x09\x09HITCOLLISIONTYPE_TRACK_LINE\x09\x09\xe8\xb7\x9f\xe8\xb8\xaa\xe7\xb1\xbb\xe5\x9e\x8b \xe6\x9c\x89\xe5\xbc\xb9\xe9\x81\x93\n//\xe7\xb1\xbb\xe5\x9e\x8b\xe5\xbc\x80\xe5\x90\xaf\xe7\xa2\xb0\xe6\x92\x9e\xe5\xb0\x84\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b \xe5\xaf\xb9\xe6\x9c\x89\xe5\xbc\xb9\xe9\x81\x93\xe7\x9a\x84\xe9\x9d\x9e\xe5\xb8\xb8\xe6\x9c\x89\xe6\x95\x88\xe6\x9e\x9c\n" },
#endif
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x92\x88\xe5\xaf\xb9      HITCOLLISIONTYPE_DIRECT_LINE \xef\xbc\x8c  \xe6\x97\xa0\xe9\x9a\x9c\xe7\xa2\x8d\xe7\x9b\xb4\xe7\xba\xbf\xe6\x94\xbb\xe5\x87\xbb \xe6\x9c\x89\xe5\xbc\xb9\xe9\x81\x93\n               HITCOLLISIONTYPE_LINE\xef\xbc\x8c                  \xe9\x9d\x9e\xe8\xb7\x9f\xe8\xb8\xaa\xe7\xb1\xbb\xe5\x9e\x8b\xef\xbc\x8c\xe7\xb1\xbb\xe4\xbc\xbc\xe6\x89\x8b\xe6\x9e\xaa\xe5\xad\x90\xe5\xbc\xb9 \xe6\x9c\x89\xe5\xbc\xb9\xe9\x81\x93\xef\xbc\x9b\n               HITCOLLISIONTYPE_TRACK_LINE             \xe8\xb7\x9f\xe8\xb8\xaa\xe7\xb1\xbb\xe5\x9e\x8b \xe6\x9c\x89\xe5\xbc\xb9\xe9\x81\x93\n\xe7\xb1\xbb\xe5\x9e\x8b\xe5\xbc\x80\xe5\x90\xaf\xe7\xa2\xb0\xe6\x92\x9e\xe5\xb0\x84\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b \xe5\xaf\xb9\xe6\x9c\x89\xe5\xbc\xb9\xe9\x81\x93\xe7\x9a\x84\xe9\x9d\x9e\xe5\xb8\xb8\xe6\x9c\x89\xe6\x95\x88\xe6\x9e\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugTrace_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecordOnlyOnce_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe4\xb8\x8d\xe6\x98\xaf\xe5\x8f\xaa\xe8\xae\xb0\xe5\xbd\x95\xe4\xb8\x80\xe6\xac\xa1 \xe6\x8e\xa5\xe5\x8f\x97\xe5\x88\xb0\xe7\x9a\x84\xe6\x95\x8c\xe4\xba\xba\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba""false \xe6\xaf\x8f\xe6\xac\xa1\xe6\x94\xbb\xe5\x87\xbb\xe6\x8e\xa5\xe5\x8f\x97\xe5\x88\xb0\xe6\x95\x8c\xe4\xba\xba\xe5\x90\x8e \xe4\xb8\x80\xe7\xa7\x92\xe5\x90\x8e\xe5\x8f\xaf\xe5\x86\x8d\xe6\x8e\xa5\xe5\x8f\x97\xe6\xad\xa4\xe6\x95\x8c\xe4\xba\xba\n//\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xbatrue, \xe8\xb5\x8b\xe4\xba\x88\xe4\xbc\xa4\xe5\xae\xb3\xe8\xbf\x87\xe7\x9a\x84\xe6\x95\x8c\xe4\xba\xba\xe5\xb0\x86\xe4\xb8\x8d\xe5\x86\x8d\xe8\xb5\x8b\xe4\xba\x88\xe4\xbc\xa4\xe5\xae\xb3\n" },
#endif
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe4\xb8\x8d\xe6\x98\xaf\xe5\x8f\xaa\xe8\xae\xb0\xe5\xbd\x95\xe4\xb8\x80\xe6\xac\xa1 \xe6\x8e\xa5\xe5\x8f\x97\xe5\x88\xb0\xe7\x9a\x84\xe6\x95\x8c\xe4\xba\xba\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba""false \xe6\xaf\x8f\xe6\xac\xa1\xe6\x94\xbb\xe5\x87\xbb\xe6\x8e\xa5\xe5\x8f\x97\xe5\x88\xb0\xe6\x95\x8c\xe4\xba\xba\xe5\x90\x8e \xe4\xb8\x80\xe7\xa7\x92\xe5\x90\x8e\xe5\x8f\xaf\xe5\x86\x8d\xe6\x8e\xa5\xe5\x8f\x97\xe6\xad\xa4\xe6\x95\x8c\xe4\xba\xba\n\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xbatrue, \xe8\xb5\x8b\xe4\xba\x88\xe4\xbc\xa4\xe5\xae\xb3\xe8\xbf\x87\xe7\x9a\x84\xe6\x95\x8c\xe4\xba\xba\xe5\xb0\x86\xe4\xb8\x8d\xe5\x86\x8d\xe8\xb5\x8b\xe4\xba\x88\xe4\xbc\xa4\xe5\xae\xb3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugHitLine_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\xbc\x80\xe5\x90\xaf""Debug\xe6\x95\x88\xe6\x9e\x9c\n" },
#endif
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xbc\x80\xe5\x90\xaf""Debug\xe6\x95\x88\xe6\x9e\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyDestroy_MetaData[] = {
		{ "Category", "Line Trace HitCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xae\x8c\xe6\x88\x90\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8e\xe6\x98\xaf\xe5\x90\xa6\xe8\x87\xaa\xe5\x8a\xa8\xe9\x94\x80\xe6\xaf\x81\n//Automatically destroy after completion\n" },
#endif
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\x8c\xe6\x88\x90\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8e\xe6\x98\xaf\xe5\x90\xa6\xe8\x87\xaa\xe5\x8a\xa8\xe9\x94\x80\xe6\xaf\x81\nAutomatically destroy after completion" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buffs_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffTags_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackedTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomIgnoreActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScapegoatActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSplineTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceVector_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageRatio_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreInitCollision_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTrack_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GASTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Core/ComboSkillHitCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCollisionRootComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotatingMovementComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HitCollisionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HitCollisionType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OpenFirePoint;
	static void NewProp_bRandomDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceTypeQuery;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageInnerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageOuterRadius;
	static void NewProp_bEnableSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSweep;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugTrace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DrawDebugTrace;
	static void NewProp_bRecordOnlyOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordOnlyOnce;
	static void NewProp_bDebugHitLine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugHitLine;
	static void NewProp_bAutomaticallyDestroy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyDestroy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HitID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Buffs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuffTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BuffTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackedTarget_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackedTarget;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CustomIgnoreActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomIgnoreActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScapegoatActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSplineTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceVector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageRatio;
	static void NewProp_bPreInitCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreInitCollision;
	static void NewProp_bTrack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GASTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHitCollision_AddIgnoreActors, "AddIgnoreActors" }, // 3065100327
		{ &Z_Construct_UFunction_AHitCollision_CheckAutomaticallyDestroy, "CheckAutomaticallyDestroy" }, // 335803703
		{ &Z_Construct_UFunction_AHitCollision_ClearCustomIgnoreActors, "ClearCustomIgnoreActors" }, // 3364137309
		{ &Z_Construct_UFunction_AHitCollision_Collision, "Collision" }, // 169596688
		{ &Z_Construct_UFunction_AHitCollision_EndHandleDamage_Inner, "EndHandleDamage_Inner" }, // 4257879579
		{ &Z_Construct_UFunction_AHitCollision_GeBuffs, "GeBuffs" }, // 630804201
		{ &Z_Construct_UFunction_AHitCollision_GetAttackedTarget, "GetAttackedTarget" }, // 867763173
		{ &Z_Construct_UFunction_AHitCollision_GetBuffTags, "GetBuffTags" }, // 1447548532
		{ &Z_Construct_UFunction_AHitCollision_GetDamageRatio, "GetDamageRatio" }, // 473037551
		{ &Z_Construct_UFunction_AHitCollision_GetExtent, "GetExtent" }, // 1784502184
		{ &Z_Construct_UFunction_AHitCollision_GetHitDamage, "GetHitDamage" }, // 4163640158
		{ &Z_Construct_UFunction_AHitCollision_GetHitID, "GetHitID" }, // 3871246257
		{ &Z_Construct_UFunction_AHitCollision_GetIgnoreTraceActor, "GetIgnoreTraceActor" }, // 3785392340
		{ &Z_Construct_UFunction_AHitCollision_GetScapegoatActor, "GetScapegoatActor" }, // 2604757419
		{ &Z_Construct_UFunction_AHitCollision_InitCustomIgnoreActors, "InitCustomIgnoreActors" }, // 925349509
		{ &Z_Construct_UFunction_AHitCollision_InitHitBindEvent, "InitHitBindEvent" }, // 3579162827
		{ &Z_Construct_UFunction_AHitCollision_InitHitCollision, "InitHitCollision" }, // 55269979
		{ &Z_Construct_UFunction_AHitCollision_IsExist, "IsExist" }, // 1823850227
		{ &Z_Construct_UFunction_AHitCollision_IsExitIgnoredActor, "IsExitIgnoredActor" }, // 866424217
		{ &Z_Construct_UFunction_AHitCollision_IsLocallyInputControlled, "IsLocallyInputControlled" }, // 3365138505
		{ &Z_Construct_UFunction_AHitCollision_K2_OnActivateProjectileMovementHoming, "K2_OnActivateProjectileMovementHoming" }, // 3718652660
		{ &Z_Construct_UFunction_AHitCollision_K2_OnAffected, "K2_OnAffected" }, // 34636157
		{ &Z_Construct_UFunction_AHitCollision_K2_SetBuffsByName, "K2_SetBuffsByName" }, // 2399306258
		{ &Z_Construct_UFunction_AHitCollision_K2_SetBuffsByTag, "K2_SetBuffsByTag" }, // 1716537524
		{ &Z_Construct_UFunction_AHitCollision_RegisterHitCollision, "RegisterHitCollision" }, // 4055782612
		{ &Z_Construct_UFunction_AHitCollision_RemoveIgnoreActors, "RemoveIgnoreActors" }, // 3389873366
		{ &Z_Construct_UFunction_AHitCollision_SetGASTag, "SetGASTag" }, // 679883455
		{ &Z_Construct_UFunction_AHitCollision_SetHitDamageRelativePosition, "SetHitDamageRelativePosition" }, // 1283913309
		{ &Z_Construct_UFunction_AHitCollision_SetHitID, "SetHitID" }, // 1454153003
		{ &Z_Construct_UFunction_AHitCollision_SetIgnoreActors, "SetIgnoreActors" }, // 3268671452
		{ &Z_Construct_UFunction_AHitCollision_SetScapegoatActor, "SetScapegoatActor" }, // 353808830
		{ &Z_Construct_UFunction_AHitCollision_StartHandleDamage_Inner, "StartHandleDamage_Inner" }, // 2127296001
		{ &Z_Construct_UFunction_AHitCollision_UnregisteredHitCollision, "UnregisteredHitCollision" }, // 1286753477
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHitCollision>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_HitCollisionRootComponent = { "HitCollisionRootComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, HitCollisionRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitCollisionRootComponent_MetaData), NewProp_HitCollisionRootComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_RotatingMovementComponent = { "RotatingMovementComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, RotatingMovementComponent), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatingMovementComponent_MetaData), NewProp_RotatingMovementComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_HitCollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_HitCollisionType = { "HitCollisionType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, HitCollisionType), Z_Construct_UEnum_SimpleCombat_EHitCollisionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitCollisionType_MetaData), NewProp_HitCollisionType_MetaData) }; // 1560033521
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_OpenFirePoint = { "OpenFirePoint", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, OpenFirePoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenFirePoint_MetaData), NewProp_OpenFirePoint_MetaData) };
void Z_Construct_UClass_AHitCollision_Statics::NewProp_bRandomDirection_SetBit(void* Obj)
{
	((AHitCollision*)Obj)->bRandomDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_bRandomDirection = { "bRandomDirection", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHitCollision), &Z_Construct_UClass_AHitCollision_Statics::NewProp_bRandomDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomDirection_MetaData), NewProp_bRandomDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_TraceTypeQuery = { "TraceTypeQuery", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, TraceTypeQuery), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceTypeQuery_MetaData), NewProp_TraceTypeQuery_MetaData) }; // 1673313466
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_MinimumDamage = { "MinimumDamage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, MinimumDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumDamage_MetaData), NewProp_MinimumDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_DamageInnerRadius = { "DamageInnerRadius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, DamageInnerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageInnerRadius_MetaData), NewProp_DamageInnerRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_DamageOuterRadius = { "DamageOuterRadius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, DamageOuterRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageOuterRadius_MetaData), NewProp_DamageOuterRadius_MetaData) };
void Z_Construct_UClass_AHitCollision_Statics::NewProp_bEnableSweep_SetBit(void* Obj)
{
	((AHitCollision*)Obj)->bEnableSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_bEnableSweep = { "bEnableSweep", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHitCollision), &Z_Construct_UClass_AHitCollision_Statics::NewProp_bEnableSweep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSweep_MetaData), NewProp_bEnableSweep_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_DrawDebugTrace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_DrawDebugTrace = { "DrawDebugTrace", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, DrawDebugTrace), Z_Construct_UEnum_SimpleCombat_ESimpleDrawDebugTrace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDebugTrace_MetaData), NewProp_DrawDebugTrace_MetaData) }; // 1032363344
void Z_Construct_UClass_AHitCollision_Statics::NewProp_bRecordOnlyOnce_SetBit(void* Obj)
{
	((AHitCollision*)Obj)->bRecordOnlyOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_bRecordOnlyOnce = { "bRecordOnlyOnce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHitCollision), &Z_Construct_UClass_AHitCollision_Statics::NewProp_bRecordOnlyOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecordOnlyOnce_MetaData), NewProp_bRecordOnlyOnce_MetaData) };
void Z_Construct_UClass_AHitCollision_Statics::NewProp_bDebugHitLine_SetBit(void* Obj)
{
	((AHitCollision*)Obj)->bDebugHitLine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_bDebugHitLine = { "bDebugHitLine", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHitCollision), &Z_Construct_UClass_AHitCollision_Statics::NewProp_bDebugHitLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugHitLine_MetaData), NewProp_bDebugHitLine_MetaData) };
void Z_Construct_UClass_AHitCollision_Statics::NewProp_bAutomaticallyDestroy_SetBit(void* Obj)
{
	((AHitCollision*)Obj)->bAutomaticallyDestroy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_bAutomaticallyDestroy = { "bAutomaticallyDestroy", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHitCollision), &Z_Construct_UClass_AHitCollision_Statics::NewProp_bAutomaticallyDestroy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticallyDestroy_MetaData), NewProp_bAutomaticallyDestroy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_SplineOffset = { "SplineOffset", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, SplineOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineOffset_MetaData), NewProp_SplineOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_HitID = { "HitID", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, HitID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitID_MetaData), NewProp_HitID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_Buffs_Inner = { "Buffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_Buffs = { "Buffs", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, Buffs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buffs_MetaData), NewProp_Buffs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_BuffTags_Inner = { "BuffTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_BuffTags = { "BuffTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, BuffTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffTags_MetaData), NewProp_BuffTags_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_AttackedTarget_Inner = { "AttackedTarget", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttackedTargetTimer, METADATA_PARAMS(0, nullptr) }; // 2104485868
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_AttackedTarget = { "AttackedTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, AttackedTarget), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackedTarget_MetaData), NewProp_AttackedTarget_MetaData) }; // 2104485868
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_CustomIgnoreActors_Inner = { "CustomIgnoreActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_CustomIgnoreActors = { "CustomIgnoreActors", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, CustomIgnoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomIgnoreActors_MetaData), NewProp_CustomIgnoreActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_ScapegoatActor = { "ScapegoatActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, ScapegoatActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScapegoatActor_MetaData), NewProp_ScapegoatActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_CurrentSplineTime = { "CurrentSplineTime", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, CurrentSplineTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSplineTime_MetaData), NewProp_CurrentSplineTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_DistanceVector = { "DistanceVector", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, DistanceVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceVector_MetaData), NewProp_DistanceVector_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_DamageRatio = { "DamageRatio", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, DamageRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageRatio_MetaData), NewProp_DamageRatio_MetaData) };
void Z_Construct_UClass_AHitCollision_Statics::NewProp_bPreInitCollision_SetBit(void* Obj)
{
	((AHitCollision*)Obj)->bPreInitCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_bPreInitCollision = { "bPreInitCollision", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHitCollision), &Z_Construct_UClass_AHitCollision_Statics::NewProp_bPreInitCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreInitCollision_MetaData), NewProp_bPreInitCollision_MetaData) };
void Z_Construct_UClass_AHitCollision_Statics::NewProp_bTrack_SetBit(void* Obj)
{
	((AHitCollision*)Obj)->bTrack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_bTrack = { "bTrack", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHitCollision), &Z_Construct_UClass_AHitCollision_Statics::NewProp_bTrack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTrack_MetaData), NewProp_bTrack_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHitCollision_Statics::NewProp_GASTag = { "GASTag", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitCollision, GASTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GASTag_MetaData), NewProp_GASTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHitCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_HitCollisionRootComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_ProjectileMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_RotatingMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_HitCollisionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_HitCollisionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_OpenFirePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_bRandomDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_TraceTypeQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_MinimumDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_DamageInnerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_DamageOuterRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_bEnableSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_DrawDebugTrace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_DrawDebugTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_bRecordOnlyOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_bDebugHitLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_bAutomaticallyDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_SplineOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_HitID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_Buffs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_Buffs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_BuffTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_BuffTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_AttackedTarget_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_AttackedTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_CustomIgnoreActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_CustomIgnoreActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_ScapegoatActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_CurrentSplineTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_DistanceVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_DamageRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_bPreInitCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_bTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitCollision_Statics::NewProp_GASTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHitCollision_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHitCollision_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHitCollision_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHitCollision_Statics::ClassParams = {
	&AHitCollision::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHitCollision_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHitCollision_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHitCollision_Statics::Class_MetaDataParams), Z_Construct_UClass_AHitCollision_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHitCollision()
{
	if (!Z_Registration_Info_UClass_AHitCollision.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHitCollision.OuterSingleton, Z_Construct_UClass_AHitCollision_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHitCollision.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<AHitCollision>()
{
	return AHitCollision::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHitCollision);
AHitCollision::~AHitCollision() {}
// End Class AHitCollision

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAttackedTargetTimer::StaticStruct, Z_Construct_UScriptStruct_FAttackedTargetTimer_Statics::NewStructOps, TEXT("AttackedTargetTimer"), &Z_Registration_Info_UScriptStruct_AttackedTargetTimer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttackedTargetTimer), 2104485868U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHitCollision, AHitCollision::StaticClass, TEXT("AHitCollision"), &Z_Registration_Info_UClass_AHitCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHitCollision), 2564481567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_3536953825(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Core_ComboSkillHitCollision_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
