#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PerceptionComponent.generated.h"


USTRUCT(BlueprintType)
struct FPerceptionInfo
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
    float DetectionRadius = 500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
    bool bCanDetectActors = true;
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CPPPROJECT_API UPerceptionComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UPerceptionComponent();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
    FPerceptionInfo PerceptionInfo;

    UFUNCTION(BlueprintCallable, Category = "Perception")
    void EnablePerception(bool bEnable);

    UFUNCTION(BlueprintCallable, Category = "Perception")
    void UpdatePerception();


    void DebugDraw();

protected:
    virtual void BeginPlay() override;

    void HandleActorDetected(AActor* DetectedActor);

    void HandleActorLost(AActor* LostActor);

    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
    bool bPerceptionEnabled = true;

    TArray<AActor*> GetWorldAssetsList();
    TArray<AActor*> GetComponentsInRange(float _detectionRadius);
    TSet<AActor*> DetectedActors;
};

