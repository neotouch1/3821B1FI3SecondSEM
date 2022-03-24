#include "SolarSysObj.h"

// Объекты солнечной системы

TSolarSysObj::TSolarSysObj()
{
	weight = 0;
	volume = 0;
	radius = 0;
	string name;

}

TSolarSysObj::~TSolarSysObj()
{
	weight = 0;
	volume = 0;
	radius = 0;
	string name;
}

float TSolarSysObj::GetWeight()
{
	return weight;
}

float TSolarSysObj::GetVolume()
{
	return volume;
}

float TSolarSysObj::GetRadius()
{
	return radius;
}

string TSolarSysObj::GetName()
{
	return name;
}




void TSolarSysObj::SetWeight(float _weight)
{
	if (_weight > 0)
		this->weight = _weight;
}

void TSolarSysObj::SetVolume(float _volume)
{
	if (_volume > 0)
		volume = _volume;
}

void TSolarSysObj::SetRadius(float _radius)
{
	if (_radius > 0)
		this->radius = _radius;
}



void TSolarSysObj::SetName(string _name)
{
	this->name = _name;
}