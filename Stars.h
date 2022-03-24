#pragma once
#include "SolarSysObj.h"

class TStars : public TSolarSysObj // Звезды солнечной системы.
{
public:
	TStars();
	~TStars();

	char GetSpectClass();
	int GetTemperature();

	void SetSpectClass(char _spectClass);
	void SetTemperature(int _temperature);


protected:
	char spectClass; // Спектральный класс.
	int temperature; // Температура поверхности в (К).

};