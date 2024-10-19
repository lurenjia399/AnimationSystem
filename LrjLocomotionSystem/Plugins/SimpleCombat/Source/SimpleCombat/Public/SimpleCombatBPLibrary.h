//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "SimpleCombatBPLibrary.generated.h"

class UUI_ComboCount;
class AResidualShadowActor;
class UAnimMontage;
class AHitCollision;

UCLASS()
class SIMPLECOMBAT_API USimpleCombatBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "CombatText", Category = "Combat", WorldContext = WorldContextObject))
	static void ComboPlay(UObject* WorldContextObject,TSubclassOf<UUI_ComboCount> InClass);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "CombatText", Category = "Combat"))
	static void ComboTextDestroy();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ResidualShadow", Category = "Combat", WorldContext = WorldContextObject))
	static AResidualShadowActor *SpawnResidualShadow(
		UObject* WorldContextObject,
		TSubclassOf<AResidualShadowActor>ResidualShadowActorClass,
		USkeletalMeshComponent* InComponentToCopy,
		float InZOffset,
		const FVector &Location,const FRotator &InRot,float InLiftTime = 1.f);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Play Montage", Category = "Anim"))
	static float PlayMontage(USkeletalMeshComponent* InMesh,UAnimMontage* InAnimMontage, float InPlayRate, FName StartSectionName);
	
	UFUNCTION(BlueprintCallable, meta = (Category = "Combat"))
	static APawn* GetCaster(AActor* InCharacter);

public:
	//简单生成
	UFUNCTION(BlueprintCallable, meta = (Category = "Combat"))
	static AHitCollision* SpawnSimpleCollision(
		AActor* InSimpleCombatCharacter,
		UClass* HitObjectClass,
		const FVector& InLocation,
		const FRotator& InRotation,
		FGameplayTag GASTag,
		int32 HitID = -1, 
		float HitCollisionLiftTime = 4.f);

	//带有标签的生成
	UFUNCTION(BlueprintCallable, meta = (Category = "Combat"))
	static AHitCollision* SpawnSimpleCollisionByTags(
		AActor* InSimpleCombatCharacter,
		UClass* HitObjectClass,
		const FVector& InLocation,
		const FRotator& InRotation,
		const TArray<FGameplayTag> &BuffTags,
		FGameplayTag GASTag,
		int32 HitID = -1,
		float HitCollisionLiftTime = 4.f);

	//复杂生成
	UFUNCTION(BlueprintCallable, meta = (Category = "Combat"))
	static AHitCollision* SpawnCollision(const FSimpleHitCollisionParam &InParam);
};		
