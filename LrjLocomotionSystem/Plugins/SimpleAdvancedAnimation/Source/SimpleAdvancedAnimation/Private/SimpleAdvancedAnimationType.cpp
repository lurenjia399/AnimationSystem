// Copyright (C) RenZhai.2020.All Rights Reserved.
#include "SimpleAdvancedAnimationType.h"

FFootIKInfo::FFootIKInfo()
{
	Offset = 0.f;
}

void FFootStepInfo::Tick(float Deltaseconds)
{
	if (bUpdateAlpha)
	{
		if (Alpha != 1.f)
		{
			Alpha += Deltaseconds;

			Alpha = FMath::Clamp(Alpha, 0.f, 1.f);
		}
	}
	else 
	{
		if (Alpha != 0.f)
		{
			Alpha -= Deltaseconds;

			Alpha = FMath::Clamp(Alpha, 0.f, 1.f);
		}
	}
}
