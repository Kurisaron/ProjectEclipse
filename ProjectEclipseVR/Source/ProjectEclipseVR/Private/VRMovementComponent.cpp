// Fill out your copyright notice in the Description page of Project Settings.


#include "VRMovementComponent.h"

UVRMovementComponent::UVRMovementComponent()
{

}


void UVRMovementComponent::Dodge(FVector Direction)
{
	AddImpulse(Direction * DodgePowerMultiplier, true);
}