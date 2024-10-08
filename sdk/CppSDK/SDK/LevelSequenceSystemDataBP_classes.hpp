#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelSequenceSystemDataBP

#include "Basic.hpp"

#include "ProjectP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LevelSequenceSystemDataBP.LevelSequenceSystemDataBP_C
// 0x0008 (0x01F8 - 0x01F0)
class ALevelSequenceSystemDataBP_C final : public ALLevelSequenceSystemData
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x01F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LevelSequenceSystemDataBP_C">();
	}
	static class ALevelSequenceSystemDataBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALevelSequenceSystemDataBP_C>();
	}
};
static_assert(alignof(ALevelSequenceSystemDataBP_C) == 0x000008, "Wrong alignment on ALevelSequenceSystemDataBP_C");
static_assert(sizeof(ALevelSequenceSystemDataBP_C) == 0x0001F8, "Wrong size on ALevelSequenceSystemDataBP_C");
static_assert(offsetof(ALevelSequenceSystemDataBP_C, DefaultSceneRoot) == 0x0001F0, "Member 'ALevelSequenceSystemDataBP_C::DefaultSceneRoot' has a wrong offset!");

}

