//Copyright (C) RenZhai.2022.All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_StepMatching.generated.h"

//主要解决高级动画中的滑步问题
UCLASS(meta = (DisplayName = "StepMatching"))
class SIMPLEADVANCEDANIMATION_API UAnimNotifyState_StepMatching : public UAnimNotifyState
{
	GENERATED_BODY()

public:
	UAnimNotifyState_StepMatching();

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference);
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference);
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);

public:
	//是谁
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotifyState_StepMatching")
	int32 Index;

	//哪个骨骼开始
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotifyState_StepMatching")
	FName BoneName;

	//是否开启debug
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotifyState_StepMatching")
	bool bDebug;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotifyState_StepMatching")
	FVector Offset;

	//检测对象
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotifyState_StepMatching")
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypeQuery;
};
