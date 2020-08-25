// Fill out your copyright notice in the Description page of Project Settings.


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

}

