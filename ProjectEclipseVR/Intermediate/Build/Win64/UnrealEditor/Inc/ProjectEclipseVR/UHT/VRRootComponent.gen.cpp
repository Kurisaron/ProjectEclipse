// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/VRRootComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRRootComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UVRRootComponent();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UVRRootComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin Class UVRRootComponent
void UVRRootComponent::StaticRegisterNativesUVRRootComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRRootComponent);
UClass* Z_Construct_UClass_UVRRootComponent_NoRegister()
{
	return UVRRootComponent::StaticClass();
}
struct Z_Construct_UClass_UVRRootComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Capsule component that maintains its location with the camera/HMD to facilitate room-scale movement\n */" },
#endif
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "VRRootComponent.h" },
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Capsule component that maintains its location with the camera/HMD to facilitate room-scale movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time in seconds between roomscale movement updates. Changes after play has begun will not affect further updates\n" },
#endif
		{ "ModuleRelativePath", "Public/VRRootComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time in seconds between roomscale movement updates. Changes after play has begun will not affect further updates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrackingRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRRootComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRRootComponent_Statics::NewProp_TrackingRate = { "TrackingRate", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRootComponent, TrackingRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingRate_MetaData), NewProp_TrackingRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRRootComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRootComponent_Statics::NewProp_TrackingRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRRootComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCapsuleComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRRootComponent_Statics::ClassParams = {
	&UVRRootComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVRRootComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRootComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRRootComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRRootComponent()
{
	if (!Z_Registration_Info_UClass_UVRRootComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRRootComponent.OuterSingleton, Z_Construct_UClass_UVRRootComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRRootComponent.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<UVRRootComponent>()
{
	return UVRRootComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRRootComponent);
UVRRootComponent::~UVRRootComponent() {}
// End Class UVRRootComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRRootComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRRootComponent, UVRRootComponent::StaticClass, TEXT("UVRRootComponent"), &Z_Registration_Info_UClass_UVRRootComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRRootComponent), 978434301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRRootComponent_h_1812670130(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRRootComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRRootComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
