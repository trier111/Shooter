#pragma once

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	EWT_SubmachineGun UMETA(DispleyName = "SubmachineGun"),
	EWT_AssaultRifle UMETA(DispleyName = "AssaultRifle"),
	EWT_Pistol UMETA(DispleyName = "Pistol"),

	EWT_MAX UMETA(DispleyName = "DefaultMax")
};