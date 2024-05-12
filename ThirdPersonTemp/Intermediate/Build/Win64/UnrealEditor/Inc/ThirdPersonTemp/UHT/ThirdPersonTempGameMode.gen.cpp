// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonTemp/ThirdPersonTempGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonTempGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THIRDPERSONTEMP_API UClass* Z_Construct_UClass_AThirdPersonTempGameMode();
THIRDPERSONTEMP_API UClass* Z_Construct_UClass_AThirdPersonTempGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThirdPersonTemp();
// End Cross Module References

// Begin Class AThirdPersonTempGameMode
void AThirdPersonTempGameMode::StaticRegisterNativesAThirdPersonTempGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdPersonTempGameMode);
UClass* Z_Construct_UClass_AThirdPersonTempGameMode_NoRegister()
{
	return AThirdPersonTempGameMode::StaticClass();
}
struct Z_Construct_UClass_AThirdPersonTempGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ThirdPersonTempGameMode.h" },
		{ "ModuleRelativePath", "ThirdPersonTempGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonTempGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AThirdPersonTempGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonTemp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonTempGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonTempGameMode_Statics::ClassParams = {
	&AThirdPersonTempGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonTempGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AThirdPersonTempGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThirdPersonTempGameMode()
{
	if (!Z_Registration_Info_UClass_AThirdPersonTempGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonTempGameMode.OuterSingleton, Z_Construct_UClass_AThirdPersonTempGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThirdPersonTempGameMode.OuterSingleton;
}
template<> THIRDPERSONTEMP_API UClass* StaticClass<AThirdPersonTempGameMode>()
{
	return AThirdPersonTempGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonTempGameMode);
AThirdPersonTempGameMode::~AThirdPersonTempGameMode() {}
// End Class AThirdPersonTempGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ThirdPersonTemp_Source_ThirdPersonTemp_ThirdPersonTempGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonTempGameMode, AThirdPersonTempGameMode::StaticClass, TEXT("AThirdPersonTempGameMode"), &Z_Registration_Info_UClass_AThirdPersonTempGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonTempGameMode), 1282101091U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ThirdPersonTemp_Source_ThirdPersonTemp_ThirdPersonTempGameMode_h_1086485406(TEXT("/Script/ThirdPersonTemp"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ThirdPersonTemp_Source_ThirdPersonTemp_ThirdPersonTempGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ThirdPersonTemp_Source_ThirdPersonTemp_ThirdPersonTempGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
