//Copyright (C) RenZhai.2022.All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "DataRegistrySubsystem.h"
#include "SimpleDataRegistryResolver.h"

class SIMPLEDATAREGISTRYEXTEND_API FSimpleDataRegistryManage
{
public:
	static FSimpleDataRegistryManage* Get();
	static void Destroy();

protected:
	virtual void Structure();
	virtual void Deconstruction();

public:
	virtual ~FSimpleDataRegistryManage(){}

	void RegisterDataRegistryResolver();

public:
	//寻找单个数据表
	template<class T>
	const T* FindCached(FName InRegisterType, int32 InType);

	//寻找多个数据表
	template<class T>
	bool FindCacheds(FName InRegisterType, TArray<const T*>& OutDatas);

private:
	static FSimpleDataRegistryManage *DataRegistryManage;
};

template<class T>
const T* FSimpleDataRegistryManage::FindCached(FName InRegisterType, int32 InType)
{
	if (UDataRegistrySubsystem* Subsystem = GEngine->GetEngineSubsystem<UDataRegistrySubsystem>())
	{
		FDataRegistryId RegistryId;
		RegistryId.ItemName = *FString::FromInt(InType);
		RegistryId.RegistryType = InRegisterType;

		return Subsystem->GetCachedItem<T>(RegistryId);
	}

	return nullptr;
}

template<class T>
inline bool FSimpleDataRegistryManage::FindCacheds(FName InRegisterType, TArray<const T*>& OutDatas)
{
	if (UDataRegistrySubsystem* Subsystem = GEngine->GetEngineSubsystem<UDataRegistrySubsystem>())
	{
		if (const UDataRegistry* FoundRegistry = Subsystem->GetRegistryForType(InRegisterType))
		{
			TMap<FDataRegistryId, const uint8*> OutItemMap;

			const UScriptStruct* TempItemStuct = nullptr;
			FDataRegistryCacheGetResult Result = FoundRegistry->GetAllCachedItems(OutItemMap, TempItemStuct);

			for (auto& TempItemMemory : OutItemMap)
			{
				OutDatas.Add(reinterpret_cast<const T*>(TempItemMemory.Value));
			}

			return true;
		}
	}

	return false;
}