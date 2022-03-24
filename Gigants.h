#pragma once
#include "SolarSysObj.h"

class TGigants : public TSolarSysObj // Планеты гиганты.
{
public:
	TGigants();
	~TGigants();

	float GetDistanceSun();
	float GetOrbitSpeed();

	void SetDistanceSun(float _distanceSun);
	void SetOrbitSpeed(float _orbitSpeed);

	float GetDensity();
	void SetDensity(float _density);


protected:
	float density;		 // Плотность атмосферы
	float distanceSun;  // Расстояние до солнца
	float orbitSpeed;   // Орбитальная скорость
};