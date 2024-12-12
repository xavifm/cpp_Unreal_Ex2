#include "PerceptionSubsystem.h"
#include "PerceptionComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

void UPerceptionSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    InitializeExistingActors();

    if (UWorld* World = GetWorld())
    {
        ActorSpawnedDelegateHandle = World->AddOnActorSpawnedHandler(
            FOnActorSpawned::FDelegate::CreateUObject(this, &UPerceptionSubsystem::HandleActor));

        ActorRemovalDelegateHandle = World->AddOnActorRemovedFromWorldHandler(
            FOnActorSpawned::FDelegate::CreateUObject(this, &UPerceptionSubsystem::RemoveActor));
    }
}

void UPerceptionSubsystem::Deinitialize()
{
    Super::Deinitialize();

    if (UWorld* World = GetWorld())
    {
        World->RemoveOnActorSpawnedHandler(ActorSpawnedDelegateHandle);
    }
}

void UPerceptionSubsystem::InitializeExistingActors()
{
    TArray<AActor*> AllActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), AllActors);

    for (AActor* Actor : AllActors)
    {
        HandleActor(Actor);
    }
}

void UPerceptionSubsystem::HandleActor(AActor* Actor)
{
    if (Actor)
    {
        UPerceptionComponent* NewPerceptionComponent = Cast<UPerceptionComponent>(Actor->GetComponentByClass(UPerceptionComponent::StaticClass()));

        if (NewPerceptionComponent)
        {
            RegisterComponent(NewPerceptionComponent);
        }
    }
}

void UPerceptionSubsystem::RemoveActor(AActor* Actor)
{
    if (Actor)
    {
        UPerceptionComponent* NewPerceptionComponent = Cast<UPerceptionComponent>(Actor->GetComponentByClass(UPerceptionComponent::StaticClass()));

        if (NewPerceptionComponent)
        {
            UnregisterComponent(NewPerceptionComponent);
        }
    }
}

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
        PerceptionComponent->PerceptionInfo.DetectionRadius = Radius;
    }
}
