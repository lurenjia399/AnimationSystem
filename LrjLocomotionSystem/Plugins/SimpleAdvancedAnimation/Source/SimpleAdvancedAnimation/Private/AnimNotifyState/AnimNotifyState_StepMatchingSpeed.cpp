#include "AnimNotifyState/AnimNotifyState_StepMatchingSpeed.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Interface/ISimpleAdvancedAnimation.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"

#if PLATFORM_WINDOWS
#pragma optimize("",off) 
#endif

UAnimNotifyState_StepMatchingSpeed::UAnimNotifyState_StepMatchingSpeed()
{
	bDebug = false;
	PlaneAxis = EAdvancedAnimationPlaneAxis::Type::XZ;

	ABoneName = TEXT("foot_r");
	BBoneName = TEXT("foot_l");

	SpeedCoefficient = 0.5f;
	bCrouched = false;

	MaximumSampling = 3;

	SpeedMin = 18.f;
	SpeedMax = 80.f;

	bClamp = true;
}

void UAnimNotifyState_StepMatchingSpeed::NotifyBegin(
	USkeletalMeshComponent* MeshComp,
	UAnimSequenceBase* Animation, 
	float TotalDuration, 
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	if (ISimpleAdvancedAnimation* InSimpleAdvancedAnimation = Cast<ISimpleAdvancedAnimation>(MeshComp->GetAnimInstance()))
	{
		if (MaximumSampling > InSimpleAdvancedAnimation->SampleCount)
		{
			InSimpleAdvancedAnimation->ResetAdvSpeedTime();
		}
	}
}

void UAnimNotifyState_StepMatchingSpeed::NotifyTick(
	USkeletalMeshComponent* MeshComp,
	UAnimSequenceBase* Animation,
	float FrameDeltaTime, 
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference);

	if (MeshComp->GetOwner() &&
		MeshComp->GetOwner()->GetWorld())
	{
		if (AActor* InCharacter = Cast<AActor>(MeshComp->GetOwner()))
		{
			if (ISimpleAdvancedAnimation* InSimpleAdvancedAnimation = Cast<ISimpleAdvancedAnimation>(MeshComp->GetAnimInstance()))
			{
				if (!InCharacter->GetWorld()->IsNetMode(ENetMode::NM_Client))
				{
					//采样次数是否满足最大
					if (MaximumSampling > InSimpleAdvancedAnimation->SampleCount)
					{
						//更新时间
						InSimpleAdvancedAnimation->UpdateAdvSpeedTime(FrameDeltaTime);
					}
				}
			}

			if (bDebug)
			{
				FVector ABoneLocation = MeshComp->GetBoneLocation(ABoneName);
				FVector BBoneLocation = MeshComp->GetBoneLocation(BBoneName);

				FVector ADir;
				FVector BDir;
				GetDirectionByAisx(InCharacter, ADir, BDir);

				FVector ProjectPointA = ProjectPointOntoPlane(ABoneLocation,
					InCharacter->GetActorLocation(),
					ADir,
					BDir);

				FVector ProjectPointB = ProjectPointOntoPlane(BBoneLocation,
					InCharacter->GetActorLocation(),
					ADir,
					BDir);

				DrawDebugSphere(InCharacter->GetWorld(), ProjectPointA, 5.f, 10.f, FColor::Yellow, false, FrameDeltaTime * 2.f);
				DrawDebugSphere(InCharacter->GetWorld(), ProjectPointB, 5.f, 10.f, FColor::Red, false, FrameDeltaTime * 2.f);

				//记录投影的位置
				DrawDebugLine(InCharacter->GetWorld(), ProjectPointA, ProjectPointB, FColor::Green, false, FrameDeltaTime * 2.f);

				//拿到速度
				if (ACharacter* InMyCharacter = Cast<ACharacter>(InCharacter))
				{
					if (UCharacterMovementComponent* InCharacterMovementComponent = InMyCharacter->GetCharacterMovement())
					{
						float MaxSpeed = 0.f;
						if (!bCrouched)
						{
							switch (MovementMode)
							{
								case EMovementMode::MOVE_Walking:
								{
									MaxSpeed = InCharacterMovementComponent->MaxWalkSpeed;
									break;
								}
								case EMovementMode::MOVE_Swimming:
								{
									MaxSpeed = InCharacterMovementComponent->MaxSwimSpeed;
									break;
								}
								case EMovementMode::MOVE_Flying:
								{
									MaxSpeed = InCharacterMovementComponent->MaxFlySpeed;
									break;
								}
								case EMovementMode::MOVE_Custom:
								{
									MaxSpeed = InCharacterMovementComponent->MaxCustomMovementSpeed;
									break;
								}
							}
						}
						else
						{
							MaxSpeed = InCharacterMovementComponent->MaxWalkSpeedCrouched;
						}

						FVector InPoint = InCharacter->GetActorLocation();
						InPoint.Z += 100.f;

						DrawDebugString(InCharacter->GetWorld(), InPoint, FString::Printf(TEXT("MaxSpeed=%f"), MaxSpeed), nullptr, FColor::Red, FrameDeltaTime * 2.f);
					}
				}
			}
		}
	}
}

void UAnimNotifyState_StepMatchingSpeed::NotifyEnd(
	USkeletalMeshComponent* MeshComp,
	UAnimSequenceBase* Animation, 
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);

	if (MeshComp->GetOwner() &&
		MeshComp->GetOwner()->GetWorld())
	{
		if (ISimpleAdvancedAnimation* InSimpleAdvancedAnimation = Cast<ISimpleAdvancedAnimation>(MeshComp->GetAnimInstance()))
		{
			if (MaximumSampling > InSimpleAdvancedAnimation->SampleCount)
			{
				if (ACharacter* InCharacter = Cast<ACharacter>(MeshComp->GetOwner()))
				{
					if (!InCharacter->GetWorld()->IsNetMode(ENetMode::NM_Client))
					{
						FVector ABoneLocation = MeshComp->GetBoneLocation(ABoneName);
						FVector BBoneLocation = MeshComp->GetBoneLocation(BBoneName);

						FVector ADir;
						FVector BDir;
						GetDirectionByAisx(InCharacter, ADir, BDir);

						FVector ProjectPointA = ProjectPointOntoPlane(ABoneLocation,
							InCharacter->GetActorLocation(),
							ADir,
							BDir);

						FVector ProjectPointB = ProjectPointOntoPlane(BBoneLocation,
							InCharacter->GetActorLocation(),
							ADir,
							BDir);

						float Distance = FVector::Distance(ProjectPointA, ProjectPointB);
						float MaxSpeed = (Distance / InSimpleAdvancedAnimation->GetCurrentAdvSpeedTime()) * SpeedCoefficient;
						
						if (bClamp)
						{
							//做一个限制
							MaxSpeed = FMath::Clamp(MaxSpeed, SpeedMin, SpeedMax);
						}

						if (UCharacterMovementComponent* InCharacterMovementComponent = InCharacter->GetCharacterMovement())
						{
							if (!bCrouched)
							{
								switch (MovementMode)
								{
									case EMovementMode::MOVE_Walking:
									{
										InCharacterMovementComponent->MaxWalkSpeed = MaxSpeed;
										break;
									}
									case EMovementMode::MOVE_Swimming:
									{
										InCharacterMovementComponent->MaxSwimSpeed = MaxSpeed;
										break;
									}
									case EMovementMode::MOVE_Flying:
									{
										InCharacterMovementComponent->MaxFlySpeed = MaxSpeed;
										break;
									}
									case EMovementMode::MOVE_Custom:
									{
										InCharacterMovementComponent->MaxCustomMovementSpeed = MaxSpeed;
										break;
									}
								}
							}
							else
							{
								InCharacterMovementComponent->MaxWalkSpeedCrouched = MaxSpeed;
							}

							InSimpleAdvancedAnimation->UpdateAdvSpeed(MovementMode, MaxSpeed);
						}
					
						InSimpleAdvancedAnimation->SampleCount++;

					}
				}
			}
		}
	}
}

FVector UAnimNotifyState_StepMatchingSpeed::ProjectPointOntoPlane(
	const FVector& Point, 
	const FVector& PlanePoint, 
	const FVector& Forward,
	const FVector& Up)
{
	//求出垂直与前和上的那个轴
	FVector Normal = FVector::CrossProduct(Forward, Up);
	Normal.Normalize();

	//算出相对平面的点位置
	FVector PointToPlanePoint = Point - PlanePoint;

	//求出投射到平面的位置
	FVector Projection = PointToPlanePoint - FVector::DotProduct(PointToPlanePoint, Normal) * Normal;

	//还原到世界位置
	return PlanePoint + Projection;
}

void UAnimNotifyState_StepMatchingSpeed::GetDirectionByAisx(AActor *InActor,FVector& OutADir, FVector& OutBDir)
{
	switch (PlaneAxis)
	{
	case EAdvancedAnimationPlaneAxis::Type::XY:
	{
		OutADir = InActor->GetActorRightVector();
		OutBDir = InActor->GetActorForwardVector();
		break;
	}
	case EAdvancedAnimationPlaneAxis::Type::XZ:
	{
		OutADir = InActor->GetActorForwardVector();
		OutBDir = InActor->GetActorUpVector();

		break;
	}
	case EAdvancedAnimationPlaneAxis::Type::YZ:
	{
		OutADir = InActor->GetActorRightVector();
		OutBDir = InActor->GetActorUpVector();
		break;
	}
	}
}

#if PLATFORM_WINDOWS
#pragma optimize("",on) 
#endif