#pragma once

#include "Core/SimplePhysicsControlBindHumanBase.h"

//可以接受正确的物理效果 基于全身 但是固定脚步
class SIMPLEPHYSICSCONTROLEXTEND_API FSimpleControlExtend :public FSimplePhysicsControlBindHumanBase
{
	typedef FSimplePhysicsControlBindHumanBase Super;

public:
	FSimpleControlExtend();

public:
	bool bUserWorldContorl;

public:
	virtual void Init(UPhysicsControlComponent* InComponent, USkeletalMeshComponent* InMesh);
	virtual void InitPhysicsControlConfig(FName InMeshName, AActor* InCharacterActor);

public:
	void SetBodyModifierGravityMultiplier(FName BodyName, float InValue);
};