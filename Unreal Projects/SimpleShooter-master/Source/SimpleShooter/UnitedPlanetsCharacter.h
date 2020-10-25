// K-B 2020

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UPWeapon.h"
#include "UnitedPlanetsCharacter.generated.h"

class UInputComponent;
class UCameraComponent;
class USkeletalMeshComponent;
class USoundBase;
class UAnimMontage;
class AGun;

UCLASS(config = Game)
class SIMPLESHOOTER_API AUnitedPlanetsCharacter : public ACharacter
{
	GENERATED_BODY()

		/** Pawn mesh: 1st person view (arms; seen only by self) */
		UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* UPMesh;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* UPFirstPersonCameraComponent;

	/** First person camera - ADS */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* ADSFirstPersonCameraComponent;

public:
	AUnitedPlanetsCharacter();

	/** Gun mesh */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun")
		USkeletalMeshComponent* UPGun;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector GunOffset;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		UAnimMontage* FireAnimation;

	/* This is when calculating the trace to determine what the weapon has hit */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		float WeaponRange;

	/* This is multiplied by the direction vector when the weapon trace hits something to apply velocity to the component that is hit */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		float WeaponDamage;

	/* Determines if the character is currently sprinting */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		bool isSprinting;

	/* Determines if the character is zoomed-in to their weapon */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		bool isAiming;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<AUPWeapon> WeaponClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
		AUPWeapon* weapon;

	// The character's current level
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
		float currentLevel;

	// The amount of available upgrade points the character currently has
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
		float upgradePoints;

	// The amount of strength the character currently has
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
		float strengthValue;

	// The amount of intellect the character currently has
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
		float dexterityValue;

	// The amount of strength the character currently has
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
		float intellectValue;

protected:

	/* Called when the game starts */
	virtual void BeginPlay() override;

	/** Handler for a touch input beginning. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Fires a virtual projectile. */
	void OnFire();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles strafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	// Allows the player to begin sprinting.
	void Sprint();

	// Allows the player to stop sprinting
	void StopSprinting();

	// Allows the character to equip an item they are close to
	void EquipItem();

	// Zoom the camera in (aim-down sights)
	void AimIn();

	// Zoom the camera out (blind-fire)
	void StopAim();

	// Reloads the current weapon
	void ReloadWeapon();

	void TakeDamage(float damageAmount);

	void Heal(float healAmount);

	void UseStamina(float staminaAmount);

	void RestoreStamina(float restoreAmount);

	/*
	 * Performs a trace between two points
	 *
	 * @param	StartTrace	Trace starting point
	 * @param	EndTrac		Trace end point
	 * @returns FHitResult returns a struct containing trace result - who/what the trace hit etc.
	 */
	FHitResult WeaponTrace(const FVector& StartTrace, const FVector& EndTrace) const;

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

	/** Structure that handles touch data so we can process the various stages of touch. */
	struct TouchData
	{
		TouchData() { bIsPressed = false; Location = FVector::ZeroVector; }
		bool bIsPressed;
		ETouchIndex::Type FingerIndex;
		FVector Location;
		bool bMoved;
	};

	/*
	 * Handle begin touch event.
	 * Stores the index and location of the touch in a structure
	 *
	 * @param	FingerIndex	The touch index
	 * @param	Location	Location of the touch
	 */
	void BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location);

	/*
	 * Handle end touch event.
	 * If there was no movement processed this will fire a projectile, otherwise this will reset pressed flag in the touch structure
	 *
	 * @param	FingerIndex	The touch index
	 * @param	Location	Location of the touch
	 */
	void EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location);

	/*
	 * Handle touch update.
	 * This will update the look position based on the change in touching position
	 *
	 * @param	FingerIndex	The touch index
	 * @param	Location	Location of the touch
	 */
	void TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location);

	// Structure to handle touch updating
	TouchData	TouchItem;

	/*
	 * Configures input for touchscreen devices if there is a valid touch interface for doing so
	 *
	 * @param	InputComponent	The input component pointer to bind controls to
	 * @returns true if touch controls were enabled.
	 */
	void TryEnableTouchscreenMovement(UInputComponent* InputComponent);

	// Determines if the character is overlapping an equippable item
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float isOverlappingItem;


	// The amount of health the character currently has
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float playerHealth;

	// The amount of Stamina the character currently has
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float playerStamina;

public:
	/** Returns Mesh1P subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return UPMesh; }
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return UPFirstPersonCameraComponent; }


private:
	UPROPERTY(EditAnywhere)
		float RotationRate = 10;

	UPROPERTY(EditDefaultsOnly)
		float MaxHealth = 100;

	UPROPERTY(VisibleAnywhere)
		float Health;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<AGun> UPGunClass;

	UPROPERTY()
		AGun* Gun;
};


