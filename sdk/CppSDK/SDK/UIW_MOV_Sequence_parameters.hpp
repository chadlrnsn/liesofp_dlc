#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_MOV_Sequence

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UIST_Time_structs.hpp"


namespace SDK::Params
{

// Function UIW_MOV_Sequence.UIW_MOV_Sequence_C.ExecuteUbergraph_UIW_MOV_Sequence
// 0x00A0 (0x00A0 - 0x0000)
struct UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	struct FUIST_Time                             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0050(0x0018)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_Btn_Key_C*                         K2Node_ComponentBoundEvent_BtnKey;                 // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULLevelSequenceSystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULLevelSequenceSystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence) == 0x000008, "Wrong alignment on UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence");
static_assert(sizeof(UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence) == 0x0000A0, "Wrong size on UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence");
static_assert(offsetof(UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence, EntryPoint) == 0x000000, "Member 'UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence::EntryPoint' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence, K2Node_Event_MyGeometry) == 0x000004, "Member 'UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence, CallFunc_GetDataTableRowFromName_OutRow) == 0x000050, "Member 'UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000068, "Member 'UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence, K2Node_ComponentBoundEvent_BtnKey) == 0x000070, "Member 'UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence::K2Node_ComponentBoundEvent_BtnKey' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence, CallFunc_PlayAnimation_ReturnValue) == 0x000078, "Member 'UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000080, "Member 'UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000088, "Member 'UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence, CallFunc_GetPlayerController_ReturnValue) == 0x000090, "Member 'UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'UIW_MOV_Sequence_C_ExecuteUbergraph_UIW_MOV_Sequence::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UIW_MOV_Sequence.UIW_MOV_Sequence_C.Tick
// 0x003C (0x003C - 0x0000)
struct UIW_MOV_Sequence_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_MOV_Sequence_C_Tick) == 0x000004, "Wrong alignment on UIW_MOV_Sequence_C_Tick");
static_assert(sizeof(UIW_MOV_Sequence_C_Tick) == 0x00003C, "Wrong size on UIW_MOV_Sequence_C_Tick");
static_assert(offsetof(UIW_MOV_Sequence_C_Tick, MyGeometry) == 0x000000, "Member 'UIW_MOV_Sequence_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Sequence_C_Tick, InDeltaTime) == 0x000038, "Member 'UIW_MOV_Sequence_C_Tick::InDeltaTime' has a wrong offset!");

// Function UIW_MOV_Sequence.UIW_MOV_Sequence_C.BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UIW_MOV_Sequence_C_BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature final
{
public:
	class UUIW_Btn_Key_C*                         BtnKey;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_MOV_Sequence_C_BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature) == 0x000008, "Wrong alignment on UIW_MOV_Sequence_C_BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature");
static_assert(sizeof(UIW_MOV_Sequence_C_BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature) == 0x000008, "Wrong size on UIW_MOV_Sequence_C_BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature");
static_assert(offsetof(UIW_MOV_Sequence_C_BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature, BtnKey) == 0x000000, "Member 'UIW_MOV_Sequence_C_BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature::BtnKey' has a wrong offset!");

// Function UIW_MOV_Sequence.UIW_MOV_Sequence_C.OnKeyDown
// 0x01E0 (0x01E0 - 0x0000)
struct UIW_MOV_Sequence_C_OnKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0128(0x00B8)()
};
static_assert(alignof(UIW_MOV_Sequence_C_OnKeyDown) == 0x000008, "Wrong alignment on UIW_MOV_Sequence_C_OnKeyDown");
static_assert(sizeof(UIW_MOV_Sequence_C_OnKeyDown) == 0x0001E0, "Wrong size on UIW_MOV_Sequence_C_OnKeyDown");
static_assert(offsetof(UIW_MOV_Sequence_C_OnKeyDown, MyGeometry) == 0x000000, "Member 'UIW_MOV_Sequence_C_OnKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Sequence_C_OnKeyDown, InKeyEvent) == 0x000038, "Member 'UIW_MOV_Sequence_C_OnKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Sequence_C_OnKeyDown, ReturnValue) == 0x000070, "Member 'UIW_MOV_Sequence_C_OnKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Sequence_C_OnKeyDown, CallFunc_Unhandled_ReturnValue) == 0x000128, "Member 'UIW_MOV_Sequence_C_OnKeyDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

}

