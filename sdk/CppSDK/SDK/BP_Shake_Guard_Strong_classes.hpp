#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shake_Guard_Strong

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Shake_Guard_Strong.BP_Shake_Guard_Strong_C
// 0x0000 (0x01B0 - 0x01B0)
class UBP_Shake_Guard_Strong_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Shake_Guard_Strong_C">();
	}
	static class UBP_Shake_Guard_Strong_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Shake_Guard_Strong_C>();
	}
};
static_assert(alignof(UBP_Shake_Guard_Strong_C) == 0x000010, "Wrong alignment on UBP_Shake_Guard_Strong_C");
static_assert(sizeof(UBP_Shake_Guard_Strong_C) == 0x0001B0, "Wrong size on UBP_Shake_Guard_Strong_C");

}
