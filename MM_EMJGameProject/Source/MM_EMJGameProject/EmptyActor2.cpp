// Copyright described in the Repository LICENSE file


#include "EmptyActor2.h"

// Sets default values
AEmptyActor2::AEmptyActor2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEmptyActor2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEmptyActor2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

