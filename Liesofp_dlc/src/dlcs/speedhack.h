#pragma once
#include <stdafx.h>
#include <globals.h>

class speedhack
{
public:

	void Run(SDK::ULocalPlayer*);

private:
	bool enable = false;
	
	enum class Type {
		NONE,
		ACCELERATE,
		DILLATION,
		MAX_COUNT,
	};

	Type DLCType = Type::ACCELERATE;

	struct speed {
		float max;
		float min;
		float current;
	};

	float oldAccel;
	float oldMaxSpeed;

	bool Toggle();
	void Bind();
	int ChangeType();
	std::string GetTypeName(Type);

};

inline speedhack spdhck;
