// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/FirearmComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirearmComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFirearmComponent();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFirearmComponent_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFirearmMode_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UWeaponComponent();
	UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References
	void UFirearmComponent::StaticRegisterNativesUFirearmComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFirearmComponent);
	UClass* Z_Construct_UClass_UFirearmComponent_NoRegister()
	{
		return UFirearmComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFirearmComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PrimaryCycleModes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryCycleModes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryCycleModes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirearmComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWeaponComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirearmComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FirearmComponent.h" },
		{ "ModuleRelativePath", "Public/FirearmComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFirearmComponent_Statics::NewProp_PrimaryCycleModes_Inner = { "PrimaryCycleModes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UFirearmMode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirearmComponent_Statics::NewProp_PrimaryCycleModes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Firearm Modes" },
		{ "ModuleRelativePath", "Public/FirearmComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFirearmComponent_Statics::NewProp_PrimaryCycleModes = { "PrimaryCycleModes", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirearmComponent, PrimaryCycleModes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmComponent_Statics::NewProp_PrimaryCycleModes_MetaData), Z_Construct_UClass_UFirearmComponent_Statics::NewProp_PrimaryCycleModes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirearmComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearmComponent_Statics::NewProp_PrimaryCycleModes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearmComponent_Statics::NewProp_PrimaryCycleModes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirearmComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirearmComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFirearmComponent_Statics::ClassParams = {
		&UFirearmComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFirearmComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFirearmComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFirearmComponent()
	{
		if (!Z_Registration_Info_UClass_UFirearmComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFirearmComponent.OuterSingleton, Z_Construct_UClass_UFirearmComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFirearmComponent.OuterSingleton;
	}
	template<> PROJECTECLIPSE_API UClass* StaticClass<UFirearmComponent>()
	{
		return UFirearmComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirearmComponent);
	UFirearmComponent::~UFirearmComponent() {}
	struct Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFirearmComponent, UFirearmComponent::StaticClass, TEXT("UFirearmComponent"), &Z_Registration_Info_UClass_UFirearmComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFirearmComponent), 2977054862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmComponent_h_3356575106(TEXT("/Script/ProjectEclipse"),
		Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_FirearmComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
