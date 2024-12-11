#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PerceptionSubsystem.generated.h"

class UPerceptionComponent;

UCLASS()
class CPPPROJECT_API UPerceptionSubsystem : public UWorldSubsystem
{
    GENERATED_BODY()

public:
    UPROPERTY()
    TArray<UPerceptionComponent*> RegisteredComponents;

    void HandleActor(AActor* Actor);

    UFUNCTION()
    void RegisterComponent(UPerceptionComponent* PerceptionComponent);

    UFUNCTION()
    void UnregisterComponent(UPerceptionComponent* PerceptionComponent);

    UFUNCTION(BlueprintCallable, Category = "Perception")
    void EnablePerceptionForActors(bool bEnable, TArray<AActor*> Actors);

    void InitPerceptionInfo(UPerceptionComponent* PerceptionComponent, float Radius);

    void InitializeExistingActors();

    virtual void Initialize(FSubsystemCollectionBase& Collection) override;

    virtual void Deinitialize() override;

private:
    void HandlePostActorCreated(AActor* Actor);

    FDelegateHandle ActorSpawnedDelegateHandle;
};
