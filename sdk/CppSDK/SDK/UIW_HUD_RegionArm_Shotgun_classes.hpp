#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_HUD_RegionArm_Shotgun

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"
#include "ProjectPContentInfo_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_HUD_RegionArm_Shotgun.UIW_HUD_RegionArm_Shotgun_C
// 0x0070 (0x0318 - 0x02A8)
class UUIW_HUD_RegionArm_Shotgun_C final : public ULWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_Construct;                                     // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon_Acid;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Electric;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Fire;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Physical;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Dpad;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Key_1;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Key_2;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Key_3;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Key_4;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Select;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ELShotGunAmmoType                             PrevElement;                                       // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_309[0x3];                                      // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentDegree;                                     // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             DPadTexture;                                       // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIW_HUD_RegionArm_Shotgun(int32 EntryPoint);
	void OnClosedWindow(class FName Name_0);
	void OnChangeInput(bool bGamePad);
	void OnTweenComplete(class FName CategoryName);
	void Destruct();
	void Construct();
	void SetAmmoType(ELShotGunAmmoType CurrentAmmoType);
	void Show();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_HUD_RegionArm_Shotgun_C">();
	}
	static class UUIW_HUD_RegionArm_Shotgun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_HUD_RegionArm_Shotgun_C>();
	}
};
static_assert(alignof(UUIW_HUD_RegionArm_Shotgun_C) == 0x000008, "Wrong alignment on UUIW_HUD_RegionArm_Shotgun_C");
static_assert(sizeof(UUIW_HUD_RegionArm_Shotgun_C) == 0x000318, "Wrong size on UUIW_HUD_RegionArm_Shotgun_C");
static_assert(offsetof(UUIW_HUD_RegionArm_Shotgun_C, UberGraphFrame) == 0x0002A8, "Member 'UUIW_HUD_RegionArm_Shotgun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_RegionArm_Shotgun_C, Ani_Construct) == 0x0002B0, "Member 'UUIW_HUD_RegionArm_Shotgun_C::Ani_Construct' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_RegionArm_Shotgun_C, Icon_Acid) == 0x0002B8, "Member 'UUIW_HUD_RegionArm_Shotgun_C::Icon_Acid' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_RegionArm_Shotgun_C, Icon_Electric) == 0x0002C0, "Member 'UUIW_HUD_RegionArm_Shotgun_C::Icon_Electric' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_RegionArm_Shotgun_C, Icon_Fire) == 0x0002C8, "Member 'UUIW_HUD_RegionArm_Shotgun_C::Icon_Fire' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_RegionArm_Shotgun_C, Icon_Physical) == 0x0002D0, "Member 'UUIW_HUD_RegionArm_Shotgun_C::Icon_Physical' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_RegionArm_Shotgun_C, Img_Dpad) == 0x0002D8, "Member 'UUIW_HUD_RegionArm_Shotgun_C::Img_Dpad' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_RegionArm_Shotgun_C, Img_Key_1) == 0x0002E0, "Member 'UUIW_HUD_RegionArm_Shotgun_C::Img_Key_1' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_RegionArm_Shotgun_C, Img_Key_2) == 0x0002E8, "Member 'UUIW_HUD_RegionArm_Shotgun_C::Img_Key_2' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_RegionArm_Shotgun_C, Img_Key_3) == 0x0002F0, "Member 'UUIW_HUD_RegionArm_Shotgun_C::Img_Key_3' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_RegionArm_Shotgun_C, Img_Key_4) == 0x0002F8, "Member 'UUIW_HUD_RegionArm_Shotgun_C::Img_Key_4' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_RegionArm_Shotgun_C, Img_Select) == 0x000300, "Member 'UUIW_HUD_RegionArm_Shotgun_C::Img_Select' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_RegionArm_Shotgun_C, PrevElement) == 0x000308, "Member 'UUIW_HUD_RegionArm_Shotgun_C::PrevElement' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_RegionArm_Shotgun_C, CurrentDegree) == 0x00030C, "Member 'UUIW_HUD_RegionArm_Shotgun_C::CurrentDegree' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_RegionArm_Shotgun_C, DPadTexture) == 0x000310, "Member 'UUIW_HUD_RegionArm_Shotgun_C::DPadTexture' has a wrong offset!");

}
