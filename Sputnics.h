#pragma once
#pragma once
#include "SolarSysObj.h"

class TSputnics : public TSolarSysObj
{
public:
	TSputnics();
	~TSputnics();


	string GetParentPlanets();
	int GetCirculationSpeed();

	void SetParentPlanets(string _parentPlanets);
	void SetCirculationSpeed(float _circulationSpeed);

protected:

	string parentPlanets;   // Родительская планета.
	float circulationSpeed; // Скорость обращения.
};