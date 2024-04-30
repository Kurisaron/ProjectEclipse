// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/EntityComponent.h"
#include "ProjectEclipse/Public/Faction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEntityAttribute_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEntityComponent();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEntityComponent_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFaction_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UTrait_NoRegister();
PROJECTECLIPSE_API UScriptStruct* Z_Construct_UScriptStruct_FFactionRank();
PROJECTECLIPSE_API UScriptStruct* Z_Construct_UScriptStruct_FFactionStatus();
UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References

// Begin ScriptStruct FFactionStatus
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FactionStatus;
class UScriptStruct* FFactionStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FactionStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FactionStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactionStatus, (UObject*)Z_Construct_UPackage__Script_ProjectEclipse(), TEXT("FactionStatus"));
	}
	return Z_Registration_Info_UScriptStruct_FactionStatus.OuterSingleton;
}
template<> PROJECTECLIPSE_API UScriptStruct* StaticStruct<FFactionStatus>()
{
	return FFactionStatus::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFactionStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRank_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "FactionStatus" },
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentReputation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "FactionStatus" },
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRank;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentReputation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactionStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFactionStatus_Statics::NewProp_CurrentRank = { "CurrentRank", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionStatus, CurrentRank), Z_Construct_UScriptStruct_FFactionRank, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRank_MetaData), NewProp_CurrentRank_MetaData) }; // 2884047688
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFactionStatus_Statics::NewProp_CurrentReputation = { "CurrentReputation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionStatus, CurrentReputation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentReputation_MetaData), NewProp_CurrentReputation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactionStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionStatus_Statics::NewProp_CurrentRank,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionStatus_Statics::NewProp_CurrentReputation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactionStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	nullptr,
	&NewStructOps,
	"FactionStatus",
	Z_Construct_UScriptStruct_FFactionStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionStatus_Statics::PropPointers),
	sizeof(FFactionStatus),
	alignof(FFactionStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFactionStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFactionStatus()
{
	if (!Z_Registration_Info_UScriptStruct_FactionStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FactionStatus.InnerSingleton, Z_Construct_UScriptStruct_FFactionStatus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FactionStatus.InnerSingleton;
}
// End ScriptStruct FFactionStatus

// Begin Class UEntityComponent Function GetAttributeValue
struct Z_Construct_UFunction_UEntityComponent_GetAttributeValue_Statics
{
	struct EntityComponent_eventGetAttributeValue_Parms
	{
		FString ID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats|Attributes" },
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEntityComponent_GetAttributeValue_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityComponent_eventGetAttributeValue_Parms, ID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEntityComponent_GetAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityComponent_eventGetAttributeValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityComponent_GetAttributeValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityComponent_GetAttributeValue_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityComponent_GetAttributeValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_GetAttributeValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityComponent_GetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityComponent, nullptr, "GetAttributeValue", nullptr, nullptr, Z_Construct_UFunction_UEntityComponent_GetAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_GetAttributeValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityComponent_GetAttributeValue_Statics::EntityComponent_eventGetAttributeValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_GetAttributeValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityComponent_GetAttributeValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityComponent_GetAttributeValue_Statics::EntityComponent_eventGetAttributeValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityComponent_GetAttributeValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityComponent_GetAttributeValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityComponent::execGetAttributeValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAttributeValue(Z_Param_ID);
	P_NATIVE_END;
}
// End Class UEntityComponent Function GetAttributeValue

// Begin Class UEntityComponent Function GetReputation
struct Z_Construct_UFunction_UEntityComponent_GetReputation_Statics
{
	struct EntityComponent_eventGetReputation_Parms
	{
		FString ID;
		FFactionStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats|Factions" },
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEntityComponent_GetReputation_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityComponent_eventGetReputation_Parms, ID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEntityComponent_GetReputation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityComponent_eventGetReputation_Parms, ReturnValue), Z_Construct_UScriptStruct_FFactionStatus, METADATA_PARAMS(0, nullptr) }; // 4101709380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityComponent_GetReputation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityComponent_GetReputation_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityComponent_GetReputation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_GetReputation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityComponent_GetReputation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityComponent, nullptr, "GetReputation", nullptr, nullptr, Z_Construct_UFunction_UEntityComponent_GetReputation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_GetReputation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityComponent_GetReputation_Statics::EntityComponent_eventGetReputation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_GetReputation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityComponent_GetReputation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityComponent_GetReputation_Statics::EntityComponent_eventGetReputation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityComponent_GetReputation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityComponent_GetReputation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityComponent::execGetReputation)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFactionStatus*)Z_Param__Result=P_THIS->GetReputation(Z_Param_ID);
	P_NATIVE_END;
}
// End Class UEntityComponent Function GetReputation

// Begin Class UEntityComponent Function GetTrait
struct Z_Construct_UFunction_UEntityComponent_GetTrait_Statics
{
	struct EntityComponent_eventGetTrait_Parms
	{
		FString ID;
		UTrait* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats|Traits" },
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEntityComponent_GetTrait_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityComponent_eventGetTrait_Parms, ID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEntityComponent_GetTrait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityComponent_eventGetTrait_Parms, ReturnValue), Z_Construct_UClass_UTrait_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityComponent_GetTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityComponent_GetTrait_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityComponent_GetTrait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_GetTrait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityComponent_GetTrait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityComponent, nullptr, "GetTrait", nullptr, nullptr, Z_Construct_UFunction_UEntityComponent_GetTrait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_GetTrait_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityComponent_GetTrait_Statics::EntityComponent_eventGetTrait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_GetTrait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityComponent_GetTrait_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityComponent_GetTrait_Statics::EntityComponent_eventGetTrait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityComponent_GetTrait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityComponent_GetTrait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityComponent::execGetTrait)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTrait**)Z_Param__Result=P_THIS->GetTrait(Z_Param_ID);
	P_NATIVE_END;
}
// End Class UEntityComponent Function GetTrait

// Begin Class UEntityComponent Function HasAttribute
struct Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics
{
	struct EntityComponent_eventHasAttribute_Parms
	{
		FString ID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats|Attributes" },
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityComponent_eventHasAttribute_Parms, ID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EntityComponent_eventHasAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EntityComponent_eventHasAttribute_Parms), &Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityComponent, nullptr, "HasAttribute", nullptr, nullptr, Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics::EntityComponent_eventHasAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics::EntityComponent_eventHasAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityComponent_HasAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityComponent_HasAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityComponent::execHasAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAttribute(Z_Param_ID);
	P_NATIVE_END;
}
// End Class UEntityComponent Function HasAttribute

// Begin Class UEntityComponent Function HasTrait
struct Z_Construct_UFunction_UEntityComponent_HasTrait_Statics
{
	struct EntityComponent_eventHasTrait_Parms
	{
		FString ID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats|Traits" },
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEntityComponent_HasTrait_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EntityComponent_eventHasTrait_Parms, ID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEntityComponent_HasTrait_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EntityComponent_eventHasTrait_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEntityComponent_HasTrait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EntityComponent_eventHasTrait_Parms), &Z_Construct_UFunction_UEntityComponent_HasTrait_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEntityComponent_HasTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityComponent_HasTrait_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEntityComponent_HasTrait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_HasTrait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEntityComponent_HasTrait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEntityComponent, nullptr, "HasTrait", nullptr, nullptr, Z_Construct_UFunction_UEntityComponent_HasTrait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_HasTrait_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEntityComponent_HasTrait_Statics::EntityComponent_eventHasTrait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEntityComponent_HasTrait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEntityComponent_HasTrait_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEntityComponent_HasTrait_Statics::EntityComponent_eventHasTrait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEntityComponent_HasTrait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEntityComponent_HasTrait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEntityComponent::execHasTrait)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTrait(Z_Param_ID);
	P_NATIVE_END;
}
// End Class UEntityComponent Function HasTrait

// Begin Class UEntityComponent
void UEntityComponent::StaticRegisterNativesUEntityComponent()
{
	UClass* Class = UEntityComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttributeValue", &UEntityComponent::execGetAttributeValue },
		{ "GetReputation", &UEntityComponent::execGetReputation },
		{ "GetTrait", &UEntityComponent::execGetTrait },
		{ "HasAttribute", &UEntityComponent::execHasAttribute },
		{ "HasTrait", &UEntityComponent::execHasTrait },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntityComponent);
UClass* Z_Construct_UClass_UEntityComponent_NoRegister()
{
	return UEntityComponent::StaticClass();
}
struct Z_Construct_UClass_UEntityComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Entity component is to be attached to actors (especially pawns and characters) that have a significant enough role within the game. These entities are things such as creatures, vehicles, and destructibles.\n */" },
#endif
		{ "IncludePath", "EntityComponent.h" },
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entity component is to be attached to actors (especially pawns and characters) that have a significant enough role within the game. These entities are things such as creatures, vehicles, and destructibles." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default attributes for character */" },
#endif
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default attributes for character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValues_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current values for various attributes */" },
#endif
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current values for various attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTraits_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats|Traits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default traits for character */" },
#endif
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default traits for character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTraits_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats|Traits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current traits held by character */" },
#endif
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current traits held by character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reputation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats|Factions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current relationships with factions */" },
#endif
		{ "ModuleRelativePath", "Public/EntityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current relationships with factions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAttributes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValues_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AttributeValues;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultTraits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultTraits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTraits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentTraits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reputation_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Reputation_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Reputation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEntityComponent_GetAttributeValue, "GetAttributeValue" }, // 3392368139
		{ &Z_Construct_UFunction_UEntityComponent_GetReputation, "GetReputation" }, // 1307096640
		{ &Z_Construct_UFunction_UEntityComponent_GetTrait, "GetTrait" }, // 2502671957
		{ &Z_Construct_UFunction_UEntityComponent_HasAttribute, "HasAttribute" }, // 165241204
		{ &Z_Construct_UFunction_UEntityComponent_HasTrait, "HasTrait" }, // 2722633415
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_DefaultAttributes_Inner = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UEntityAttribute_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_DefaultAttributes = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityComponent, DefaultAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttributes_MetaData), NewProp_DefaultAttributes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_AttributeValues_ValueProp = { "AttributeValues", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_AttributeValues_Key_KeyProp = { "AttributeValues_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEntityAttribute_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_AttributeValues = { "AttributeValues", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityComponent, AttributeValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValues_MetaData), NewProp_AttributeValues_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_DefaultTraits_Inner = { "DefaultTraits", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTrait_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_DefaultTraits = { "DefaultTraits", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityComponent, DefaultTraits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTraits_MetaData), NewProp_DefaultTraits_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_CurrentTraits_Inner = { "CurrentTraits", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTrait_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_CurrentTraits = { "CurrentTraits", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityComponent, CurrentTraits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTraits_MetaData), NewProp_CurrentTraits_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_Reputation_ValueProp = { "Reputation", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFactionStatus, METADATA_PARAMS(0, nullptr) }; // 4101709380
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_Reputation_Key_KeyProp = { "Reputation_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFaction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEntityComponent_Statics::NewProp_Reputation = { "Reputation", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityComponent, Reputation), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reputation_MetaData), NewProp_Reputation_MetaData) }; // 4101709380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_DefaultAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_DefaultAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_AttributeValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_AttributeValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_AttributeValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_DefaultTraits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_DefaultTraits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_CurrentTraits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_CurrentTraits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_Reputation_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_Reputation_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityComponent_Statics::NewProp_Reputation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEntityComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityComponent_Statics::ClassParams = {
	&UEntityComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEntityComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntityComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEntityComponent()
{
	if (!Z_Registration_Info_UClass_UEntityComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityComponent.OuterSingleton, Z_Construct_UClass_UEntityComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEntityComponent.OuterSingleton;
}
template<> PROJECTECLIPSE_API UClass* StaticClass<UEntityComponent>()
{
	return UEntityComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEntityComponent);
UEntityComponent::~UEntityComponent() {}
// End Class UEntityComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFactionStatus::StaticStruct, Z_Construct_UScriptStruct_FFactionStatus_Statics::NewStructOps, TEXT("FactionStatus"), &Z_Registration_Info_UScriptStruct_FactionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFactionStatus), 4101709380U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEntityComponent, UEntityComponent::StaticClass, TEXT("UEntityComponent"), &Z_Registration_Info_UClass_UEntityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityComponent), 2350053726U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityComponent_h_543830272(TEXT("/Script/ProjectEclipse"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EntityComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
