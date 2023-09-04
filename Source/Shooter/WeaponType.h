#pragma once

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	EWT_SubmachineGun UMETA(DispleyName = "SubmachineGun"),
	EWT_AssaultRifle UMETA(DispleyName = "AssaultRifle"),

	EWT_MAX UMETA(DispleyName = "DefaultMax")
};