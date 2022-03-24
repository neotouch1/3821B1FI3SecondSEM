// Планеты гиганты.

#include "Gigants.h"

TGigants::TGigants()
{
	float density = 0;			 // Плотность атмосферы
	float distanceSun = 0;		// Расстояние до солнца
	float orbitSpeed = 0;		// Орбитальная скорость
}


TGigants::~TGigants()
{
	float density = 0;
	float distanceSun = 0;
	float orbitSpeed = 0;
}

float TGigants::GetDistanceSun()
{
	return distanceSun;
}

float TGigants::GetOrbitSpeed()
{
	return orbitSpeed;
}

void TGigants::SetDistanceSun(float _distanceSun)
{
	if (_distanceSun > 0)
		this->distanceSun = _distanceSun;
}

void TGigants::SetOrbitSpeed(float _orbitSpeed)
{
	if (_orbitSpeed > 0)
		this->orbitSpeed = _orbitSpeed;
}

float TGigants::GetDensity()
{
	return density;
}

void TGigants::SetDensity(float _density)
{
	if (_density > 0)
		density = _density;
}