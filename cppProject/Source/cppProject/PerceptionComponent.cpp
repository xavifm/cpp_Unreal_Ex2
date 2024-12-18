#include "PerceptionComponent.h"
#include "Engine/EngineTypes.h"
#include "SubsystemCall.h"
#include "EngineUtils.h"
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

void UPerceptionComponent::UpdatePerception(float DeltaTime)
{
    if (!bPerceptionEnabled || !GetOwner())
        return;

    PerceptionInfo.CurrentTime -= DeltaTime;

    if (PerceptionInfo.CurrentTime > 0)
        return;

    DetectedActors = GetComponentsInRange(PerceptionInfo.DetectionRadius);

    for (AActor* DetectedActor : DetectedActors)
        OnActorDetected.Broadcast(DetectedActor);

    PerceptionInfo.CurrentTime = PerceptionInfo.TrackTime;
}

TArray<AActor*> UPerceptionComponent::GetWorldAssetsList() 
{
    TArray<AActor*> AssetsList;
    UWorld* World = GetWorld();

    for (TActorIterator<AActor> It(World); It; ++It)
    {
        AActor* Actor = *It;
        if (Actor)
        {
            AssetsList.Add(Actor);
        }
    }

    return AssetsList;
}

TArray<AActor*> UPerceptionComponent::GetComponentsInRange(float _detectionRadius)
{
    TArray<AActor*> ActorsList = GetWorldAssetsList();

    TArray<AActor*> WorldActors;
    FVector OwnerLocation = GetOwner()->GetActorLocation();
    TArray<AActor*> DetectedActorsList;

    for (AActor* Actor : ActorsList)
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

void UPerceptionComponent::HandleActorDetected(AActor* DetectedActor)
{
    UE_LOG(LogTemp, Warning, TEXT("Detected Actor: %s"), *DetectedActor->GetName());
}

void UPerceptionComponent::BeginPlay()
{
    Super::BeginPlay();

    OnActorDetected.AddDynamic(this, &UPerceptionComponent::HandleActorDetected);
}

void UPerceptionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    UpdatePerception(DeltaTime);
}
