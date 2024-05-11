// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/EntityPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AEntityPawn();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AEntityPawn_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UEntityComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin Class AEntityPawn Function GetEntity
struct Z_Construct_UFunction_AEntityPawn_GetEntity_Statics
{
	struct EntityPawn_eventGetEntity_Parms
	{
		UEntityComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Entity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called to access the entity component on the pawn\n" },
#endif
		{ "ModuleRelativePath", "Public/EntityPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to access the entity component on the pawn" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEntityPawn_GetEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityPawn_eventGetEntity_Parms, ReturnValue), Z_Construct_UClass_UEntityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEntityPawn_GetEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEntityPawn_GetEntity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEntityPawn_GetEntity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEntityPawn_GetEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEntityPawn, nullptr, "GetEntity", nullptr, nullptr, Z_Construct_UFunction_AEntityPawn_GetEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEntityPawn_GetEntity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEntityPawn_GetEntity_Statics::EntityPawn_eventGetEntity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEntityPawn_GetEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEntityPawn_GetEntity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEntityPawn_GetEntity_Statics::EntityPawn_eventGetEntity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEntityPawn_GetEntity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEntityPawn_GetEntity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEntityPawn::execGetEntity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEntityComponent**)Z_Param__Result=P_THIS->GetEntity();
	P_NATIVE_END;
}
// End Class AEntityPawn Function GetEntity

// Begin Class AEntityPawn
void AEntityPawn::StaticRegisterNativesAEntityPawn()
{
	UClass* Class = AEntityPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEntity", &AEntityPawn::execGetEntity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEntityPawn);
UClass* Z_Construct_UClass_AEntityPawn_NoRegister()
{
	return AEntityPawn::StaticClass();
}
struct Z_Construct_UClass_AEntityPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EntityPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Entity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EntityPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntityComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEntityPawn_GetEntity, "GetEntity" }, // 4276165577
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEntityPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEntityPawn_Statics::NewProp_EntityComponent = { "EntityComponent", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEntityPawn, EntityComponent), Z_Construct_UClass_UEntityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityComponent_MetaData), NewProp_EntityComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEntityPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEntityPawn_Statics::NewProp_EntityComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEntityPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEntityPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEntityPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEntityPawn_Statics::ClassParams = {
	&AEntityPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEntityPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEntityPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEntityPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AEntityPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEntityPawn()
{
	if (!Z_Registration_Info_UClass_AEntityPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEntityPawn.OuterSingleton, Z_Construct_UClass_AEntityPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEntityPawn.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<AEntityPawn>()
{
	return AEntityPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEntityPawn);
AEntityPawn::~AEntityPawn() {}
// End Class AEntityPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEntityPawn, AEntityPawn::StaticClass, TEXT("AEntityPawn"), &Z_Registration_Info_UClass_AEntityPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEntityPawn), 3230508376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityPawn_h_1680936680(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
