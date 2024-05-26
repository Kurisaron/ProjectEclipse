// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPTest_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TPTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TPTest()
	{
		if (!Z_Registration_Info_UPackage__Script_TPTest.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TPTest",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5104D756,
				0x5889B3E0,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TPTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TPTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TPTest(Z_Construct_UPackage__Script_TPTest, TEXT("/Script/TPTest"), Z_Registration_Info_UPackage__Script_TPTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5104D756, 0x5889B3E0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
