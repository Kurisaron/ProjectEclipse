// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/DamageType_Fire.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageType_Fire() {}

// Begin Cross Module References
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UDamageType_Base();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UDamageType_Fire();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UDamageType_Fire_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References

// Begin Class UDamageType_Fire
void UDamageType_Fire::StaticRegisterNativesUDamageType_Fire()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageType_Fire);
UClass* Z_Construct_UClass_UDamageType_Fire_NoRegister()
{
	return UDamageType_Fire::StaticClass();
}
struct Z_Construct_UClass_UDamageType_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DamageType_Fire.h" },
		{ "ModuleRelativePath", "Public/DamageType_Fire.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageType_Fire>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDamageType_Fire_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDamageType_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Fire_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageType_Fire_Statics::ClassParams = {
	&UDamageType_Fire::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Fire_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageType_Fire_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageType_Fire()
{
	if (!Z_Registration_Info_UClass_UDamageType_Fire.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageType_Fire.OuterSingleton, Z_Construct_UClass_UDamageType_Fire_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageType_Fire.OuterSingleton;
}
template<> PROJECTECLIPSE_API UClass* StaticClass<UDamageType_Fire>()
{
	return UDamageType_Fire::StaticClass();
}
UDamageType_Fire::UDamageType_Fire(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageType_Fire);
UDamageType_Fire::~UDamageType_Fire() {}
// End Class UDamageType_Fire

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Fire_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageType_Fire, UDamageType_Fire::StaticClass, TEXT("UDamageType_Fire"), &Z_Registration_Info_UClass_UDamageType_Fire, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageType_Fire), 2169674318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Fire_h_180062329(TEXT("/Script/ProjectEclipse"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Fire_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Fire_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
