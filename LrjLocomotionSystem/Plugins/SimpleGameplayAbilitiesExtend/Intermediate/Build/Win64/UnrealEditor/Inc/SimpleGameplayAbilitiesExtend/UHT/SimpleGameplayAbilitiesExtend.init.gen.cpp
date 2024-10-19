// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleGameplayAbilitiesExtend_init() {}
	SIMPLEGAMEPLAYABILITIESEXTEND_API UFunction* Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleGameplayAbilitiesExtend;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleGameplayAbilitiesExtend.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleGameplayAbilitiesExtend_WaitSimpleForDamageEventDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleGameplayAbilitiesExtend",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE0799CAB,
				0xDF6F584A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleGameplayAbilitiesExtend.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimpleGameplayAbilitiesExtend.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleGameplayAbilitiesExtend(Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend, TEXT("/Script/SimpleGameplayAbilitiesExtend"), Z_Registration_Info_UPackage__Script_SimpleGameplayAbilitiesExtend, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE0799CAB, 0xDF6F584A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
