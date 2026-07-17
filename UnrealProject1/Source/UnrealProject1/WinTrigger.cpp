#include "WinTrigger.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AWinTrigger::AWinTrigger()
{
	PrimaryActorTick.bCanEverTick = false;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;

	TriggerBox->SetCollisionProfileName(TEXT("Trigger"));

	TriggerBox->OnComponentBeginOverlap.AddDynamic(
		this,
		&AWinTrigger::OnTriggerBeginOverlap
	);
}

// Calls when the game starts
void AWinTrigger::BeginPlay()
{
	Super::BeginPlay();
}

void AWinTrigger::OnTriggerBeginOverlap(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->IsA(ACharacter::StaticClass()))
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			5.0f,
			FColor::Green,
			TEXT("You Win!")
		);

		UGameplayStatics::SetGamePaused(GetWorld(), true);
	}
}