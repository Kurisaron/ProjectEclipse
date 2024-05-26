// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/GripMotionControllerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGripMotionControllerComponent() {}

// Begin Cross Module References
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UGripComponent_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UGripMotionControllerComponent();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin Class UGripMotionControllerComponent
void UGripMotionControllerComponent::StaticRegisterNativesUGripMotionControllerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGripMotionControllerComponent);
UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister()
{
	return UGripMotionControllerComponent::StaticClass();
}
struct Z_Construct_UClass_UGripMotionControllerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "GripMotionControllerComponent.h" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeldGrip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grabbing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grabbing" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeldGrip;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGripMotionControllerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_HeldGrip = { "HeldGrip", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripMotionControllerComponent, HeldGrip), Z_Construct_UClass_UGripComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeldGrip_MetaData), NewProp_HeldGrip_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_GrabRadius = { "GrabRadius", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripMotionControllerComponent, GrabRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabRadius_MetaData), NewProp_GrabRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGripMotionControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_HeldGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_GrabRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGripMotionControllerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMotionControllerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::ClassParams = {
	&UGripMotionControllerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGripMotionControllerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGripMotionControllerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGripMotionControllerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGripMotionControllerComponent()
{
	if (!Z_Registration_Info_UClass_UGripMotionControllerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGripMotionControllerComponent.OuterSingleton, Z_Construct_UClass_UGripMotionControllerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGripMotionControllerComponent.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<UGripMotionControllerComponent>()
{
	return UGripMotionControllerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGripMotionControllerComponent);
UGripMotionControllerComponent::~UGripMotionControllerComponent() {}
// End Class UGripMotionControllerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGripMotionControllerComponent, UGripMotionControllerComponent::StaticClass, TEXT("UGripMotionControllerComponent"), &Z_Registration_Info_UClass_UGripMotionControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGripMotionControllerComponent), 223806772U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_2827393318(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
