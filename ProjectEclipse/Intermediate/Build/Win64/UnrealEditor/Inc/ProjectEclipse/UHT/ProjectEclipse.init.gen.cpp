// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectEclipse_init() {}
	PROJECTECLIPSE_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature();
	PROJECTECLIPSE_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature();
	PROJECTECLIPSE_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectEclipse;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectEclipse()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectEclipse.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectEclipse_ProjectileHit__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjectEclipse",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE9F6A17E,
				0x9DAF33F3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectEclipse.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjectEclipse.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectEclipse(Z_Construct_UPackage__Script_ProjectEclipse, TEXT("/Script/ProjectEclipse"), Z_Registration_Info_UPackage__Script_ProjectEclipse, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE9F6A17E, 0x9DAF33F3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
