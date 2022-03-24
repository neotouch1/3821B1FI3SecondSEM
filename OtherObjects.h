#pragma once
#include "SolarSysObj.h"

class TOtherObjects : public TSolarSysObj // Другие объекты солнечной системы
{
public:
	TOtherObjects();
	~TOtherObjects();

	float GetDistanceSun();
	float GetNumber();


	void SetDistanceSun(float _distanceSun);
	void SetNumber(float _number);



protected:
	float number;  // Примерное количество
	float distanceSun;  // Расстояние до солнца
};