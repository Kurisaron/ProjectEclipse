// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/Public/EquipmentComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEquipment_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEquipmentComponent();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References

// Begin Class UEquipmentComponent Function AlternateUse
struct Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics
{
	struct EquipmentComponent_eventAlternateUse_Parms
	{
		bool Pressed;
		float PressedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Actions" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Pressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics::NewProp_Pressed_SetBit(void* Obj)
{
	((EquipmentComponent_eventAlternateUse_Parms*)Obj)->Pressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EquipmentComponent_eventAlternateUse_Parms), &Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics::NewProp_PressedTime = { "PressedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventAlternateUse_Parms, PressedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics::NewProp_Pressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics::NewProp_PressedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "AlternateUse", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics::EquipmentComponent_eventAlternateUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics::EquipmentComponent_eventAlternateUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_AlternateUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_AlternateUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execAlternateUse)
{
	P_GET_UBOOL(Z_Param_Pressed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PressedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AlternateUse(Z_Param_Pressed,Z_Param_PressedTime);
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function AlternateUse

// Begin Class UEquipmentComponent Function CycleEquipment
struct Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics
{
	struct EquipmentComponent_eventCycleEquipment_Parms
	{
		bool Ascending;
		UEquipment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "CPP_Default_Ascending", "true" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Ascending_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Ascending;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics::NewProp_Ascending_SetBit(void* Obj)
{
	((EquipmentComponent_eventCycleEquipment_Parms*)Obj)->Ascending = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics::NewProp_Ascending = { "Ascending", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EquipmentComponent_eventCycleEquipment_Parms), &Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics::NewProp_Ascending_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventCycleEquipment_Parms, ReturnValue), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics::NewProp_Ascending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "CycleEquipment", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics::EquipmentComponent_eventCycleEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics::EquipmentComponent_eventCycleEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_CycleEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_CycleEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execCycleEquipment)
{
	P_GET_UBOOL(Z_Param_Ascending);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEquipment**)Z_Param__Result=P_THIS->CycleEquipment(Z_Param_Ascending);
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function CycleEquipment

// Begin Class UEquipmentComponent Function Equipped
struct Z_Construct_UFunction_UEquipmentComponent_Equipped_Statics
{
	struct EquipmentComponent_eventEquipped_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEquipmentComponent_Equipped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EquipmentComponent_eventEquipped_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipmentComponent_Equipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EquipmentComponent_eventEquipped_Parms), &Z_Construct_UFunction_UEquipmentComponent_Equipped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_Equipped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_Equipped_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_Equipped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_Equipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "Equipped", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_Equipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_Equipped_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_Equipped_Statics::EquipmentComponent_eventEquipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_Equipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_Equipped_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_Equipped_Statics::EquipmentComponent_eventEquipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_Equipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_Equipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execEquipped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Equipped();
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function Equipped

// Begin Class UEquipmentComponent Function PrimaryUse
struct Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics
{
	struct EquipmentComponent_eventPrimaryUse_Parms
	{
		bool Pressed;
		float PressedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Actions" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Pressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics::NewProp_Pressed_SetBit(void* Obj)
{
	((EquipmentComponent_eventPrimaryUse_Parms*)Obj)->Pressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EquipmentComponent_eventPrimaryUse_Parms), &Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics::NewProp_PressedTime = { "PressedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventPrimaryUse_Parms, PressedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics::NewProp_Pressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics::NewProp_PressedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "PrimaryUse", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics::EquipmentComponent_eventPrimaryUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics::EquipmentComponent_eventPrimaryUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_PrimaryUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_PrimaryUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execPrimaryUse)
{
	P_GET_UBOOL(Z_Param_Pressed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PressedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrimaryUse(Z_Param_Pressed,Z_Param_PressedTime);
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function PrimaryUse

// Begin Class UEquipmentComponent Function SecondaryUse
struct Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics
{
	struct EquipmentComponent_eventSecondaryUse_Parms
	{
		bool Pressed;
		float PressedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment Actions" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Pressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics::NewProp_Pressed_SetBit(void* Obj)
{
	((EquipmentComponent_eventSecondaryUse_Parms*)Obj)->Pressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EquipmentComponent_eventSecondaryUse_Parms), &Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics::NewProp_PressedTime = { "PressedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventSecondaryUse_Parms, PressedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics::NewProp_Pressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics::NewProp_PressedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "SecondaryUse", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics::EquipmentComponent_eventSecondaryUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics::EquipmentComponent_eventSecondaryUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_SecondaryUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_SecondaryUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execSecondaryUse)
{
	P_GET_UBOOL(Z_Param_Pressed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PressedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SecondaryUse(Z_Param_Pressed,Z_Param_PressedTime);
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function SecondaryUse

// Begin Class UEquipmentComponent Function SwitchEquipment
struct Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment_Statics
{
	struct EquipmentComponent_eventSwitchEquipment_Parms
	{
		int32 Index;
		UEquipment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventSwitchEquipment_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventSwitchEquipment_Parms, ReturnValue), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "SwitchEquipment", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment_Statics::EquipmentComponent_eventSwitchEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment_Statics::EquipmentComponent_eventSwitchEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execSwitchEquipment)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEquipment**)Z_Param__Result=P_THIS->SwitchEquipment(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function SwitchEquipment

// Begin Class UEquipmentComponent
void UEquipmentComponent::StaticRegisterNativesUEquipmentComponent()
{
	UClass* Class = UEquipmentComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AlternateUse", &UEquipmentComponent::execAlternateUse },
		{ "CycleEquipment", &UEquipmentComponent::execCycleEquipment },
		{ "Equipped", &UEquipmentComponent::execEquipped },
		{ "PrimaryUse", &UEquipmentComponent::execPrimaryUse },
		{ "SecondaryUse", &UEquipmentComponent::execSecondaryUse },
		{ "SwitchEquipment", &UEquipmentComponent::execSwitchEquipment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentComponent);
UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister()
{
	return UEquipmentComponent::StaticClass();
}
struct Z_Construct_UClass_UEquipmentComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Component used to store equipment, especially for wielding\n" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "EquipmentComponent.h" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component used to store equipment, especially for wielding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEquipment_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredEquipment_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEquipment_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultEquipment_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultEquipment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoredEquipment_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StoredEquipment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentEquipment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentComponent_AlternateUse, "AlternateUse" }, // 359633180
		{ &Z_Construct_UFunction_UEquipmentComponent_CycleEquipment, "CycleEquipment" }, // 2313748183
		{ &Z_Construct_UFunction_UEquipmentComponent_Equipped, "Equipped" }, // 2217031888
		{ &Z_Construct_UFunction_UEquipmentComponent_PrimaryUse, "PrimaryUse" }, // 228323315
		{ &Z_Construct_UFunction_UEquipmentComponent_SecondaryUse, "SecondaryUse" }, // 1455510848
		{ &Z_Construct_UFunction_UEquipmentComponent_SwitchEquipment, "SwitchEquipment" }, // 1644518811
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultEquipment_Inner = { "DefaultEquipment", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultEquipment = { "DefaultEquipment", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, DefaultEquipment), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultEquipment_MetaData), NewProp_DefaultEquipment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_StoredEquipment_Inner = { "StoredEquipment", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_StoredEquipment = { "StoredEquipment", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, StoredEquipment), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredEquipment_MetaData), NewProp_StoredEquipment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_CurrentEquipment = { "CurrentEquipment", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, CurrentEquipment), Z_Construct_UClass_UEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentEquipment_MetaData), NewProp_CurrentEquipment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquipmentMesh = { "EquipmentMesh", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, EquipmentMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentMesh_MetaData), NewProp_EquipmentMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultEquipment_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_DefaultEquipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_StoredEquipment_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_StoredEquipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_CurrentEquipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquipmentMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEquipmentComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentComponent_Statics::ClassParams = {
	&UEquipmentComponent::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEquipmentComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipmentComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipmentComponent()
{
	if (!Z_Registration_Info_UClass_UEquipmentComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentComponent.OuterSingleton, Z_Construct_UClass_UEquipmentComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipmentComponent.OuterSingleton;
}
template<> PROJECTECLIPSE_API UClass* StaticClass<UEquipmentComponent>()
{
	return UEquipmentComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentComponent);
UEquipmentComponent::~UEquipmentComponent() {}
// End Class UEquipmentComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentComponent, UEquipmentComponent::StaticClass, TEXT("UEquipmentComponent"), &Z_Registration_Info_UClass_UEquipmentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentComponent), 2832479781U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_1485351190(TEXT("/Script/ProjectEclipse"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_Public_EquipmentComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
