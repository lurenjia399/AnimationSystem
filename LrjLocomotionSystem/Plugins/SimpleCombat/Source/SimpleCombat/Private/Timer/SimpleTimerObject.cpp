#include "Timer/SimpleTimerObject.h"

FSimpleTimerObject::FSimpleTimerObject()
{
	bDebug = false;
	Time = 0.f;
}

bool FSimpleTimerObject::IsFree() const
{
	return !HanleTime.IsValid() && !World.IsValid();
}

void FSimpleTimerObject::Tick(float DeltaTime)
{
	if (!IsFree())
	{
		OnGoing(DeltaTime);
	}
}

void FSimpleTimerObject::Init(UWorld* InWorld, float InTime, const FSimpleTimerDelegate& InDelegate, bool bNewDebug)
{
	if (InTime > 0.03f)
	{
		bDebug = bNewDebug;
		Time = InTime;
		World = InWorld;

		Delegate = InDelegate;

		if (InWorld)
		{
			InWorld->GetTimerManager().SetTimer(
				HanleTime,
				FTimerDelegate::CreateRaw(this, &FSimpleTimerObject::End),
				InTime, false);

			Start();
		}
	}
}

void FSimpleTimerObject::Start()
{
	//开始执行
	Delegate.StartDelegate.ExecuteIfBound();
}

void FSimpleTimerObject::OnGoing(float DeltaTime)
{
	float Elapsed = World->GetTimerManager().GetTimerElapsed(HanleTime);
	if (Elapsed == (float)INDEX_NONE)
	{
		Elapsed = 1.f;
	}

	float Ratio = Elapsed / Time;

	Delegate.OnGoingDelegate.ExecuteIfBound(Ratio, DeltaTime);

	if (bDebug)
	{
		if (GEngine)
		{
			float Remaining = World->GetTimerManager().GetTimerRemaining(HanleTime);
			float Rate = World->GetTimerManager().GetTimerRate(HanleTime);

			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red,
				FString::Printf(TEXT("Elapsed=%f,Remaining=%f,Rate=%f"), Elapsed, Remaining, Rate));
		}
	}	
}

void FSimpleTimerObject::End()
{
	if (World.IsValid())
	{
		if (HanleTime.IsValid())
		{
			World->GetTimerManager().ClearTimer(HanleTime);
		}

		//开始执行
		Delegate.EndDelegate.ExecuteIfBound();
	}

	World = NULL;
	Time = 0.f;
}
