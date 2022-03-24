#pragma once
#include "SolarSysObj.h"

class TStars : public TSolarSysObj // ������ ��������� �������.
{
public:
	TStars();
	~TStars();

	char GetSpectClass();
	int GetTemperature();

	void SetSpectClass(char _spectClass);
	void SetTemperature(int _temperature);


protected:
	char spectClass; // ������������ �����.
	int temperature; // ����������� ����������� � (�).

};