// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}

// Begin Cross Module References
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AEquipment();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AWeapon();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin Class AWeapon
void AWeapon::StaticRegisterNativesAWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon);
UClass* Z_Construct_UClass_AWeapon_NoRegister()
{
	return AWeapon::StaticClass();
}
struct Z_Construct_UClass_AWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Weapons are a subtype of equipment to be used to combat enemies in the world. Weapons typically have damagers (aside from weapon types like firearms that lauch projectiles)\n */" },
#endif
		{ "IncludePath", "Weapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapons are a subtype of equipment to be used to combat enemies in the world. Weapons typically have damagers (aside from weapon types like firearms that lauch projectiles)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEquipment,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
	&AWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeapon()
{
	if (!Z_Registration_Info_UClass_AWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon.OuterSingleton, Z_Construct_UClass_AWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeapon.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<AWeapon>()
{
	return AWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
AWeapon::~AWeapon() {}
// End Class AWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Weapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 823762557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Weapon_h_1699687883(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Weapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
