#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_Design_PuppetKing_Granade_Attatch

#include "Basic.hpp"

#include "BP_Projectile_Design_PuppetKing_Granade_Attatch_classes.hpp"
#include "BP_Projectile_Design_PuppetKing_Granade_Attatch_parameters.hpp"


namespace SDK
{

// Function BP_Projectile_Design_PuppetKing_Granade_Attatch.BP_Projectile_Design_PuppetKing_Granade_Attatch_C.ExecuteUbergraph_BP_Projectile_Design_PuppetKing_Granade_Attatch
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Design_PuppetKing_Granade_Attatch_C::ExecuteUbergraph_BP_Projectile_Design_PuppetKing_Granade_Attatch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Design_PuppetKing_Granade_Attatch_C", "ExecuteUbergraph_BP_Projectile_Design_PuppetKing_Granade_Attatch");

	Params::BP_Projectile_Design_PuppetKing_Granade_Attatch_C_ExecuteUbergraph_BP_Projectile_Design_PuppetKing_Granade_Attatch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Design_PuppetKing_Granade_Attatch.BP_Projectile_Design_PuppetKing_Granade_Attatch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Projectile_Design_PuppetKing_Granade_Attatch_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Design_PuppetKing_Granade_Attatch_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
