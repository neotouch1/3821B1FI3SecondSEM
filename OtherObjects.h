#pragma once
#include "SolarSysObj.h"

class TOtherObjects : public TSolarSysObj // ������ ������� ��������� �������
{
public:
	TOtherObjects();
	~TOtherObjects();

	float GetDistanceSun();
	float GetNumber();


	void SetDistanceSun(float _distanceSun);
	void SetNumber(float _number);



protected:
	float number;  // ��������� ����������
	float distanceSun;  // ���������� �� ������
};