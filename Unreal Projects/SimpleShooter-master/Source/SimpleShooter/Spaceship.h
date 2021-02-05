// United Planets of Galaxies - K-B - 2020
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Spaceship.generated.h"

class UCapsuleComponent;
class UStaticMeshComponent;

UCLASS(Config=Game)
class SIMPLESHOOTER_API ASpaceship : public APawn
{
	GENERATED_BODY()

	// Setting up the different components

	// StaticMesh component that will be the visuals for out flying pawn
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* SpaceshipMesh;

	// Spring arm that will offset the camera - Use VisibleAnywhere as it's a UObject pointer. EditAnywhere is for simple datatypes (bool, float etc).
	UPROPERTY(Category = Mesh, VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArm;

	// Camera component that will be our viewpoint
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

	// Members of this access specifier can be accessed outside the class
public:
	// Sets default values for this pawn's properties
	ASpaceship();

	// Begin AActor overrides
	virtual void Tick(float DeltaSeconds) override;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

	// Members of this access specifier cannot be accessed outside the class, however, they can be accessed by inherited classes
protected:
	// Begin APawn overrides
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override; // Allows binding actions/axes to functions
	// End APawn overrides

	//  Bound to the thrust axis - This is what allows the spaceship to fly
	void ThrustInput(float Val);

	// Slow down the ship
	void AeroBracking(float Val);

	// Bound to the vertical axis - This will allow the spaceship to move up and down
	void TurnY(float Val);

	// Bound to the horizontal axis - This will allow the spaceship to move right and left
	void TurnX(float Val);

	// Rotate the spaceship to the right
	void RotateLeft(float Val);

	// Rotate the spaceship to the left
	void RotateRight(float Val);


	// Members of this access specifiers cannot be used (or viewed) outside this class.
private:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UCapsuleComponent* CapsuleComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USceneComponent* ProjectileSpawnPoint1;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USceneComponent* ProjectileSpawnPoint2;

	// How quickly forward speed changes
	UPROPERTY(Category = Plane, EditAnywhere)
		float Acceleration;

	// How quickly pawn can steer
	UPROPERTY(Category = Plane, EditAnywhere)
		float TurnSpeed;

	// Max forward speed
	UPROPERTY(Category = Pitch, EditAnywhere)
		float MaxSpeed;

	// Min forward speed
	UPROPERTY(Category = Yaw, EditAnywhere)
		float MinSpeed;

	// Current forward speed
	float CurrentForwardSpeed;

	// Current yaw speed - z
	float CurrentYawSpeed;

	// Current pitch speed - y
	float CurrentPitchSpeed;

	// Current roll speed - x
	float CurrentRollSpeed;

public:
	// Returns PlaneMesh subobject
	FORCEINLINE class UStaticMeshComponent* GetPlaneMesh() const { return SpaceshipMesh; }
	// Returns SpringArm subobject
	FORCEINLINE class USpringArmComponent* GetSpringArm() const { return SpringArm; }
	// Returns Camera subobject
	FORCEINLINE class UCameraComponent* GetCamera() const { return Camera;  }

};
