// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PerceptionComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorDetected, AActor*, DetectedActor);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPPPROJECT_API UPerceptionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPerceptionComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
	float DetectionRadius = 500.0f;

	UPROPERTY(BlueprintAssignable, Category = "Perception")
	FOnActorDetected OnActorDetected;

	UFUNCTION(BlueprintCallable, Category = "Perception")
	void EnablePerception(bool bEnable);

	UFUNCTION(BlueprintCallable, Category = "Perception")
	void UpdatePerception();

	void DebugDraw();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	bool bPerceptionEnabled = true;
	TSet<AActor*> DetectedActors;
		
};
