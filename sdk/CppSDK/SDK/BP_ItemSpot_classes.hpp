#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemSpot

#include "Basic.hpp"

#include "ProjectP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ItemSpot.BP_ItemSpot_C
// 0x0000 (0x0378 - 0x0378)
class ABP_ItemSpot_C final : public ALPropItemSpot
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ItemSpot_C">();
	}
	static class ABP_ItemSpot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ItemSpot_C>();
	}
};
static_assert(alignof(ABP_ItemSpot_C) == 0x000008, "Wrong alignment on ABP_ItemSpot_C");
static_assert(sizeof(ABP_ItemSpot_C) == 0x000378, "Wrong size on ABP_ItemSpot_C");

}

