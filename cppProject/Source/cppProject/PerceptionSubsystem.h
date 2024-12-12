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

    void RemoveActor(AActor* Actor);

    UFUNCTION(BlueprintCallable, Category = "Perception")
    void RegisterComponent(UPerceptionComponent* PerceptionComponent);

    UFUNCTION(BlueprintCallable, Category = "Perception")
    void UnregisterComponent(UPerceptionComponent* PerceptionComponent);

    UFUNCTION(BlueprintCallable, Category = "Perception")
    void EnablePerceptionForActors(bool bEnable, TArray<AActor*> Actors);

    void InitPerceptionInfo(UPerceptionComponent* PerceptionComponent, float Radius);

    void InitializeExistingActors();

    virtual void Initialize(FSubsystemCollectionBase& Collection) override;

    virtual void Deinitialize() override;

private:

    FDelegateHandle ActorSpawnedDelegateHandle;
    FDelegateHandle ActorRemovalDelegateHandle;
};
