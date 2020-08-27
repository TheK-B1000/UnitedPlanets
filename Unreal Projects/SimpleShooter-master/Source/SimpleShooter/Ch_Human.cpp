// K-B 2020


#include "Ch_Human.h"

// Sets default values
ACh_Human::ACh_Human()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACh_Human::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACh_Human::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACh_Human::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis(TEXT("MoveForward"), this, &ACh_Human::MoveForward);
	InputComponent->BindAxis(TEXT("MoveRight"), this, &ACh_Human::MoveRight);
	InputComponent->BindAxis(TEXT("LookUp"), this, &APawn::AddControllerPitchInput);
	InputComponent->BindAxis(TEXT("LookRight"), this, &APawn::AddControllerYawInput);
	InputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
}

void ACh_Human::MoveForward(float AxisValue)
{
	AddMovementInput(GetActorForwardVector(), AxisValue);
}

void ACh_Human::MoveRight(float AxisValue)
{
	AddMovementInput(GetActorRightVector(), AxisValue);
}


