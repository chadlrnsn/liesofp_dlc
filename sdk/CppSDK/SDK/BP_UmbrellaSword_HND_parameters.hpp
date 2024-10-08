#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UmbrellaSword_HND

#include "Basic.hpp"

#include "ProjectP_structs.hpp"


namespace SDK::Params
{

// Function BP_UmbrellaSword_HND.BP_UmbrellaSword_HND_C.ExecuteUbergraph_BP_UmbrellaSword_HND
// 0x0038 (0x0038 - 0x0000)
struct BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ActionState_AllowInput_FableHandle_ReturnValue; // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ActionState_AllowInput_Frenzy_ReturnValue; // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActBase*                              K2Node_Event_ReasonAction;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_Reason;                               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLGameObjectHandle                     CallFunc_AddActionState_AutoRemove_ReturnValue;    // 0x0028(0x0004)(NoDestructor)
	struct FLGameObjectHandle                     CallFunc_AddActionState_AutoRemove_ReturnValue_1;  // 0x002C(0x0004)(NoDestructor)
	struct FLGameObjectHandle                     CallFunc_AddActionState_AutoRemove_ReturnValue_2;  // 0x0030(0x0004)(NoDestructor)
};
static_assert(alignof(BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND) == 0x000008, "Wrong alignment on BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND");
static_assert(sizeof(BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND) == 0x000038, "Wrong size on BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND");
static_assert(offsetof(BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND, EntryPoint) == 0x000000, "Member 'BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND, CallFunc_ActionState_AllowInput_FableHandle_ReturnValue) == 0x000004, "Member 'BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND::CallFunc_ActionState_AllowInput_FableHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND, CallFunc_ActionState_AllowInput_Frenzy_ReturnValue) == 0x00000C, "Member 'BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND::CallFunc_ActionState_AllowInput_Frenzy_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND, K2Node_Event_ReasonAction) == 0x000018, "Member 'BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND::K2Node_Event_ReasonAction' has a wrong offset!");
static_assert(offsetof(BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND, K2Node_Event_Reason) == 0x000020, "Member 'BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND::K2Node_Event_Reason' has a wrong offset!");
static_assert(offsetof(BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND, CallFunc_AddActionState_AutoRemove_ReturnValue) == 0x000028, "Member 'BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND::CallFunc_AddActionState_AutoRemove_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND, CallFunc_AddActionState_AutoRemove_ReturnValue_1) == 0x00002C, "Member 'BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND::CallFunc_AddActionState_AutoRemove_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND, CallFunc_AddActionState_AutoRemove_ReturnValue_2) == 0x000030, "Member 'BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND::CallFunc_AddActionState_AutoRemove_ReturnValue_2' has a wrong offset!");

// Function BP_UmbrellaSword_HND.BP_UmbrellaSword_HND_C.OnStop
// 0x0010 (0x0010 - 0x0000)
struct BP_UmbrellaSword_HND_C_OnStop final
{
public:
	class ULActBase*                              ReasonAction;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Reason;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UmbrellaSword_HND_C_OnStop) == 0x000008, "Wrong alignment on BP_UmbrellaSword_HND_C_OnStop");
static_assert(sizeof(BP_UmbrellaSword_HND_C_OnStop) == 0x000010, "Wrong size on BP_UmbrellaSword_HND_C_OnStop");
static_assert(offsetof(BP_UmbrellaSword_HND_C_OnStop, ReasonAction) == 0x000000, "Member 'BP_UmbrellaSword_HND_C_OnStop::ReasonAction' has a wrong offset!");
static_assert(offsetof(BP_UmbrellaSword_HND_C_OnStop, Reason) == 0x000008, "Member 'BP_UmbrellaSword_HND_C_OnStop::Reason' has a wrong offset!");

}

