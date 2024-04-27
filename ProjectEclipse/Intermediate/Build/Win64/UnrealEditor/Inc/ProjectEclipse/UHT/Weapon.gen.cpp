// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}

// Begin Cross Module References
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEquipment();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UWeapon();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UWeapon_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References

// Begin Class UWeapon
void UWeapon::StaticRegisterNativesUWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeapon);
UClass* Z_Construct_UClass_UWeapon_NoRegister()
{
	return UWeapon::StaticClass();
}
struct Z_Construct_UClass_UWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEquipment,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeapon_Statics::ClassParams = {
	&UWeapon::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeapon()
{
	if (!Z_Registration_Info_UClass_UWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeapon.OuterSingleton, Z_Construct_UClass_UWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeapon.OuterSingleton;
}
template<> PROJECTECLIPSE_API UClass* StaticClass<UWeapon>()
{
	return UWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeapon);
UWeapon::~UWeapon() {}
// End Class UWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Weapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeapon, UWeapon::StaticClass, TEXT("UWeapon"), &Z_Registration_Info_UClass_UWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeapon), 2884080883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Weapon_h_3185888609(TEXT("/Script/ProjectEclipse"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Weapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
