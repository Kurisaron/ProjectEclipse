// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipse/ProjectEclipseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectEclipseCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_AProjectEclipseCharacter();
	PROJECTECLIPSE_API UClass* Z_Construct_UClass_AProjectEclipseCharacter_NoRegister();
	PROJECTECLIPSE_API UFunction* Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ProjectEclipse();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics
	{
		struct _Script_ProjectEclipse_eventPrimaryAttackEvent_Parms
		{
			bool Pressed;
			float PressedTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pressed_MetaData[];
#endif
		static void NewProp_Pressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::NewProp_Pressed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::NewProp_Pressed_SetBit(void* Obj)
	{
		((_Script_ProjectEclipse_eventPrimaryAttackEvent_Parms*)Obj)->Pressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectEclipse_eventPrimaryAttackEvent_Parms), &Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::NewProp_Pressed_MetaData), Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::NewProp_Pressed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::NewProp_PressedTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::NewProp_PressedTime = { "PressedTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectEclipse_eventPrimaryAttackEvent_Parms, PressedTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::NewProp_PressedTime_MetaData), Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::NewProp_PressedTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::NewProp_Pressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::NewProp_PressedTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectEclipse, nullptr, "PrimaryAttackEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::_Script_ProjectEclipse_eventPrimaryAttackEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::_Script_ProjectEclipse_eventPrimaryAttackEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPrimaryAttackEvent_DelegateWrapper(const FMulticastScriptDelegate& PrimaryAttackEvent, bool Pressed, const float PressedTime)
{
	struct _Script_ProjectEclipse_eventPrimaryAttackEvent_Parms
	{
		bool Pressed;
		float PressedTime;
	};
	_Script_ProjectEclipse_eventPrimaryAttackEvent_Parms Parms;
	Parms.Pressed=Pressed ? true : false;
	Parms.PressedTime=PressedTime;
	PrimaryAttackEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	void AProjectEclipseCharacter::StaticRegisterNativesAProjectEclipseCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectEclipseCharacter);
	UClass* Z_Construct_UClass_AProjectEclipseCharacter_NoRegister()
	{
		return AProjectEclipseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AProjectEclipseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAttackEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PrimaryAttackEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAttackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryAttackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DodgeAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DodgeAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectEclipseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectEclipseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ProjectEclipseCharacter.h" },
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_PrimaryAttackEvent_MetaData[] = {
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_PrimaryAttackEvent = { "PrimaryAttackEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, PrimaryAttackEvent), Z_Construct_UDelegateFunction_ProjectEclipse_PrimaryAttackEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_PrimaryAttackEvent_MetaData), Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_PrimaryAttackEvent_MetaData) }; // 1522899356
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
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
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_ThirdPersonCamera_MetaData[] = {
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
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_ThirdPersonCamera = { "ThirdPersonCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, ThirdPersonCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_ThirdPersonCamera_MetaData), Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_ThirdPersonCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
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
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_JumpAction_MetaData[] = {
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
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_SprintAction_MetaData[] = {
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
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_SprintAction_MetaData), Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_SprintAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_PrimaryAttackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Main Attack Input Action */" },
#endif
		{ "ModuleRelativePath", "ProjectEclipseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main Attack Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_PrimaryAttackAction = { "PrimaryAttackAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, PrimaryAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_PrimaryAttackAction_MetaData), Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_PrimaryAttackAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DodgeAction_MetaData[] = {
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
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DodgeAction = { "DodgeAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, DodgeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DodgeAction_MetaData), Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DodgeAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CrouchAction_MetaData[] = {
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
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CrouchAction_MetaData), Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CrouchAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_MoveAction_MetaData[] = {
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
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_LookAction_MetaData[] = {
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
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectEclipseCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_LookAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectEclipseCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_PrimaryAttackEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_ThirdPersonCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_SprintAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_PrimaryAttackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_DodgeAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_CrouchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectEclipseCharacter_Statics::NewProp_LookAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectEclipseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectEclipseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectEclipseCharacter_Statics::ClassParams = {
		&AProjectEclipseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectEclipseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectEclipseCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectEclipseCharacter_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectEclipseCharacter, AProjectEclipseCharacter::StaticClass, TEXT("AProjectEclipseCharacter"), &Z_Registration_Info_UClass_AProjectEclipseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectEclipseCharacter), 2873405363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h_2742225561(TEXT("/Script/ProjectEclipse"),
		Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEclipse_Source_ProjectEclipse_ProjectEclipseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
