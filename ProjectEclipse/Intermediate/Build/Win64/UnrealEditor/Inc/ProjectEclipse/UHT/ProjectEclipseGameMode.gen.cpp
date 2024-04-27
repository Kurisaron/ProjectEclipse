// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/ProjectEclipseGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectEclipseGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_AProjectEclipseGameMode();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_AProjectEclipseGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References

// Begin Class AProjectEclipseGameMode
void AProjectEclipseGameMode::StaticRegisterNativesAProjectEclipseGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectEclipseGameMode);
UClass* Z_Construct_UClass_AProjectEclipseGameMode_NoRegister()
{
	return AProjectEclipseGameMode::StaticClass();
}
struct Z_Construct_UClass_AProjectEclipseGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectEclipseGameMode.h" },
		{ "ModuleRelativePath", "ProjectEclipseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectEclipseGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectEclipseGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectEclipseGameMode_Statics::ClassParams = {
	&AProjectEclipseGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectEclipseGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectEclipseGameMode()
{
	if (!Z_Registration_Info_UClass_AProjectEclipseGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectEclipseGameMode.OuterSingleton, Z_Construct_UClass_AProjectEclipseGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectEclipseGameMode.OuterSingleton;
}
template<> PROJECTECLIPSE_API UClass* StaticClass<AProjectEclipseGameMode>()
{
	return AProjectEclipseGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectEclipseGameMode);
AProjectEclipseGameMode::~AProjectEclipseGameMode() {}
// End Class AProjectEclipseGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectEclipseGameMode, AProjectEclipseGameMode::StaticClass, TEXT("AProjectEclipseGameMode"), &Z_Registration_Info_UClass_AProjectEclipseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectEclipseGameMode), 1802274476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseGameMode_h_2721830212(TEXT("/Script/ProjectEclipse"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
