#pragma once

#include "CoreMinimal.h"
#include "Timer/SimpleTimerManage.h"
#include "SimpleSkeletalMeshHitObject.generated.h"

class USkeletalMeshComponent;
enum class EItemObjectState : uint8;

USTRUCT(BlueprintType)
struct SIMPLECOMBAT_API FSimpleSkeletalMeshHitObject
{
	GENERATED_USTRUCT_BODY()

	TWeakObjectPtr<USkeletalMeshComponent> MeshComponent;

	//队列状态
	UPROPERTY()
	EItemObjectState State;

	UPROPERTY()
	FName BoneName;

	UPROPERTY()
	TArray<FName> ExcludeBoneName;

	UPROPERTY()
	FVector ImpactNormal;

	UPROPERTY()
	float Impulse;
public:
	FSimpleSkeletalMeshHitObject();

	void Tick(float DeltaTime);

	void Init(
		USkeletalMeshComponent* InMeshComponent,
		float InTime,
		const FName& InBoneName,
		float InImpulse,
		const FVector& InImpactNormal,
		const TArray<FName>& InExcludeBoneName);

	bool IsFree() const;

protected:
	void Start();
	void OnGoing(float InRatio, float DeltaTime);
	void End();

protected:
	FSimpleTimerManage Timer;
};