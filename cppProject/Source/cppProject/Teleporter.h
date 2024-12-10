// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <StaticMeshComponentAdapter.h>
#include <Components/BoxComponent.h>
#include "Teleporter.generated.h"

UCLASS()
class CPPPROJECT_API ATeleporter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATeleporter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Teleporter")
	TSubclassOf<AActor> AllowedActorType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Teleporter")
	ATeleporter* DestinationTeleporter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UParticleSystemComponent* TeleportEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UAudioComponent* TeleportSound;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Teleporter")
	UBoxComponent* CollisionComponent;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FTimerHandle TeleportTimerHandle;
	void TeleportActor(AActor* OtherActor, FVector Destination);
	const float HEIGHT_OFFSET = 50;

};
