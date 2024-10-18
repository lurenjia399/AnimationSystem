//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "AIController/SAIBTController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AIHelpers.h"
#include "Runtime/Launch/Resources/Version.h"
#include "SimpleAIBehaviorTreeExtendLog.h"
#include "Interface/SAIBTCharacterInterface.h"
#include "Interface/SAIBTAIInterface.h"
#include "Core/SimpleAIBehaviorTreeExtendMethod.h"
#include "GameFramework/Character.h"

#if ENABLE_DRAW_DEBUG
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION <= 2
#include "../Private/KismetTraceUtils.h"
#else
#include "KismetTraceUtils.h"
#include "Kismet/KismetSystemLibrary.h"
#endif
#endif

void ASAIBTController::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]()
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(TimerHandle))
		{
			GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
		}

		if (GetPawn())
		{
			SetOriginalLocation(GetPawn()->GetActorLocation());
		}
	},0.5f, false);
}

void ASAIBTController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (GetWorld()->GetTimerManager().IsTimerActive(TimerHandle))
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	}
}

void ASAIBTController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	NextTickTime -= DeltaTime;
	NextSlowTickTime -= DeltaTime;

	// 一般Tick
	if (NextTickTime <= 0.f)
	{
		NextTickTime = TickInterval;

		// 处理仇恨列表
		RefreshThreatMap(TickInterval);
		// AI状态
		MonsterStateSwitcher(TickInterval);
	}

	// 慢Tick
	if (NextSlowTickTime <= 0.f)
	{
		NextSlowTickTime = SlowTickInterval;

		// 检测目标
		CheckTargetAroundSelf();
	}
}

void ASAIBTController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (ISAIBTAIInterface* AICharacterPtr = Cast<ISAIBTAIInterface>(InPawn))
	{
		CharacterAttribute = AICharacterPtr->GetAIAttribute();
	}
}

void ASAIBTController::SetOriginalLocation(const FVector& InNewLocation)
{
	if (GetBlackboardComponent())
	{
		GetBlackboardComponent()->SetValueAsVector(TEXT("OriginalLocation"), InNewLocation);
	}
}

AActor* ASAIBTController::FindTarget(float InSearchScope)
{
	if (ISAIBTCharacterInterface* InPawn = Cast<ISAIBTCharacterInterface>(GetPawn()))
	{
		TArray<ECharacterType> IgnoreTypes;

		if (InPawn->GetCharacterType() == ECharacterType::CHARACTER_MONSTER || InPawn->GetCharacterType() == ECharacterType::CHARACTER_BOSS)
		{
			IgnoreTypes.Add(ECharacterType::CHARACTER_MONSTER);
			IgnoreTypes.Add(ECharacterType::CHARACTER_BOSS);
		}

		return SimpleAIBehaviorTreeExtendMethod::FindTarget(GetPawn(), IgnoreTypes, InSearchScope);
	}

	return NULL;
}

AActor* ASAIBTController::GetTarget()
{
	if (GetBlackboardComponent())
	{
		return Cast<AActor>(GetBlackboardComponent()->GetValueAsObject("Target"));
	}

	return NULL;
}

AActor* ASAIBTController::MMOARPGFindTarget()
{
	if (IsTeamAI && !IsTeamCaptain)
	{
		TWeakObjectPtr<ASAIBTController> CaptainPtr = GetTeamCaptain();
		if (CaptainPtr.IsValid())
		{
			AActor* CaptainTarget = CaptainPtr->GetTarget();
			if (CaptainTarget)
			{
				// 当队长存在有效目标时队员使用该目标
				return CaptainTarget;
			}
		}
	}
	// 默认使用自己的目标
	return GetMaxThreatTarget();
}

void ASAIBTController::Attack(const int32& InTag)
{
	if (ISAIBTCharacterInterface* OwnerCharacter = Cast<ISAIBTCharacterInterface>(GetPawn()))
	{
		OwnerCharacter->SAIBT_Attack(InTag);
	}
}

void ASAIBTController::Attack(const FName& InTag)
{
	if (ISAIBTCharacterInterface* OwnerCharacter = Cast<ISAIBTCharacterInterface>(GetPawn()))
	{
		OwnerCharacter->SAIBT_Attack(InTag);
	}
}

bool ASAIBTController::IsAttack(const FGameplayTag& AttackTag) const
{
	if (ISAIBTCharacterInterface* OwnerCharacter = Cast<ISAIBTCharacterInterface>(GetPawn()))
	{
		return OwnerCharacter->IsSAIB_Attack(AttackTag);
	}

	return false;
}

UGameplayAbility *ASAIBTController::Attack(AActor* InTarget, const FGameplayTag& AttackTag)
{
	if (ISAIBTCharacterInterface* OwnerCharacter = Cast<ISAIBTCharacterInterface>(GetPawn()))
	{
		if (ACharacter* InOwnerCharacter = Cast<ACharacter>(GetPawn()))
		{
			OwnerCharacter->SAIBT_Attack(AttackTag.GetTagName());
			OwnerCharacter->SAIBT_Attack(InTarget);
			OwnerCharacter->SAIBT_AttackByGameplayTag(AttackTag);
			return OwnerCharacter->SAIBT_AttackByGameplayTag(InTarget,AttackTag);
		}
	}

	return nullptr;
}

void ASAIBTController::SetTargetForce(AActor* InTarget)
{
	if (GetBlackboardComponent())
	{
		GetBlackboardComponent()->SetValueAsObject("Target", InTarget);
	}
}

void ASAIBTController::CheckTargetAroundSelf()
{
	
}

bool ASAIBTController::CheckIsTargetInSight(const AActor* TargetActor)
{
	if (TargetActor == nullptr)
	{
		return false;
	}

	APawn* AICharacterPtr = GetPawn();
	if (AICharacterPtr == nullptr)
	{
		return false;
	}

	// 检测是否在视锥范围内
	float SightHalfAngleRadian = FMath::Cos(FMath::Clamp(FMath::DegreesToRadians(CharacterAttribute.BattleAttribute.SightHalfAngle), 0.f, PI));
	bool IsInCone = FAISystem::CheckIsTargetInSightCone(AICharacterPtr->GetActorLocation(), AICharacterPtr->GetActorForwardVector(), SightHalfAngleRadian,
		CharacterAttribute.BattleAttribute.BackwardOffset, 0.f, CharacterAttribute.BattleAttribute.SightDistance * CharacterAttribute.BattleAttribute.SightDistance, TargetActor->GetActorLocation());
	
	if (IsInCone)
	{
		// 是否未被其他物体阻挡
		FHitResult HitResult;
		FCollisionQueryParams QueryParams(NAME_None, false, AICharacterPtr);
		HitResult.bBlockingHit = true;
		FVector StartLoc = AICharacterPtr->GetActorLocation();
		bool HitSuccess = GetWorld() != nullptr ? GetWorld()->LineTraceSingleByChannel(HitResult, StartLoc, TargetActor->GetActorLocation(), ECC_SightCheck, QueryParams) : false;

#if ENABLE_DRAW_DEBUG
		DrawDebugLineTraceSingle(GetWorld(), StartLoc, TargetActor->GetActorLocation(), EDrawDebugTrace::ForDuration, HitSuccess, HitResult, FLinearColor::Red, FLinearColor::Green, 2.f);
#endif
		return HitSuccess && HitResult.GetActor() == TargetActor;
	}
	else
	{
		return false;
	}
}

void ASAIBTController::MonsterStateSwitcher(float DeltaTime)
{
	AActor* TargetCharacterPtr = GetTarget();
	ESAIBTState OldMonsterState = MonsterState;
	switch (MonsterState)
	{
	case ESAIBTState::MS_Leisure:
	{
		// 默认重置计时器
		MonsterStateTimer = CharacterAttribute.ThreatAttribute.ForgetTargetTime;

		// 当怪在巡逻范围外时不会切换状态
		UBlackboardComponent* BBPtr = GetBlackboardComponent();
		if (BBPtr && GetPawn())
		{
			if ((BBPtr->GetValueAsVector(TEXT("OriginalLocation")) - GetPawn()->GetActorLocation()).SquaredLength() > CharacterAttribute.BattleAttribute.PatrolRange * CharacterAttribute.BattleAttribute.PatrolRange)
			{
				break;
			}
		}

		// 休闲状态下当存在目标时发生状态转换
		if (TargetCharacterPtr != nullptr)
		{
			// 目标在视野内直接进入战斗状态
			if (CheckIsTargetInSight(TargetCharacterPtr))
			{
				MonsterState = ESAIBTState::MS_Battle;
			}
			// 其他情况下进入警惕状态
			else
			{
				MonsterState = ESAIBTState::MS_Alert;
			}
		}

		break;
	}
	case ESAIBTState::MS_Alert:
	{
		// 警惕状态下若目标在视野范围内进入战斗状态
		if (TargetCharacterPtr != nullptr)
		{
			if (CheckIsTargetInSight(TargetCharacterPtr))
			{
				MonsterState = ESAIBTState::MS_Battle;
			}
			// 重置计时器
			MonsterStateTimer = CharacterAttribute.ThreatAttribute.ForgetTargetTime;
		}

		// 无目标时在遗忘目标后回到休闲状态
		else
		{
			MonsterStateTimer -= DeltaTime;
			if (MonsterStateTimer <= 0.f)
			{
				MonsterState = ESAIBTState::MS_Leisure;
			}
		}

		break;
	}
	case ESAIBTState::MS_Battle:
	{
		// 当超出有效范围后立刻回到休闲状态
		UBlackboardComponent* BBPtr = GetBlackboardComponent();
		if (BBPtr && BBPtr->GetValueAsFloat(TEXT("Distance")) > CharacterAttribute.BattleAttribute.EffectiveRadius)
		{
			MonsterState = ESAIBTState::MS_Leisure;
		}
		// 战斗状态下无目标时在遗忘目标后回到休闲状态
		else if (TargetCharacterPtr == nullptr)
		{
			MonsterStateTimer -= DeltaTime;
			if (MonsterStateTimer <= 0.f)
			{
				MonsterState = ESAIBTState::MS_Leisure;
			}
		}

		break;
	}
	default:
		break;
	}

	// 当状态切换时调用事件
	if (OldMonsterState != MonsterState)
	{
		OnSAIBTAIStateChanged.Broadcast(this);
	}

	// 将状态信息写入黑板值
	if (UBlackboardComponent* BlackboardPtr = GetBlackboardComponent())
	{
		BlackboardPtr->SetValueAsEnum(TEXT("MonsterState"), (uint8)MonsterState);
	}
}

void ASAIBTController::UpdateTargetThreat(AActor* TargetPtr, const EThreatType& ThreatType, const float& ModifyValue, const bool& bIsOverride /*= false*/)
{
	float TmpThreatValue;
	if (!GetThreatValueByType(TargetPtr, ThreatType, TmpThreatValue))
	{
		if (ThreatType == EThreatType::TT_Damage)
		{
			// 伤害来源未成为目标
			TargetDamageMap.Emplace(TargetPtr, ModifyValue);
			AddThreatTarget(TargetPtr);
			return;
		}
		else
		{
			return;
		}
	}

	TmpThreatValue = bIsOverride ? ModifyValue : TmpThreatValue + ModifyValue;
	switch (ThreatType)
	{
	case EThreatType::TT_Damage:
	{
		TargetDamageMap[TargetPtr] = TmpThreatValue;
		break;
	}
	case EThreatType::TT_Others:
	{
		TargetOtherThreatMap[TargetPtr] = TmpThreatValue;
		break;
	}
	default:
		return;
	}
}

const ESAIBTState& ASAIBTController::GetMonsterState() const
{
	return MonsterState;
}

void ASAIBTController::RemoveThreatTarget(AActor* TargetPtr, const bool& bIsSpecialRemove /*= false*/)
{
	// 该判断为for循环中的TargetThreatMap::Iterator服务
	if (!bIsSpecialRemove)
	{
		TargetThreatMap.Remove(TargetPtr);
	}
	TargetDamageMap.Remove(TargetPtr);
	TargetDistanceMap.Remove(TargetPtr);
	TargetOtherThreatMap.Remove(TargetPtr);
	TargetThreatDropMap.Remove(TargetPtr);
}

void ASAIBTController::AddThreatTarget(AActor* TargetPtr)
{
	if (!TargetThreatMap.Contains(TargetPtr))
	{
		TargetThreatMap.Emplace(TargetPtr);
		TargetDamageMap.FindOrAdd(TargetPtr);
		TargetDistanceMap.FindOrAdd(TargetPtr);
		TargetOtherThreatMap.FindOrAdd(TargetPtr);
		OnThreatTargetAdded();
	}
}

AActor* ASAIBTController::GetMaxThreatTarget()
{
	// 排序找到仇恨值最大的目标
	TWeakObjectPtr<AActor> MaxThreatTarget = nullptr;

	int32 MaxThreat = 0;

	// 所有目标对AI造成的伤害总值
	float TotalDamage = 0.f;
	for (auto It = TargetDamageMap.CreateConstIterator(); It; ++It)
	{
		if (ISAIBTCharacterInterface *InSAIBT = Cast<ISAIBTCharacterInterface>(It.Key()))
		{
			if (It->Key.IsValid() && !InSAIBT->IsDie())
			{
				TotalDamage += It->Value;
			}
		}
	}

	// 计算每个目标当前的仇恨值
	for (auto It = TargetThreatMap.CreateIterator(); It; ++It)
	{
		if (ISAIBTCharacterInterface* InCharacterInterface = Cast<ISAIBTCharacterInterface>(It.Key()))
		{
			if (!It->Key.IsValid() || InCharacterInterface->IsDie())
			{
				// 当目标死亡或不存在时直接从列表中清除
				RemoveThreatTarget(It->Key.Get(), true);
				It.RemoveCurrent();
			}
			else
			{
				// 仇恨值 = 仇恨基础总值 * (伤害仇恨比例 + 距离仇恨比例) + 额外仇恨值
				// 计算伤害仇恨比例
				float DamageThreat = 0.f;
				if (TotalDamage > 0.f && TargetDamageMap.Contains(It->Key))
				{
					DamageThreat = TargetDamageMap[It->Key] / TotalDamage;
				}
				// 计算距离仇恨
				float DistanceThreat = 0.f;
				if (CharacterAttribute.BattleAttribute.ChaseDistance > 0.f && TargetDistanceMap.Contains(It->Key))
				{
					DistanceThreat = (CharacterAttribute.BattleAttribute.ChaseDistance - TargetDistanceMap[It->Key]) / CharacterAttribute.BattleAttribute.ChaseDistance;
					DistanceThreat = DistanceThreat < 0.f ? 0.f : DistanceThreat;
				}
				// 计算当前总仇恨值
				int32 CurThreatValue = CharacterAttribute.ThreatAttribute.ThreatBasicTotal * (CharacterAttribute.ThreatAttribute.DamageThreatRate * DamageThreat + DistanceThreat * CharacterAttribute.ThreatAttribute.DistanceThreatRate);
				if (float* OtherThreat = TargetOtherThreatMap.Find(It->Key))
				{
					CurThreatValue += *OtherThreat;
				}

				It->Value = CurThreatValue;
				// 与当前仇恨值最高的目标作比较
				if (CurThreatValue > MaxThreat)
				{
					MaxThreat = CurThreatValue;
					MaxThreatTarget = It->Key;
				}
			}
		}
	}

	PrintThreatMap();
	return MaxThreatTarget.Get();
}

bool ASAIBTController::GetThreatValueByType(const TWeakObjectPtr<AActor>& TargetPtr, const EThreatType& ThreatType, float& ThreatValue)
{
	TMap<TWeakObjectPtr<AActor>, float> TmpDamageMap;

	switch (ThreatType)
	{
		case EThreatType::TT_Damage:
		{
			TmpDamageMap = TargetDamageMap;
		}
		case EThreatType::TT_Distance:
		{
			TmpDamageMap = TargetDistanceMap;
		}
		case EThreatType::TT_Others:
		{
			TmpDamageMap = TargetOtherThreatMap;
		}
	}

	for (auto &Tmp : TmpDamageMap)
	{
		if (Tmp.Key.Get() == TargetPtr.Get())
		{
			ThreatValue = Tmp.Value;

			return true;
		}
	}

	return false;
}

void ASAIBTController::RefreshThreatMap(float DeltaTime /*= 0.f*/)
{
	ISAIBTCharacterInterface* AICharacterPtr = Cast<ISAIBTCharacterInterface>(GetPawn());
	if (AICharacterPtr == nullptr)
	{
		return;
	}

	for (auto TargetIt = TargetThreatMap.CreateIterator(); TargetIt; ++TargetIt)
	{
		if (!TargetIt->Key.IsValid())
		{
			continue;
		}

		TWeakObjectPtr<AActor> TmpTarget = TargetIt->Key;

		// 刷新距离
		FVector TargetLocation = TmpTarget->GetActorLocation();
		float& TargetDistance = TargetDistanceMap.FindOrAdd(TmpTarget);
		TargetDistance = (float)(GetPawn()->GetActorLocation() - TargetLocation).Length();

		// 定时处理的逻辑
		if (DeltaTime > 0.f)
		{
			UBlackboardComponent* BlackboardPtr = GetBlackboardComponent();
			if (BlackboardPtr == nullptr)
			{
				continue;
			}

			// 当玩家超出AI的追击距离或有效范围时，伤害仇恨值将下降
			FVector OriginalLocation = BlackboardPtr->GetValueAsVector(TEXT("OriginalLocation"));	// 出生点
			double EffectiveSquareDistance = (OriginalLocation - TargetLocation).SquaredLength();	// 有效距离的平方
			if (TargetDistance > CharacterAttribute.BattleAttribute.ChaseDistance || EffectiveSquareDistance > CharacterAttribute.BattleAttribute.EffectiveRadius * CharacterAttribute.BattleAttribute.EffectiveRadius)
			{
				// 目标已造成伤害
				if (TargetDamageMap.Contains(TmpTarget))
				{
					// 如果不存在下降值，则根据ThreatDropRate计算该值并保存，下一次Refresh操作再降低伤害仇恨值
					float& DamageThreatValue = TargetDamageMap[TmpTarget];	// 当前伤害仇恨值
					if (!TargetThreatDropMap.Contains(TmpTarget))
					{
						TargetThreatDropMap.Emplace(TmpTarget, { DamageThreatValue * CharacterAttribute.ThreatAttribute.ThreatDropRate, 0.f });	// 0为下降值维持的时间
					}
					else
					{
						// 下降值需要修正
						if (TargetThreatDropMap[TmpTarget].Value >= CharacterAttribute.ThreatAttribute.CorrectThreatDropValueTime)
						{
							float NewThreatDropValue = DamageThreatValue * CharacterAttribute.ThreatAttribute.ThreatDropRate;
							// 只有新修正值大于原修正值时才会覆盖
							if (TargetThreatDropMap[TmpTarget].Key < NewThreatDropValue)
							{
								TargetThreatDropMap[TmpTarget].Key = NewThreatDropValue;
							}
							// 刷新下降值的持续时间
							TargetThreatDropMap[TmpTarget].Value = 0.f;
						}
						else
						{
							TargetThreatDropMap[TmpTarget].Value += DeltaTime;
						}
						// 伤害仇恨值下降
						DamageThreatValue -= TargetThreatDropMap[TmpTarget].Key * DeltaTime;
						// 如果伤害仇恨值小于等于0，则将该目标从列表中清除
						if (DamageThreatValue <= 0.f)
						{
							RemoveThreatTarget(TmpTarget.Get(), true);
							TargetIt.RemoveCurrent();
						}
					}
				}
				else
				{
					// 未造成伤害直接从目标列表移除
					RemoveThreatTarget(TmpTarget.Get(), true);
					TargetIt.RemoveCurrent();
				}
			}
			else
			{
				// 在范围内则无需下降伤害仇恨值
				TargetThreatDropMap.Remove(TmpTarget);
			}
		}
	}
}

void ASAIBTController::OnThreatTargetAdded()
{
	RefreshThreatMap();
	UpdateBlackboardValueTarget();
}

void ASAIBTController::UpdateBlackboardValueTarget()
{
	UBlackboardComponent* BlackboardPtr = GetBlackboardComponent();
	if (BlackboardPtr)
	{
		ISAIBTCharacterInterface* CurTarget = Cast<ISAIBTCharacterInterface>(BlackboardPtr->GetValueAsObject(TEXT("Target")));
		if (!CurTarget || CurTarget->IsDie())
		{
			BlackboardPtr->SetValueAsObject(TEXT("Target"), GetMaxThreatTarget());
		}
	}
}

void ASAIBTController::PrintThreatMap()
{
	if (TargetThreatMap.IsEmpty())
	{
		UE_LOG(SimpleAIBehaviorTreeExtendLog, Log, TEXT("No Threat Target"));
	}
	else
	{
		int32 TargetNumber = 0;
		for (const auto& ThreatPair : TargetThreatMap)
		{
			if (ThreatPair.Key.IsValid())
			{
				++TargetNumber;
				UE_LOG(SimpleAIBehaviorTreeExtendLog, Log, TEXT("ThreatTarget%d: TargetName: %s, ThreatValue: %d"), TargetNumber, *ThreatPair.Key.Get()->GetName(), ThreatPair.Value);
			}
		}
	}
}

const bool& ASAIBTController::GetIsTeamAI() const
{
	return IsTeamAI;
}

const bool& ASAIBTController::GetIsTeamCaptain() const
{
	return IsTeamCaptain;
}

TWeakObjectPtr<ASAIBTController> ASAIBTController::GetTeamCaptain() const
{
	for (const auto& Member : TeamMember)
	{
		if (Member.IsValid() && Member->GetIsTeamAI() && Member->GetIsTeamCaptain())
		{
			return Member;
		}
	}

	return nullptr;
}

ASAIBTController* ASAIBTController::BP_GetTeamCaptain() const
{
	return GetTeamCaptain().Get();
}

void ASAIBTController::SetIsTeamAI()
{
	IsTeamAI = true;
}

void ASAIBTController::SetCaptain()
{
	if (IsTeamAI)
	{
		IsTeamCaptain = true;
	}
}

void ASAIBTController::RemoveTeamMember(const TWeakObjectPtr<ASAIBTController>& InTeamMember)
{
	for (auto& Member : TeamMember)
	{
		if (Member == InTeamMember)
		{
			TeamMember.Remove(Member);
			break;
		}
	}
}

void ASAIBTController::NotifyRemoveSelfToTeamMember()
{
	if (IsTeamAI)
	{
		for (auto& Member : TeamMember)
		{
			if (Member.IsValid() && Member != this)
			{
				Member->RemoveTeamMember(this);
			}
		}
	}
}

void ASAIBTController::TransferCaptain()
{
	if (IsTeamAI && IsTeamCaptain)
	{
		// 将小队中已死亡的队员与自己移除
		for (TArray<TWeakObjectPtr<ASAIBTController>>::TIterator It = TeamMember.CreateIterator(); It; ++It)
		{
			if (!It->IsValid())
			{
				It.RemoveCurrent();
			}
			if (It->Get() == this)
			{
				It.RemoveCurrent();
			}

			ISAIBTCharacterInterface* TmpCharacterPtr = Cast<ISAIBTCharacterInterface>(It->Get()->GetPawn());
			if (TmpCharacterPtr == nullptr || TmpCharacterPtr->IsDie())
			{
				It.RemoveCurrent();
			}
		}
		// 随机指定一位队员作为新的队长
		if (TeamMember.Num() > 0)
		{
			TWeakObjectPtr<ASAIBTController> NewCaptain = TeamMember[FMath::RandRange(0, TeamMember.Num() - 1)];
			NewCaptain->SetCaptain();
		}
	}
}

void ASAIBTController::InitTeamMember(const TArray<TWeakObjectPtr<ASAIBTController>>& InTeamMember)
{
	// 仅允许初始化调用
	if (!IsTeamAI || TeamMember.Num() > 0)
	{
		return;
	}
	TeamMember = InTeamMember;
}