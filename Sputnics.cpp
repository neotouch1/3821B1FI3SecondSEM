#include "Sputnics.h"

// ��������

TSputnics::TSputnics()
{
	string parentPlanets;
	int circulationSpeed = 0;
}

TSputnics::~TSputnics()
{
	string parentPlanets;
	int circulationSpeed = 0;
}

string TSputnics::GetParentPlanets()
{
	return parentPlanets;
}

int TSputnics::GetCirculationSpeed()
{
	return circulationSpeed;
}

void TSputnics::SetParentPlanets(string _parentPlanets)
{
	//?
}

void TSputnics::SetCirculationSpeed(float _circulationSpeed) // �������� ���������
{
	if (_circulationSpeed > 0)
		this->circulationSpeed = _circulationSpeed;
}