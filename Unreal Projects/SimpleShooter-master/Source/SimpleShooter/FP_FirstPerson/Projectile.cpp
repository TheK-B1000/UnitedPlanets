// K-B 2020


#include "Projectile.h"
#include "DestructibleActor.h"
#include "DestructibleComponent.h"
#include "DrawDebugHelpers.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	RootComponent = RootComp;

}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Create a hit result
	FHitResult HitResult;

	// Create a point to start the trace
	// TODO - does the functionality stay in the projectile class or
	// do I move it up to the gun class?
	FVector StartTrace = this->GetActorLocation();
	// Endtrace by getting the Velocity * DeltaTime to keep the actions consistent
	// Then add the start trace. Essential it figures out how fast it is going and what
	// direction adding the point from which it started

	FVector EndTrace = (Velocity * DeltaTime) + StartTrace;

	// Structure that defines parameters passed into collision function.
	FCollisionQueryParams CollisionParams;
	// ignore the projectile itself
	CollisionParams.AddIgnoredActor(this);

	// TODO - Should this be an if statement?
	if (GetWorld()->LineTraceSingleByChannel(HitResult, StartTrace, EndTrace, ECollisionChannel::ECC_Destructible, CollisionParams))
	{
		// If we do hit something
		// check to see if our hit result hit an actor
		if (HitResult.GetActor())
		{
			// Create a Debug Box 
			DrawDebugSolidBox(GetWorld(), HitResult.ImpactPoint, FVector(10.0f), FColor::Blue, true);
			ADestructibleActor* Mesh = Cast<ADestructibleActor>(HitResult.GetActor());
			if (Mesh)
			{
				Mesh->GetDestructibleComponent()->ApplyRadiusDamage(10.0f, HitResult.ImpactPoint, 32.0f, 10.0f, false); // TODO - Play around with the values
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Could not get mesh. Type: %s"), *HitResult.GetActor()->StaticClass()->GetFName().ToString());
		}

		// Optimization
		Destroy();
	}
	else
	{
		// if we do not hit something
		BulletExpiry += DeltaTime;

		DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor(0.0f, -BulletExpiry * 80.0f, 100.0f), true);

		SetActorLocation(EndTrace);

		Velocity += FVector(0.0f, 0.0f, -200.0f) * DeltaTime;
	}

	if (BulletExpiry > 3)
	{
		Destroy();
	}

}

