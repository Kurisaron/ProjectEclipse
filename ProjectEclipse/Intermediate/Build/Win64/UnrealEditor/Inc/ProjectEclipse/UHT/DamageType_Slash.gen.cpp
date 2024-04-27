// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/DamageType_Slash.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageType_Slash() {}

// Begin Cross Module References
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UDamageType_Base();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UDamageType_Slash();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UDamageType_Slash_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References

// Begin Class UDamageType_Slash
void UDamageType_Slash::StaticRegisterNativesUDamageType_Slash()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageType_Slash);
UClass* Z_Construct_UClass_UDamageType_Slash_NoRegister()
{
	return UDamageType_Slash::StaticClass();
}
struct Z_Construct_UClass_UDamageType_Slash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DamageType_Slash.h" },
		{ "ModuleRelativePath", "Public/DamageType_Slash.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageType_Slash>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDamageType_Slash_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDamageType_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Slash_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageType_Slash_Statics::ClassParams = {
	&UDamageType_Slash::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Slash_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageType_Slash_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageType_Slash()
{
	if (!Z_Registration_Info_UClass_UDamageType_Slash.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageType_Slash.OuterSingleton, Z_Construct_UClass_UDamageType_Slash_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageType_Slash.OuterSingleton;
}
template<> PROJECTECLIPSE_API UClass* StaticClass<UDamageType_Slash>()
{
	return UDamageType_Slash::StaticClass();
}
UDamageType_Slash::UDamageType_Slash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageType_Slash);
UDamageType_Slash::~UDamageType_Slash() {}
// End Class UDamageType_Slash

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Slash_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageType_Slash, UDamageType_Slash::StaticClass, TEXT("UDamageType_Slash"), &Z_Registration_Info_UClass_UDamageType_Slash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageType_Slash), 3871094828U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Slash_h_2825185585(TEXT("/Script/ProjectEclipse"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Slash_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_DamageType_Slash_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
