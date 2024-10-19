#include "Timer/SimpleTimerManage.h"

void FSimpleTimerManage::Tick(float DeltaTime)
{
	for (auto& Tmp : TimerObjects)
	{
		if (!Tmp.IsFree())
		{
			Tmp.Tick(DeltaTime);
		}
	}
}

void FSimpleTimerManage::SubmitCommand(UWorld* InWorld, float InTime, const FSimpleTimerDelegate& InTimerDelegate,bool bNewDebug)
{
	for (auto& Tmp : TimerObjects)
	{
		if (Tmp.IsFree())
		{
			Tmp.Init(InWorld, InTime, InTimerDelegate,bNewDebug);

			return;
		}
	}

	TimerObjects.AddDefaulted_GetRef().Init(InWorld, InTime, InTimerDelegate, bNewDebug);
}
