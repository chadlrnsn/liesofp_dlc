#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_ObjectRepulse

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "BP_Action_HitBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_ObjectRepulse.BP_Action_ObjectRepulse_C
// 0x0018 (0x0438 - 0x0420)
class UBP_Action_ObjectRepulse_C final : public UBP_Action_HitBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Action_ObjectRepulse_C;          // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   CommonAnim_Repulse_R;                              // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CommonAnim_Repulse_R_Fast_Recovery;                // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_ObjectRepulse(int32 EntryPoint);
	void OnStop(class ULActBase* ReasonAction, class FName Reason);
	void OnStart();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_ObjectRepulse_C">();
	}
	static class UBP_Action_ObjectRepulse_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_ObjectRepulse_C>();
	}
};
static_assert(alignof(UBP_Action_ObjectRepulse_C) == 0x000008, "Wrong alignment on UBP_Action_ObjectRepulse_C");
static_assert(sizeof(UBP_Action_ObjectRepulse_C) == 0x000438, "Wrong size on UBP_Action_ObjectRepulse_C");
static_assert(offsetof(UBP_Action_ObjectRepulse_C, UberGraphFrame_BP_Action_ObjectRepulse_C) == 0x000420, "Member 'UBP_Action_ObjectRepulse_C::UberGraphFrame_BP_Action_ObjectRepulse_C' has a wrong offset!");
static_assert(offsetof(UBP_Action_ObjectRepulse_C, CommonAnim_Repulse_R) == 0x000428, "Member 'UBP_Action_ObjectRepulse_C::CommonAnim_Repulse_R' has a wrong offset!");
static_assert(offsetof(UBP_Action_ObjectRepulse_C, CommonAnim_Repulse_R_Fast_Recovery) == 0x000430, "Member 'UBP_Action_ObjectRepulse_C::CommonAnim_Repulse_R_Fast_Recovery' has a wrong offset!");

}

