// Fill out your copyright notice in the Description page of Project Settings.


#include "Teleporter.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ATeleporter::ATeleporter()
{
	PrimaryActorTick.bCanEverTick = true;

    CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
    RootComponent = CollisionComponent;

    CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    CollisionComponent->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
    CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);

    CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ATeleporter::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ATeleporter::BeginPlay()
{
	Super::BeginPlay();

    TArray<USceneComponent*> children;
    Children.Empty();
    RootComponent->GetChildrenComponents(true, children);

    for (USceneComponent* Child : children)
    {
        UAudioComponent* audioComponent = Cast<UAudioComponent>(Child);
        UParticleSystemComponent* particleComponent = Cast<UParticleSystemComponent>(Child);

        if (audioComponent)
            TeleportSound = audioComponent;
        if (particleComponent)
            TeleportEffect = particleComponent;
    }
}

void ATeleporter::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && IsValid(OtherActor) && DestinationTeleporter)
    {
        if (AllowedActorType && OtherActor->IsA(AllowedActorType))
        {
            FVector DestinationLocation = DestinationTeleporter->GetActorLocation();

            float DelayTime = 2.0f;
            GetWorld()->GetTimerManager().SetTimer(TeleportTimerHandle, FTimerDelegate::CreateUObject(this, &ATeleporter::TeleportActor, OtherActor, DestinationLocation), DelayTime, false);

            if (TeleportEffect) TeleportEffect->Activate();
            if (TeleportSound) TeleportSound->Play();
        }
    }
}

void ATeleporter::TeleportActor(AActor* OtherActor, FVector Destination) 
{
    TArray<UPrimitiveComponent*> Components;
    OtherActor->GetComponents<UPrimitiveComponent>(Components);

    for (UPrimitiveComponent* Component : Components)
    {
        if (Component && Component->IsSimulatingPhysics())
        {
            Component->SetAllPhysicsPosition(Destination + FVector(0, 0, HEIGHT_OFFSET));
        }
    }
}

// Called every frame
void ATeleporter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

