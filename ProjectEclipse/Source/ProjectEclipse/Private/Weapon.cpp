// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

UWeapon::UWeapon()
{

}

void UWeapon::Equip(UWeaponComponent* WeaponComponent)
{
	WeaponComponent->SetMesh(Mesh);
}