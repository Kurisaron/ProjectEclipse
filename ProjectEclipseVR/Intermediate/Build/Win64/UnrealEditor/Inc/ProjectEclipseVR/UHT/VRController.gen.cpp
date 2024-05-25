// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/VRController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRController() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AVRController();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AVRController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin Class AVRController Function GetGravityRelativeRotation
struct Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics
{
	struct VRController_eventGetGravityRelativeRotation_Parms
	{
		FRotator Rotation;
		FVector GravityDirection;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Converts a rotation from world space to gravity relative space.\n" },
#endif
		{ "ModuleRelativePath", "Public/VRController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a rotation from world space to gravity relative space." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRController_eventGetGravityRelativeRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics::NewProp_GravityDirection = { "GravityDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRController_eventGetGravityRelativeRotation_Parms, GravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRController_eventGetGravityRelativeRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics::NewProp_GravityDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRController, nullptr, "GetGravityRelativeRotation", nullptr, nullptr, Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics::VRController_eventGetGravityRelativeRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics::VRController_eventGetGravityRelativeRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRController_GetGravityRelativeRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRController_GetGravityRelativeRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRController::execGetGravityRelativeRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_STRUCT(FVector,Z_Param_GravityDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=AVRController::GetGravityRelativeRotation(Z_Param_Rotation,Z_Param_GravityDirection);
	P_NATIVE_END;
}
// End Class AVRController Function GetGravityRelativeRotation

// Begin Class AVRController Function GetGravityWorldRotation
struct Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics
{
	struct VRController_eventGetGravityWorldRotation_Parms
	{
		FRotator Rotation;
		FVector GravityDirection;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Converts a rotation from gravity relative space to world space.\n" },
#endif
		{ "ModuleRelativePath", "Public/VRController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a rotation from gravity relative space to world space." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRController_eventGetGravityWorldRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics::NewProp_GravityDirection = { "GravityDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRController_eventGetGravityWorldRotation_Parms, GravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRController_eventGetGravityWorldRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics::NewProp_GravityDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRController, nullptr, "GetGravityWorldRotation", nullptr, nullptr, Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics::VRController_eventGetGravityWorldRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics::VRController_eventGetGravityWorldRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRController_GetGravityWorldRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRController_GetGravityWorldRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRController::execGetGravityWorldRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_STRUCT(FVector,Z_Param_GravityDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=AVRController::GetGravityWorldRotation(Z_Param_Rotation,Z_Param_GravityDirection);
	P_NATIVE_END;
}
// End Class AVRController Function GetGravityWorldRotation

// Begin Class AVRController
void AVRController::StaticRegisterNativesAVRController()
{
	UClass* Class = AVRController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGravityRelativeRotation", &AVRController::execGetGravityRelativeRotation },
		{ "GetGravityWorldRotation", &AVRController::execGetGravityWorldRotation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRController);
UClass* Z_Construct_UClass_AVRController_NoRegister()
{
	return AVRController::StaticClass();
}
struct Z_Construct_UClass_AVRController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A Player Controller class which adds VR-related functionality.\n * Also adds input-handling functionality for CharacterMovementController/VRMovementController custom gravity mechanics.\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "VRController.h" },
		{ "ModuleRelativePath", "Public/VRController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Player Controller class which adds VR-related functionality.\nAlso adds input-handling functionality for CharacterMovementController/VRMovementController custom gravity mechanics." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRController_GetGravityRelativeRotation, "GetGravityRelativeRotation" }, // 929970931
		{ &Z_Construct_UFunction_AVRController_GetGravityWorldRotation, "GetGravityWorldRotation" }, // 334354140
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVRController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRController_Statics::ClassParams = {
	&AVRController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRController_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVRController()
{
	if (!Z_Registration_Info_UClass_AVRController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRController.OuterSingleton, Z_Construct_UClass_AVRController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVRController.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<AVRController>()
{
	return AVRController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVRController);
AVRController::~AVRController() {}
// End Class AVRController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVRController, AVRController::StaticClass, TEXT("AVRController"), &Z_Registration_Info_UClass_AVRController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRController), 828265894U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRController_h_424888333(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VRController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
