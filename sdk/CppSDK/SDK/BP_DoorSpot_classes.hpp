#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DoorSpot

#include "Basic.hpp"

#include "ProjectP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DoorSpot.BP_DoorSpot_C
// 0x0000 (0x0360 - 0x0360)
class ABP_DoorSpot_C final : public ALPropDoorSpot
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DoorSpot_C">();
	}
	static class ABP_DoorSpot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DoorSpot_C>();
	}
};
static_assert(alignof(ABP_DoorSpot_C) == 0x000008, "Wrong alignment on ABP_DoorSpot_C");
static_assert(sizeof(ABP_DoorSpot_C) == 0x000360, "Wrong size on ABP_DoorSpot_C");

}
