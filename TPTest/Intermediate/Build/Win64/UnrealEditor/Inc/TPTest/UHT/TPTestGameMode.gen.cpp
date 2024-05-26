// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPTest/TPTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPTestGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TPTEST_API UClass* Z_Construct_UClass_ATPTestGameMode();
TPTEST_API UClass* Z_Construct_UClass_ATPTestGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPTest();
// End Cross Module References

// Begin Class ATPTestGameMode
void ATPTestGameMode::StaticRegisterNativesATPTestGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPTestGameMode);
UClass* Z_Construct_UClass_ATPTestGameMode_NoRegister()
{
	return ATPTestGameMode::StaticClass();
}
struct Z_Construct_UClass_ATPTestGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TPTestGameMode.h" },
		{ "ModuleRelativePath", "TPTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPTestGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATPTestGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TPTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPTestGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPTestGameMode_Statics::ClassParams = {
	&ATPTestGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPTestGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPTestGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATPTestGameMode()
{
	if (!Z_Registration_Info_UClass_ATPTestGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPTestGameMode.OuterSingleton, Z_Construct_UClass_ATPTestGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATPTestGameMode.OuterSingleton;
}
template<> TPTEST_API UClass* StaticClass<ATPTestGameMode>()
{
	return ATPTestGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATPTestGameMode);
ATPTestGameMode::~ATPTestGameMode() {}
// End Class ATPTestGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATPTestGameMode, ATPTestGameMode::StaticClass, TEXT("ATPTestGameMode"), &Z_Registration_Info_UClass_ATPTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPTestGameMode), 3341101161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestGameMode_h_2049017456(TEXT("/Script/TPTest"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_TPTest_Source_TPTest_TPTestGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
