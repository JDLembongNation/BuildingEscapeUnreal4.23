// Copyright Joshua Lembong 2021.


#include "OpenDoor.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	float MyFloat = 90.f;

	FRotator CurrentRotation = GetOwner()->GetActorRotation();
	UE_LOG(LogTemp, Warning, TEXT("%f"), CurrentRotation.Yaw);
	CurrentRotation.Yaw = -90.f;
	UE_LOG(LogTemp, Warning, TEXT("%f"), CurrentRotation.Yaw);

	GetOwner()->SetActorRotation(CurrentRotation);
	// ...
	
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

