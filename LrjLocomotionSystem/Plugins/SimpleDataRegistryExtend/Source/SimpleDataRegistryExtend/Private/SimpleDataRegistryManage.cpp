//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "SimpleDataRegistryManage.h"
#include "SimpleDataRegistryResolver.h"

FSimpleDataRegistryManage* FSimpleDataRegistryManage::DataRegistryManage = NULL;

FSimpleDataRegistryManage* FSimpleDataRegistryManage::Get()
{
	if (!DataRegistryManage)
	{
		DataRegistryManage = new FSimpleDataRegistryManage();
		DataRegistryManage->Structure();
	}

	return DataRegistryManage;
}

void FSimpleDataRegistryManage::Destroy()
{
	if (DataRegistryManage)
	{
		DataRegistryManage->Deconstruction();

		delete DataRegistryManage;
	}

	DataRegistryManage = NULL;
}

void FSimpleDataRegistryManage::Structure()
{
	DataRegistryManage->RegisterDataRegistryResolver();
}

void FSimpleDataRegistryManage::Deconstruction()
{

}

void FSimpleDataRegistryManage::RegisterDataRegistryResolver()
{
	FDataRegistryResolverScope::RegisterGlobalResolver(MakeShareable(new FSimpleDataRegistryResolver()));
}