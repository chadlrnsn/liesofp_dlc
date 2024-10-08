#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_DPad_Durability

#include "Basic.hpp"

#include "ProjectP_structs.hpp"


namespace SDK::Params
{

// Function UIW_DPad_Durability.UIW_DPad_Durability_C.ExecuteUbergraph_UIW_DPad_Durability
// 0x0038 (0x0038 - 0x0000)
struct UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTweenEase                             K2Node_MakeStruct_TweenEase;                       // 0x0004(0x000C)(NoDestructor)
	class FName                                   K2Node_CustomEvent_CategoryName;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName CategoryName)>     K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability) == 0x000008, "Wrong alignment on UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability");
static_assert(sizeof(UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability) == 0x000038, "Wrong size on UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability");
static_assert(offsetof(UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability, EntryPoint) == 0x000000, "Member 'UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability::EntryPoint' has a wrong offset!");
static_assert(offsetof(UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability, K2Node_MakeStruct_TweenEase) == 0x000004, "Member 'UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability::K2Node_MakeStruct_TweenEase' has a wrong offset!");
static_assert(offsetof(UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability, K2Node_CustomEvent_CategoryName) == 0x000010, "Member 'UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability::K2Node_CustomEvent_CategoryName' has a wrong offset!");
static_assert(offsetof(UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability, K2Node_SwitchName_CmpSuccess) == 0x000018, "Member 'UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'UIW_DPad_Durability_C_ExecuteUbergraph_UIW_DPad_Durability::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UIW_DPad_Durability.UIW_DPad_Durability_C.CompleteTween
// 0x0008 (0x0008 - 0x0000)
struct UIW_DPad_Durability_C_CompleteTween final
{
public:
	class FName                                   CategoryName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_DPad_Durability_C_CompleteTween) == 0x000004, "Wrong alignment on UIW_DPad_Durability_C_CompleteTween");
static_assert(sizeof(UIW_DPad_Durability_C_CompleteTween) == 0x000008, "Wrong size on UIW_DPad_Durability_C_CompleteTween");
static_assert(offsetof(UIW_DPad_Durability_C_CompleteTween, CategoryName) == 0x000000, "Member 'UIW_DPad_Durability_C_CompleteTween::CategoryName' has a wrong offset!");

// Function UIW_DPad_Durability.UIW_DPad_Durability_C.SetBroken
// 0x0008 (0x0008 - 0x0000)
struct UIW_DPad_Durability_C_SetBroken final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_DPad_Durability_C_SetBroken) == 0x000008, "Wrong alignment on UIW_DPad_Durability_C_SetBroken");
static_assert(sizeof(UIW_DPad_Durability_C_SetBroken) == 0x000008, "Wrong size on UIW_DPad_Durability_C_SetBroken");
static_assert(offsetof(UIW_DPad_Durability_C_SetBroken, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UIW_DPad_Durability_C_SetBroken::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UIW_DPad_Durability.UIW_DPad_Durability_C.SetBreak
// 0x0008 (0x0008 - 0x0000)
struct UIW_DPad_Durability_C_SetBreak final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_DPad_Durability_C_SetBreak) == 0x000008, "Wrong alignment on UIW_DPad_Durability_C_SetBreak");
static_assert(sizeof(UIW_DPad_Durability_C_SetBreak) == 0x000008, "Wrong size on UIW_DPad_Durability_C_SetBreak");
static_assert(offsetof(UIW_DPad_Durability_C_SetBreak, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UIW_DPad_Durability_C_SetBreak::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UIW_DPad_Durability.UIW_DPad_Durability_C.SetWarning
// 0x0018 (0x0018 - 0x0000)
struct UIW_DPad_Durability_C_SetWarning final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_DPad_Durability_C_SetWarning) == 0x000008, "Wrong alignment on UIW_DPad_Durability_C_SetWarning");
static_assert(sizeof(UIW_DPad_Durability_C_SetWarning) == 0x000018, "Wrong size on UIW_DPad_Durability_C_SetWarning");
static_assert(offsetof(UIW_DPad_Durability_C_SetWarning, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'UIW_DPad_Durability_C_SetWarning::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_DPad_Durability_C_SetWarning, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UIW_DPad_Durability_C_SetWarning::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_DPad_Durability_C_SetWarning, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000010, "Member 'UIW_DPad_Durability_C_SetWarning::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_DPad_Durability_C_SetWarning, CallFunc_BooleanOR_ReturnValue) == 0x000011, "Member 'UIW_DPad_Durability_C_SetWarning::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function UIW_DPad_Durability.UIW_DPad_Durability_C.SetFine
// 0x0008 (0x0008 - 0x0000)
struct UIW_DPad_Durability_C_SetFine final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_DPad_Durability_C_SetFine) == 0x000008, "Wrong alignment on UIW_DPad_Durability_C_SetFine");
static_assert(sizeof(UIW_DPad_Durability_C_SetFine) == 0x000008, "Wrong size on UIW_DPad_Durability_C_SetFine");
static_assert(offsetof(UIW_DPad_Durability_C_SetFine, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UIW_DPad_Durability_C_SetFine::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UIW_DPad_Durability.UIW_DPad_Durability_C.SetFull
// 0x0008 (0x0008 - 0x0000)
struct UIW_DPad_Durability_C_SetFull final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_DPad_Durability_C_SetFull) == 0x000008, "Wrong alignment on UIW_DPad_Durability_C_SetFull");
static_assert(sizeof(UIW_DPad_Durability_C_SetFull) == 0x000008, "Wrong size on UIW_DPad_Durability_C_SetFull");
static_assert(offsetof(UIW_DPad_Durability_C_SetFull, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UIW_DPad_Durability_C_SetFull::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UIW_DPad_Durability.UIW_DPad_Durability_C.Show Grind Effect
// 0x0020 (0x0020 - 0x0000)
struct UIW_DPad_Durability_C_Show_Grind_Effect final
{
public:
	class UWidget*                                LocalWidget3;                                      // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                LocalWidget2;                                      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                LocalWidget1;                                      // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalEffectStartOpacity;                           // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRenderOpacity_ReturnValue;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_DPad_Durability_C_Show_Grind_Effect) == 0x000008, "Wrong alignment on UIW_DPad_Durability_C_Show_Grind_Effect");
static_assert(sizeof(UIW_DPad_Durability_C_Show_Grind_Effect) == 0x000020, "Wrong size on UIW_DPad_Durability_C_Show_Grind_Effect");
static_assert(offsetof(UIW_DPad_Durability_C_Show_Grind_Effect, LocalWidget3) == 0x000000, "Member 'UIW_DPad_Durability_C_Show_Grind_Effect::LocalWidget3' has a wrong offset!");
static_assert(offsetof(UIW_DPad_Durability_C_Show_Grind_Effect, LocalWidget2) == 0x000008, "Member 'UIW_DPad_Durability_C_Show_Grind_Effect::LocalWidget2' has a wrong offset!");
static_assert(offsetof(UIW_DPad_Durability_C_Show_Grind_Effect, LocalWidget1) == 0x000010, "Member 'UIW_DPad_Durability_C_Show_Grind_Effect::LocalWidget1' has a wrong offset!");
static_assert(offsetof(UIW_DPad_Durability_C_Show_Grind_Effect, LocalEffectStartOpacity) == 0x000018, "Member 'UIW_DPad_Durability_C_Show_Grind_Effect::LocalEffectStartOpacity' has a wrong offset!");
static_assert(offsetof(UIW_DPad_Durability_C_Show_Grind_Effect, CallFunc_GetRenderOpacity_ReturnValue) == 0x00001C, "Member 'UIW_DPad_Durability_C_Show_Grind_Effect::CallFunc_GetRenderOpacity_ReturnValue' has a wrong offset!");

}

