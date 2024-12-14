// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PerceptionSubsystem.h"
#include "SubsystemCall.generated.h"

UCLASS()
class CPPPROJECT_API ASubsystemCall : public AActor
{
	GENERATED_BODY()
	
public:	
	ASubsystemCall();

protected:
	virtual void BeginPlay() override;

	void UpdateAssetsList(UWorld* World);

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
	bool EnablePerception;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
	bool DisablePerception;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
	bool UpdateListToEnableOrDisable;

	virtual void Tick(float DeltaTime) override;

	void EnablePerceptionForInitialAssets();
	void DisablePerceptionForInitialAssets();

	TArray<AActor*> ActorsToPerceive;

	UPerceptionSubsystem* PerceptionSubsystem;


};

