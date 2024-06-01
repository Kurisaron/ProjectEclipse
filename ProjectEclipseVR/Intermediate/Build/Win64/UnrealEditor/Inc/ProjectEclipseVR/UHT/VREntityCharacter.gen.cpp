// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/VREntityCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREntityCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AEntityCharacter();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AVREntityCharacter();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AVREntityCharacter_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UGripComponent_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
PROJECTECLIPSEVR_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature();
PROJECTECLIPSEVR_API UScriptStruct* Z_Construct_UScriptStruct_FInputCounterTracker();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin Delegate FPlayerInputEvent
struct Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics
{
	struct _Script_ProjectEclipseVR_eventPlayerInputEvent_Parms
	{
		AVREntityCharacter* PlayerCharacter;
		bool Pressed;
		float PressedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static void NewProp_Pressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipseVR_eventPlayerInputEvent_Parms, PlayerCharacter), Z_Construct_UClass_AVREntityCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::NewProp_Pressed_SetBit(void* Obj)
{
	((_Script_ProjectEclipseVR_eventPlayerInputEvent_Parms*)Obj)->Pressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectEclipseVR_eventPlayerInputEvent_Parms), &Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::NewProp_PressedTime = { "PressedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipseVR_eventPlayerInputEvent_Parms, PressedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::NewProp_Pressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::NewProp_PressedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectEclipseVR, nullptr, "PlayerInputEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::_Script_ProjectEclipseVR_eventPlayerInputEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::_Script_ProjectEclipseVR_eventPlayerInputEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPlayerInputEvent_DelegateWrapper(const FMulticastScriptDelegate& PlayerInputEvent, AVREntityCharacter* PlayerCharacter, bool Pressed, float PressedTime)
{
	struct _Script_ProjectEclipseVR_eventPlayerInputEvent_Parms
	{
		AVREntityCharacter* PlayerCharacter;
		bool Pressed;
		float PressedTime;
	};
	_Script_ProjectEclipseVR_eventPlayerInputEvent_Parms Parms;
	Parms.PlayerCharacter=PlayerCharacter;
	Parms.Pressed=Pressed ? true : false;
	Parms.PressedTime=PressedTime;
	PlayerInputEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FPlayerInputEvent

// Begin ScriptStruct FInputCounterTracker
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputCounterTracker;
class UScriptStruct* FInputCounterTracker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputCounterTracker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputCounterTracker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputCounterTracker, (UObject*)Z_Construct_UPackage__Script_ProjectEclipseVR(), TEXT("InputCounterTracker"));
	}
	return Z_Registration_Info_UScriptStruct_InputCounterTracker.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UScriptStruct* StaticStruct<FInputCounterTracker>()
{
	return FInputCounterTracker::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputCounterTracker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Counters_MetaData[] = {
		{ "Category", "InputCounterTracker" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Counters_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Counters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Counters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputCounterTracker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputCounterTracker_Statics::NewProp_Counters_ValueProp = { "Counters", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputCounterTracker_Statics::NewProp_Counters_Key_KeyProp = { "Counters_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInputCounterTracker_Statics::NewProp_Counters = { "Counters", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputCounterTracker, Counters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Counters_MetaData), NewProp_Counters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputCounterTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCounterTracker_Statics::NewProp_Counters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCounterTracker_Statics::NewProp_Counters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCounterTracker_Statics::NewProp_Counters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCounterTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputCounterTracker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
	nullptr,
	&NewStructOps,
	"InputCounterTracker",
	Z_Construct_UScriptStruct_FInputCounterTracker_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCounterTracker_Statics::PropPointers),
	sizeof(FInputCounterTracker),
	alignof(FInputCounterTracker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCounterTracker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputCounterTracker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputCounterTracker()
{
	if (!Z_Registration_Info_UScriptStruct_InputCounterTracker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputCounterTracker.InnerSingleton, Z_Construct_UScriptStruct_FInputCounterTracker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputCounterTracker.InnerSingleton;
}
// End ScriptStruct FInputCounterTracker

// Begin Class AVREntityCharacter
void AVREntityCharacter::StaticRegisterNativesAVREntityCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVREntityCharacter);
UClass* Z_Construct_UClass_AVREntityCharacter_NoRegister()
{
	return AVREntityCharacter::StaticClass();
}
struct Z_Construct_UClass_AVREntityCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Character class that facilitates VR gameplay\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VREntityCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character class that facilitates VR gameplay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VROrigin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Origin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_Head_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_LeftGrip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_RightGrip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_LeftAim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_RightAim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawMotionControllerDebug_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHeldGrip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Held Grips" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHeldGrip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Held Grips" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Default Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inputs in this mapping context are the core functions for gameplay\n" },
#endif
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inputs in this mapping context are the core functions for gameplay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandsContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inputs in this mapping context correlate to moving the player's body parts\n" },
#endif
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inputs in this mapping context correlate to moving the player's body parts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputCounters_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////\n// INPUT ACTIONS //\n///////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n INPUT ACTIONS\n/" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Default Context" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Default Context" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Default Context" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftGrabAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Default Context" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightGrabAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Default Context" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftTriggerAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Default Context" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightTriggerAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Default Context" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftPointAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightPointAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftThumbUpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightThumbUpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftGraspAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightGraspAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftIndexCurlAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightIndexCurlAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpEvent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VREntityCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////\n// DELEGATES/EVENTS //\n//////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/VREntityCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n DELEGATES/EVENTS\n/" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VROrigin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController_Head;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController_LeftGrip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController_RightGrip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController_LeftAim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController_RightAim;
	static void NewProp_bDrawMotionControllerDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawMotionControllerDebug;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHeldGrip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHeldGrip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandsContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputCounters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftGrabAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightGrabAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftTriggerAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightTriggerAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftPointAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightPointAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftThumbUpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightThumbUpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftGraspAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightGraspAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftIndexCurlAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightIndexCurlAction;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_JumpEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREntityCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_VROrigin = { "VROrigin", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, VROrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VROrigin_MetaData), NewProp_VROrigin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_Head = { "MotionController_Head", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, MotionController_Head), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_Head_MetaData), NewProp_MotionController_Head_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_LeftGrip = { "MotionController_LeftGrip", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, MotionController_LeftGrip), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_LeftGrip_MetaData), NewProp_MotionController_LeftGrip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_RightGrip = { "MotionController_RightGrip", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, MotionController_RightGrip), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_RightGrip_MetaData), NewProp_MotionController_RightGrip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_LeftAim = { "MotionController_LeftAim", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, MotionController_LeftAim), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_LeftAim_MetaData), NewProp_MotionController_LeftAim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_RightAim = { "MotionController_RightAim", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, MotionController_RightAim), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_RightAim_MetaData), NewProp_MotionController_RightAim_MetaData) };
void Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_bDrawMotionControllerDebug_SetBit(void* Obj)
{
	((AVREntityCharacter*)Obj)->bDrawMotionControllerDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_bDrawMotionControllerDebug = { "bDrawMotionControllerDebug", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVREntityCharacter), &Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_bDrawMotionControllerDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawMotionControllerDebug_MetaData), NewProp_bDrawMotionControllerDebug_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_LeftHeldGrip = { "LeftHeldGrip", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, LeftHeldGrip), Z_Construct_UClass_UGripComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHeldGrip_MetaData), NewProp_LeftHeldGrip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_RightHeldGrip = { "RightHeldGrip", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, RightHeldGrip), Z_Construct_UClass_UGripComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHeldGrip_MetaData), NewProp_RightHeldGrip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_DefaultContext = { "DefaultContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, DefaultContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultContext_MetaData), NewProp_DefaultContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_HandsContext = { "HandsContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, HandsContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandsContext_MetaData), NewProp_HandsContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_InputCounters = { "InputCounters", nullptr, (EPropertyFlags)0x0040040000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, InputCounters), Z_Construct_UScriptStruct_FInputCounterTracker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputCounters_MetaData), NewProp_InputCounters_MetaData) }; // 3030304300
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_TurnAction = { "TurnAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, TurnAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnAction_MetaData), NewProp_TurnAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_LeftGrabAction = { "LeftGrabAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, LeftGrabAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftGrabAction_MetaData), NewProp_LeftGrabAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_RightGrabAction = { "RightGrabAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, RightGrabAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightGrabAction_MetaData), NewProp_RightGrabAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_LeftTriggerAction = { "LeftTriggerAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, LeftTriggerAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftTriggerAction_MetaData), NewProp_LeftTriggerAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_RightTriggerAction = { "RightTriggerAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, RightTriggerAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightTriggerAction_MetaData), NewProp_RightTriggerAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_LeftPointAction = { "LeftPointAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, LeftPointAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftPointAction_MetaData), NewProp_LeftPointAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_RightPointAction = { "RightPointAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, RightPointAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightPointAction_MetaData), NewProp_RightPointAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_LeftThumbUpAction = { "LeftThumbUpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, LeftThumbUpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftThumbUpAction_MetaData), NewProp_LeftThumbUpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_RightThumbUpAction = { "RightThumbUpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, RightThumbUpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightThumbUpAction_MetaData), NewProp_RightThumbUpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_LeftGraspAction = { "LeftGraspAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, LeftGraspAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftGraspAction_MetaData), NewProp_LeftGraspAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_RightGraspAction = { "RightGraspAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, RightGraspAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightGraspAction_MetaData), NewProp_RightGraspAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_LeftIndexCurlAction = { "LeftIndexCurlAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, LeftIndexCurlAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftIndexCurlAction_MetaData), NewProp_LeftIndexCurlAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_RightIndexCurlAction = { "RightIndexCurlAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, RightIndexCurlAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightIndexCurlAction_MetaData), NewProp_RightIndexCurlAction_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_JumpEvent = { "JumpEvent", nullptr, (EPropertyFlags)0x00401000100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityCharacter, JumpEvent), Z_Construct_UDelegateFunction_ProjectEclipseVR_PlayerInputEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpEvent_MetaData), NewProp_JumpEvent_MetaData) }; // 3250303426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVREntityCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_VROrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_Head,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_LeftGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_RightGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_LeftAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MotionController_RightAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_bDrawMotionControllerDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_LeftHeldGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_RightHeldGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_DefaultContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_HandsContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_InputCounters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_TurnAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_LeftGrabAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_RightGrabAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_LeftTriggerAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_RightTriggerAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_LeftPointAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_RightPointAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_LeftThumbUpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_RightThumbUpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_LeftGraspAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_RightGraspAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_LeftIndexCurlAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_RightIndexCurlAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityCharacter_Statics::NewProp_JumpEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVREntityCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVREntityCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEntityCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVREntityCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVREntityCharacter_Statics::ClassParams = {
	&AVREntityCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVREntityCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVREntityCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVREntityCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AVREntityCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVREntityCharacter()
{
	if (!Z_Registration_Info_UClass_AVREntityCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVREntityCharacter.OuterSingleton, Z_Construct_UClass_AVREntityCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVREntityCharacter.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<AVREntityCharacter>()
{
	return AVREntityCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVREntityCharacter);
AVREntityCharacter::~AVREntityCharacter() {}
// End Class AVREntityCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputCounterTracker::StaticStruct, Z_Construct_UScriptStruct_FInputCounterTracker_Statics::NewStructOps, TEXT("InputCounterTracker"), &Z_Registration_Info_UScriptStruct_InputCounterTracker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputCounterTracker), 3030304300U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVREntityCharacter, AVREntityCharacter::StaticClass, TEXT("AVREntityCharacter"), &Z_Registration_Info_UClass_AVREntityCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVREntityCharacter), 2450874291U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_3521143119(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityCharacter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
