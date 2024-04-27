// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/ProjectEclipseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectEclipseCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_AProjectEclipseCharacter();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_AProjectEclipseCharacter_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UEntityAttribute_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UFaction_NoRegister();
PROJECTECLIPSE_API UClass* Z_Construct_UClass_UTrait_NoRegister();
PROJECTECLIPSE_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature();
PROJECTECLIPSE_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References

// Begin Delegate FPrimaryUseEvent
struct Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics
{
	struct _Script_ProjectEclipse_eventPrimaryUseEvent_Parms
	{
		bool Pressed;
		float PressedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pressed_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Pressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics::NewProp_Pressed_SetBit(void* Obj)
{
	((_Script_ProjectEclipse_eventPrimaryUseEvent_Parms*)Obj)->Pressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectEclipse_eventPrimaryUseEvent_Parms), &Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pressed_MetaData), NewProp_Pressed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics::NewProp_PressedTime = { "PressedTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipse_eventPrimaryUseEvent_Parms, PressedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedTime_MetaData), NewProp_PressedTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics::NewProp_Pressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics::NewProp_PressedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectEclipse, nullptr, "PrimaryUseEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics::_Script_ProjectEclipse_eventPrimaryUseEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics::_Script_ProjectEclipse_eventPrimaryUseEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPrimaryUseEvent_DelegateWrapper(const FMulticastScriptDelegate& PrimaryUseEvent, bool Pressed, const float PressedTime)
{
	struct _Script_ProjectEclipse_eventPrimaryUseEvent_Parms
	{
		bool Pressed;
		float PressedTime;
	};
	_Script_ProjectEclipse_eventPrimaryUseEvent_Parms Parms;
	Parms.Pressed=Pressed ? true : false;
	Parms.PressedTime=PressedTime;
	PrimaryUseEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FPrimaryUseEvent

// Begin Delegate FPlayerCharacterInputEvent
struct Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics
{
	struct _Script_ProjectEclipse_eventPlayerCharacterInputEvent_Parms
	{
		bool Pressed;
		float PressedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pressed_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Pressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics::NewProp_Pressed_SetBit(void* Obj)
{
	((_Script_ProjectEclipse_eventPlayerCharacterInputEvent_Parms*)Obj)->Pressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectEclipse_eventPlayerCharacterInputEvent_Parms), &Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pressed_MetaData), NewProp_Pressed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics::NewProp_PressedTime = { "PressedTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipse_eventPlayerCharacterInputEvent_Parms, PressedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedTime_MetaData), NewProp_PressedTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics::NewProp_Pressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics::NewProp_PressedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectEclipse, nullptr, "PlayerCharacterInputEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics::_Script_ProjectEclipse_eventPlayerCharacterInputEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics::_Script_ProjectEclipse_eventPlayerCharacterInputEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPlayerCharacterInputEvent_DelegateWrapper(const FMulticastScriptDelegate& PlayerCharacterInputEvent, bool Pressed, const float PressedTime)
{
	struct _Script_ProjectEclipse_eventPlayerCharacterInputEvent_Parms
	{
		bool Pressed;
		float PressedTime;
	};
	_Script_ProjectEclipse_eventPlayerCharacterInputEvent_Parms Parms;
	Parms.Pressed=Pressed ? true : false;
	Parms.PressedTime=PressedTime;
	PlayerCharacterInputEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FPlayerCharacterInputEvent

// Begin Class AProjectEclipseCharacter Function GetAttribute
struct Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute_Statics
{
	struct ProjectEclipseCharacter_eventGetAttribute_Parms
	{
		FString Key;
		UEntityAttribute* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectEclipseCharacter_eventGetAttribute_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectEclipseCharacter_eventGetAttribute_Parms, ReturnValue), Z_Construct_UClass_UEntityAttribute_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectEclipseCharacter, nullptr, "GetAttribute", nullptr, nullptr, Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute_Statics::ProjectEclipseCharacter_eventGetAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute_Statics::ProjectEclipseCharacter_eventGetAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectEclipseCharacter::execGetAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEntityAttribute**)Z_Param__Result=P_THIS->GetAttribute(Z_Param_Key);
	P_NATIVE_END;
}
// End Class AProjectEclipseCharacter Function GetAttribute

// Begin Class AProjectEclipseCharacter Function GetTrait
struct Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait_Statics
{
	struct ProjectEclipseCharacter_eventGetTrait_Parms
	{
		FString Key;
		UTrait* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectEclipseCharacter_eventGetTrait_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectEclipseCharacter_eventGetTrait_Parms, ReturnValue), Z_Construct_UClass_UTrait_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectEclipseCharacter, nullptr, "GetTrait", nullptr, nullptr, Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait_Statics::ProjectEclipseCharacter_eventGetTrait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait_Statics::ProjectEclipseCharacter_eventGetTrait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectEclipseCharacter::execGetTrait)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTrait**)Z_Param__Result=P_THIS->GetTrait(Z_Param_Key);
	P_NATIVE_END;
}
// End Class AProjectEclipseCharacter Function GetTrait

// Begin Class AProjectEclipseCharacter Function HasAttribute
struct Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics
{
	struct ProjectEclipseCharacter_eventHasAttribute_Parms
	{
		FString Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectEclipseCharacter_eventHasAttribute_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ProjectEclipseCharacter_eventHasAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectEclipseCharacter_eventHasAttribute_Parms), &Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectEclipseCharacter, nullptr, "HasAttribute", nullptr, nullptr, Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics::ProjectEclipseCharacter_eventHasAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics::ProjectEclipseCharacter_eventHasAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectEclipseCharacter::execHasAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAttribute(Z_Param_Key);
	P_NATIVE_END;
}
// End Class AProjectEclipseCharacter Function HasAttribute

// Begin Class AProjectEclipseCharacter Function HasTrait
struct Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics
{
	struct ProjectEclipseCharacter_eventHasTrait_Parms
	{
		FString Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectEclipseCharacter_eventHasTrait_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ProjectEclipseCharacter_eventHasTrait_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectEclipseCharacter_eventHasTrait_Parms), &Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectEclipseCharacter, nullptr, "HasTrait", nullptr, nullptr, Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics::ProjectEclipseCharacter_eventHasTrait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics::ProjectEclipseCharacter_eventHasTrait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectEclipseCharacter::execHasTrait)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTrait(Z_Param_Key);
	P_NATIVE_END;
}
// End Class AProjectEclipseCharacter Function HasTrait

// Begin Class AProjectEclipseCharacter
void AProjectEclipseCharacter::StaticRegisterNativesAProjectEclipseCharacter()
{
	UClass* Class = AProjectEclipseCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttribute", &AProjectEclipseCharacter::execGetAttribute },
		{ "GetTrait", &AProjectEclipseCharacter::execGetTrait },
		{ "HasAttribute", &AProjectEclipseCharacter::execHasAttribute },
		{ "HasTrait", &AProjectEclipseCharacter::execHasTrait },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectEclipseCharacter);
UClass* Z_Construct_UClass_AProjectEclipseCharacter_NoRegister()
{
	return AProjectEclipseCharacter::StaticClass();
}
struct Z_Construct_UClass_AProjectEclipseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ProjectEclipseCharacter.h" },
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default attributes for character */" },
#endif
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
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
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
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
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
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
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
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
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current relationships with factions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryUseEvent_MetaData[] = {
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryUseEvent_MetaData[] = {
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlternateUseEvent_MetaData[] = {
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleCamEvent_MetaData[] = {
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Third person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Third person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sprint Input Action */" },
#endif
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprint Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryUseAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Primary Use Input Action */" },
#endif
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Primary Use Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryUseAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Secondary Use Input Action */" },
#endif
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Secondary Use Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlternateUseAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Alternate Use Input Action */" },
#endif
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Alternate Use Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dodge Input Action */" },
#endif
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dodge Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Crouch Input Action */" },
#endif
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crouch Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleCamAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Reputation_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Reputation_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Reputation;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PrimaryUseEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SecondaryUseEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AlternateUseEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ToggleCamEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryUseAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryUseAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlternateUseAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DodgeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleCamAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectEclipseCharacter_GetAttribute, "GetAttribute" }, // 4203868625
		{ &Z_Construct_UFunction_AProjectEclipseCharacter_GetTrait, "GetTrait" }, // 1811716180
		{ &Z_Construct_UFunction_AProjectEclipseCharacter_HasAttribute, "HasAttribute" }, // 2814063171
		{ &Z_Construct_UFunction_AProjectEclipseCharacter_HasTrait, "HasTrait" }, // 3325745880
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectEclipseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DefaultAttributes_Inner = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UEntityAttribute_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DefaultAttributes = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, DefaultAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttributes_MetaData), NewProp_DefaultAttributes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_AttributeValues_ValueProp = { "AttributeValues", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_AttributeValues_Key_KeyProp = { "AttributeValues_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEntityAttribute_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_AttributeValues = { "AttributeValues", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, AttributeValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValues_MetaData), NewProp_AttributeValues_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DefaultTraits_Inner = { "DefaultTraits", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTrait_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DefaultTraits = { "DefaultTraits", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, DefaultTraits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTraits_MetaData), NewProp_DefaultTraits_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CurrentTraits_Inner = { "CurrentTraits", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTrait_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CurrentTraits = { "CurrentTraits", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, CurrentTraits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTraits_MetaData), NewProp_CurrentTraits_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_Reputation_ValueProp = { "Reputation", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_Reputation_Key_KeyProp = { "Reputation_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFaction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_Reputation = { "Reputation", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, Reputation), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reputation_MetaData), NewProp_Reputation_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_PrimaryUseEvent = { "PrimaryUseEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, PrimaryUseEvent), Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryUseEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryUseEvent_MetaData), NewProp_PrimaryUseEvent_MetaData) }; // 2782647662
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_SecondaryUseEvent = { "SecondaryUseEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, SecondaryUseEvent), Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryUseEvent_MetaData), NewProp_SecondaryUseEvent_MetaData) }; // 1043698236
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_AlternateUseEvent = { "AlternateUseEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, AlternateUseEvent), Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlternateUseEvent_MetaData), NewProp_AlternateUseEvent_MetaData) }; // 1043698236
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_ToggleCamEvent = { "ToggleCamEvent", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, ToggleCamEvent), Z_Construct_UDelegateFunction_ProjectEclipse_PlayerCharacterInputEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleCamEvent_MetaData), NewProp_ToggleCamEvent_MetaData) }; // 1043698236
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_ThirdPersonCamera = { "ThirdPersonCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, ThirdPersonCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonCamera_MetaData), NewProp_ThirdPersonCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAction_MetaData), NewProp_SprintAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_PrimaryUseAction = { "PrimaryUseAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, PrimaryUseAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryUseAction_MetaData), NewProp_PrimaryUseAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_SecondaryUseAction = { "SecondaryUseAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, SecondaryUseAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryUseAction_MetaData), NewProp_SecondaryUseAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_AlternateUseAction = { "AlternateUseAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, AlternateUseAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlternateUseAction_MetaData), NewProp_AlternateUseAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DodgeAction = { "DodgeAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, DodgeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeAction_MetaData), NewProp_DodgeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchAction_MetaData), NewProp_CrouchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_ToggleCamAction = { "ToggleCamAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, ToggleCamAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleCamAction_MetaData), NewProp_ToggleCamAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectEclipseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DefaultAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DefaultAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_AttributeValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_AttributeValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_AttributeValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DefaultTraits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DefaultTraits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CurrentTraits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CurrentTraits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_Reputation_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_Reputation_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_Reputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_PrimaryUseEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_SecondaryUseEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_AlternateUseEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_ToggleCamEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_ThirdPersonCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_SprintAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_PrimaryUseAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_SecondaryUseAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_AlternateUseAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DodgeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CrouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_ToggleCamAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectEclipseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::ClassParams = {
	&AProjectEclipseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProjectEclipseCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectEclipseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectEclipseCharacter()
{
	if (!Z_Registration_Info_UClass_AProjectEclipseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectEclipseCharacter.OuterSingleton, Z_Construct_UClass_AProjectEclipseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectEclipseCharacter.OuterSingleton;
}
template<> PROJECTECLIPSE_API UClass* StaticClass<AProjectEclipseCharacter>()
{
	return AProjectEclipseCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectEclipseCharacter);
AProjectEclipseCharacter::~AProjectEclipseCharacter() {}
// End Class AProjectEclipseCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectEclipseCharacter, AProjectEclipseCharacter::StaticClass, TEXT("AProjectEclipseCharacter"), &Z_Registration_Info_UClass_AProjectEclipseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectEclipseCharacter), 4051032162U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h_565395414(TEXT("/Script/ProjectEclipse"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
