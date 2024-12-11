#include "PerceptionComponent.h"
#include "Engine/EngineTypes.h"
#include "PhysicsEngine/PhysicsCollisionHandler.h"
#include "Engine/World.h"


#include "Kismet/GameplayStatics.h"

UPerceptionComponent::UPerceptionComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UPerceptionComponent::EnablePerception(bool bEnable)
{
    bPerceptionEnabled = bEnable;
}

void UPerceptionComponent::UpdatePerception()
{
    if (!bPerceptionEnabled || !GetOwner())
        return;

    TArray<AActor*> DetectedActorsList = GetComponentsInRange(PerceptionInfo.DetectionRadius);

    for (AActor* DetectedActor : DetectedActorsList)
    {
        if (!DetectedActors.Contains(DetectedActor))
        {
            DetectedActors.Add(DetectedActor);
            OnActorDetected.Broadcast(DetectedActor);
        }
    }
}

TArray<AActor*> UPerceptionComponent::GetComponentsInRange(float _detectionRadius)
{
    TArray<AActor*> OverlappingActors;
    FVector OwnerLocation = GetOwner()->GetActorLocation();
    TArray<AActor*> DetectedActorsList;

    for (AActor* Actor : OverlappingActors)
    {
        if (Actor && Actor != GetOwner())
        {
            float Distance = FVector::Dist(Actor->GetActorLocation(), OwnerLocation);
            if (Distance <= _detectionRadius && Actor->FindComponentByClass<UPerceptionComponent>())
            {
                DetectedActorsList.Add(Actor);
            }
        }
    }

    return DetectedActorsList;
}


void UPerceptionComponent::BeginPlay()
{
    Super::BeginPlay();
}

void UPerceptionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    UpdatePerception();
}
