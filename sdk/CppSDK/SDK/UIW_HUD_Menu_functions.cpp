#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_HUD_Menu

#include "Basic.hpp"

#include "UIW_HUD_Menu_classes.hpp"
#include "UIW_HUD_Menu_parameters.hpp"


namespace SDK
{

// Function UIW_HUD_Menu.UIW_HUD_Menu_C.ExecuteUbergraph_UIW_HUD_Menu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_C::ExecuteUbergraph_UIW_HUD_Menu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "ExecuteUbergraph_UIW_HUD_Menu");

	Params::UIW_HUD_Menu_C_ExecuteUbergraph_UIW_HUD_Menu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.BndEvt__UIW_HUD_Menu_Btn_Use_K2Node_ComponentBoundEvent_3_OnActive__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUIW_Btn_Key_C*                   BtnKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_C::BndEvt__UIW_HUD_Menu_Btn_Use_K2Node_ComponentBoundEvent_3_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "BndEvt__UIW_HUD_Menu_Btn_Use_K2Node_ComponentBoundEvent_3_OnActive__DelegateSignature");

	Params::UIW_HUD_Menu_C_BndEvt__UIW_HUD_Menu_Btn_Use_K2Node_ComponentBoundEvent_3_OnActive__DelegateSignature Parms{};

	Parms.BtnKey = BtnKey;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.BndEvt__UIW_HUD_Menu_Btn_Change_K2Node_ComponentBoundEvent_2_OnActive__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUIW_Btn_Key_C*                   BtnKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_C::BndEvt__UIW_HUD_Menu_Btn_Change_K2Node_ComponentBoundEvent_2_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "BndEvt__UIW_HUD_Menu_Btn_Change_K2Node_ComponentBoundEvent_2_OnActive__DelegateSignature");

	Params::UIW_HUD_Menu_C_BndEvt__UIW_HUD_Menu_Btn_Change_K2Node_ComponentBoundEvent_2_OnActive__DelegateSignature Parms{};

	Parms.BtnKey = BtnKey;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.BndEvt__UIW_HUD_Menu_Btn_Select_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUIW_Btn_Key_C*                   BtnKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_C::BndEvt__UIW_HUD_Menu_Btn_Select_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "BndEvt__UIW_HUD_Menu_Btn_Select_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature");

	Params::UIW_HUD_Menu_C_BndEvt__UIW_HUD_Menu_Btn_Select_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature Parms{};

	Parms.BtnKey = BtnKey;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_HUD_Menu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_HUD_Menu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.Hide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    DoSave                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_Menu_C::Hide(bool DoSave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "Hide");

	Params::UIW_HUD_Menu_C_Hide Parms{};

	Parms.DoSave = DoSave;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NeedCenterMouse                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_Menu_C::Show(bool NeedCenterMouse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "Show");

	Params::UIW_HUD_Menu_C_Show Parms{};

	Parms.NeedCenterMouse = NeedCenterMouse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.Finished_63C44360470EEA9B9C7E6EBD14C0657A
// (BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Menu_C::Finished_63C44360470EEA9B9C7E6EBD14C0657A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "Finished_63C44360470EEA9B9C7E6EBD14C0657A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.OpenWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             WidgetName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_C::OpenWidget(class FName WidgetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "OpenWidget");

	Params::UIW_HUD_Menu_C_OpenWidget Parms{};

	Parms.WidgetName = WidgetName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.OnPressedMenuBtn
// (Private, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Menu_C::OnPressedMenuBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "OnPressedMenuBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.OnSelecedMenuBtn
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIW_HUD_Menu_Btn_C*              MenuBtn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_C::OnSelecedMenuBtn(class UUIW_HUD_Menu_Btn_C* MenuBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "OnSelecedMenuBtn");

	Params::UIW_HUD_Menu_C_OnSelecedMenuBtn Parms{};

	Parms.MenuBtn = MenuBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.OnPressedBeltSlot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIW_HUD_Menu_BeltSlot_C*         BeltSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_C::OnPressedBeltSlot(class UUIW_HUD_Menu_BeltSlot_C* BeltSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "OnPressedBeltSlot");

	Params::UIW_HUD_Menu_C_OnPressedBeltSlot Parms{};

	Parms.BeltSlot = BeltSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.OnSelectedBeltSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIW_HUD_Menu_BeltSlot_C*         BeltSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_C::OnSelectedBeltSlot(class UUIW_HUD_Menu_BeltSlot_C* BeltSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "OnSelectedBeltSlot");

	Params::UIW_HUD_Menu_C_OnSelectedBeltSlot Parms{};

	Parms.BeltSlot = BeltSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.OnPressedPouchSlot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIW_HUD_Menu_PouchSlot_C*        PouchSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_C::OnPressedPouchSlot(class UUIW_HUD_Menu_PouchSlot_C* PouchSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "OnPressedPouchSlot");

	Params::UIW_HUD_Menu_C_OnPressedPouchSlot Parms{};

	Parms.PouchSlot = PouchSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.OnSelectedPouchSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIW_HUD_Menu_PouchSlot_C*        PouchSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_C::OnSelectedPouchSlot(class UUIW_HUD_Menu_PouchSlot_C* PouchSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "OnSelectedPouchSlot");

	Params::UIW_HUD_Menu_C_OnSelectedPouchSlot Parms{};

	Parms.PouchSlot = PouchSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.OnPressedKeyUp
// (Private, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Menu_C::OnPressedKeyUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "OnPressedKeyUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.OnPressedKeyDown
// (Private, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Menu_C::OnPressedKeyDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "OnPressedKeyDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.OnPressedKeyLeft
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Menu_C::OnPressedKeyLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "OnPressedKeyLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.OnPressedKeyRight
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Menu_C::OnPressedKeyRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "OnPressedKeyRight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.RefreshSubTitle
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIW_SecondTitle_Icon_C*          SecondTitle                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_C::RefreshSubTitle(class UUIW_SecondTitle_Icon_C* SecondTitle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "RefreshSubTitle");

	Params::UIW_HUD_Menu_C_RefreshSubTitle Parms{};

	Parms.SecondTitle = SecondTitle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.RefreshBelt
// (Private, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Menu_C::RefreshBelt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "RefreshBelt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.RefreshPouch
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Menu_C::RefreshPouch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "RefreshPouch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.SetPouchKeyIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bGamePad                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_Menu_C::SetPouchKeyIcon(bool bGamePad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "SetPouchKeyIcon");

	Params::UIW_HUD_Menu_C_SetPouchKeyIcon Parms{};

	Parms.bGamePad = bGamePad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.OnSavedOptions
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SyncStart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_Menu_C::OnSavedOptions(bool SyncStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "OnSavedOptions");

	Params::UIW_HUD_Menu_C_OnSavedOptions Parms{};

	Parms.SyncStart = SyncStart;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu.UIW_HUD_Menu_C.FindBeltSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsFirstLine                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   SlotIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUIW_HUD_Menu_BeltSlot_C*         SlotBelt                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_C::FindBeltSlot(bool IsFirstLine, int32 SlotIndex, class UUIW_HUD_Menu_BeltSlot_C** SlotBelt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_C", "FindBeltSlot");

	Params::UIW_HUD_Menu_C_FindBeltSlot Parms{};

	Parms.IsFirstLine = IsFirstLine;
	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (SlotBelt != nullptr)
		*SlotBelt = Parms.SlotBelt;
}

}

