#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FootstepRock

#include "Basic.hpp"

#include "BP_FootstepPreset_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FootstepRock.BP_FootstepRock_C
// 0x0000 (0x0050 - 0x0050)
class UBP_FootstepRock_C final : public UBP_FootstepPreset_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FootstepRock_C">();
	}
	static class UBP_FootstepRock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FootstepRock_C>();
	}
};
static_assert(alignof(UBP_FootstepRock_C) == 0x000008, "Wrong alignment on UBP_FootstepRock_C");
static_assert(sizeof(UBP_FootstepRock_C) == 0x000050, "Wrong size on UBP_FootstepRock_C");

}
