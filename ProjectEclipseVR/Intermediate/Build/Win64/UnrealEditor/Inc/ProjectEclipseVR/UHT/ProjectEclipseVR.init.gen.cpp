// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectEclipseVR_init() {}
	PROJECTECLIPSEVR_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipseVR_GripGrabEvent__DelegateSignature();
	PROJECTECLIPSEVR_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipseVR_GripReleaseEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectEclipseVR;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectEclipseVR.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectEclipseVR_GripGrabEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectEclipseVR_GripReleaseEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjectEclipseVR",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8770E72A,
				0x261ECC0B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectEclipseVR.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjectEclipseVR.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectEclipseVR(Z_Construct_UPackage__Script_ProjectEclipseVR, TEXT("/Script/ProjectEclipseVR"), Z_Registration_Info_UPackage__Script_ProjectEclipseVR, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8770E72A, 0x261ECC0B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
