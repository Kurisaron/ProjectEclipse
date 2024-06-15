// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/EntityCharacterMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityCharacterMeshComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UEntityCharacterMeshComponent();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UEntityCharacterMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin Class UEntityCharacterMeshComponent
void UEntityCharacterMeshComponent::StaticRegisterNativesUEntityCharacterMeshComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntityCharacterMeshComponent);
UClass* Z_Construct_UClass_UEntityCharacterMeshComponent_NoRegister()
{
	return UEntityCharacterMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UEntityCharacterMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "EntityCharacterMeshComponent.h" },
		{ "ModuleRelativePath", "Public/EntityCharacterMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRagdoll_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/EntityCharacterMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bCanRagdoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRagdoll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityCharacterMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UEntityCharacterMeshComponent_Statics::NewProp_bCanRagdoll_SetBit(void* Obj)
{
	((UEntityCharacterMeshComponent*)Obj)->bCanRagdoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEntityCharacterMeshComponent_Statics::NewProp_bCanRagdoll = { "bCanRagdoll", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEntityCharacterMeshComponent), &Z_Construct_UClass_UEntityCharacterMeshComponent_Statics::NewProp_bCanRagdoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRagdoll_MetaData), NewProp_bCanRagdoll_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntityCharacterMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityCharacterMeshComponent_Statics::NewProp_bCanRagdoll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityCharacterMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEntityCharacterMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityCharacterMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityCharacterMeshComponent_Statics::ClassParams = {
	&UEntityCharacterMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEntityCharacterMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEntityCharacterMeshComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityCharacterMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntityCharacterMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEntityCharacterMeshComponent()
{
	if (!Z_Registration_Info_UClass_UEntityCharacterMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityCharacterMeshComponent.OuterSingleton, Z_Construct_UClass_UEntityCharacterMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEntityCharacterMeshComponent.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<UEntityCharacterMeshComponent>()
{
	return UEntityCharacterMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEntityCharacterMeshComponent);
UEntityCharacterMeshComponent::~UEntityCharacterMeshComponent() {}
// End Class UEntityCharacterMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacterMeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEntityCharacterMeshComponent, UEntityCharacterMeshComponent::StaticClass, TEXT("UEntityCharacterMeshComponent"), &Z_Registration_Info_UClass_UEntityCharacterMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityCharacterMeshComponent), 828169271U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacterMeshComponent_h_1262727273(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacterMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_EntityCharacterMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
