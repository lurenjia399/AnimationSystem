//Copyright (C) RenZhai.2022.All Rights Reserved.
#include "SimpleComboType.h"
#include "CombatInterface/SimpleCombatInterface.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"

#if PLATFORM_WINDOWS
#pragma optimize("",off) 
#endif

FSimpleComboCheck::FSimpleComboCheck()
	:ComboIndex(INDEX_NONE)
	, bLongPress(false)
	, bShortPress(false)	
	, Character(NULL)
	, MaxIndex(0)
	, ComboID(INDEX_NONE)
{
	CurrentTime = 0.f;
}

void FSimpleComboCheck::UpdateComboIndex()
{
	check(MaxIndex > 0);

	ComboIndex++;
	if (ComboIndex > MaxIndex)
	{
		ComboIndex = 1;
	}

	UpdateDelegate.ExecuteIfBound();

	CurrentTime = 0.f;
}

void FSimpleComboCheck::Press()
{
	if (ComboIndex == INDEX_NONE)
	{
		CurrentTime = 0.f;

		PressDelegate.ExecuteIfBound();
		ComboIndex++;

		check(Character);

		if (Character)
		{
			if (Character->ComboAttackByGameplayTag(ComboGameplayTag))
			{

			}
		}
	}

	bShortPress = true;
	bLongPress = true;
}

void FSimpleComboCheck::Released()
{
	bLongPress = false;

	ReleasedDelegate.ExecuteIfBound();
}

void FSimpleComboCheck::Reset()
{
	ComboIndex = INDEX_NONE;

	ResetDelegate.ExecuteIfBound();

	CurrentTime = 0.f;
}

void FSimpleComboCheck::Tick(float FrameDeltaTime)
{
	if (ComboIndex != INDEX_NONE)
	{
		CurrentTime += FrameDeltaTime;
		if (CurrentTime >= 3.f)
		{
			Reset();
		}
	}
}

FContinuousReleaseSpell::FContinuousReleaseSpell()
	:StartName(TEXT("0"))
	,LoopName(TEXT("1"))
	,EndName(TEXT("2"))
	,BuffPtr(NULL)
{
	DefaultLoopName = LoopName;
}

void FContinuousReleaseSpell::Press()
{
	if (!IsVaild())
	{
		ResetStart();
	}
}

void FContinuousReleaseSpell::ResetLoop(FName NewState)
{
	if (NewState != NAME_None)
	{
		LoopName = NewState;
	}
	else
	{
		ContinuousReleaseSpellName = LoopName;
	}
}

void FContinuousReleaseSpell::ResetEnd(FName NewState)
{
	if (NewState != NAME_None)
	{
		EndName = NewState;
	}
	else
	{
		ContinuousReleaseSpellName = EndName;
	}
}

void FContinuousReleaseSpell::ResetDefaultLoop()
{
	LoopName = DefaultLoopName;
}

void FContinuousReleaseSpell::ResetStart(FName NewState)
{
	if (NewState != NAME_None)
	{
		StartName = NewState;
	}
	else
	{
		ContinuousReleaseSpellName = StartName;
	}
}

void FContinuousReleaseSpell::ResetNewState(FName NewState)
{
	ContinuousReleaseSpellName = NewState;
}

void FContinuousReleaseSpell::Released()
{
	Reset();

	ResetDefaultLoop();
}

void FContinuousReleaseSpell::Reset()
{
	ContinuousReleaseSpellName = NAME_None;
}

bool FContinuousReleaseSpell::IsVaild()const
{
	return ContinuousReleaseSpellName != NAME_None;
}

bool FContinuousReleaseSpell::IsStart()const
{
	return ContinuousReleaseSpellName == StartName;
}

bool FContinuousReleaseSpell::IsLoop()const
{
	return ContinuousReleaseSpellName == LoopName;
}

bool FContinuousReleaseSpell::IsEnd()const
{
	return ContinuousReleaseSpellName == EndName;
}

namespace SimpleComboType
{
	FVector GetCurrentCharacterDirection(ACharacter* InCharacter,const FVector &InDirectionForce)
	{
		FVector V = FVector::ZeroVector;
		if (InCharacter)
		{
			if (InDirectionForce.X != 0.f)
			{
				V += InCharacter->GetActorForwardVector() * InDirectionForce.X;
			}

			if (InDirectionForce.Y != 0.f)
			{
				V += InCharacter->GetActorRightVector() * InDirectionForce.Y;
			}

			if (InDirectionForce.Z != 0.f)
			{
				V += InCharacter->GetActorUpVector() * InDirectionForce.Z;
			}
		}

		return V;
	}
}

FSimpleAttachPointInfo::FSimpleAttachPointInfo()
{
	bUpdate = false;
	Value = 0.f;
}

void FSimpleAttachPointInfo::Start()
{
	bUpdate = false;
}

void FSimpleAttachPointInfo::End()
{
	bUpdate = true;
	Value = 1.f;
}

void FSimpleAttachPointInfo::Tick(float InTime)
{
	if (bUpdate)
	{
		Value -= InTime;
		Value = FMath::Clamp(Value, 0.f, 1.f);

		if (Value <= 0.f)
		{
			Value = 0.f;
			bUpdate = false;
		}
	}
}

#if PLATFORM_WINDOWS
#pragma optimize("",on) 
#endif