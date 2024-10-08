#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_MOV_Bink

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UIST_Time_structs.hpp"


namespace SDK::Params
{

// Function UIW_MOV_Bink.UIW_MOV_Bink_C.ExecuteUbergraph_UIW_MOV_Bink
// 0x0088 (0x0088 - 0x0000)
struct UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUIST_Time                             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0008(0x0018)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_Btn_Key_C*                         K2Node_ComponentBoundEvent_BtnKey;                 // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULMovieSystem*                          CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x004C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink) == 0x000008, "Wrong alignment on UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink");
static_assert(sizeof(UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink) == 0x000088, "Wrong size on UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink");
static_assert(offsetof(UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink, EntryPoint) == 0x000000, "Member 'UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink::EntryPoint' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink, CallFunc_GetDataTableRowFromName_OutRow) == 0x000008, "Member 'UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000020, "Member 'UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink, K2Node_ComponentBoundEvent_BtnKey) == 0x000028, "Member 'UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink::K2Node_ComponentBoundEvent_BtnKey' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000038, "Member 'UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink, K2Node_Event_MyGeometry) == 0x00004C, "Member 'UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink, K2Node_Event_InDeltaTime) == 0x000084, "Member 'UIW_MOV_Bink_C_ExecuteUbergraph_UIW_MOV_Bink::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function UIW_MOV_Bink.UIW_MOV_Bink_C.Tick
// 0x003C (0x003C - 0x0000)
struct UIW_MOV_Bink_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_MOV_Bink_C_Tick) == 0x000004, "Wrong alignment on UIW_MOV_Bink_C_Tick");
static_assert(sizeof(UIW_MOV_Bink_C_Tick) == 0x00003C, "Wrong size on UIW_MOV_Bink_C_Tick");
static_assert(offsetof(UIW_MOV_Bink_C_Tick, MyGeometry) == 0x000000, "Member 'UIW_MOV_Bink_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Bink_C_Tick, InDeltaTime) == 0x000038, "Member 'UIW_MOV_Bink_C_Tick::InDeltaTime' has a wrong offset!");

// Function UIW_MOV_Bink.UIW_MOV_Bink_C.BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UIW_MOV_Bink_C_BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature final
{
public:
	class UUIW_Btn_Key_C*                         BtnKey;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_MOV_Bink_C_BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature) == 0x000008, "Wrong alignment on UIW_MOV_Bink_C_BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature");
static_assert(sizeof(UIW_MOV_Bink_C_BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature) == 0x000008, "Wrong size on UIW_MOV_Bink_C_BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature");
static_assert(offsetof(UIW_MOV_Bink_C_BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature, BtnKey) == 0x000000, "Member 'UIW_MOV_Bink_C_BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature::BtnKey' has a wrong offset!");

// Function UIW_MOV_Bink.UIW_MOV_Bink_C.OnKeyDown
// 0x01E0 (0x01E0 - 0x0000)
struct UIW_MOV_Bink_C_OnKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0128(0x00B8)()
};
static_assert(alignof(UIW_MOV_Bink_C_OnKeyDown) == 0x000008, "Wrong alignment on UIW_MOV_Bink_C_OnKeyDown");
static_assert(sizeof(UIW_MOV_Bink_C_OnKeyDown) == 0x0001E0, "Wrong size on UIW_MOV_Bink_C_OnKeyDown");
static_assert(offsetof(UIW_MOV_Bink_C_OnKeyDown, MyGeometry) == 0x000000, "Member 'UIW_MOV_Bink_C_OnKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Bink_C_OnKeyDown, InKeyEvent) == 0x000038, "Member 'UIW_MOV_Bink_C_OnKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Bink_C_OnKeyDown, ReturnValue) == 0x000070, "Member 'UIW_MOV_Bink_C_OnKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_MOV_Bink_C_OnKeyDown, CallFunc_Unhandled_ReturnValue) == 0x000128, "Member 'UIW_MOV_Bink_C_OnKeyDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

}

