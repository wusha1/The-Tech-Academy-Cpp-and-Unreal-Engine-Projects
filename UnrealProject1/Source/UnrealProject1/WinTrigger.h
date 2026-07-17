#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "WinTrigger.generated.h"

UCLASS()
class UNREALPROJECT1_API AWinTrigger : public AActor
{
    GENERATED_BODY()

public:
    AWinTrigger();

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(VisibleAnywhere)
    UBoxComponent* TriggerBox;

    UFUNCTION()
    void OnTriggerBeginOverlap(
        UPrimitiveComponent* OverlappedComponent,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex,
        bool bFromSweep,
        const FHitResult& SweepResult);
};