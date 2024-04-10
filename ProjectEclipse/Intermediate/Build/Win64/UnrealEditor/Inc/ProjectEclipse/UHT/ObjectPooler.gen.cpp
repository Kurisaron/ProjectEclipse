// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/ObjectPooler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPooler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_AProjectileActor_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UObjectPooler();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UObjectPooler_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UProjectEclipseGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References
	void UObjectPooler::StaticRegisterNativesUObjectPooler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectPooler);
	UClass* Z_Construct_UClass_UObjectPooler_NoRegister()
	{
		return UObjectPooler::StaticClass();
	}
	struct Z_Construct_UClass_UObjectPooler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PooledProjectiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PooledProjectiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PooledProjectiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectPooler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPooler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPooler_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObjectPooler.h" },
		{ "ModuleRelativePath", "Public/ObjectPooler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPooler_Statics::NewProp_GameInstance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Game Instance" },
		{ "ModuleRelativePath", "Public/ObjectPooler.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPooler_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectPooler, GameInstance), Z_Construct_UClass_UProjectEclipseGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPooler_Statics::NewProp_GameInstance_MetaData), Z_Construct_UClass_UObjectPooler_Statics::NewProp_GameInstance_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPooler_Statics::NewProp_PooledProjectiles_Inner = { "PooledProjectiles", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AProjectileActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPooler_Statics::NewProp_PooledProjectiles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Public/ObjectPooler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectPooler_Statics::NewProp_PooledProjectiles = { "PooledProjectiles", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectPooler, PooledProjectiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPooler_Statics::NewProp_PooledProjectiles_MetaData), Z_Construct_UClass_UObjectPooler_Statics::NewProp_PooledProjectiles_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectPooler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPooler_Statics::NewProp_GameInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPooler_Statics::NewProp_PooledProjectiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPooler_Statics::NewProp_PooledProjectiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectPooler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPooler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectPooler_Statics::ClassParams = {
		&UObjectPooler::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectPooler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPooler_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPooler_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectPooler_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPooler_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UObjectPooler()
	{
		if (!Z_Registration_Info_UClass_UObjectPooler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectPooler.OuterSingleton, Z_Construct_UClass_UObjectPooler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectPooler.OuterSingleton;
	}
	template<> PROJECTECLIPSE_API UClass* StaticClass<UObjectPooler>()
	{
		return UObjectPooler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPooler);
	UObjectPooler::~UObjectPooler() {}
	struct Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ObjectPooler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ObjectPooler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectPooler, UObjectPooler::StaticClass, TEXT("UObjectPooler"), &Z_Registration_Info_UClass_UObjectPooler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectPooler), 3393791813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ObjectPooler_h_94246338(TEXT("/Script/ProjectEclipse"),
		Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ObjectPooler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ObjectPooler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
