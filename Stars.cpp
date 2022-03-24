#include "Stars.h"

// Звезда

TStars::TStars()
{
	char spectClass = 0;
	int temperature = 0;

}

TStars::~TStars()
{
	char spectClass = 0;
	int temperature = 0;

}

char TStars::GetSpectClass()
{
	return spectClass;
}

int TStars::GetTemperature()
{
	return temperature;
}

void TStars::SetSpectClass(char _spectClass)
{
	if (_spectClass > 0)
		this->spectClass = _spectClass;
}

void TStars::SetTemperature(int _temperature)
{
	if (_temperature > 0)
		this->temperature = _temperature;
}