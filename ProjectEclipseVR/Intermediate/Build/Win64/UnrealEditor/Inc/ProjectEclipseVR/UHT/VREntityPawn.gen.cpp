// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectEclipseVR/Public/VREntityPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREntityPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AEntityPawn();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AVREntityPawn();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_AVREntityPawn_NoRegister();
PROJECTECLIPSEVR_API UClass* Z_Construct_UClass_UGripComponent_NoRegister();
PROJECTECLIPSEVR_API UScriptStruct* Z_Construct_UScriptStruct_FVRHandPoseData();
UPackage* Z_Construct_UPackage__Script_ProjectEclipseVR();
// End Cross Module References

// Begin ScriptStruct FVRHandPoseData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRHandPoseData;
class UScriptStruct* FVRHandPoseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRHandPoseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRHandPoseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRHandPoseData, (UObject*)Z_Construct_UPackage__Script_ProjectEclipseVR(), TEXT("VRHandPoseData"));
	}
	return Z_Registration_Info_UScriptStruct_VRHandPoseData.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UScriptStruct* StaticStruct<FVRHandPoseData>()
{
	return FVRHandPoseData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRHandPoseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRHandPoseData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRHandPoseData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
	nullptr,
	&NewStructOps,
	"VRHandPoseData",
	nullptr,
	0,
	sizeof(FVRHandPoseData),
	alignof(FVRHandPoseData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRHandPoseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRHandPoseData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRHandPoseData()
{
	if (!Z_Registration_Info_UScriptStruct_VRHandPoseData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRHandPoseData.InnerSingleton, Z_Construct_UScriptStruct_FVRHandPoseData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRHandPoseData.InnerSingleton;
}
// End ScriptStruct FVRHandPoseData

// Begin Class AVREntityPawn Function GetLeftHandPose
struct Z_Construct_UFunction_AVREntityPawn_GetLeftHandPose_Statics
{
	struct VREntityPawn_eventGetLeftHandPose_Parms
	{
		FVRHandPoseData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR|Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVREntityPawn_GetLeftHandPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREntityPawn_eventGetLeftHandPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FVRHandPoseData, METADATA_PARAMS(0, nullptr) }; // 2415873522
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREntityPawn_GetLeftHandPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREntityPawn_GetLeftHandPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVREntityPawn_GetLeftHandPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREntityPawn_GetLeftHandPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREntityPawn, nullptr, "GetLeftHandPose", nullptr, nullptr, Z_Construct_UFunction_AVREntityPawn_GetLeftHandPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREntityPawn_GetLeftHandPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVREntityPawn_GetLeftHandPose_Statics::VREntityPawn_eventGetLeftHandPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVREntityPawn_GetLeftHandPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVREntityPawn_GetLeftHandPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVREntityPawn_GetLeftHandPose_Statics::VREntityPawn_eventGetLeftHandPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVREntityPawn_GetLeftHandPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVREntityPawn_GetLeftHandPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVREntityPawn::execGetLeftHandPose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVRHandPoseData*)Z_Param__Result=P_THIS->GetLeftHandPose();
	P_NATIVE_END;
}
// End Class AVREntityPawn Function GetLeftHandPose

// Begin Class AVREntityPawn Function GetRightHandPose
struct Z_Construct_UFunction_AVREntityPawn_GetRightHandPose_Statics
{
	struct VREntityPawn_eventGetRightHandPose_Parms
	{
		FVRHandPoseData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR|Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVREntityPawn_GetRightHandPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREntityPawn_eventGetRightHandPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FVRHandPoseData, METADATA_PARAMS(0, nullptr) }; // 2415873522
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREntityPawn_GetRightHandPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREntityPawn_GetRightHandPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVREntityPawn_GetRightHandPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREntityPawn_GetRightHandPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREntityPawn, nullptr, "GetRightHandPose", nullptr, nullptr, Z_Construct_UFunction_AVREntityPawn_GetRightHandPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREntityPawn_GetRightHandPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVREntityPawn_GetRightHandPose_Statics::VREntityPawn_eventGetRightHandPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVREntityPawn_GetRightHandPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVREntityPawn_GetRightHandPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVREntityPawn_GetRightHandPose_Statics::VREntityPawn_eventGetRightHandPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVREntityPawn_GetRightHandPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVREntityPawn_GetRightHandPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVREntityPawn::execGetRightHandPose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVRHandPoseData*)Z_Param__Result=P_THIS->GetRightHandPose();
	P_NATIVE_END;
}
// End Class AVREntityPawn Function GetRightHandPose

// Begin Class AVREntityPawn
void AVREntityPawn::StaticRegisterNativesAVREntityPawn()
{
	UClass* Class = AVREntityPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLeftHandPose", &AVREntityPawn::execGetLeftHandPose },
		{ "GetRightHandPose", &AVREntityPawn::execGetRightHandPose },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVREntityPawn);
UClass* Z_Construct_UClass_AVREntityPawn_NoRegister()
{
	return AVREntityPawn::StaticClass();
}
struct Z_Construct_UClass_AVREntityPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VREntityPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VROrigin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Origin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Body" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_Head_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_LeftGrip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_RightGrip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_LeftAim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_RightAim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawMotionControllerDebug_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Motion Controllers" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHeldGrip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Held Grips" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHeldGrip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Held Grips" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VR|Held Grips" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Default Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inputs in this mapping context are the core functions for gameplay\n" },
#endif
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
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
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inputs in this mapping context correlate to moving the player's body parts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Default Context" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Default Context" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftGrabAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Default Context" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightGrabAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Default Context" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftPointAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightPointAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftThumbUpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightThumbUpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftGraspAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightGraspAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftIndexCurlAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightIndexCurlAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandPose_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandPose_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input|Hands Context" },
		{ "ModuleRelativePath", "Public/VREntityPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VROrigin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Body;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController_Head;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController_LeftGrip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController_RightGrip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController_LeftAim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController_RightAim;
	static void NewProp_bDrawMotionControllerDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawMotionControllerDebug;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHeldGrip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHeldGrip;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandsContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftGrabAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightGrabAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftPointAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightPointAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftThumbUpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightThumbUpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftGraspAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightGraspAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftIndexCurlAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightIndexCurlAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightHandPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVREntityPawn_GetLeftHandPose, "GetLeftHandPose" }, // 91266845
		{ &Z_Construct_UFunction_AVREntityPawn_GetRightHandPose, "GetRightHandPose" }, // 2055885562
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREntityPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_VROrigin = { "VROrigin", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, VROrigin), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VROrigin_MetaData), NewProp_VROrigin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, Body), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body_MetaData), NewProp_Body_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_MotionController_Head = { "MotionController_Head", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, MotionController_Head), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_Head_MetaData), NewProp_MotionController_Head_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_MotionController_LeftGrip = { "MotionController_LeftGrip", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, MotionController_LeftGrip), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_LeftGrip_MetaData), NewProp_MotionController_LeftGrip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_MotionController_RightGrip = { "MotionController_RightGrip", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, MotionController_RightGrip), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_RightGrip_MetaData), NewProp_MotionController_RightGrip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_MotionController_LeftAim = { "MotionController_LeftAim", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, MotionController_LeftAim), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_LeftAim_MetaData), NewProp_MotionController_LeftAim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_MotionController_RightAim = { "MotionController_RightAim", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, MotionController_RightAim), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_RightAim_MetaData), NewProp_MotionController_RightAim_MetaData) };
void Z_Construct_UClass_AVREntityPawn_Statics::NewProp_bDrawMotionControllerDebug_SetBit(void* Obj)
{
	((AVREntityPawn*)Obj)->bDrawMotionControllerDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_bDrawMotionControllerDebug = { "bDrawMotionControllerDebug", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVREntityPawn), &Z_Construct_UClass_AVREntityPawn_Statics::NewProp_bDrawMotionControllerDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawMotionControllerDebug_MetaData), NewProp_bDrawMotionControllerDebug_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_LeftHeldGrip = { "LeftHeldGrip", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, LeftHeldGrip), Z_Construct_UClass_UGripComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHeldGrip_MetaData), NewProp_LeftHeldGrip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_RightHeldGrip = { "RightHeldGrip", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, RightHeldGrip), Z_Construct_UClass_UGripComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHeldGrip_MetaData), NewProp_RightHeldGrip_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_GrabRadius = { "GrabRadius", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, GrabRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabRadius_MetaData), NewProp_GrabRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_DefaultContext = { "DefaultContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, DefaultContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultContext_MetaData), NewProp_DefaultContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_HandsContext = { "HandsContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, HandsContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandsContext_MetaData), NewProp_HandsContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_TurnAction = { "TurnAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, TurnAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnAction_MetaData), NewProp_TurnAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_LeftGrabAction = { "LeftGrabAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, LeftGrabAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftGrabAction_MetaData), NewProp_LeftGrabAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_RightGrabAction = { "RightGrabAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, RightGrabAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightGrabAction_MetaData), NewProp_RightGrabAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_LeftPointAction = { "LeftPointAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, LeftPointAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftPointAction_MetaData), NewProp_LeftPointAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_RightPointAction = { "RightPointAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, RightPointAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightPointAction_MetaData), NewProp_RightPointAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_LeftThumbUpAction = { "LeftThumbUpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, LeftThumbUpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftThumbUpAction_MetaData), NewProp_LeftThumbUpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_RightThumbUpAction = { "RightThumbUpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, RightThumbUpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightThumbUpAction_MetaData), NewProp_RightThumbUpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_LeftGraspAction = { "LeftGraspAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, LeftGraspAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftGraspAction_MetaData), NewProp_LeftGraspAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_RightGraspAction = { "RightGraspAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, RightGraspAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightGraspAction_MetaData), NewProp_RightGraspAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_LeftIndexCurlAction = { "LeftIndexCurlAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, LeftIndexCurlAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftIndexCurlAction_MetaData), NewProp_LeftIndexCurlAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_RightIndexCurlAction = { "RightIndexCurlAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, RightIndexCurlAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightIndexCurlAction_MetaData), NewProp_RightIndexCurlAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_LeftHandPose = { "LeftHandPose", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, LeftHandPose), Z_Construct_UScriptStruct_FVRHandPoseData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandPose_MetaData), NewProp_LeftHandPose_MetaData) }; // 2415873522
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVREntityPawn_Statics::NewProp_RightHandPose = { "RightHandPose", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVREntityPawn, RightHandPose), Z_Construct_UScriptStruct_FVRHandPoseData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandPose_MetaData), NewProp_RightHandPose_MetaData) }; // 2415873522
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVREntityPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_VROrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_Body,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_MotionController_Head,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_MotionController_LeftGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_MotionController_RightGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_MotionController_LeftAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_MotionController_RightAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_bDrawMotionControllerDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_LeftHeldGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_RightHeldGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_GrabRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_DefaultContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_HandsContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_TurnAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_LeftGrabAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_RightGrabAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_LeftPointAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_RightPointAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_LeftThumbUpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_RightThumbUpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_LeftGraspAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_RightGraspAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_LeftIndexCurlAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_RightIndexCurlAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_LeftHandPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREntityPawn_Statics::NewProp_RightHandPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVREntityPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVREntityPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEntityPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectEclipseVR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVREntityPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVREntityPawn_Statics::ClassParams = {
	&AVREntityPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AVREntityPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AVREntityPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVREntityPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AVREntityPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVREntityPawn()
{
	if (!Z_Registration_Info_UClass_AVREntityPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVREntityPawn.OuterSingleton, Z_Construct_UClass_AVREntityPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVREntityPawn.OuterSingleton;
}
template<> PROJECTECLIPSEVR_API UClass* StaticClass<AVREntityPawn>()
{
	return AVREntityPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVREntityPawn);
AVREntityPawn::~AVREntityPawn() {}
// End Class AVREntityPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityPawn_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVRHandPoseData::StaticStruct, Z_Construct_UScriptStruct_FVRHandPoseData_Statics::NewStructOps, TEXT("VRHandPoseData"), &Z_Registration_Info_UScriptStruct_VRHandPoseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRHandPoseData), 2415873522U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVREntityPawn, AVREntityPawn::StaticClass, TEXT("AVREntityPawn"), &Z_Registration_Info_UClass_AVREntityPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVREntityPawn), 3740126728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityPawn_h_4033232486(TEXT("/Script/ProjectEclipseVR"),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityPawn_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityPawn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_ProjectEclipse_ProjectEclipseVR_Source_ProjectEclipseVR_Public_VREntityPawn_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
