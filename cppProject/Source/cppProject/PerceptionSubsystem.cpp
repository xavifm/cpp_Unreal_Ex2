// Fill out your copyright notice in the Description page of Project Settings.

#include "PerceptionSubsystem.h"
#include "PerceptionComponent.h"

void UPerceptionSubsystem::RegisterComponent(UPerceptionComponent* PerceptionComponent)
{
    if (!RegisteredComponents.Contains(PerceptionComponent))
    {
        RegisteredComponents.Add(PerceptionComponent);
    }
}

void UPerceptionSubsystem::UnregisterComponent(UPerceptionComponent* PerceptionComponent)
{
    RegisteredComponents.Remove(PerceptionComponent);
}

void UPerceptionSubsystem::EnablePerceptionForActors(bool bEnable, TArray<AActor*> Actors)
{
    for (AActor* Actor : Actors)
    {
        if (UPerceptionComponent* PerceptionComponent = Actor->FindComponentByClass<UPerceptionComponent>())
        {
            PerceptionComponent->EnablePerception(bEnable);
        }
    }
}

void UPerceptionSubsystem::InitPerceptionInfo(UPerceptionComponent* PerceptionComponent, float Radius)
{
    if (PerceptionComponent)
    {
        PerceptionComponent->DetectionRadius = Radius;
    }
}

