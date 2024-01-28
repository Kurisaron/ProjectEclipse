// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/DamageType_Slash.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageType_Slash() {}
// Cross Module References
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UDamageType_Base();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UDamageType_Slash();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UDamageType_Slash_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References
	void UDamageType_Slash::StaticRegisterNativesUDamageType_Slash()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageType_Slash);
	UClass* Z_Construct_UClass_UDamageType_Slash_NoRegister()
	{
		return UDamageType_Slash::StaticClass();
	}
	struct Z_Construct_UClass_UDamageType_Slash_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageType_Slash_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Slash_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Slash_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DamageType_Slash.h" },
		{ "ModuleRelativePath", "Public/DamageType_Slash.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageType_Slash_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageType_Slash>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageType_Slash_Statics::ClassParams = {
		&UDamageType_Slash::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001100A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Slash_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageType_Slash_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDamageType_Slash()
	{
		if (!Z_Registration_Info_UClass_UDamageType_Slash.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageType_Slash.OuterSingleton, Z_Construct_UClass_UDamageType_Slash_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDamageType_Slash.OuterSingleton;
	}
	template<> PROJECTECLIPSE_API UClass* StaticClass<UDamageType_Slash>()
	{
		return UDamageType_Slash::StaticClass();
	}
	UDamageType_Slash::UDamageType_Slash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageType_Slash);
	UDamageType_Slash::~UDamageType_Slash() {}
	struct Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Slash_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Slash_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDamageType_Slash, UDamageType_Slash::StaticClass, TEXT("UDamageType_Slash"), &Z_Registration_Info_UClass_UDamageType_Slash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageType_Slash), 4178265422U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Slash_h_909335750(TEXT("/Script/ProjectEclipse"),
		Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Slash_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Slash_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
