#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavFilter_BossType

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NavFilter_BossType.NavFilter_BossType_C
// 0x0000 (0x0048 - 0x0048)
class UNavFilter_BossType_C final : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavFilter_BossType_C">();
	}
	static class UNavFilter_BossType_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavFilter_BossType_C>();
	}
};
static_assert(alignof(UNavFilter_BossType_C) == 0x000008, "Wrong alignment on UNavFilter_BossType_C");
static_assert(sizeof(UNavFilter_BossType_C) == 0x000048, "Wrong size on UNavFilter_BossType_C");

}

