//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "SimpleDataRegistryResolver.h"
#include "DataRegistrySource.h"

bool FSimpleDataRegistryResolver::ResolveIdToName(
	FName& OutResolvedName, 
	const FDataRegistryId& ItemId, 
	const UDataRegistry* Registry,const UDataRegistrySource* RegistrySource)
{
	TArray<FName> OutNames;
	RegistrySource->GetResolvedNames(OutNames);

	if (OutNames.Contains(ItemId.ItemName))
	{
		OutResolvedName = ItemId.ItemName;

		return true;
	}

	return false;
}
