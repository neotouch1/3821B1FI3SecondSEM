#pragma once
#include "SolarSysObj.h"


class TEarthGroupPlanets : public TSolarSysObj // Планеты земной группы.
{
public:

	TEarthGroupPlanets();
	~TEarthGroupPlanets();

	float GetDistanceSun();
	float GetOrbitSpeed();

	void SetDistanceSun(float _distanceSun);
	void SetOrbitSpeed(float _orbitSpeed);

	void Inhabited() override		// Переопределение
	{
		cout << "There is life here!" << endl;
	}

	void Inhabited(TSolarSysObj* solarsysobj)
	{
		solarsysobj->Inhabited();
	}

protected:
	float distanceSun; // Расстояние до солнца
	float orbitSpeed; // Орбитальная скорость
};