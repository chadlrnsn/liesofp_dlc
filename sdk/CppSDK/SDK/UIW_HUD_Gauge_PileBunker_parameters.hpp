#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_HUD_Gauge_PileBunker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UIW_HUD_Gauge_PileBunker.UIW_HUD_Gauge_PileBunker_C.ExecuteUbergraph_UIW_HUD_Gauge_PileBunker
// 0x0030 (0x0030 - 0x0000)
struct UIW_HUD_Gauge_PileBunker_C_ExecuteUbergraph_UIW_HUD_Gauge_PileBunker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName CategoryName)>     K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_CategoryName;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_HUD_Gauge_PileBunker_C_ExecuteUbergraph_UIW_HUD_Gauge_PileBunker) == 0x000008, "Wrong alignment on UIW_HUD_Gauge_PileBunker_C_ExecuteUbergraph_UIW_HUD_Gauge_PileBunker");
static_assert(sizeof(UIW_HUD_Gauge_PileBunker_C_ExecuteUbergraph_UIW_HUD_Gauge_PileBunker) == 0x000030, "Wrong size on UIW_HUD_Gauge_PileBunker_C_ExecuteUbergraph_UIW_HUD_Gauge_PileBunker");
static_assert(offsetof(UIW_HUD_Gauge_PileBunker_C_ExecuteUbergraph_UIW_HUD_Gauge_PileBunker, EntryPoint) == 0x000000, "Member 'UIW_HUD_Gauge_PileBunker_C_ExecuteUbergraph_UIW_HUD_Gauge_PileBunker::EntryPoint' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Gauge_PileBunker_C_ExecuteUbergraph_UIW_HUD_Gauge_PileBunker, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UIW_HUD_Gauge_PileBunker_C_ExecuteUbergraph_UIW_HUD_Gauge_PileBunker::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Gauge_PileBunker_C_ExecuteUbergraph_UIW_HUD_Gauge_PileBunker, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'UIW_HUD_Gauge_PileBunker_C_ExecuteUbergraph_UIW_HUD_Gauge_PileBunker::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Gauge_PileBunker_C_ExecuteUbergraph_UIW_HUD_Gauge_PileBunker, K2Node_CustomEvent_CategoryName) == 0x000020, "Member 'UIW_HUD_Gauge_PileBunker_C_ExecuteUbergraph_UIW_HUD_Gauge_PileBunker::K2Node_CustomEvent_CategoryName' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Gauge_PileBunker_C_ExecuteUbergraph_UIW_HUD_Gauge_PileBunker, CallFunc_GetSize_ReturnValue) == 0x000028, "Member 'UIW_HUD_Gauge_PileBunker_C_ExecuteUbergraph_UIW_HUD_Gauge_PileBunker::CallFunc_GetSize_ReturnValue' has a wrong offset!");

// Function UIW_HUD_Gauge_PileBunker.UIW_HUD_Gauge_PileBunker_C.OnTweenComplete
// 0x0008 (0x0008 - 0x0000)
struct UIW_HUD_Gauge_PileBunker_C_OnTweenComplete final
{
public:
	class FName                                   CategoryName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_HUD_Gauge_PileBunker_C_OnTweenComplete) == 0x000004, "Wrong alignment on UIW_HUD_Gauge_PileBunker_C_OnTweenComplete");
static_assert(sizeof(UIW_HUD_Gauge_PileBunker_C_OnTweenComplete) == 0x000008, "Wrong size on UIW_HUD_Gauge_PileBunker_C_OnTweenComplete");
static_assert(offsetof(UIW_HUD_Gauge_PileBunker_C_OnTweenComplete, CategoryName) == 0x000000, "Member 'UIW_HUD_Gauge_PileBunker_C_OnTweenComplete::CategoryName' has a wrong offset!");

// Function UIW_HUD_Gauge_PileBunker.UIW_HUD_Gauge_PileBunker_C.On
// 0x0010 (0x0010 - 0x0000)
struct UIW_HUD_Gauge_PileBunker_C_On final
{
public:
	struct FVector2D                              LocalStartSize;                                    // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_HUD_Gauge_PileBunker_C_On) == 0x000008, "Wrong alignment on UIW_HUD_Gauge_PileBunker_C_On");
static_assert(sizeof(UIW_HUD_Gauge_PileBunker_C_On) == 0x000010, "Wrong size on UIW_HUD_Gauge_PileBunker_C_On");
static_assert(offsetof(UIW_HUD_Gauge_PileBunker_C_On, LocalStartSize) == 0x000000, "Member 'UIW_HUD_Gauge_PileBunker_C_On::LocalStartSize' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Gauge_PileBunker_C_On, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'UIW_HUD_Gauge_PileBunker_C_On::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function UIW_HUD_Gauge_PileBunker.UIW_HUD_Gauge_PileBunker_C.Off
// 0x0008 (0x0008 - 0x0000)
struct UIW_HUD_Gauge_PileBunker_C_Off final
{
public:
	struct FVector2D                              LocalStartSize;                                    // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_HUD_Gauge_PileBunker_C_Off) == 0x000004, "Wrong alignment on UIW_HUD_Gauge_PileBunker_C_Off");
static_assert(sizeof(UIW_HUD_Gauge_PileBunker_C_Off) == 0x000008, "Wrong size on UIW_HUD_Gauge_PileBunker_C_Off");
static_assert(offsetof(UIW_HUD_Gauge_PileBunker_C_Off, LocalStartSize) == 0x000000, "Member 'UIW_HUD_Gauge_PileBunker_C_Off::LocalStartSize' has a wrong offset!");

// Function UIW_HUD_Gauge_PileBunker.UIW_HUD_Gauge_PileBunker_C.Charging
// 0x0030 (0x0030 - 0x0000)
struct UIW_HUD_Gauge_PileBunker_C_Charging final
{
public:
	float                                         TimeRate;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_HUD_Gauge_PileBunker_C_Charging) == 0x000008, "Wrong alignment on UIW_HUD_Gauge_PileBunker_C_Charging");
static_assert(sizeof(UIW_HUD_Gauge_PileBunker_C_Charging) == 0x000030, "Wrong size on UIW_HUD_Gauge_PileBunker_C_Charging");
static_assert(offsetof(UIW_HUD_Gauge_PileBunker_C_Charging, TimeRate) == 0x000000, "Member 'UIW_HUD_Gauge_PileBunker_C_Charging::TimeRate' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Gauge_PileBunker_C_Charging, CallFunc_BreakVector2D_X) == 0x000004, "Member 'UIW_HUD_Gauge_PileBunker_C_Charging::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Gauge_PileBunker_C_Charging, CallFunc_BreakVector2D_Y) == 0x000008, "Member 'UIW_HUD_Gauge_PileBunker_C_Charging::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Gauge_PileBunker_C_Charging, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'UIW_HUD_Gauge_PileBunker_C_Charging::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Gauge_PileBunker_C_Charging, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000018, "Member 'UIW_HUD_Gauge_PileBunker_C_Charging::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Gauge_PileBunker_C_Charging, CallFunc_MakeVector2D_ReturnValue) == 0x00001C, "Member 'UIW_HUD_Gauge_PileBunker_C_Charging::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Gauge_PileBunker_C_Charging, CallFunc_MakeVector2D_ReturnValue_1) == 0x000024, "Member 'UIW_HUD_Gauge_PileBunker_C_Charging::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");

}
