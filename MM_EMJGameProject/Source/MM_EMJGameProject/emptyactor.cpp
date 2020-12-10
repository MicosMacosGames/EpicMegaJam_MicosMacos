// Copyright described in the Repository LICENSE file


#include "emptyactor.h"

// Sets default values
Aemptyactor::Aemptyactor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aemptyactor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aemptyactor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

