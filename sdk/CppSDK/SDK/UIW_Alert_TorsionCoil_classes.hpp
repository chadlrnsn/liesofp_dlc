#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Alert_TorsionCoil

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Alert_TorsionCoil.UIW_Alert_TorsionCoil_C
// 0x0028 (0x0290 - 0x0268)
class UUIW_Alert_TorsionCoil_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_Construct;                                     // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Img_Text;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Text_Overay;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Location;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIW_Alert_TorsionCoil(int32 EntryPoint);
	void Hide();
	void Show(class FName NameData);
	void Destruct();
	void Construct();
	void Finished_A92A722F4C10AB934556B68E0DBDF1E2();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Alert_TorsionCoil_C">();
	}
	static class UUIW_Alert_TorsionCoil_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Alert_TorsionCoil_C>();
	}
};
static_assert(alignof(UUIW_Alert_TorsionCoil_C) == 0x000008, "Wrong alignment on UUIW_Alert_TorsionCoil_C");
static_assert(sizeof(UUIW_Alert_TorsionCoil_C) == 0x000290, "Wrong size on UUIW_Alert_TorsionCoil_C");
static_assert(offsetof(UUIW_Alert_TorsionCoil_C, UberGraphFrame) == 0x000268, "Member 'UUIW_Alert_TorsionCoil_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_TorsionCoil_C, Ani_Construct) == 0x000270, "Member 'UUIW_Alert_TorsionCoil_C::Ani_Construct' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_TorsionCoil_C, Img_Text) == 0x000278, "Member 'UUIW_Alert_TorsionCoil_C::Img_Text' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_TorsionCoil_C, Img_Text_Overay) == 0x000280, "Member 'UUIW_Alert_TorsionCoil_C::Img_Text_Overay' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_TorsionCoil_C, Text_Location) == 0x000288, "Member 'UUIW_Alert_TorsionCoil_C::Text_Location' has a wrong offset!");

}

