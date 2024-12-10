// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PerceptionSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class CPPPROJECT_API UPerceptionSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	
public:
    UPROPERTY()
    TArray<UPerceptionComponent*> RegisteredComponents;

    UFUNCTION()
    void RegisterComponent(UPerceptionComponent* PerceptionComponent);

    UFUNCTION()
    void UnregisterComponent(UPerceptionComponent* PerceptionComponent);

    UFUNCTION(BlueprintCallable, Category = "Perception")
    void EnablePerceptionForActors(bool bEnable, TArray<AActor*> Actors);

    void InitPerceptionInfo(UPerceptionComponent* PerceptionComponent, float Radius);
};
