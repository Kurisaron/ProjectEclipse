// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/GripComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGripComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UGripComponent();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UGripComponent_NoRegister();
PROJECTECLIPSEVR_API UEnum* Z_Construct_UEnum_ProjectEclipseVR_EGripType();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin Enum EGripType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGripType;
static UEnum* EGripType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGripType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGripType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectEclipseVR_EGripType, (UObject*)Z_Construct_UPackage__Script_ProjectEclipseVR(), TEXT("EGripType"));
	}
	return Z_Registration_Info_UEnum_EGripType.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UEnum* StaticEnum<EGripType>()
{
	return EGripType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectEclipseVR_EGripType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GTE_Custom.DisplayName", "Custom" },
		{ "GTE_Custom.Name", "EGripType::GTE_Custom" },
		{ "GTE_Free.DisplayName", "Free" },
		{ "GTE_Free.Name", "EGripType::GTE_Free" },
		{ "GTE_None.DisplayName", "None" },
		{ "GTE_None.Name", "EGripType::GTE_None" },
		{ "GTE_Snap.DisplayName", "Snap" },
		{ "GTE_Snap.Name", "EGripType::GTE_Snap" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGripType::GTE_None", (int64)EGripType::GTE_None },
		{ "EGripType::GTE_Free", (int64)EGripType::GTE_Free },
		{ "EGripType::GTE_Snap", (int64)EGripType::GTE_Snap },
		{ "EGripType::GTE_Custom", (int64)EGripType::GTE_Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectEclipseVR_EGripType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
	nullptr,
	"EGripType",
	"EGripType",
	Z_Construct_UEnum_ProjectEclipseVR_EGripType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectEclipseVR_EGripType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectEclipseVR_EGripType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectEclipseVR_EGripType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectEclipseVR_EGripType()
{
	if (!Z_Registration_Info_UEnum_EGripType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGripType.InnerSingleton, Z_Construct_UEnum_ProjectEclipseVR_EGripType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGripType.InnerSingleton;
}
// End Enum EGripType

// Begin Class UGripComponent
void UGripComponent::StaticRegisterNativesUGripComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGripComponent);
UClass* Z_Construct_UClass_UGripComponent_NoRegister()
{
	return UGripComponent::StaticClass();
}
struct Z_Construct_UClass_UGripComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GripComponent.h" },
		{ "ModuleRelativePath", "Public/GripComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGripComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGripComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGripComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGripComponent_Statics::ClassParams = {
	&UGripComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGripComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGripComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGripComponent()
{
	if (!Z_Registration_Info_UClass_UGripComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGripComponent.OuterSingleton, Z_Construct_UClass_UGripComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGripComponent.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<UGripComponent>()
{
	return UGripComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGripComponent);
UGripComponent::~UGripComponent() {}
// End Class UGripComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGripType_StaticEnum, TEXT("EGripType"), &Z_Registration_Info_UEnum_EGripType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2996865120U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGripComponent, UGripComponent::StaticClass, TEXT("UGripComponent"), &Z_Registration_Info_UClass_UGripComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGripComponent), 2238086496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_3814952068(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
