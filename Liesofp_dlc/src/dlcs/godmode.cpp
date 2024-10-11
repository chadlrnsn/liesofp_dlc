#include <stdafx.h>
#include "godmode.h"
#include <globals.h>

bool godmode::Toggle()
{
	printf("toggle god %d -> %d", enable, !enable);
	enable = !enable;
	return enable;
}

void godmode::Bind()
{
	if (GetAsyncKeyState(VK_F1) & 1) {
		this->Toggle();
	}
}

void godmode::Run()
{

	Bind();

	if (!enable) return;

	if (!globals::character) return;


	if (enable && bOnce) {


		bOnce = false;
		printf("Player will not be damaged\n");
	}

	if (!enable && !bOnce) {

		bOnce = true;
		printf("Player be damagable\n");
	}


}