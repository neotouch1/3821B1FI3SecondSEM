#pragma once
#include <iostream>
#include <string>     
using namespace std;

class TSolarSysObj // Объекты солнечной системы. Родительский класс.
{
public:
	TSolarSysObj();
	~TSolarSysObj();

	float GetWeight();
	float GetVolume();
	float GetRadius();
	string GetName();


	void SetWeight(float _weight);
	void SetVolume(float _volume);
	void SetRadius(float _radius);
	void SetName(string _name);

	virtual void Inhabited()
	{
		cout << "There is no life here." << endl;
	}



private:

	float weight; // Масса
	float volume; // Объем
	float radius; // Радиус
	string name;   // Имя объекта

};