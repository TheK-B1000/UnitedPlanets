// K-B 2020

#include "FP_FirstPersonCharacter.h"
#include "Animation/AnimInstance.h"
#include "UPGGun.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"

#define COLLISION_UPGGun		ECC_GameTraceChannel1

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AFP_FirstPersonCharacter

AFP_FirstPersonCharacter::AFP_FirstPersonCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(0, 0, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;
	
	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);				// Set so only owner can see mesh
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);	// Attach mesh to FirstPersonCameraComponent
	Mesh1P->bCastDynamicShadow = false;			// Disallow mesh to cast dynamic shadows
	Mesh1P->CastShadow = false;				// Disallow mesh to cast other shadows

	// Create a gun mesh component
	UPGGun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("UPGGun"));
	UPGGun->SetOnlyOwnerSee(true);			// Only the owning player will see this mesh
	UPGGun->bCastDynamicShadow = false;		// Disallow mesh to cast dynamic shadows
	UPGGun->CastShadow = false;			// Disallow mesh to cast other shadows
	UPGGun->SetupAttachment(Mesh1P, TEXT("GripPoint"));

	// Create a Aim-Down Sights CameraComponent	
	ADSFirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ADSCamera"));
	ADSFirstPersonCameraComponent->SetupAttachment(UPGGun);
	ADSFirstPersonCameraComponent->SetRelativeLocation(FVector(0, 20.0f, 20.0f)); // Position the camera
	ADSFirstPersonCameraComponent->SetRelativeScale3D(FVector(0.2f, 0.2f, 0.2f)); // Size the camera
	ADSFirstPersonCameraComponent->SetRelativeRotation(FRotator(0, 90.0f, 0)); // Rotate the camera
	ADSFirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Set UPGGun damage and range
	WeaponRange = 5000.0f;
	WeaponDamage = 500000.0f;

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 30.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P are set in the
	// derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	// Set the default player variables
	isOverlappingItem = false;
	isSprinting = false;
	isAiming = false;
	playerHealth = 1.00f;
	playerStamina = 1.00f;
}

//////////////////////////////////////////////////////////////////////////
// Input

void AFP_FirstPersonCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);
	
	// Set up gameplay key bindings

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind sprinting events
	//PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AUnitedPlanetsCharacter::Sprint);
	//PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AUnitedPlanetsCharacter::StopSprinting);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFP_FirstPersonCharacter::OnFire);
	//PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AFP_FirstPersonCharacter::ReloadWeapon);
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AFP_FirstPersonCharacter::AimIn);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &AFP_FirstPersonCharacter::StopAim);
	
	// Attempt to enable touch screen movement
	TryEnableTouchscreenMovement(PlayerInputComponent);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AFP_FirstPersonCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFP_FirstPersonCharacter::MoveRight);
	
	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AFP_FirstPersonCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AFP_FirstPersonCharacter::LookUpAtRate);
}

void AFP_FirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->SpawnActor<AUPGGun>(GunClass);
}

void AFP_FirstPersonCharacter::OnFire()
{
	// Play a sound if there is one
	if (FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// Try and play a firing animation if specified
	if (FireAnimation != NULL)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != NULL)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}

	// Now send a trace from the end of our gun to see if we should hit anything
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	
	FVector ShootDir = FVector::ZeroVector;
	FVector StartTrace = FVector::ZeroVector;

	if (PlayerController)
	{
		// Calculate the direction of fire and the start location for trace
		FRotator CamRot;
		PlayerController->GetPlayerViewPoint(StartTrace, CamRot);
		ShootDir = CamRot.Vector();

		// Adjust trace so there is nothing blocking the ray between the camera and the pawn, and calculate distance from adjusted start
		StartTrace = StartTrace + ShootDir * ((GetActorLocation() - StartTrace) | ShootDir);
	}

	// Calculate endpoint of trace
	const FVector EndTrace = StartTrace + ShootDir * WeaponRange;

	// Check for impact
	const FHitResult Impact = WeaponTrace(StartTrace, EndTrace);

	// Deal with impact
	AActor* DamagedActor = Impact.GetActor();
	UPrimitiveComponent* DamagedComponent = Impact.GetComponent();

	// If we hit an actor, with a component that is simulating physics, apply an impulse
	if ((DamagedActor != NULL) && (DamagedActor != this) && (DamagedComponent != NULL) && DamagedComponent->IsSimulatingPhysics())
	{
		DamagedComponent->AddImpulseAtLocation(ShootDir * WeaponDamage, Impact.Location);
	}
}


void AFP_FirstPersonCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// If touch is already pressed check the index. If it is not the same as the current touch assume a second touch and thus we want to fire
	if (TouchItem.bIsPressed == true)
	{
		if( TouchItem.FingerIndex != FingerIndex)
		{
			OnFire();			
		}
	}
	else 
	{
		// Cache the finger index and touch location and flag we are processing a touch
		TouchItem.bIsPressed = true;
		TouchItem.FingerIndex = FingerIndex;
		TouchItem.Location = Location;
		TouchItem.bMoved = false;
	}
}

void AFP_FirstPersonCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// If we didn't record the start event do nothing, or this is a different index
	if((TouchItem.bIsPressed == false) || ( TouchItem.FingerIndex != FingerIndex) )
	{
		return;
	}

	// If the index matches the start index and we didn't process any movement we assume we want to fire
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}

	// Flag we are no longer processing the touch event
	TouchItem.bIsPressed = false;
}

void AFP_FirstPersonCharacter::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// If we are processing a touch event and this index matches the initial touch event process movement
	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
	{
		if (GetWorld() != nullptr)
		{
			UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
			if (ViewportClient != nullptr)
			{
				FVector MoveDelta = Location - TouchItem.Location;
				FVector2D ScreenSize;
				ViewportClient->GetViewportSize(ScreenSize);
				FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
				if (FMath::Abs(ScaledDelta.X) >= (4.0f / ScreenSize.X))
				{
					TouchItem.bMoved = true;
					float Value = ScaledDelta.X * BaseTurnRate;
					AddControllerYawInput(Value);
				}
				if (FMath::Abs(ScaledDelta.Y) >= (4.0f / ScreenSize.Y))
				{
					TouchItem.bMoved = true;
					float Value = ScaledDelta.Y* BaseTurnRate;
					AddControllerPitchInput(Value);
				}
				TouchItem.Location = Location;
			}
			TouchItem.Location = Location;
		}
	}
}

void AFP_FirstPersonCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// Add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AFP_FirstPersonCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// Add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AFP_FirstPersonCharacter::TurnAtRate(float Rate)
{
	// Calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AFP_FirstPersonCharacter::LookUpAtRate(float Rate)
{
	// Calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

FHitResult AFP_FirstPersonCharacter::WeaponTrace(const FVector& StartTrace, const FVector& EndTrace) const
{
	// Perform trace to retrieve hit info
	FCollisionQueryParams TraceParams(SCENE_QUERY_STAT(UPGGunTrace), true, GetInstigator());
	TraceParams.bReturnPhysicalMaterial = true;

	FHitResult Hit(ForceInit);
	GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, COLLISION_UPGGun, TraceParams);

	return Hit;
}

void AFP_FirstPersonCharacter::TryEnableTouchscreenMovement(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AFP_FirstPersonCharacter::BeginTouch);
	PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AFP_FirstPersonCharacter::EndTouch);
	PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AFP_FirstPersonCharacter::TouchUpdate);	
}

// TODO fix sprint functionality
/* void AFP_FirstPersonCharacter::Sprint()
{
	if (auto characterMovement = GetCharacterMovement())
	{
		characterMovement->MaxWalkSpeed = 1500.0f;
		isSprinting = true;
	}
}

void AFP_FirstPersonCharacter::StopSprinting()
{
	if (auto characterMovement = GetCharacterMovement())
	{
		characterMovement->MaxWalkSpeed = 600.0f;
		isSprinting = false;
	}
} */

void AFP_FirstPersonCharacter::EquipItem()
{
	if (isOverlappingItem)
	{
		UE_LOG(LogTemp, Warning, TEXT("We picked up an item"));
	}
}

void AFP_FirstPersonCharacter::AimIn()
{
	FViewTargetTransitionParams Params;
	//APlayerController* Controller = Cast<APlayerController>(GetController());
	//Controller->SetViewTarget(ADSCamera, Params);

	if (auto firstPersonCamera = GetFirstPersonCameraComponent())
	{
		firstPersonCamera->SetFieldOfView(70.0f);
		isAiming = true;
	}
}

void AFP_FirstPersonCharacter::StopAim()
{
	if (auto firstPersonCamera = GetFirstPersonCameraComponent())
	{
		firstPersonCamera->SetFieldOfView(90.0f);
		isAiming = false;
	}
}

// TODO fix Reload functionality
/* void AFP_FirstPersonCharacter::ReloadUPGGun()
{
	if (UPGGun)
	{
		if (UPGGun->clipAmmo != UPGGun->maxClipAmmo)
		{
			if (UPGGun->totalAmmo - (UPGGun->maxClipAmmo - UPGGun->clipAmmo) >= 0)
			{
				UPGGun->totalAmmo -= (UPGGun->maxClipAmmo - UPGGun->clipAmmo);
				UPGGun->clipAmmo = UPGGun->maxClipAmmo;
			}
			else
			{
				UPGGun->clipAmmo += UPGGun->totalAmmo;
				UPGGun->totalAmmo = 0;
			}
		}
	}
} */

void AFP_FirstPersonCharacter::TakeDamage(float damageAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("We are taking damage for %f points."), damageAmount);
	playerHealth -= damageAmount;

	if (playerHealth < 0.00f)
	{
		playerHealth = 0.00f;
	}
}

void AFP_FirstPersonCharacter::Heal(float healAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("We are healing for %f points."), healAmount);
	playerHealth += healAmount;

	if (playerHealth < 1.00f)
	{
		playerHealth = 1.00f;
	}
}

void AFP_FirstPersonCharacter::UseStamina(float staminaAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("We are using stamina for %f points."), staminaAmount);
	playerStamina -= staminaAmount;

	if (playerStamina < 0.00f)
	{
		playerStamina = 0.00f;
	}
}

void AFP_FirstPersonCharacter::RestoreStamina(float restoreAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("We are restoring stamina for %f points."), restoreAmount);
	playerStamina += restoreAmount;

	if (playerStamina < 1.00f)
	{
		playerStamina = 1.00f;
	}
}
