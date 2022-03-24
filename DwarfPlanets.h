#pragma once
#include "SolarSysObj.h"

class TDwarfPlanets : public TSolarSysObj // ���������� �������.
{
public:
	TDwarfPlanets();
	~TDwarfPlanets();

	float GetDistanceSun();
	float GetOrbitSpeed();

	void SetDistanceSun(float _distanceSun);
	void SetOrbitSpeed(float _orbitSpeed);

protected:

	float distanceSun; // ���������� �� ������
	float orbitSpeed; // ����������� ��������

};