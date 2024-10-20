#pragma once
#include <stdafx.h>
#include <globals.h>

class speedhack
{
public:

	void Run();

private:
	bool enable = false;
	bool m_bShouldResetSpeed = false;
	bool bOnce = true;

	enum class DLCType {
		NONE,
		ACCELERATE,
		DILLATION,
		MAX_COUNT,
	};

	DLCType DLC_Type = DLCType::ACCELERATE;

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
	std::string GetTypeName(DLCType);

};

inline speedhack spdhck;
