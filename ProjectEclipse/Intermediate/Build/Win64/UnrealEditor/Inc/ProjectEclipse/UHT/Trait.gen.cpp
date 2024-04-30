// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/Trait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrait() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEntityAttribute_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UTrait();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UTrait_NoRegister();
PROJECTECLIPSE_API UEnum* Z_Construct_UEnum_ProjectEclipse_EAttributeModifierType();
PROJECTECLIPSE_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeModifier();
UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References

// Begin Enum EAttributeModifierType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttributeModifierType;
static UEnum* EAttributeModifierType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttributeModifierType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttributeModifierType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectEclipse_EAttributeModifierType, (UObject*)Z_Construct_UPackage__Script_ProjectEclipse(), TEXT("EAttributeModifierType"));
	}
	return Z_Registration_Info_UEnum_EAttributeModifierType.OuterSingleton;
}
template<> PROJECTECLIPSE_API UEnum* StaticEnum<EAttributeModifierType>()
{
	return EAttributeModifierType_StaticEnum();
}
struct Z_Construct_UEnum_ProjectEclipse_EAttributeModifierType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AMTE_Additive.DisplayName", "Additive" },
		{ "AMTE_Additive.Name", "EAttributeModifierType::AMTE_Additive" },
		{ "AMTE_Multiplicative.DisplayName", "Multiplicative" },
		{ "AMTE_Multiplicative.Name", "EAttributeModifierType::AMTE_Multiplicative" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Trait.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttributeModifierType::AMTE_Additive", (int64)EAttributeModifierType::AMTE_Additive },
		{ "EAttributeModifierType::AMTE_Multiplicative", (int64)EAttributeModifierType::AMTE_Multiplicative },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectEclipse_EAttributeModifierType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectEclipse,
	nullptr,
	"EAttributeModifierType",
	"EAttributeModifierType",
	Z_Construct_UEnum_ProjectEclipse_EAttributeModifierType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectEclipse_EAttributeModifierType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectEclipse_EAttributeModifierType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectEclipse_EAttributeModifierType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectEclipse_EAttributeModifierType()
{
	if (!Z_Registration_Info_UEnum_EAttributeModifierType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttributeModifierType.InnerSingleton, Z_Construct_UEnum_ProjectEclipse_EAttributeModifierType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttributeModifierType.InnerSingleton;
}
// End Enum EAttributeModifierType

// Begin ScriptStruct FAttributeModifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeModifier;
class UScriptStruct* FAttributeModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeModifier, (UObject*)Z_Construct_UPackage__Script_ProjectEclipse(), TEXT("AttributeModifier"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeModifier.OuterSingleton;
}
template<> PROJECTECLIPSE_API UScriptStruct* StaticStruct<FAttributeModifier>()
{
	return FAttributeModifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAttributeModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Trait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AttributeModifier" },
		{ "ModuleRelativePath", "Public/Trait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AttributeModifier" },
		{ "ModuleRelativePath", "Public/Trait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AttributeModifier" },
		{ "ModuleRelativePath", "Public/Trait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeModifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeModifier, Attribute), Z_Construct_UClass_UClass, Z_Construct_UClass_UEntityAttribute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeModifier, Type), Z_Construct_UEnum_ProjectEclipse_EAttributeModifierType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2792561456
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeModifier, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeModifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	nullptr,
	&NewStructOps,
	"AttributeModifier",
	Z_Construct_UScriptStruct_FAttributeModifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::PropPointers),
	sizeof(FAttributeModifier),
	alignof(FAttributeModifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttributeModifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttributeModifier()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeModifier.InnerSingleton, Z_Construct_UScriptStruct_FAttributeModifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AttributeModifier.InnerSingleton;
}
// End ScriptStruct FAttributeModifier

// Begin Class UTrait Function ApplyTrait
struct Trait_eventApplyTrait_Parms
{
	AActor* Recipient;
};
static FName NAME_UTrait_ApplyTrait = FName(TEXT("ApplyTrait"));
void UTrait::ApplyTrait(AActor* Recipient)
{
	Trait_eventApplyTrait_Parms Parms;
	Parms.Recipient=Recipient;
	ProcessEvent(FindFunctionChecked(NAME_UTrait_ApplyTrait),&Parms);
}
struct Z_Construct_UFunction_UTrait_ApplyTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traits" },
		{ "ModuleRelativePath", "Public/Trait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Recipient;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrait_ApplyTrait_Statics::NewProp_Recipient = { "Recipient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Trait_eventApplyTrait_Parms, Recipient), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrait_ApplyTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrait_ApplyTrait_Statics::NewProp_Recipient,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_ApplyTrait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrait_ApplyTrait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrait, nullptr, "ApplyTrait", nullptr, nullptr, Z_Construct_UFunction_UTrait_ApplyTrait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_ApplyTrait_Statics::PropPointers), sizeof(Trait_eventApplyTrait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_ApplyTrait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrait_ApplyTrait_Statics::Function_MetaDataParams) };
static_assert(sizeof(Trait_eventApplyTrait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrait_ApplyTrait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrait_ApplyTrait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrait::execApplyTrait)
{
	P_GET_OBJECT(AActor,Z_Param_Recipient);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyTrait_Implementation(Z_Param_Recipient);
	P_NATIVE_END;
}
// End Class UTrait Function ApplyTrait

// Begin Class UTrait Function GetDisplayName
struct Z_Construct_UFunction_UTrait_GetDisplayName_Statics
{
	struct Trait_eventGetDisplayName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Trait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTrait_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Trait_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrait_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrait_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_GetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrait_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrait, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UTrait_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrait_GetDisplayName_Statics::Trait_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrait_GetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrait_GetDisplayName_Statics::Trait_eventGetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrait_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrait_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrait::execGetDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDisplayName();
	P_NATIVE_END;
}
// End Class UTrait Function GetDisplayName

// Begin Class UTrait Function GetID
struct Z_Construct_UFunction_UTrait_GetID_Statics
{
	struct Trait_eventGetID_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Trait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTrait_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Trait_eventGetID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrait_GetID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrait_GetID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_GetID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrait_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrait, nullptr, "GetID", nullptr, nullptr, Z_Construct_UFunction_UTrait_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_GetID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrait_GetID_Statics::Trait_eventGetID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_GetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrait_GetID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrait_GetID_Statics::Trait_eventGetID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrait_GetID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrait_GetID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrait::execGetID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetID();
	P_NATIVE_END;
}
// End Class UTrait Function GetID

// Begin Class UTrait Function IsID
struct Z_Construct_UFunction_UTrait_IsID_Statics
{
	struct Trait_eventIsID_Parms
	{
		FString Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Trait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTrait_IsID_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Trait_eventIsID_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTrait_IsID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Trait_eventIsID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTrait_IsID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Trait_eventIsID_Parms), &Z_Construct_UFunction_UTrait_IsID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrait_IsID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrait_IsID_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrait_IsID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_IsID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrait_IsID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrait, nullptr, "IsID", nullptr, nullptr, Z_Construct_UFunction_UTrait_IsID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_IsID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrait_IsID_Statics::Trait_eventIsID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_IsID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrait_IsID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTrait_IsID_Statics::Trait_eventIsID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrait_IsID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrait_IsID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrait::execIsID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsID(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UTrait Function IsID

// Begin Class UTrait Function RemoveTrait
struct Trait_eventRemoveTrait_Parms
{
	AActor* Recipient;
};
static FName NAME_UTrait_RemoveTrait = FName(TEXT("RemoveTrait"));
void UTrait::RemoveTrait(AActor* Recipient)
{
	Trait_eventRemoveTrait_Parms Parms;
	Parms.Recipient=Recipient;
	ProcessEvent(FindFunctionChecked(NAME_UTrait_RemoveTrait),&Parms);
}
struct Z_Construct_UFunction_UTrait_RemoveTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Traits" },
		{ "ModuleRelativePath", "Public/Trait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Recipient;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrait_RemoveTrait_Statics::NewProp_Recipient = { "Recipient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Trait_eventRemoveTrait_Parms, Recipient), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrait_RemoveTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrait_RemoveTrait_Statics::NewProp_Recipient,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_RemoveTrait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrait_RemoveTrait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrait, nullptr, "RemoveTrait", nullptr, nullptr, Z_Construct_UFunction_UTrait_RemoveTrait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_RemoveTrait_Statics::PropPointers), sizeof(Trait_eventRemoveTrait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrait_RemoveTrait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrait_RemoveTrait_Statics::Function_MetaDataParams) };
static_assert(sizeof(Trait_eventRemoveTrait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrait_RemoveTrait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrait_RemoveTrait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTrait::execRemoveTrait)
{
	P_GET_OBJECT(AActor,Z_Param_Recipient);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTrait_Implementation(Z_Param_Recipient);
	P_NATIVE_END;
}
// End Class UTrait Function RemoveTrait

// Begin Class UTrait
void UTrait::StaticRegisterNativesUTrait()
{
	UClass* Class = UTrait::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyTrait", &UTrait::execApplyTrait },
		{ "GetDisplayName", &UTrait::execGetDisplayName },
		{ "GetID", &UTrait::execGetID },
		{ "IsID", &UTrait::execIsID },
		{ "RemoveTrait", &UTrait::execRemoveTrait },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTrait);
UClass* Z_Construct_UClass_UTrait_NoRegister()
{
	return UTrait::StaticClass();
}
struct Z_Construct_UClass_UTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Traits are features that are held by an entity within the game. Traits extend the entities' core functionality, either modifying existing abilities or supplying new ones\n */" },
#endif
		{ "IncludePath", "Trait.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Trait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Traits are features that are held by an entity within the game. Traits extend the entities' core functionality, either modifying existing abilities or supplying new ones" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundIcon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Icon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Main icon used to specify which trait in UI */" },
#endif
		{ "ModuleRelativePath", "Public/Trait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main icon used to specify which trait in UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Icon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Color used for trait's icon background */" },
#endif
		{ "ModuleRelativePath", "Public/Trait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color used for trait's icon background" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Names" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name that will be used for game UI */" },
#endif
		{ "ModuleRelativePath", "Public/Trait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name that will be used for game UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Names" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name used to help check for matches */" },
#endif
		{ "ModuleRelativePath", "Public/Trait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name used to help check for matches" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeModifiers_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat Modifiers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Modifiers meant to add/subtract flat values from the total */" },
#endif
		{ "ModuleRelativePath", "Public/Trait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifiers meant to add/subtract flat values from the total" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForegroundIcon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeModifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeModifiers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrait_ApplyTrait, "ApplyTrait" }, // 1034616548
		{ &Z_Construct_UFunction_UTrait_GetDisplayName, "GetDisplayName" }, // 4163669402
		{ &Z_Construct_UFunction_UTrait_GetID, "GetID" }, // 1937159939
		{ &Z_Construct_UFunction_UTrait_IsID, "IsID" }, // 685780191
		{ &Z_Construct_UFunction_UTrait_RemoveTrait, "RemoveTrait" }, // 2069740036
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrait_Statics::NewProp_ForegroundIcon = { "ForegroundIcon", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrait, ForegroundIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForegroundIcon_MetaData), NewProp_ForegroundIcon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTrait_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrait, BackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTrait_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrait, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTrait_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrait, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTrait_Statics::NewProp_AttributeModifiers_Inner = { "AttributeModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttributeModifier, METADATA_PARAMS(0, nullptr) }; // 1373709932
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTrait_Statics::NewProp_AttributeModifiers = { "AttributeModifiers", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrait, AttributeModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeModifiers_MetaData), NewProp_AttributeModifiers_MetaData) }; // 1373709932
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrait_Statics::NewProp_ForegroundIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrait_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrait_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrait_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrait_Statics::NewProp_AttributeModifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrait_Statics::NewProp_AttributeModifiers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrait_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrait_Statics::ClassParams = {
	&UTrait::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTrait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTrait_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UTrait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTrait()
{
	if (!Z_Registration_Info_UClass_UTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrait.OuterSingleton, Z_Construct_UClass_UTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTrait.OuterSingleton;
}
template<> PROJECTECLIPSE_API UClass* StaticClass<UTrait>()
{
	return UTrait::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTrait);
UTrait::~UTrait() {}
// End Class UTrait

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAttributeModifierType_StaticEnum, TEXT("EAttributeModifierType"), &Z_Registration_Info_UEnum_EAttributeModifierType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2792561456U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAttributeModifier::StaticStruct, Z_Construct_UScriptStruct_FAttributeModifier_Statics::NewStructOps, TEXT("AttributeModifier"), &Z_Registration_Info_UScriptStruct_AttributeModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeModifier), 1373709932U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTrait, UTrait::StaticClass, TEXT("UTrait"), &Z_Registration_Info_UClass_UTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrait), 63482514U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_3631215391(TEXT("/Script/ProjectEclipse"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_Trait_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
