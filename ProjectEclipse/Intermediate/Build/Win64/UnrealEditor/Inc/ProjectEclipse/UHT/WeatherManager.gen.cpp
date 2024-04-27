// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/WeatherManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeatherManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_AWeatherManager();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_AWeatherManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References

// Begin Class AWeatherManager
void AWeatherManager::StaticRegisterNativesAWeatherManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeatherManager);
UClass* Z_Construct_UClass_AWeatherManager_NoRegister()
{
	return AWeatherManager::StaticClass();
}
struct Z_Construct_UClass_AWeatherManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WeatherManager.h" },
		{ "ModuleRelativePath", "Public/WeatherManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCycleDay_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Day Cycle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggle to set whether the manager should change the game's time of day */" },
#endif
		{ "ModuleRelativePath", "Public/WeatherManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle to set whether the manager should change the game's time of day" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DayDuration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Day Cycle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Duration of the day in seconds */" },
#endif
		{ "ModuleRelativePath", "Public/WeatherManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duration of the day in seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainSun_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lights" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Light used to represent the sun */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Light used to represent the sun" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainFog_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lights" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Main fog component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main fog component" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bCycleDay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCycleDay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DayDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainSun;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainFog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeatherManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AWeatherManager_Statics::NewProp_bCycleDay_SetBit(void* Obj)
{
	((AWeatherManager*)Obj)->bCycleDay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeatherManager_Statics::NewProp_bCycleDay = { "bCycleDay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeatherManager), &Z_Construct_UClass_AWeatherManager_Statics::NewProp_bCycleDay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCycleDay_MetaData), NewProp_bCycleDay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherManager_Statics::NewProp_DayDuration = { "DayDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeatherManager, DayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DayDuration_MetaData), NewProp_DayDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherManager_Statics::NewProp_MainSun = { "MainSun", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeatherManager, MainSun), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainSun_MetaData), NewProp_MainSun_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherManager_Statics::NewProp_MainFog = { "MainFog", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeatherManager, MainFog), Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainFog_MetaData), NewProp_MainFog_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeatherManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherManager_Statics::NewProp_bCycleDay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherManager_Statics::NewProp_DayDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherManager_Statics::NewProp_MainSun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherManager_Statics::NewProp_MainFog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeatherManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeatherManager_Statics::ClassParams = {
	&AWeatherManager::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWeatherManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeatherManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeatherManager()
{
	if (!Z_Registration_Info_UClass_AWeatherManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeatherManager.OuterSingleton, Z_Construct_UClass_AWeatherManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeatherManager.OuterSingleton;
}
template<> PROJECTECLIPSE_API UClass* StaticClass<AWeatherManager>()
{
	return AWeatherManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeatherManager);
AWeatherManager::~AWeatherManager() {}
// End Class AWeatherManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_WeatherManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeatherManager, AWeatherManager::StaticClass, TEXT("AWeatherManager"), &Z_Registration_Info_UClass_AWeatherManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeatherManager), 1180497025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_WeatherManager_h_584190447(TEXT("/Script/ProjectEclipse"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_WeatherManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_WeatherManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
