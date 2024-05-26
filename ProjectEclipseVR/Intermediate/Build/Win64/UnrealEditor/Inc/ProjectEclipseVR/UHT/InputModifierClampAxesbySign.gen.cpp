// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/InputModifierClampAxesbySign.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputModifierClampAxesbySign() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UInputModifierClampAxesBySign();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UInputModifierClampAxesBySign_NoRegister();
PROJECTECLIPSEVR_API UScriptStruct* Z_Construct_UScriptStruct_FAxisClampRules();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin ScriptStruct FAxisClampRules
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AxisClampRules;
class UScriptStruct* FAxisClampRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AxisClampRules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AxisClampRules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAxisClampRules, (UObject*)Z_Construct_UPackage__Script_ProjectEclipseVR(), TEXT("AxisClampRules"));
	}
	return Z_Registration_Info_UScriptStruct_AxisClampRules.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UScriptStruct* StaticStruct<FAxisClampRules>()
{
	return FAxisClampRules::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAxisClampRules_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InputModifierClampAxesbySign.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampBySign_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AxisClampRules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should the given axis be clamped by a positive/negative sign\n" },
#endif
		{ "ModuleRelativePath", "Public/InputModifierClampAxesbySign.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the given axis be clamped by a positive/negative sign" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampSignIsPositive_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AxisClampRules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True = output is clamped to positive value(s), false = negative value(s) [Only affects output if clamped]\n" },
#endif
		{ "ModuleRelativePath", "Public/InputModifierClampAxesbySign.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True = output is clamped to positive value(s), false = negative value(s) [Only affects output if clamped]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveSign_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AxisClampRules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should the output value have it's sign removed, making it positive [Only affects output clamped to negative values]\n" },
#endif
		{ "ModuleRelativePath", "Public/InputModifierClampAxesbySign.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the output value have it's sign removed, making it positive [Only affects output clamped to negative values]" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ClampBySign_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ClampBySign;
	static void NewProp_ClampSignIsPositive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ClampSignIsPositive;
	static void NewProp_RemoveSign_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveSign;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAxisClampRules>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAxisClampRules_Statics::NewProp_ClampBySign_SetBit(void* Obj)
{
	((FAxisClampRules*)Obj)->ClampBySign = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAxisClampRules_Statics::NewProp_ClampBySign = { "ClampBySign", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAxisClampRules), &Z_Construct_UScriptStruct_FAxisClampRules_Statics::NewProp_ClampBySign_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampBySign_MetaData), NewProp_ClampBySign_MetaData) };
void Z_Construct_UScriptStruct_FAxisClampRules_Statics::NewProp_ClampSignIsPositive_SetBit(void* Obj)
{
	((FAxisClampRules*)Obj)->ClampSignIsPositive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAxisClampRules_Statics::NewProp_ClampSignIsPositive = { "ClampSignIsPositive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAxisClampRules), &Z_Construct_UScriptStruct_FAxisClampRules_Statics::NewProp_ClampSignIsPositive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampSignIsPositive_MetaData), NewProp_ClampSignIsPositive_MetaData) };
void Z_Construct_UScriptStruct_FAxisClampRules_Statics::NewProp_RemoveSign_SetBit(void* Obj)
{
	((FAxisClampRules*)Obj)->RemoveSign = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAxisClampRules_Statics::NewProp_RemoveSign = { "RemoveSign", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAxisClampRules), &Z_Construct_UScriptStruct_FAxisClampRules_Statics::NewProp_RemoveSign_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveSign_MetaData), NewProp_RemoveSign_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAxisClampRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisClampRules_Statics::NewProp_ClampBySign,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisClampRules_Statics::NewProp_ClampSignIsPositive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisClampRules_Statics::NewProp_RemoveSign,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisClampRules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAxisClampRules_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
	nullptr,
	&NewStructOps,
	"AxisClampRules",
	Z_Construct_UScriptStruct_FAxisClampRules_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisClampRules_Statics::PropPointers),
	sizeof(FAxisClampRules),
	alignof(FAxisClampRules),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisClampRules_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAxisClampRules_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAxisClampRules()
{
	if (!Z_Registration_Info_UScriptStruct_AxisClampRules.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AxisClampRules.InnerSingleton, Z_Construct_UScriptStruct_FAxisClampRules_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AxisClampRules.InnerSingleton;
}
// End ScriptStruct FAxisClampRules

// Begin Class UInputModifierClampAxesBySign
void UInputModifierClampAxesBySign::StaticRegisterNativesUInputModifierClampAxesBySign()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModifierClampAxesBySign);
UClass* Z_Construct_UClass_UInputModifierClampAxesBySign_NoRegister()
{
	return UInputModifierClampAxesBySign::StaticClass();
}
struct Z_Construct_UClass_UInputModifierClampAxesBySign_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InputModifierClampAxesbySign.h" },
		{ "ModuleRelativePath", "Public/InputModifierClampAxesbySign.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_AxisClampRules_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InputModifierClampAxesBySign" },
		{ "ModuleRelativePath", "Public/InputModifierClampAxesbySign.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_AxisClampRules_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InputModifierClampAxesBySign" },
		{ "ModuleRelativePath", "Public/InputModifierClampAxesbySign.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_AxisClampRules_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InputModifierClampAxesBySign" },
		{ "ModuleRelativePath", "Public/InputModifierClampAxesbySign.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_X_AxisClampRules;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Y_AxisClampRules;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Z_AxisClampRules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierClampAxesBySign>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputModifierClampAxesBySign_Statics::NewProp_X_AxisClampRules = { "X_AxisClampRules", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierClampAxesBySign, X_AxisClampRules), Z_Construct_UScriptStruct_FAxisClampRules, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_AxisClampRules_MetaData), NewProp_X_AxisClampRules_MetaData) }; // 1278954965
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputModifierClampAxesBySign_Statics::NewProp_Y_AxisClampRules = { "Y_AxisClampRules", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierClampAxesBySign, Y_AxisClampRules), Z_Construct_UScriptStruct_FAxisClampRules, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_AxisClampRules_MetaData), NewProp_Y_AxisClampRules_MetaData) }; // 1278954965
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputModifierClampAxesBySign_Statics::NewProp_Z_AxisClampRules = { "Z_AxisClampRules", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierClampAxesBySign, Z_AxisClampRules), Z_Construct_UScriptStruct_FAxisClampRules, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_AxisClampRules_MetaData), NewProp_Z_AxisClampRules_MetaData) }; // 1278954965
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierClampAxesBySign_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierClampAxesBySign_Statics::NewProp_X_AxisClampRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierClampAxesBySign_Statics::NewProp_Y_AxisClampRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierClampAxesBySign_Statics::NewProp_Z_AxisClampRules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierClampAxesBySign_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputModifierClampAxesBySign_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierClampAxesBySign_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierClampAxesBySign_Statics::ClassParams = {
	&UInputModifierClampAxesBySign::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputModifierClampAxesBySign_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierClampAxesBySign_Statics::PropPointers),
	0,
	0x401030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierClampAxesBySign_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifierClampAxesBySign_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifierClampAxesBySign()
{
	if (!Z_Registration_Info_UClass_UInputModifierClampAxesBySign.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierClampAxesBySign.OuterSingleton, Z_Construct_UClass_UInputModifierClampAxesBySign_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifierClampAxesBySign.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<UInputModifierClampAxesBySign>()
{
	return UInputModifierClampAxesBySign::StaticClass();
}
UInputModifierClampAxesBySign::UInputModifierClampAxesBySign(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierClampAxesBySign);
UInputModifierClampAxesBySign::~UInputModifierClampAxesBySign() {}
// End Class UInputModifierClampAxesBySign

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_InputModifierClampAxesbySign_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAxisClampRules::StaticStruct, Z_Construct_UScriptStruct_FAxisClampRules_Statics::NewStructOps, TEXT("AxisClampRules"), &Z_Registration_Info_UScriptStruct_AxisClampRules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAxisClampRules), 1278954965U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputModifierClampAxesBySign, UInputModifierClampAxesBySign::StaticClass, TEXT("UInputModifierClampAxesBySign"), &Z_Registration_Info_UClass_UInputModifierClampAxesBySign, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierClampAxesBySign), 1253731516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_InputModifierClampAxesbySign_h_1860010142(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_InputModifierClampAxesbySign_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_InputModifierClampAxesbySign_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_InputModifierClampAxesbySign_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_InputModifierClampAxesbySign_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
