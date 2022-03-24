#pragma once
#include <iostream>
#include <string>     
using namespace std;

class TSolarSysObj // ������� ��������� �������. ������������ �����.
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

	float weight; // �����
	float volume; // �����
	float radius; // ������
	string name;   // ��� �������

};