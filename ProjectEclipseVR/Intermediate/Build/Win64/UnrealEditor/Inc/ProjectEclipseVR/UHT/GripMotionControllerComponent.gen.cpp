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
PROJECTECLIPSEVR_API UEnum* Z_Construct_UEnum_ProjectEclipseVR_EHandSide();
PROJECTECLIPSEVR_API UScriptStruct* Z_Construct_UScriptStruct_FGrabStatus();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin Enum EHandSide
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandSide;
static UEnum* EHandSide_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHandSide.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHandSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectEclipseVR_EHandSide, (UObject*)Z_Construct_UPackage__Script_ProjectEclipseVR(), TEXT("EHandSide"));
	}
	return Z_Registration_Info_UEnum_EHandSide.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UEnum* StaticEnum<EHandSide>()
{
	return EHandSide_StaticEnum();
}
struct Z_Construct_UEnum_ProjectEclipseVR_EHandSide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HSE_Left.DisplayName", "Left" },
		{ "HSE_Left.Name", "EHandSide::HSE_Left" },
		{ "HSE_Right.DisplayName", "Right" },
		{ "HSE_Right.Name", "EHandSide::HSE_Right" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHandSide::HSE_Left", (int64)EHandSide::HSE_Left },
		{ "EHandSide::HSE_Right", (int64)EHandSide::HSE_Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectEclipseVR_EHandSide_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
	nullptr,
	"EHandSide",
	"EHandSide",
	Z_Construct_UEnum_ProjectEclipseVR_EHandSide_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectEclipseVR_EHandSide_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectEclipseVR_EHandSide_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectEclipseVR_EHandSide_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectEclipseVR_EHandSide()
{
	if (!Z_Registration_Info_UEnum_EHandSide.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandSide.InnerSingleton, Z_Construct_UEnum_ProjectEclipseVR_EHandSide_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHandSide.InnerSingleton;
}
// End Enum EHandSide

// Begin ScriptStruct FGrabStatus
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GrabStatus;
class UScriptStruct* FGrabStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GrabStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GrabStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrabStatus, (UObject*)Z_Construct_UPackage__Script_ProjectEclipseVR(), TEXT("GrabStatus"));
	}
	return Z_Registration_Info_UScriptStruct_GrabStatus.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UScriptStruct* StaticStruct<FGrabStatus>()
{
	return FGrabStatus::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGrabStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabTarget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GrabStatus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHeld_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GrabStatus" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabTarget;
	static void NewProp_bHeld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrabStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGrabStatus_Statics::NewProp_GrabTarget = { "GrabTarget", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrabStatus, GrabTarget), Z_Construct_UClass_UGripComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabTarget_MetaData), NewProp_GrabTarget_MetaData) };
void Z_Construct_UScriptStruct_FGrabStatus_Statics::NewProp_bHeld_SetBit(void* Obj)
{
	((FGrabStatus*)Obj)->bHeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrabStatus_Statics::NewProp_bHeld = { "bHeld", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGrabStatus), &Z_Construct_UScriptStruct_FGrabStatus_Statics::NewProp_bHeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHeld_MetaData), NewProp_bHeld_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGrabStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabStatus_Statics::NewProp_GrabTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrabStatus_Statics::NewProp_bHeld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrabStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
	nullptr,
	&NewStructOps,
	"GrabStatus",
	Z_Construct_UScriptStruct_FGrabStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabStatus_Statics::PropPointers),
	sizeof(FGrabStatus),
	alignof(FGrabStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrabStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGrabStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGrabStatus()
{
	if (!Z_Registration_Info_UScriptStruct_GrabStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GrabStatus.InnerSingleton, Z_Construct_UScriptStruct_FGrabStatus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GrabStatus.InnerSingleton;
}
// End ScriptStruct FGrabStatus

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabbingStatus_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grabbing" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripPressure_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grabbing" },
		{ "ModuleRelativePath", "Public/GripMotionControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrabbingStatus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GripPressure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGripMotionControllerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_GrabbingStatus = { "GrabbingStatus", nullptr, (EPropertyFlags)0x0040008000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripMotionControllerComponent, GrabbingStatus), Z_Construct_UScriptStruct_FGrabStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabbingStatus_MetaData), NewProp_GrabbingStatus_MetaData) }; // 2554205792
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_GripPressure = { "GripPressure", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGripMotionControllerComponent, GripPressure), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripPressure_MetaData), NewProp_GripPressure_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGripMotionControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_GrabbingStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGripMotionControllerComponent_Statics::NewProp_GripPressure,
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHandSide_StaticEnum, TEXT("EHandSide"), &Z_Registration_Info_UEnum_EHandSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3405160416U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGrabStatus::StaticStruct, Z_Construct_UScriptStruct_FGrabStatus_Statics::NewStructOps, TEXT("GrabStatus"), &Z_Registration_Info_UScriptStruct_GrabStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGrabStatus), 2554205792U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGripMotionControllerComponent, UGripMotionControllerComponent::StaticClass, TEXT("UGripMotionControllerComponent"), &Z_Registration_Info_UClass_UGripMotionControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGripMotionControllerComponent), 1248319702U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_340844764(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_GripMotionControllerComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
