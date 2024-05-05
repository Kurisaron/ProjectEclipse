// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/EntityComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UEntityComponent();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UEntityComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin Class UEntityComponent
void UEntityComponent::StaticRegisterNativesUEntityComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntityComponent);
UClass* Z_Construct_UClass_UEntityComponent_NoRegister()
{
	return UEntityComponent::StaticClass();
}
struct Z_Construct_UClass_UEntityComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EntityComponent.h" },
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEntityComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityComponent_Statics::ClassParams = {
	&UEntityComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntityComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEntityComponent()
{
	if (!Z_Registration_Info_UClass_UEntityComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityComponent.OuterSingleton, Z_Construct_UClass_UEntityComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEntityComponent.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<UEntityComponent>()
{
	return UEntityComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEntityComponent);
UEntityComponent::~UEntityComponent() {}
// End Class UEntityComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEntityComponent, UEntityComponent::StaticClass, TEXT("UEntityComponent"), &Z_Registration_Info_UClass_UEntityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityComponent), 244905900U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityComponent_h_3454544303(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
