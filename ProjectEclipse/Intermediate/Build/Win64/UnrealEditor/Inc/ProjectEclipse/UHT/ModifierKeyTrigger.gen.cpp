// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/ModifierKeyTrigger.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifierKeyTrigger() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UModifierKeyTrigger();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UModifierKeyTrigger_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References

// Begin Class UModifierKeyTrigger
void UModifierKeyTrigger::StaticRegisterNativesUModifierKeyTrigger()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModifierKeyTrigger);
UClass* Z_Construct_UClass_UModifierKeyTrigger_NoRegister()
{
	return UModifierKeyTrigger::StaticClass();
}
struct Z_Construct_UClass_UModifierKeyTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ModifierKeyTrigger.h" },
		{ "ModuleRelativePath", "Public/ModifierKeyTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierKey_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "ModuleRelativePath", "Public/ModifierKeyTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifierKeyTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModifierKeyTrigger_Statics::NewProp_ModifierKey = { "ModifierKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModifierKeyTrigger, ModifierKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierKey_MetaData), NewProp_ModifierKey_MetaData) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModifierKeyTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModifierKeyTrigger_Statics::NewProp_ModifierKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModifierKeyTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModifierKeyTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputTrigger,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModifierKeyTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifierKeyTrigger_Statics::ClassParams = {
	&UModifierKeyTrigger::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModifierKeyTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModifierKeyTrigger_Statics::PropPointers),
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModifierKeyTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_UModifierKeyTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModifierKeyTrigger()
{
	if (!Z_Registration_Info_UClass_UModifierKeyTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifierKeyTrigger.OuterSingleton, Z_Construct_UClass_UModifierKeyTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModifierKeyTrigger.OuterSingleton;
}
template<> PROJECTECLIPSE_API UClass* StaticClass<UModifierKeyTrigger>()
{
	return UModifierKeyTrigger::StaticClass();
}
UModifierKeyTrigger::UModifierKeyTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModifierKeyTrigger);
UModifierKeyTrigger::~UModifierKeyTrigger() {}
// End Class UModifierKeyTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_ModifierKeyTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModifierKeyTrigger, UModifierKeyTrigger::StaticClass, TEXT("UModifierKeyTrigger"), &Z_Registration_Info_UClass_UModifierKeyTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifierKeyTrigger), 427595991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_ModifierKeyTrigger_h_1724296301(TEXT("/Script/ProjectEclipse"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_ModifierKeyTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_ModifierKeyTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
