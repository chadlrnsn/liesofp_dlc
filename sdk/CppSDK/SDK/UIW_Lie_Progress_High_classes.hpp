#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Lie_Progress_High

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Lie_Progress_High.UIW_Lie_Progress_High_C
// 0x0058 (0x02C0 - 0x0268)
class UUIW_Lie_Progress_High_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Ani_L_Light;                                       // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ani_R_Light;                                       // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ani_Warning;                                       // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Img_Gear0;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Gear1;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Gear2;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Hand;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Light;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Light_Bg;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Time;                                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Time_Fill;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetProgress(float Current);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Lie_Progress_High_C">();
	}
	static class UUIW_Lie_Progress_High_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Lie_Progress_High_C>();
	}
};
static_assert(alignof(UUIW_Lie_Progress_High_C) == 0x000008, "Wrong alignment on UUIW_Lie_Progress_High_C");
static_assert(sizeof(UUIW_Lie_Progress_High_C) == 0x0002C0, "Wrong size on UUIW_Lie_Progress_High_C");
static_assert(offsetof(UUIW_Lie_Progress_High_C, Ani_L_Light) == 0x000268, "Member 'UUIW_Lie_Progress_High_C::Ani_L_Light' has a wrong offset!");
static_assert(offsetof(UUIW_Lie_Progress_High_C, Ani_R_Light) == 0x000270, "Member 'UUIW_Lie_Progress_High_C::Ani_R_Light' has a wrong offset!");
static_assert(offsetof(UUIW_Lie_Progress_High_C, Ani_Warning) == 0x000278, "Member 'UUIW_Lie_Progress_High_C::Ani_Warning' has a wrong offset!");
static_assert(offsetof(UUIW_Lie_Progress_High_C, Img_Gear0) == 0x000280, "Member 'UUIW_Lie_Progress_High_C::Img_Gear0' has a wrong offset!");
static_assert(offsetof(UUIW_Lie_Progress_High_C, Img_Gear1) == 0x000288, "Member 'UUIW_Lie_Progress_High_C::Img_Gear1' has a wrong offset!");
static_assert(offsetof(UUIW_Lie_Progress_High_C, Img_Gear2) == 0x000290, "Member 'UUIW_Lie_Progress_High_C::Img_Gear2' has a wrong offset!");
static_assert(offsetof(UUIW_Lie_Progress_High_C, Img_Hand) == 0x000298, "Member 'UUIW_Lie_Progress_High_C::Img_Hand' has a wrong offset!");
static_assert(offsetof(UUIW_Lie_Progress_High_C, Img_Light) == 0x0002A0, "Member 'UUIW_Lie_Progress_High_C::Img_Light' has a wrong offset!");
static_assert(offsetof(UUIW_Lie_Progress_High_C, Img_Light_Bg) == 0x0002A8, "Member 'UUIW_Lie_Progress_High_C::Img_Light_Bg' has a wrong offset!");
static_assert(offsetof(UUIW_Lie_Progress_High_C, Time) == 0x0002B0, "Member 'UUIW_Lie_Progress_High_C::Time' has a wrong offset!");
static_assert(offsetof(UUIW_Lie_Progress_High_C, Time_Fill) == 0x0002B8, "Member 'UUIW_Lie_Progress_High_C::Time_Fill' has a wrong offset!");

}
