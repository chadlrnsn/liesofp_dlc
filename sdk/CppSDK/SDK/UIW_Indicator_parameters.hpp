#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Indicator

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UIW_Indicator.UIW_Indicator_C.Show
// 0x0010 (0x0010 - 0x0000)
struct UIW_Indicator_C_Show final
{
public:
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Indicator_C_Show) == 0x000008, "Wrong alignment on UIW_Indicator_C_Show");
static_assert(sizeof(UIW_Indicator_C_Show) == 0x000010, "Wrong size on UIW_Indicator_C_Show");
static_assert(offsetof(UIW_Indicator_C_Show, CallFunc_K2_SetTimer_ReturnValue) == 0x000000, "Member 'UIW_Indicator_C_Show::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Indicator_C_Show, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UIW_Indicator_C_Show::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UIW_Indicator.UIW_Indicator_C.CheckHide
// 0x0008 (0x0008 - 0x0000)
struct UIW_Indicator_C_CheckHide final
{
public:
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Indicator_C_CheckHide) == 0x000004, "Wrong alignment on UIW_Indicator_C_CheckHide");
static_assert(sizeof(UIW_Indicator_C_CheckHide) == 0x000008, "Wrong size on UIW_Indicator_C_CheckHide");
static_assert(offsetof(UIW_Indicator_C_CheckHide, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000000, "Member 'UIW_Indicator_C_CheckHide::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Indicator_C_CheckHide, CallFunc_Add_FloatFloat_ReturnValue) == 0x000004, "Member 'UIW_Indicator_C_CheckHide::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

}

