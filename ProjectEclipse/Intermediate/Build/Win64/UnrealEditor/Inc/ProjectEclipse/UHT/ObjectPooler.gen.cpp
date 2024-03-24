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
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_AObjectPooler();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_AObjectPooler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References
	void AObjectPooler::StaticRegisterNativesAObjectPooler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObjectPooler);
	UClass* Z_Construct_UClass_AObjectPooler_NoRegister()
	{
		return AObjectPooler::StaticClass();
	}
	struct Z_Construct_UClass_AObjectPooler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PooledActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PooledActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PooledActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjectPooler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObjectPooler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectPooler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectPooler.h" },
		{ "ModuleRelativePath", "Public/ObjectPooler.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjectPooler_Statics::NewProp_PooledActors_Inner = { "PooledActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectPooler_Statics::NewProp_PooledActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectPooler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AObjectPooler_Statics::NewProp_PooledActors = { "PooledActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObjectPooler, PooledActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObjectPooler_Statics::NewProp_PooledActors_MetaData), Z_Construct_UClass_AObjectPooler_Statics::NewProp_PooledActors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObjectPooler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectPooler_Statics::NewProp_PooledActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectPooler_Statics::NewProp_PooledActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjectPooler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjectPooler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AObjectPooler_Statics::ClassParams = {
		&AObjectPooler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObjectPooler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObjectPooler_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObjectPooler_Statics::Class_MetaDataParams), Z_Construct_UClass_AObjectPooler_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObjectPooler_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AObjectPooler()
	{
		if (!Z_Registration_Info_UClass_AObjectPooler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObjectPooler.OuterSingleton, Z_Construct_UClass_AObjectPooler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AObjectPooler.OuterSingleton;
	}
	template<> PROJECTECLIPSE_API UClass* StaticClass<AObjectPooler>()
	{
		return AObjectPooler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjectPooler);
	AObjectPooler::~AObjectPooler() {}
	struct Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ObjectPooler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ObjectPooler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AObjectPooler, AObjectPooler::StaticClass, TEXT("AObjectPooler"), &Z_Registration_Info_UClass_AObjectPooler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObjectPooler), 1715803328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ObjectPooler_h_3036737729(TEXT("/Script/ProjectEclipse"),
		Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ObjectPooler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_ObjectPooler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
