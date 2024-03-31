// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/ProjectEclipseGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectEclipseGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UProjectEclipseGameInstance();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UProjectEclipseGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References
	void UProjectEclipseGameInstance::StaticRegisterNativesUProjectEclipseGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectEclipseGameInstance);
	UClass* Z_Construct_UClass_UProjectEclipseGameInstance_NoRegister()
	{
		return UProjectEclipseGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UProjectEclipseGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectEclipseGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectEclipseGameInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectEclipseGameInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ProjectEclipseGameInstance.h" },
		{ "ModuleRelativePath", "Public/ProjectEclipseGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectEclipseGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectEclipseGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectEclipseGameInstance_Statics::ClassParams = {
		&UProjectEclipseGameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectEclipseGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectEclipseGameInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UProjectEclipseGameInstance()
	{
		if (!Z_Registration_Info_UClass_UProjectEclipseGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectEclipseGameInstance.OuterSingleton, Z_Construct_UClass_UProjectEclipseGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectEclipseGameInstance.OuterSingleton;
	}
	template<> PROJECTECLIPSE_API UClass* StaticClass<UProjectEclipseGameInstance>()
	{
		return UProjectEclipseGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectEclipseGameInstance);
	UProjectEclipseGameInstance::~UProjectEclipseGameInstance() {}
	struct Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectEclipseGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectEclipseGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectEclipseGameInstance, UProjectEclipseGameInstance::StaticClass, TEXT("UProjectEclipseGameInstance"), &Z_Registration_Info_UClass_UProjectEclipseGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectEclipseGameInstance), 3826007600U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectEclipseGameInstance_h_3430772458(TEXT("/Script/ProjectEclipse"),
		Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectEclipseGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ProjectEclipseGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
