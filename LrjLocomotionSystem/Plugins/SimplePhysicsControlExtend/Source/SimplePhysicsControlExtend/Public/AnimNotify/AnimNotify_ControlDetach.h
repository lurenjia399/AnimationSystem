//Copyright (C) RenZhai.2022.All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "PhysicsControlData.h"
#include "AnimNotify_ControlDetach.generated.h"


UCLASS(meta = (DisplayName = "ControlDetach"))
class UAnimNotify_ControlDetach : public UAnimNotify
{
	GENERATED_BODY()
	
public:
	UAnimNotify_ControlDetach();

	virtual FString GetNotifyName_Implementation() const override;
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,const FAnimNotifyEventReference& EventReference) override;

protected:
	//类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attach")
	TSubclassOf<AActor> ActorClass;

	//针对ActorClass里面的模型查找方式
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attach")
	FName SubTag;

	//附加的SocketName
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attach")
	FName AttachSocketName;

	//控制器的名字
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attach")
	FName ControlName;

	//控制的骨骼名字
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attach")
	FName ChildBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attach")
	FPhysicsControlData GrabControlData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attach")
	bool bEndCloseCollision;
};