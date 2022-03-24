#include "EarthGroupPlanets.h"

#include "SolarSysObj.h"


// Планеты земной группы

TEarthGroupPlanets::TEarthGroupPlanets()
{
	float distanceSun = 0;
	float orbitSpeed = 0;
}

TEarthGroupPlanets::~TEarthGroupPlanets()
{
	float distanceSun = 0;
	float orbitSpeed = 0;
}

float TEarthGroupPlanets::GetDistanceSun()
{
	return distanceSun;
}

float TEarthGroupPlanets::GetOrbitSpeed()
{
	return orbitSpeed;
}

void TEarthGroupPlanets::SetDistanceSun(float _distanceSun)
{
	if (_distanceSun > 0)
		this->distanceSun = _distanceSun;
}

void TEarthGroupPlanets::SetOrbitSpeed(float _orbitSpeed)
{
	if (_orbitSpeed > 0)
		this->orbitSpeed = _orbitSpeed;
}