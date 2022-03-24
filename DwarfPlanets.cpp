#include "DwarfPlanets.h"

// Карликовые планеты

TDwarfPlanets::TDwarfPlanets()
{
	float distanceSun = 0;
	float orbitSpeed = 0;
}

TDwarfPlanets::~TDwarfPlanets()
{
	float distanceSun = 0;
	float orbitSpeed = 0;

}

float TDwarfPlanets::GetDistanceSun()
{
	return distanceSun;
}

float TDwarfPlanets::GetOrbitSpeed()
{
	return orbitSpeed;
}

void TDwarfPlanets::SetDistanceSun(float _distanceSun)
{
	if (_distanceSun > 0)
		this->distanceSun = _distanceSun;
}

void TDwarfPlanets::SetOrbitSpeed(float _orbitSpeed)
{
	if (_orbitSpeed > 0)
		this->orbitSpeed = _orbitSpeed;
}