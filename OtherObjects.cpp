#include "OtherObjects.h"

TOtherObjects::TOtherObjects()
{
	float number = 0;
	float distanceSun = 0;
}

TOtherObjects::~TOtherObjects()
{
	float number = 0;
	float distanceSun = 0;
}

float TOtherObjects::GetDistanceSun()
{
	return distanceSun;
}

float TOtherObjects::GetNumber()
{
	return number;
}


void TOtherObjects::SetDistanceSun(float _distanceSun)
{
	if (_distanceSun > 0)
		this->distanceSun = _distanceSun;
}

void TOtherObjects::SetNumber(float _number)
{
	if (_number > 0)
		this->number = _number;
}
