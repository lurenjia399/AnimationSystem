#pragma once

#include "CoreMinimal.h"
#include "PhysicsControlActor.h"
#include "PhysicsControlData.h"

class UPhysicsControlComponent;

//一个基础的绑定，提供用户全身角色绑定 目前只适合UE小白人类型，不适合四足
class SIMPLEPHYSICSCONTROLEXTEND_API FSimplePhysicsControlBindHumanBase :public TSharedPtr<FSimplePhysicsControlBindHumanBase>
{
public:
	FSimplePhysicsControlBindHumanBase();
	virtual ~FSimplePhysicsControlBindHumanBase(){}

	virtual void Init(UPhysicsControlComponent* InComponent, USkeletalMeshComponent* InMesh);

	//开启物理效果
	void SetCollisionEnabled(bool bEnabled);

public:
	void SetBodyModifierForFeet();
	void SetBodyModifierForHands();

	void CreateSetParentSpaceControlsArm();
	void CreateSetWorldSpaceControlsUpperBody();

	void FootWorldSpaceControl();

public:
	void SetLimbGravityMultiplier(FName LimbName, float GravityMultiplier);
	void SetLimbWorldSpaceControlParams(FName LimbName, FPhysicsControlData& InData);
	void SetLimbParentSpaceControlParams(FName LimbName, FPhysicsControlData& InData);

	//如果您想尝试仅对身体的一部分启用限制，请使用SetConstraintProfileOfBranch函数。
	void SetConstraintProfileOfBranch(FName JointName, FName ProfileName);

public:
	virtual void InitPhysicsControlConfig(FName InMeshName, AActor* InCharacterActor);

public:
	USkeletalMeshComponent* GetMesh()const;
	UPhysicsControlComponent* GetPhysicsControlComponent()const;

public:
	FInitialCharacterControls InitialCharacterControls;
	FName InitialConstraintProfile;

protected:
	TWeakObjectPtr<UPhysicsControlComponent> PhysicsControlComponent;
	TWeakObjectPtr<USkeletalMeshComponent> Mesh;
};