// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

DECLARE_DELEGATE_TwoParams(FSimpleTwoParamsDelegate, float, float);

struct FSimpleTimerDelegate
{
	FSimpleDelegate				StartDelegate;
	FSimpleTwoParamsDelegate	OnGoingDelegate;
	FSimpleDelegate				EndDelegate;
};