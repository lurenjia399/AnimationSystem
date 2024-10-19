// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCombat_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleCombat;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleCombat()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleCombat.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleCombat",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x6A75E7DE,
				0x821C1D6F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleCombat.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimpleCombat.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleCombat(Z_Construct_UPackage__Script_SimpleCombat, TEXT("/Script/SimpleCombat"), Z_Registration_Info_UPackage__Script_SimpleCombat, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6A75E7DE, 0x821C1D6F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
