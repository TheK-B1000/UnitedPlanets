 // Social Cube Media 2020


#include "GunActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/UObjectGlobals.h"

// Sets default values
AGunActor::AGunActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);


}

void AGunActor::PullTrigger()
{
	UE_LOG(LogTemp, Warning, TEXT("Gun Fired!"));
}

// Called when the game starts or when spawned
void AGunActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AGunActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

