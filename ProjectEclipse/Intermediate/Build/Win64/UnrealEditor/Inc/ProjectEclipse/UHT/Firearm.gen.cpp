// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/Firearm.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirearm() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFirearm();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFirearm_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFirearmMode_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UWeapon();
UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References

// Begin Class UFirearm
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Firearm.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Firearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CyclePrimaryAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Firearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryCycle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Modes" },
		{ "ModuleRelativePath", "Public/Firearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSecondaryMode_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Modes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default aim function for firearm, will use default zoom if set to none */" },
#endif
		{ "ModuleRelativePath", "Public/Firearm.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default aim function for firearm, will use default zoom if set to none" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAlternateMode_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Modes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default alternate fire function firearm, not all weapons will  */" },
#endif
		{ "ModuleRelativePath", "Public/Firearm.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default alternate fire function firearm, not all weapons will" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CyclePrimaryAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PrimaryCycle_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryCycle;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultSecondaryMode;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAlternateMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirearm>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirearm_Statics::NewProp_CyclePrimaryAction = { "CyclePrimaryAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirearm, CyclePrimaryAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CyclePrimaryAction_MetaData), NewProp_CyclePrimaryAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFirearm_Statics::NewProp_PrimaryCycle_Inner = { "PrimaryCycle", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UFirearmMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFirearm_Statics::NewProp_PrimaryCycle = { "PrimaryCycle", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirearm, PrimaryCycle), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryCycle_MetaData), NewProp_PrimaryCycle_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFirearm_Statics::NewProp_DefaultSecondaryMode = { "DefaultSecondaryMode", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirearm, DefaultSecondaryMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UFirearmMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSecondaryMode_MetaData), NewProp_DefaultSecondaryMode_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFirearm_Statics::NewProp_DefaultAlternateMode = { "DefaultAlternateMode", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirearm, DefaultAlternateMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UFirearmMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAlternateMode_MetaData), NewProp_DefaultAlternateMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirearm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearm_Statics::NewProp_CyclePrimaryAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearm_Statics::NewProp_PrimaryCycle_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearm_Statics::NewProp_PrimaryCycle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearm_Statics::NewProp_DefaultSecondaryMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearm_Statics::NewProp_DefaultAlternateMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearm_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFirearm_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearm_Statics::DependentSingletons) < 16);
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
// End Class UFirearm

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Firearm_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFirearm, UFirearm::StaticClass, TEXT("UFirearm"), &Z_Registration_Info_UClass_UFirearm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFirearm), 2326522028U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Firearm_h_3248110496(TEXT("/Script/ProjectEclipse"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Firearm_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Firearm_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
