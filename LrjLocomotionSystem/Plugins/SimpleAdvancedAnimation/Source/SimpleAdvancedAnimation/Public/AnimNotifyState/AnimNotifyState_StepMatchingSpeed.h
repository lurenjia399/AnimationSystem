//Copyright (C) RenZhai.2022.All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SimpleAdvancedAnimationType.h"
#include "AnimNotifyState_StepMatchingSpeed.generated.h"

//主要解决高级动画中的滑步问题
UCLASS(meta = (DisplayName = "StepMatchingSpeed"))
class SIMPLEADVANCEDANIMATION_API UAnimNotifyState_StepMatchingSpeed : public UAnimNotifyState
{
	GENERATED_BODY()

public:
	UAnimNotifyState_StepMatchingSpeed();

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference);
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference);
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);

protected:
	FVector ProjectPointOntoPlane(const FVector& Point, const FVector& PlanePoint, const FVector& Forward, const FVector& Up);

	void GetDirectionByAisx(AActor* InActor, FVector& OutADir, FVector& OutBDir);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotifyState_StepMatching")
	TEnumAsByte<EAdvancedAnimationPlaneAxis::Type> PlaneAxis;

	//哪个骨骼开始
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotifyState_StepMatching")
	FName ABoneName;

	//骨骼结束
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotifyState_StepMatching")
	FName BBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotifyState_StepMatching")
	bool bCrouched;

	//可以让移动稍微缓解一些
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotifyState_StepMatching")
	float SpeedCoefficient;

	//可以多次速度采样 求出一个平均值
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotifyState_StepMatching")
	int32 MaximumSampling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotifyState_StepMatching")
	bool bClamp;

	//速度范围
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotifyState_StepMatching")
	float SpeedMin;

	//速度范围
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotifyState_StepMatching")
	float SpeedMax;

	//是否开启debug
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotifyState_StepMatching")
	bool bDebug;

	UPROPERTY(Category = "Character Movement: MovementMode", EditAnywhere)
	TEnumAsByte<enum EMovementMode> MovementMode;
};
