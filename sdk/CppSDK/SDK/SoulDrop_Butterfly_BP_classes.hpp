#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoulDrop_Butterfly_BP

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SoulDrop_Butterfly_BP.SoulDrop_Butterfly_BP_C
// 0x0028 (0x0288 - 0x0260)
class ASoulDrop_Butterfly_BP_C final : public ALSoulDropObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_Soul_ButterFly;                                 // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Soul;                                           // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Sound;                                             // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SoulDrop_Butterfly_BP(int32 EntryPoint);
	void OnInteractionEnd();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SoulDrop_Butterfly_BP_C">();
	}
	static class ASoulDrop_Butterfly_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASoulDrop_Butterfly_BP_C>();
	}
};
static_assert(alignof(ASoulDrop_Butterfly_BP_C) == 0x000008, "Wrong alignment on ASoulDrop_Butterfly_BP_C");
static_assert(sizeof(ASoulDrop_Butterfly_BP_C) == 0x000288, "Wrong size on ASoulDrop_Butterfly_BP_C");
static_assert(offsetof(ASoulDrop_Butterfly_BP_C, UberGraphFrame) == 0x000260, "Member 'ASoulDrop_Butterfly_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASoulDrop_Butterfly_BP_C, NS_Soul_ButterFly) == 0x000268, "Member 'ASoulDrop_Butterfly_BP_C::NS_Soul_ButterFly' has a wrong offset!");
static_assert(offsetof(ASoulDrop_Butterfly_BP_C, NS_Soul) == 0x000270, "Member 'ASoulDrop_Butterfly_BP_C::NS_Soul' has a wrong offset!");
static_assert(offsetof(ASoulDrop_Butterfly_BP_C, Sound) == 0x000278, "Member 'ASoulDrop_Butterfly_BP_C::Sound' has a wrong offset!");
static_assert(offsetof(ASoulDrop_Butterfly_BP_C, Root) == 0x000280, "Member 'ASoulDrop_Butterfly_BP_C::Root' has a wrong offset!");

}

