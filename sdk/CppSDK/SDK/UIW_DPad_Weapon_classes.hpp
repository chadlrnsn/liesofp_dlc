#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_DPad_Weapon

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"
#include "ProjectPContentInfo_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_DPad_Weapon.UIW_DPad_Weapon_C
// 0x01E0 (0x0488 - 0x02A8)
class UUIW_DPad_Weapon_C final : public ULWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_FableActive_Handle;                            // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ani_FableActive_Blade;                             // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG_Blade;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Handle;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Heroic;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_FrenzyUnit_C*                  BladeUnit_1;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_FrenzyUnit_C*                  BladeUnit_2;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_FrenzyUnit_C*                  BladeUnit_3;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_FrenzyUnit_C*                  BladeUnit_4;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Fable_Blade_0;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Fable_Blade_1;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Fable_Blade_2;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Fable_Guard;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Fable_Handle_0;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_DPad_Durability_C*                 DPad_Durability;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Fable;                                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FX_Abnormal_Blade;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FX_Abnormal_Handle;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Group_Blade_FableBtn;                              // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Group_Handle_FableBtn;                             // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Group_Normal;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_FrenzyUnit_C*                  HandleUnit_1;                                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_FrenzyUnit_C*                  HandleUnit_2;                                      // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_FrenzyUnit_C*                  HandleUnit_3;                                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_FableType_Blade;                              // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_FableType_Handle;                             // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Blade;                                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_EquipSlot;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Fable_Arrow_1;                                 // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Fable_Arrow_2;                                 // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Handle;                                        // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Heroic;                                        // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULStatComponent*                        LStatComponent;                                    // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULWeaponItem*                           CurrentWeapon;                                     // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELBladeSharpnessType                          CurrentDurabilityType;                             // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELEquipSlotType                               CurrentEquipSlotType;                              // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C2[0x6];                                      // 0x03C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUIW_HUD_FrenzyUnit_C*>          BladeUnitList;                                     // 0x03C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUIW_HUD_FrenzyUnit_C*>          HandleUnitList;                                    // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         BladeUnitCount;                                    // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PrevActiveCount;                                   // 0x03EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrActiveCount;                                   // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HandleUnitCount;                                   // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActiveBladeUnit;                                 // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsActiveHandleUnit;                                // 0x03F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FA[0x2];                                      // 0x03FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PrevDurability;                                    // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NeedForceUpdateBlade;                              // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NeedForceUpdateHandle;                             // 0x0401(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NeedWarning;                                       // 0x0402(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ELInputTypeHudOnly                            CurrentInputTypeBlade;                             // 0x0403(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELInputTypeHudOnly                            CurrentInputTypeHandle;                            // 0x0404(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_405[0x3];                                      // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   BladeSkillName;                                    // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HandleSkillName;                                   // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PrevUnitAllCount;                                  // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrUnitAllCount;                                  // 0x041C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PrevFrenzyValue;                                   // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UnitFrenzyValue;                                   // 0x0424(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFableArtsStarted;                                // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_429[0x7];                                      // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUIW_Btn_Key_C*>                 FableBladeArr;                                     // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         HoldStep;                                          // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ComboStep;                                         // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentFrenzyValue;                                // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxFrenzyValue;                                    // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ConsumeUnitCount;                                  // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELFrenzyConsumeReason                         ConsumeReason;                                     // 0x0454(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NeedRefreshFrenzy;                                 // 0x0455(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ChainHandleStarted;                                // 0x0456(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_457[0x1];                                      // 0x0457(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ChainHandleUnitCount;                              // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HandleConsumeFrenzyUnitCount;                      // 0x045C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HandleRequireFrenzyUnitCount;                      // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464[0x4];                                      // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULPCComboTableBP_C*                     ComboTableBP;                                      // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxFableSlotCount;                                 // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChainBladeStarted;                                 // 0x0474(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_475[0x3];                                      // 0x0475(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ChainBladeUnitCount;                               // 0x0478(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BladeConsumeFrenzyUnitCount;                       // 0x047C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BladeRequireFrenzyUnitCount;                       // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSuddenBreak;                                     // 0x0484(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UIW_DPad_Weapon(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnActionStarted(class ULActMgrComponent* ActMgrComponent, class ULActBase* StartedAction);
	void OnActionEnded(class ULActMgrComponent* ActMgrComponent, class ULActBase* StoppingAction, class ULActBase* ReasonAction);
	void CompleteTween(class FName CategoryName);
	void Construct();
	void Destruct();
	void ChangeIcon(class UTexture2D* Texture);
	void SetItem(ELEquipSlotType EquipSlotType, class ULWeaponItem* LWeapon);
	void SetFableInfo();
	void Set_Durability(int32 Current, int32 Max, bool IsGrinder);
	void SetControlGuide(bool IsGamePad);
	void Set_Visible_Control_Guide(bool IsShow);
	void OnChooseWeapon(const struct FLEquipItemSlot& EquipSlot);
	void OnChangeWeaponFableSkill();
	void OnFableBuffEnable(bool On, bool IsHandle);
	void OnUpdateHeroicWeapon();
	void RefreshFrenzy(int32 Current, int32 Max, int32 UnitCount, int32 ConsumeUnitCount_0, ELFrenzyConsumeReason FrenzyPointConsumeReason);
	void RefreshFrenzyReal();
	void SetFrenzyUnitCount();
	void OnChangeInputMode(bool bGamePad);
	void GetIsActiveUnit(int32 ActiveCount, int32 PrevActiveCount_0, int32 NeedActiveCount, bool ForceUpdate, bool PrevIsActiveUnit, bool* IsActiveUnit, bool* NeedUpdate);
	void SetFrenzyUnitCountBlade();
	void SetFrenzyUnitCountHandle();
	void GetActiveBladeCount(int32 ActiveCount, int32 BladeUnitCount_0, bool IsActive, int32* ResultCount);
	void GetActiveHandleCount(int32 ActiveCount, int32 BladeUnitCount_0, bool IsActive, int32* ResultCount);
	void GetActiveControlGuideCount(int32 ModifiedActiveCount);
	void GetComboStep(int32* ComboStep_0);
	void SetUnitCount(ELInputTypeHudOnly InputType, bool ChainStarted, int32 SkillRequireUnitCount, int32 SkillConsumeUnitCount, int32 ChainUnitCount, bool IsBladeOrHandle, bool* ResultChainStarted, int32* ResultChainUnitCount, int32* UnitCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_DPad_Weapon_C">();
	}
	static class UUIW_DPad_Weapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_DPad_Weapon_C>();
	}
};
static_assert(alignof(UUIW_DPad_Weapon_C) == 0x000008, "Wrong alignment on UUIW_DPad_Weapon_C");
static_assert(sizeof(UUIW_DPad_Weapon_C) == 0x000488, "Wrong size on UUIW_DPad_Weapon_C");
static_assert(offsetof(UUIW_DPad_Weapon_C, UberGraphFrame) == 0x0002A8, "Member 'UUIW_DPad_Weapon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Ani_FableActive_Handle) == 0x0002B0, "Member 'UUIW_DPad_Weapon_C::Ani_FableActive_Handle' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Ani_FableActive_Blade) == 0x0002B8, "Member 'UUIW_DPad_Weapon_C::Ani_FableActive_Blade' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, BG_Blade) == 0x0002C0, "Member 'UUIW_DPad_Weapon_C::BG_Blade' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, BG_Handle) == 0x0002C8, "Member 'UUIW_DPad_Weapon_C::BG_Handle' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, BG_Heroic) == 0x0002D0, "Member 'UUIW_DPad_Weapon_C::BG_Heroic' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, BladeUnit_1) == 0x0002D8, "Member 'UUIW_DPad_Weapon_C::BladeUnit_1' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, BladeUnit_2) == 0x0002E0, "Member 'UUIW_DPad_Weapon_C::BladeUnit_2' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, BladeUnit_3) == 0x0002E8, "Member 'UUIW_DPad_Weapon_C::BladeUnit_3' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, BladeUnit_4) == 0x0002F0, "Member 'UUIW_DPad_Weapon_C::BladeUnit_4' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Btn_Fable_Blade_0) == 0x0002F8, "Member 'UUIW_DPad_Weapon_C::Btn_Fable_Blade_0' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Btn_Fable_Blade_1) == 0x000300, "Member 'UUIW_DPad_Weapon_C::Btn_Fable_Blade_1' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Btn_Fable_Blade_2) == 0x000308, "Member 'UUIW_DPad_Weapon_C::Btn_Fable_Blade_2' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Btn_Fable_Guard) == 0x000310, "Member 'UUIW_DPad_Weapon_C::Btn_Fable_Guard' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Btn_Fable_Handle_0) == 0x000318, "Member 'UUIW_DPad_Weapon_C::Btn_Fable_Handle_0' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, DPad_Durability) == 0x000320, "Member 'UUIW_DPad_Weapon_C::DPad_Durability' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Fable) == 0x000328, "Member 'UUIW_DPad_Weapon_C::Fable' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, FX_Abnormal_Blade) == 0x000330, "Member 'UUIW_DPad_Weapon_C::FX_Abnormal_Blade' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, FX_Abnormal_Handle) == 0x000338, "Member 'UUIW_DPad_Weapon_C::FX_Abnormal_Handle' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Group_Blade_FableBtn) == 0x000340, "Member 'UUIW_DPad_Weapon_C::Group_Blade_FableBtn' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Group_Handle_FableBtn) == 0x000348, "Member 'UUIW_DPad_Weapon_C::Group_Handle_FableBtn' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Group_Normal) == 0x000350, "Member 'UUIW_DPad_Weapon_C::Group_Normal' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, HandleUnit_1) == 0x000358, "Member 'UUIW_DPad_Weapon_C::HandleUnit_1' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, HandleUnit_2) == 0x000360, "Member 'UUIW_DPad_Weapon_C::HandleUnit_2' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, HandleUnit_3) == 0x000368, "Member 'UUIW_DPad_Weapon_C::HandleUnit_3' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Icon_FableType_Blade) == 0x000370, "Member 'UUIW_DPad_Weapon_C::Icon_FableType_Blade' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Icon_FableType_Handle) == 0x000378, "Member 'UUIW_DPad_Weapon_C::Icon_FableType_Handle' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Img_Blade) == 0x000380, "Member 'UUIW_DPad_Weapon_C::Img_Blade' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Img_EquipSlot) == 0x000388, "Member 'UUIW_DPad_Weapon_C::Img_EquipSlot' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Img_Fable_Arrow_1) == 0x000390, "Member 'UUIW_DPad_Weapon_C::Img_Fable_Arrow_1' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Img_Fable_Arrow_2) == 0x000398, "Member 'UUIW_DPad_Weapon_C::Img_Fable_Arrow_2' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Img_Handle) == 0x0003A0, "Member 'UUIW_DPad_Weapon_C::Img_Handle' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, Img_Heroic) == 0x0003A8, "Member 'UUIW_DPad_Weapon_C::Img_Heroic' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, LStatComponent) == 0x0003B0, "Member 'UUIW_DPad_Weapon_C::LStatComponent' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, CurrentWeapon) == 0x0003B8, "Member 'UUIW_DPad_Weapon_C::CurrentWeapon' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, CurrentDurabilityType) == 0x0003C0, "Member 'UUIW_DPad_Weapon_C::CurrentDurabilityType' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, CurrentEquipSlotType) == 0x0003C1, "Member 'UUIW_DPad_Weapon_C::CurrentEquipSlotType' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, BladeUnitList) == 0x0003C8, "Member 'UUIW_DPad_Weapon_C::BladeUnitList' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, HandleUnitList) == 0x0003D8, "Member 'UUIW_DPad_Weapon_C::HandleUnitList' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, BladeUnitCount) == 0x0003E8, "Member 'UUIW_DPad_Weapon_C::BladeUnitCount' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, PrevActiveCount) == 0x0003EC, "Member 'UUIW_DPad_Weapon_C::PrevActiveCount' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, CurrActiveCount) == 0x0003F0, "Member 'UUIW_DPad_Weapon_C::CurrActiveCount' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, HandleUnitCount) == 0x0003F4, "Member 'UUIW_DPad_Weapon_C::HandleUnitCount' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, IsActiveBladeUnit) == 0x0003F8, "Member 'UUIW_DPad_Weapon_C::IsActiveBladeUnit' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, IsActiveHandleUnit) == 0x0003F9, "Member 'UUIW_DPad_Weapon_C::IsActiveHandleUnit' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, PrevDurability) == 0x0003FC, "Member 'UUIW_DPad_Weapon_C::PrevDurability' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, NeedForceUpdateBlade) == 0x000400, "Member 'UUIW_DPad_Weapon_C::NeedForceUpdateBlade' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, NeedForceUpdateHandle) == 0x000401, "Member 'UUIW_DPad_Weapon_C::NeedForceUpdateHandle' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, NeedWarning) == 0x000402, "Member 'UUIW_DPad_Weapon_C::NeedWarning' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, CurrentInputTypeBlade) == 0x000403, "Member 'UUIW_DPad_Weapon_C::CurrentInputTypeBlade' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, CurrentInputTypeHandle) == 0x000404, "Member 'UUIW_DPad_Weapon_C::CurrentInputTypeHandle' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, BladeSkillName) == 0x000408, "Member 'UUIW_DPad_Weapon_C::BladeSkillName' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, HandleSkillName) == 0x000410, "Member 'UUIW_DPad_Weapon_C::HandleSkillName' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, PrevUnitAllCount) == 0x000418, "Member 'UUIW_DPad_Weapon_C::PrevUnitAllCount' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, CurrUnitAllCount) == 0x00041C, "Member 'UUIW_DPad_Weapon_C::CurrUnitAllCount' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, PrevFrenzyValue) == 0x000420, "Member 'UUIW_DPad_Weapon_C::PrevFrenzyValue' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, UnitFrenzyValue) == 0x000424, "Member 'UUIW_DPad_Weapon_C::UnitFrenzyValue' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, IsFableArtsStarted) == 0x000428, "Member 'UUIW_DPad_Weapon_C::IsFableArtsStarted' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, FableBladeArr) == 0x000430, "Member 'UUIW_DPad_Weapon_C::FableBladeArr' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, HoldStep) == 0x000440, "Member 'UUIW_DPad_Weapon_C::HoldStep' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, ComboStep) == 0x000444, "Member 'UUIW_DPad_Weapon_C::ComboStep' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, CurrentFrenzyValue) == 0x000448, "Member 'UUIW_DPad_Weapon_C::CurrentFrenzyValue' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, MaxFrenzyValue) == 0x00044C, "Member 'UUIW_DPad_Weapon_C::MaxFrenzyValue' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, ConsumeUnitCount) == 0x000450, "Member 'UUIW_DPad_Weapon_C::ConsumeUnitCount' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, ConsumeReason) == 0x000454, "Member 'UUIW_DPad_Weapon_C::ConsumeReason' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, NeedRefreshFrenzy) == 0x000455, "Member 'UUIW_DPad_Weapon_C::NeedRefreshFrenzy' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, ChainHandleStarted) == 0x000456, "Member 'UUIW_DPad_Weapon_C::ChainHandleStarted' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, ChainHandleUnitCount) == 0x000458, "Member 'UUIW_DPad_Weapon_C::ChainHandleUnitCount' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, HandleConsumeFrenzyUnitCount) == 0x00045C, "Member 'UUIW_DPad_Weapon_C::HandleConsumeFrenzyUnitCount' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, HandleRequireFrenzyUnitCount) == 0x000460, "Member 'UUIW_DPad_Weapon_C::HandleRequireFrenzyUnitCount' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, ComboTableBP) == 0x000468, "Member 'UUIW_DPad_Weapon_C::ComboTableBP' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, MaxFableSlotCount) == 0x000470, "Member 'UUIW_DPad_Weapon_C::MaxFableSlotCount' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, ChainBladeStarted) == 0x000474, "Member 'UUIW_DPad_Weapon_C::ChainBladeStarted' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, ChainBladeUnitCount) == 0x000478, "Member 'UUIW_DPad_Weapon_C::ChainBladeUnitCount' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, BladeConsumeFrenzyUnitCount) == 0x00047C, "Member 'UUIW_DPad_Weapon_C::BladeConsumeFrenzyUnitCount' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, BladeRequireFrenzyUnitCount) == 0x000480, "Member 'UUIW_DPad_Weapon_C::BladeRequireFrenzyUnitCount' has a wrong offset!");
static_assert(offsetof(UUIW_DPad_Weapon_C, IsSuddenBreak) == 0x000484, "Member 'UUIW_DPad_Weapon_C::IsSuddenBreak' has a wrong offset!");

}

