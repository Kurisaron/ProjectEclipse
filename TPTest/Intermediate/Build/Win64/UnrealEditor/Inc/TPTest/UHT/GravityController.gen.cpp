// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPTest/GravityController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGravityController() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
TPTEST_API UClass* Z_Construct_UClass_AGravityController();
TPTEST_API UClass* Z_Construct_UClass_AGravityController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPTest();
// End Cross Module References

// Begin Class AGravityController Function GetGravityRelativeRotation
struct Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics
{
	struct GravityController_eventGetGravityRelativeRotation_Parms
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
		{ "ModuleRelativePath", "GravityController.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GravityController_eventGetGravityRelativeRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics::NewProp_GravityDirection = { "GravityDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GravityController_eventGetGravityRelativeRotation_Parms, GravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GravityController_eventGetGravityRelativeRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics::NewProp_GravityDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGravityController, nullptr, "GetGravityRelativeRotation", nullptr, nullptr, Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics::GravityController_eventGetGravityRelativeRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics::GravityController_eventGetGravityRelativeRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGravityController::execGetGravityRelativeRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_STRUCT(FVector,Z_Param_GravityDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=AGravityController::GetGravityRelativeRotation(Z_Param_Rotation,Z_Param_GravityDirection);
	P_NATIVE_END;
}
// End Class AGravityController Function GetGravityRelativeRotation

// Begin Class AGravityController Function GetGravityWorldRotation
struct Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics
{
	struct GravityController_eventGetGravityWorldRotation_Parms
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
		{ "ModuleRelativePath", "GravityController.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GravityController_eventGetGravityWorldRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics::NewProp_GravityDirection = { "GravityDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GravityController_eventGetGravityWorldRotation_Parms, GravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GravityController_eventGetGravityWorldRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics::NewProp_GravityDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGravityController, nullptr, "GetGravityWorldRotation", nullptr, nullptr, Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics::GravityController_eventGetGravityWorldRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics::GravityController_eventGetGravityWorldRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGravityController_GetGravityWorldRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGravityController_GetGravityWorldRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGravityController::execGetGravityWorldRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_STRUCT(FVector,Z_Param_GravityDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=AGravityController::GetGravityWorldRotation(Z_Param_Rotation,Z_Param_GravityDirection);
	P_NATIVE_END;
}
// End Class AGravityController Function GetGravityWorldRotation

// Begin Class AGravityController
void AGravityController::StaticRegisterNativesAGravityController()
{
	UClass* Class = AGravityController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGravityRelativeRotation", &AGravityController::execGetGravityRelativeRotation },
		{ "GetGravityWorldRotation", &AGravityController::execGetGravityWorldRotation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGravityController);
UClass* Z_Construct_UClass_AGravityController_NoRegister()
{
	return AGravityController::StaticClass();
}
struct Z_Construct_UClass_AGravityController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GravityController.h" },
		{ "ModuleRelativePath", "GravityController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGravityController_GetGravityRelativeRotation, "GetGravityRelativeRotation" }, // 167020262
		{ &Z_Construct_UFunction_AGravityController_GetGravityWorldRotation, "GetGravityWorldRotation" }, // 328842511
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGravityController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGravityController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_TPTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGravityController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGravityController_Statics::ClassParams = {
	&AGravityController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGravityController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGravityController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGravityController()
{
	if (!Z_Registration_Info_UClass_AGravityController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGravityController.OuterSingleton, Z_Construct_UClass_AGravityController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGravityController.OuterSingleton;
}
template<> TPTEST_API UClass* StaticClass<AGravityController>()
{
	return AGravityController::StaticClass();
}
AGravityController::AGravityController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGravityController);
AGravityController::~AGravityController() {}
// End Class AGravityController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_TPTest_Source_TPTest_GravityController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGravityController, AGravityController::StaticClass, TEXT("AGravityController"), &Z_Registration_Info_UClass_AGravityController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGravityController), 4179158181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_TPTest_Source_TPTest_GravityController_h_4146085613(TEXT("/Script/TPTest"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_TPTest_Source_TPTest_GravityController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_TPTest_Source_TPTest_GravityController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
