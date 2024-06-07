// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/VRMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRMovementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UVRMovementComponent();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UVRMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin Class UVRMovementComponent
void UVRMovementComponent::StaticRegisterNativesUVRMovementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRMovementComponent);
UClass* Z_Construct_UClass_UVRMovementComponent_NoRegister()
{
	return UVRMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UVRMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "VRMovementComponent.h" },
		{ "ModuleRelativePath", "Public/VRMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgePowerMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Dodging" },
		{ "ModuleRelativePath", "Public/VRMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DodgePowerMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRMovementComponent_Statics::NewProp_DodgePowerMultiplier = { "DodgePowerMultiplier", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRMovementComponent, DodgePowerMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgePowerMultiplier_MetaData), NewProp_DodgePowerMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMovementComponent_Statics::NewProp_DodgePowerMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRMovementComponent_Statics::ClassParams = {
	&UVRMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVRMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRMovementComponent()
{
	if (!Z_Registration_Info_UClass_UVRMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRMovementComponent.OuterSingleton, Z_Construct_UClass_UVRMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRMovementComponent.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<UVRMovementComponent>()
{
	return UVRMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRMovementComponent);
UVRMovementComponent::~UVRMovementComponent() {}
// End Class UVRMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRMovementComponent, UVRMovementComponent::StaticClass, TEXT("UVRMovementComponent"), &Z_Registration_Info_UClass_UVRMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRMovementComponent), 927227743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRMovementComponent_h_4283545153(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
