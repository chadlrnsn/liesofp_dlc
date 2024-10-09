#include <stdafx.h>
#include "speedhack.h"

bool speedhack::Toggle()
{
	printf("toggle speedhack %d -> %d\n", enable, !enable);
	enable = !enable;
	return enable;
}

void speedhack::Bind()
{
	if (GetAsyncKeyState(VK_F2) & 1) {
		this->Toggle();
	}
}

int speedhack::ChangeType()
{
	if (GetAsyncKeyState(VK_F3) & 1) {
		Type StoredType = DLCType;
		DLCType = (DLCType == Type::ACCELERATE) ? Type::DILLATION : Type::ACCELERATE;
		LOG_INFO("Speedhack typechanged form %s to %s", GetTypeName(StoredType), GetTypeName(DLCType));
	}

	return 0;
}

std::string speedhack::GetTypeName(Type currentType)
{
	switch (currentType)
	{
	case speedhack::Type::ACCELERATE:
		return "Accelerate";
		break;
	case speedhack::Type::DILLATION:
		return "Dillation";
		break;
	}
	return "";
}

void ResetMoveSpeed(ACharacter* mc) {

	auto charactermovement = mc->CharacterMovement;

	if (!charactermovement) return;

	charactermovement->MaxAcceleration = 1000;
	charactermovement->MaxWalkSpeed = 400;

	auto own = mc->GetOwner();
	own->CustomTimeDilation = 1;

}

void speedhack::Run(SDK::ULocalPlayer* local_player)
{
	Bind();

	if (!local_player) return;

	auto player_controller = local_player->PlayerController;
	if (!player_controller) return;

	auto c_character = player_controller->Character;
	if (!c_character) return;

	auto char_movement = c_character->CharacterMovement;

	if (!char_movement) return;

	auto c_pawn = player_controller->Pawn;
	if (!c_pawn) return;

	if (enable) {
		ChangeType();

		//if ((DLCType == Type::ACCELERATE)) {
		//	ResetMoveSpeed(c_character);

		//	char_movement->MaxAcceleration = 9999;
		//	char_movement->MaxWalkSpeed = 9999;
		//}
		//else if (DLCType == Type::DILLATION) {

		//}


		c_pawn->CustomTimeDilation = 10.0f;
	}
	else {
		c_pawn->CustomTimeDilation = 1.0f;
	}
}

