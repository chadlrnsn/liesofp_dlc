#pragma once
#include <globals.h>

class speedhack
{
public:

	void Run(SDK::ULocalPlayer*);

private:
	bool enable = false;
	struct speed {
		float max;
		float min;
		float current;
	};

	float oldAccel;
	float oldMaxSpeed;

	bool Toggle();
	void Bind();

};

inline speedhack spdhck;
