//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController/SAIBTModularAIController.h"
#include "SimpleAIBehaviorTreeExtendType.h"
#include "SAIBTController.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnSAIBTAIStateChanged, const ASAIBTController* AIControllerPtr);

UCLASS()
class SIMPLEAIBEHAVIORTREEEXTEND_API ASAIBTController : public ASAIBTModularAIController
{
	GENERATED_BODY()

public:
	virtual void SetTargetForce(AActor* InTarget);

public:
	UFUNCTION(BlueprintCallable, Category = "MMOARPG AI Controller")
	AActor* GetTarget();

	UFUNCTION(BlueprintCallable, Category = "MMOARPG AI Controller")
	virtual AActor* MMOARPGFindTarget();

public:
	virtual AActor* FindTarget(float InSearchScope);

	//是否处于攻击中
	virtual bool IsAttack(const FGameplayTag& AttackTag) const;
	virtual UGameplayAbility *Attack(AActor* InTarget,const FGameplayTag &AttackTag);
	virtual void Attack(const int32& InTag);
	virtual void Attack(const FName& InTag);
	void SetOriginalLocation(const FVector& InNewLocation);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Begin AActor Interface
	virtual void Tick(float DeltaTime) override;
	virtual void OnPossess(APawn* InPawn) override;

private:
	// 执行Tick的间隔
	UPROPERTY(EditDefaultsOnly, Category = "MMOARPG AI Controller|Defaults")
	float TickInterval = 0.5f;

	// 控制Tick的变量
	float NextTickTime = 0.f;

	// 执行慢Tick的间隔
	UPROPERTY(EditDefaultsOnly, Category = "MMOARPG AI Controller|Defaults")
	float SlowTickInterval = 2.f;

	// 控制慢Tick的变量
	float NextSlowTickTime = 0.f;

	/************** AI战斗 **************/
public:
	// 实时检测目标
	virtual void CheckTargetAroundSelf();

	// 检测目标是否在视野内
	UFUNCTION(BlueprintCallable, Category = "MMOARPG AI Controller|Battle")
	bool CheckIsTargetInSight(const AActor* TargetActor);

	// 获取当前状态
	UFUNCTION(BlueprintCallable, Category = "MMOARPG AI Controller|Battle")
	const ESAIBTState& GetMonsterState() const;

protected:
	// AI状态切换的状态机
	void MonsterStateSwitcher(float DeltaTime);

public:
	// 状态切换Delegate
	FOnSAIBTAIStateChanged OnSAIBTAIStateChanged;

protected:
	// 从Character中获取的Attribute配置
	FSAIBTAttribute CharacterAttribute;

	// AI当前状态
	UPROPERTY(BlueprintReadOnly, Category = "MMOARPG AI Controller|Battle")
	ESAIBTState MonsterState = ESAIBTState::MS_Leisure;

	// 用于AI状态的计时器
	UPROPERTY()
	float MonsterStateTimer = 0;

	/************** 预留接口 **************/
public:
	UFUNCTION(BlueprintCallable, Category = "MMOARPG AI Controller|Common")
	const bool& CanRunBehavior() { return bCanRunBehavior; }

private:
	bool bCanRunBehavior = true;

	/************** 仇恨值相关 **************/
public:
	UFUNCTION(BlueprintCallable, Category = "MMOARPG AI Controller|Threat")
	void RemoveThreatTarget(AActor* TargetPtr, const bool& bIsSpecialRemove = false);

	UFUNCTION(BlueprintCallable, Category = "MMOARPG AI Controller|Threat")
	void AddThreatTarget(AActor* TargetPtr);

	UFUNCTION(BlueprintCallable, Category = "MMOARPG AI Controller|Threat")
	void UpdateTargetThreat(AActor* TargetPtr, const EThreatType& ThreatType, const float& ModifyValue, const bool& bIsOverride = false);

	UFUNCTION(BlueprintCallable, Category = "MMOARPG AI Controller|Threat")
	AActor* GetMaxThreatTarget();

protected:
	bool GetThreatValueByType(const TWeakObjectPtr<AActor>& TargetPtr, const EThreatType& ThreatType, float& ThreatValue);
	
	// 刷新仇恨列表
	void RefreshThreatMap(float DeltaTime = 0.f);
	
	// 当目标列表更新时
	UFUNCTION(BlueprintCallable, Category = "MMOARPG AI Controller|Threat")
	void OnThreatTargetAdded();
	
	// 更新Target黑板值
	UFUNCTION(BlueprintCallable, Category = "MMOARPG AI Controller|Threat")
	void UpdateBlackboardValueTarget();

private:
	// 测试
	UFUNCTION(BlueprintCallable, Category = "MMOARPG AI Controller|Threat")
	void PrintThreatMap();

protected:
	// 仇恨总值列表 TPair<仇恨值，持续时间>
	TMap<TWeakObjectPtr<AActor>, int32> TargetThreatMap;

	// 目标伤害列表
	TMap<TWeakObjectPtr<AActor>, float> TargetDamageMap;

	// 目标距离列表
	TMap<TWeakObjectPtr<AActor>, float> TargetDistanceMap;

	// 其他仇恨列表（例如技能改变仇恨值）
	TMap<TWeakObjectPtr<AActor>, float> TargetOtherThreatMap;

	// 目标仇恨值下降值列表，TPair<下降值, 已下降时间>，已下降时间用于修正下降值
	TMap<TWeakObjectPtr<AActor>, TPair<float, float>> TargetThreatDropMap;

	/************** 小队AI **************/
public:
	// 是否为小队AI
	UFUNCTION(BlueprintCallable, Category = "MMOARPG AI Controller|Team")
	const bool& GetIsTeamAI() const;
	
	// 是否是小队队长
	UFUNCTION(BlueprintCallable, Category = "MMOARPG AI Controller|Team")
	const bool& GetIsTeamCaptain() const;
	
	// 获取小队队长
	TWeakObjectPtr<ASAIBTController> GetTeamCaptain() const;
	
	UFUNCTION(BlueprintCallable, Category = "MMOARPG AI Controller|Team", meta = (DisplayName = "GetTeamCaptain"))
	ASAIBTController* BP_GetTeamCaptain() const;
	
	// 设置为小队AI
	void SetIsTeamAI();

	// 设置为队长
	void SetCaptain();

	// 从小队中移除队员
	void RemoveTeamMember(const TWeakObjectPtr<ASAIBTController>& InTeamMember);

	// 通知队员移除自己
	void NotifyRemoveSelfToTeamMember();

	// 移交队长
	void TransferCaptain();

	// 初始化小队成员
	void InitTeamMember(const TArray<TWeakObjectPtr<ASAIBTController>>& InTeamMember);

protected:
	bool IsTeamAI = false;
	bool IsTeamCaptain = false;
	TArray<TWeakObjectPtr<ASAIBTController>> TeamMember;

	FTimerHandle TimerHandle;
};