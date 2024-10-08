#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Indicator_FatalAttack

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Indicator_FatalAttack.UIW_Indicator_FatalAttack_C
// 0x0020 (0x02C8 - 0x02A8)
class UUIW_Indicator_FatalAttack_C final : public ULWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_Active;                                        // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ani_Normal;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIW_Indicator_FatalAttack(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void Refresh();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Indicator_FatalAttack_C">();
	}
	static class UUIW_Indicator_FatalAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Indicator_FatalAttack_C>();
	}
};
static_assert(alignof(UUIW_Indicator_FatalAttack_C) == 0x000008, "Wrong alignment on UUIW_Indicator_FatalAttack_C");
static_assert(sizeof(UUIW_Indicator_FatalAttack_C) == 0x0002C8, "Wrong size on UUIW_Indicator_FatalAttack_C");
static_assert(offsetof(UUIW_Indicator_FatalAttack_C, UberGraphFrame) == 0x0002A8, "Member 'UUIW_Indicator_FatalAttack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_Indicator_FatalAttack_C, Ani_Active) == 0x0002B0, "Member 'UUIW_Indicator_FatalAttack_C::Ani_Active' has a wrong offset!");
static_assert(offsetof(UUIW_Indicator_FatalAttack_C, Ani_Normal) == 0x0002B8, "Member 'UUIW_Indicator_FatalAttack_C::Ani_Normal' has a wrong offset!");
static_assert(offsetof(UUIW_Indicator_FatalAttack_C, Index_0) == 0x0002C0, "Member 'UUIW_Indicator_FatalAttack_C::Index_0' has a wrong offset!");

}

