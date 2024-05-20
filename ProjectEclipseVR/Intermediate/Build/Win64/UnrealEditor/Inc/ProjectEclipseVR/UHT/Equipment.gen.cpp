// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/Equipment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipment() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AEquipment();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AEquipment_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AItem();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin Class AEquipment Function GetInputs
struct Z_Construct_UFunction_AEquipment_GetInputs_Statics
{
	struct Equipment_eventGetInputs_Parms
	{
		UInputMappingContext* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item|Equipment|Input" },
		{ "ModuleRelativePath", "Public/Equipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEquipment_GetInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Equipment_eventGetInputs_Parms, ReturnValue), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEquipment_GetInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquipment_GetInputs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipment_GetInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquipment_GetInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEquipment, nullptr, "GetInputs", nullptr, nullptr, Z_Construct_UFunction_AEquipment_GetInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipment_GetInputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEquipment_GetInputs_Statics::Equipment_eventGetInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEquipment_GetInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEquipment_GetInputs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEquipment_GetInputs_Statics::Equipment_eventGetInputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEquipment_GetInputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEquipment_GetInputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEquipment::execGetInputs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInputMappingContext**)Z_Param__Result=P_THIS->GetInputs();
	P_NATIVE_END;
}
// End Class AEquipment Function GetInputs

// Begin Class AEquipment
void AEquipment::StaticRegisterNativesAEquipment()
{
	UClass* Class = AEquipment::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInputs", &AEquipment::execGetInputs },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEquipment);
UClass* Z_Construct_UClass_AEquipment_NoRegister()
{
	return AEquipment::StaticClass();
}
struct Z_Construct_UClass_AEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Equipment are a subtype of item that have some sort of direct use for the wielder. Equipment often has some additional input attached to it (but not always)\n */" },
#endif
		{ "IncludePath", "Equipment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Equipment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equipment are a subtype of item that have some sort of direct use for the wielder. Equipment often has some additional input attached to it (but not always)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentInputs_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Item|Equipment|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additional inputs that the equipment allows for the player */" },
#endif
		{ "ModuleRelativePath", "Public/Equipment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional inputs that the equipment allows for the player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentInputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEquipment_GetInputs, "GetInputs" }, // 3169148670
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEquipment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquipment_Statics::NewProp_EquipmentInputs = { "EquipmentInputs", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEquipment, EquipmentInputs), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentInputs_MetaData), NewProp_EquipmentInputs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipment_Statics::NewProp_EquipmentInputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEquipment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEquipment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEquipment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEquipment_Statics::ClassParams = {
	&AEquipment::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEquipment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEquipment_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEquipment_Statics::Class_MetaDataParams), Z_Construct_UClass_AEquipment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEquipment()
{
	if (!Z_Registration_Info_UClass_AEquipment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEquipment.OuterSingleton, Z_Construct_UClass_AEquipment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEquipment.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<AEquipment>()
{
	return AEquipment::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEquipment);
AEquipment::~AEquipment() {}
// End Class AEquipment

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Equipment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEquipment, AEquipment::StaticClass, TEXT("AEquipment"), &Z_Registration_Info_UClass_AEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEquipment), 4104996797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Equipment_h_1818695242(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Equipment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_Equipment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
