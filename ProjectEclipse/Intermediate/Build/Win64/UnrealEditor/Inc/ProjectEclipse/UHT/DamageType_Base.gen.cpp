// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/DamageType_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageType_Base() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UDamageType_Base();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UDamageType_Base_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References
	void UDamageType_Base::StaticRegisterNativesUDamageType_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageType_Base);
	UClass* Z_Construct_UClass_UDamageType_Base_NoRegister()
	{
		return UDamageType_Base::StaticClass();
	}
	struct Z_Construct_UClass_UDamageType_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageType_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Base_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Base_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DamageType_Base.h" },
		{ "ModuleRelativePath", "Public/DamageType_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageType_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageType_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageType_Base_Statics::ClassParams = {
		&UDamageType_Base::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageType_Base_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDamageType_Base()
	{
		if (!Z_Registration_Info_UClass_UDamageType_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageType_Base.OuterSingleton, Z_Construct_UClass_UDamageType_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDamageType_Base.OuterSingleton;
	}
	template<> PROJECTECLIPSE_API UClass* StaticClass<UDamageType_Base>()
	{
		return UDamageType_Base::StaticClass();
	}
	UDamageType_Base::UDamageType_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageType_Base);
	UDamageType_Base::~UDamageType_Base() {}
	struct Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDamageType_Base, UDamageType_Base::StaticClass, TEXT("UDamageType_Base"), &Z_Registration_Info_UClass_UDamageType_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageType_Base), 1864797270U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Base_h_734049767(TEXT("/Script/ProjectEclipse"),
		Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
