// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/EntityCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AEntityCharacter();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AEntityCharacter_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UEntityComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin Class AEntityCharacter Function GetEntity
struct Z_Construct_UFunction_AEntityCharacter_GetEntity_Statics
{
	struct EntityCharacter_eventGetEntity_Parms
	{
		UEntityComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Entity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called to access the entity component on the character\n" },
#endif
		{ "ModuleRelativePath", "Public/EntityCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to access the entity component on the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEntityCharacter_GetEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityCharacter_eventGetEntity_Parms, ReturnValue), Z_Construct_UClass_UEntityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEntityCharacter_GetEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEntityCharacter_GetEntity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEntityCharacter_GetEntity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEntityCharacter_GetEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEntityCharacter, nullptr, "GetEntity", nullptr, nullptr, Z_Construct_UFunction_AEntityCharacter_GetEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEntityCharacter_GetEntity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEntityCharacter_GetEntity_Statics::EntityCharacter_eventGetEntity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEntityCharacter_GetEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEntityCharacter_GetEntity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEntityCharacter_GetEntity_Statics::EntityCharacter_eventGetEntity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEntityCharacter_GetEntity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEntityCharacter_GetEntity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEntityCharacter::execGetEntity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEntityComponent**)Z_Param__Result=P_THIS->GetEntity();
	P_NATIVE_END;
}
// End Class AEntityCharacter Function GetEntity

// Begin Class AEntityCharacter
void AEntityCharacter::StaticRegisterNativesAEntityCharacter()
{
	UClass* Class = AEntityCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEntity", &AEntityCharacter::execGetEntity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEntityCharacter);
UClass* Z_Construct_UClass_AEntityCharacter_NoRegister()
{
	return AEntityCharacter::StaticClass();
}
struct Z_Construct_UClass_AEntityCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EntityCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EntityCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Entity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EntityCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntityComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEntityCharacter_GetEntity, "GetEntity" }, // 2085694762
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEntityCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEntityCharacter_Statics::NewProp_EntityComponent = { "EntityComponent", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEntityCharacter, EntityComponent), Z_Construct_UClass_UEntityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityComponent_MetaData), NewProp_EntityComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEntityCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEntityCharacter_Statics::NewProp_EntityComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEntityCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEntityCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEntityCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEntityCharacter_Statics::ClassParams = {
	&AEntityCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEntityCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEntityCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEntityCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEntityCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEntityCharacter()
{
	if (!Z_Registration_Info_UClass_AEntityCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEntityCharacter.OuterSingleton, Z_Construct_UClass_AEntityCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEntityCharacter.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<AEntityCharacter>()
{
	return AEntityCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEntityCharacter);
AEntityCharacter::~AEntityCharacter() {}
// End Class AEntityCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEntityCharacter, AEntityCharacter::StaticClass, TEXT("AEntityCharacter"), &Z_Registration_Info_UClass_AEntityCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEntityCharacter), 1139943887U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacter_h_2005432688(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
