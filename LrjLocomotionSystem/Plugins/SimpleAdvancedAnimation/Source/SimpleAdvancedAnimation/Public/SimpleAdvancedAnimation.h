// Copyright (C) RenZhai.2020.All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FSimpleAdvancedAnimationModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
