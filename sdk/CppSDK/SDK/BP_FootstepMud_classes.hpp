#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FootstepMud

#include "Basic.hpp"

#include "BP_FootstepPreset_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FootstepMud.BP_FootstepMud_C
// 0x0000 (0x0050 - 0x0050)
class UBP_FootstepMud_C final : public UBP_FootstepPreset_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FootstepMud_C">();
	}
	static class UBP_FootstepMud_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FootstepMud_C>();
	}
};
static_assert(alignof(UBP_FootstepMud_C) == 0x000008, "Wrong alignment on UBP_FootstepMud_C");
static_assert(sizeof(UBP_FootstepMud_C) == 0x000050, "Wrong size on UBP_FootstepMud_C");

}
