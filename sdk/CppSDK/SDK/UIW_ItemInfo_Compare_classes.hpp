#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_ItemInfo_Compare

#include "Basic.hpp"

#include "UIW_ItemInfo_classes.hpp"
#include "ProjectPContentInfo_structs.hpp"
#include "ProjectP_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_ItemInfo_Compare.UIW_ItemInfo_Compare_C
// 0x0008 (0x0610 - 0x0608)
class UUIW_ItemInfo_Compare_C final : public UUIW_ItemInfo_C
{
public:
	class ULItem*                                 CompareItem;                                       // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetWeaponDiff(class ULWeaponItem* CurrentWeapon, class ULWeaponItem* CompareWeapon, ELSecondStat Stat, int32* Diff);
	void SetItemCompare(class ULItem* LItem, class ULItem* CompareLItem);
	void RefreshWeaponInfo();
	void RefreshHandleInfo();
	void RefreshBladeInfo();
	void RefreshSlaveArmInfo();
	void RefreshFrameInfo();
	void RefreshGearInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_ItemInfo_Compare_C">();
	}
	static class UUIW_ItemInfo_Compare_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_ItemInfo_Compare_C>();
	}
};
static_assert(alignof(UUIW_ItemInfo_Compare_C) == 0x000008, "Wrong alignment on UUIW_ItemInfo_Compare_C");
static_assert(sizeof(UUIW_ItemInfo_Compare_C) == 0x000610, "Wrong size on UUIW_ItemInfo_Compare_C");
static_assert(offsetof(UUIW_ItemInfo_Compare_C, CompareItem) == 0x000608, "Member 'UUIW_ItemInfo_Compare_C::CompareItem' has a wrong offset!");

}
