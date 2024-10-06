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

void speedhack::Run(SDK::ULocalPlayer* local_player)
{
	Bind();

	if (!local_player) return;

	auto player_controller = local_player->PlayerController;
	
	if (!player_controller) return;

	auto c_character = player_controller->Character;

	auto c_pawn = player_controller->Pawn;
	if (!c_pawn) return;

	if (enable) {
		c_pawn->CustomTimeDilation = 10.0f;
	}
	else {
		c_pawn->CustomTimeDilation = 1.0f;
	}
}

