// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/Firearm.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirearm() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFirearm();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFirearm_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFirearmMode_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_UWeapon();
	UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References
	void UFirearm::StaticRegisterNativesUFirearm()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFirearm);
	UClass* Z_Construct_UClass_UFirearm_NoRegister()
	{
		return UFirearm::StaticClass();
	}
	struct Z_Construct_UClass_UFirearm_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CyclePrimaryAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CyclePrimaryAction;
		static const UECodeGen_Private::FClassPropertyParams NewProp_PrimaryCycle_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryCycle_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryCycle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSecondaryMode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultSecondaryMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirearm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearm_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirearm_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Firearm.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Firearm.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirearm_Statics::NewProp_CyclePrimaryAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Firearm.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirearm_Statics::NewProp_CyclePrimaryAction = { "CyclePrimaryAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirearm, CyclePrimaryAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearm_Statics::NewProp_CyclePrimaryAction_MetaData), Z_Construct_UClass_UFirearm_Statics::NewProp_CyclePrimaryAction_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFirearm_Statics::NewProp_PrimaryCycle_Inner = { "PrimaryCycle", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UFirearmMode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirearm_Statics::NewProp_PrimaryCycle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Modes" },
		{ "ModuleRelativePath", "Public/Firearm.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFirearm_Statics::NewProp_PrimaryCycle = { "PrimaryCycle", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirearm, PrimaryCycle), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearm_Statics::NewProp_PrimaryCycle_MetaData), Z_Construct_UClass_UFirearm_Statics::NewProp_PrimaryCycle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirearm_Statics::NewProp_DefaultSecondaryMode_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Modes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default function for firearm, will use default zoom if set to none */" },
#endif
		{ "ModuleRelativePath", "Public/Firearm.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default function for firearm, will use default zoom if set to none" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFirearm_Statics::NewProp_DefaultSecondaryMode = { "DefaultSecondaryMode", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirearm, DefaultSecondaryMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UFirearmMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearm_Statics::NewProp_DefaultSecondaryMode_MetaData), Z_Construct_UClass_UFirearm_Statics::NewProp_DefaultSecondaryMode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirearm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearm_Statics::NewProp_CyclePrimaryAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearm_Statics::NewProp_PrimaryCycle_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearm_Statics::NewProp_PrimaryCycle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearm_Statics::NewProp_DefaultSecondaryMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirearm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirearm>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFirearm_Statics::ClassParams = {
		&UFirearm::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFirearm_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFirearm_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearm_Statics::Class_MetaDataParams), Z_Construct_UClass_UFirearm_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearm_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFirearm()
	{
		if (!Z_Registration_Info_UClass_UFirearm.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFirearm.OuterSingleton, Z_Construct_UClass_UFirearm_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFirearm.OuterSingleton;
	}
	template<> PROJECTECLIPSE_API UClass* StaticClass<UFirearm>()
	{
		return UFirearm::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirearm);
	UFirearm::~UFirearm() {}
	struct Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_Firearm_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_Firearm_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFirearm, UFirearm::StaticClass, TEXT("UFirearm"), &Z_Registration_Info_UClass_UFirearm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFirearm), 2177306612U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_Firearm_h_1419272721(TEXT("/Script/ProjectEclipse"),
		Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_Firearm_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_Public_Firearm_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
