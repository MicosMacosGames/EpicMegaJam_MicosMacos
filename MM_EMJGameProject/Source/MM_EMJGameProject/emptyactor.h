// Copyright described in the Repository LICENSE file

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "emptyactor.generated.h"

UCLASS()
class MM_EMJGAMEPROJECT_API Aemptyactor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aemptyactor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
