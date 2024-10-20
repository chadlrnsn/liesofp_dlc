#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SourceControl

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct SourceControl.SourceControlState
// 0x0038 (0x0038 - 0x0000)
struct FSourceControlState final
{
public:
	class FString                                 Filename;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsUnknown;                                        // 0x0011(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanCheckIn;                                       // 0x0012(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanCheckOut;                                      // 0x0013(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsCheckedOut;                                     // 0x0014(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsCurrent;                                        // 0x0015(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsSourceControlled;                               // 0x0016(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsAdded;                                          // 0x0017(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsDeleted;                                        // 0x0018(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsIgnored;                                        // 0x0019(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanEdit;                                          // 0x001A(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanDelete;                                        // 0x001B(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsModified;                                       // 0x001C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanAdd;                                           // 0x001D(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsConflicted;                                     // 0x001E(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanRevert;                                        // 0x001F(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsCheckedOutOther;                                // 0x0020(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CheckedOutOther;                                   // 0x0028(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSourceControlState) == 0x000008, "Wrong alignment on FSourceControlState");
static_assert(sizeof(FSourceControlState) == 0x000038, "Wrong size on FSourceControlState");
static_assert(offsetof(FSourceControlState, Filename) == 0x000000, "Member 'FSourceControlState::Filename' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bIsValid) == 0x000010, "Member 'FSourceControlState::bIsValid' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bIsUnknown) == 0x000011, "Member 'FSourceControlState::bIsUnknown' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bCanCheckIn) == 0x000012, "Member 'FSourceControlState::bCanCheckIn' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bCanCheckOut) == 0x000013, "Member 'FSourceControlState::bCanCheckOut' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bIsCheckedOut) == 0x000014, "Member 'FSourceControlState::bIsCheckedOut' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bIsCurrent) == 0x000015, "Member 'FSourceControlState::bIsCurrent' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bIsSourceControlled) == 0x000016, "Member 'FSourceControlState::bIsSourceControlled' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bIsAdded) == 0x000017, "Member 'FSourceControlState::bIsAdded' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bIsDeleted) == 0x000018, "Member 'FSourceControlState::bIsDeleted' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bIsIgnored) == 0x000019, "Member 'FSourceControlState::bIsIgnored' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bCanEdit) == 0x00001A, "Member 'FSourceControlState::bCanEdit' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bCanDelete) == 0x00001B, "Member 'FSourceControlState::bCanDelete' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bIsModified) == 0x00001C, "Member 'FSourceControlState::bIsModified' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bCanAdd) == 0x00001D, "Member 'FSourceControlState::bCanAdd' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bIsConflicted) == 0x00001E, "Member 'FSourceControlState::bIsConflicted' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bCanRevert) == 0x00001F, "Member 'FSourceControlState::bCanRevert' has a wrong offset!");
static_assert(offsetof(FSourceControlState, bIsCheckedOutOther) == 0x000020, "Member 'FSourceControlState::bIsCheckedOutOther' has a wrong offset!");
static_assert(offsetof(FSourceControlState, CheckedOutOther) == 0x000028, "Member 'FSourceControlState::CheckedOutOther' has a wrong offset!");

}

