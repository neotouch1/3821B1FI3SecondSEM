#include<iostream>
#include<string>
#include<clocale>

#include "SolarSysObj.h"
#include "Gigants.h"
#include "EarthGroupPlanets.h"
#include "DwarfPlanets.h"
#include "Stars.h"
#include "Sputnics.h"
#include "OtherObjects.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");


	// ������. Star

	TStars Sun;
	Sun.SetWeight(332946);		  // � ������ �����.
	Sun.SetVolume(13000000);	 // � ������� �����.
	Sun.SetRadius(696340);		// � (��).
	Sun.SetSpectClass('G');		// ������������ �����
	Sun.SetTemperature(5778);	// ����������� �����������
	Sun.SetName("������");	// ��������

	// ������ ������

	TEarthGroupPlanets Mercury; // ��������
	Mercury.SetWeight(0.55);		// � ������ �����.
	Mercury.SetVolume(0.56);		// � ������� �����.
	Mercury.SetRadius(2493.7);		// � (��).
	Mercury.SetDistanceSun(57.9);	// � ���.(��)
	Mercury.SetOrbitSpeed(47.4);	// � (��/�)
	Mercury.SetName("��������");


	TEarthGroupPlanets Venus; // ������
	Venus.SetWeight(0.815);		  // � ������ �����.
	Venus.SetVolume(0.857);		  // � ������� �����.
	Venus.SetRadius(6051.8);	  // � (��).
	Venus.SetDistanceSun(108.2);  // � ���.(��)
	Venus.SetOrbitSpeed(35.02);	  // � (��/�)
	Venus.SetName("������");


	TEarthGroupPlanets Earth; // �����
	Earth.SetWeight(1);				// � ������ �����.
	Earth.SetVolume(1);				// � ������� �����.
	Earth.SetRadius(6371);			// � (��).
	Earth.SetDistanceSun(149.6);	// � ���.(��)
	Earth.SetOrbitSpeed(29.8);		// � (��/�)
	Earth.SetName("�����");
	TSolarSysObj Nolife;		// ���������������
	TEarthGroupPlanets life;
	TSolarSysObj* miracle = &life;

	TSolarSysObj solarsysobj;
	TEarthGroupPlanets Mars; // ����
	Mars.SetWeight(0.107);			  // � ������ �����.
	Mars.SetVolume(1);				  // � ������� �����.
	Mars.SetRadius(3389.5);			  // � (��).
	Mars.SetDistanceSun(144.8);		  // � ���.(��)
	Mars.SetOrbitSpeed(24.13);		  // � (��/�)
	Mars.SetName("����");

	// �������

	TGigants Jupiter; // ������
	Jupiter.SetWeight(317.8);			 // � ������ �����.
	Jupiter.SetVolume(1321.3);			 // � ������� �����.
	Jupiter.SetRadius(69911);			 // � (��).
	Jupiter.SetDistanceSun(778.5);		 // � ���.(��)
	Jupiter.SetOrbitSpeed(13.7);		 // � (��/�)
	Jupiter.SetDensity(1.33);
	Jupiter.SetName("������");

	TGigants Saturn; // ������
	Saturn.SetWeight(96.5);			 // � ������ �����.
	Saturn.SetVolume(765);			 // � ������� �����.
	Saturn.SetRadius(58232);		 // � (��).
	Saturn.SetDistanceSun(1434);	 // � ���.(��)
	Saturn.SetOrbitSpeed(6.69);		 // � (��/�)
	Saturn.SetDensity(0.19);		// ��/�3
	Saturn.SetName("������");


	TGigants Neptun; // ������
	Neptun.SetWeight(96.5);			// � ������ �����.
	Neptun.SetVolume(765);			// � ������� �����.
	Neptun.SetRadius(24622);		// � (��).
	Neptun.SetDistanceSun(1434);	// � ���.(��)
	Neptun.SetOrbitSpeed(6.69);		// � (��/�)
	Neptun.SetDensity(0.45);
	Neptun.SetName("������");


	TGigants Uranus; // ����
	Uranus.SetWeight(96.5);				 // � ������ �����.
	Uranus.SetVolume(765);				 // � ������� �����.
	Uranus.SetRadius(58232);			 // � (��).
	Uranus.SetDistanceSun(1434);		 // � ���.(��)
	Uranus.SetOrbitSpeed(6.69);			 // � (��/�)
	Uranus.SetDensity(0.42);
	Uranus.SetName("����");

	// ���������� �������

	TDwarfPlanets Pluto; // ������
	Pluto.SetWeight(0.023);			  // � ������ �����.
	Pluto.SetVolume(0.006);			  // � ������� �����.
	Pluto.SetRadius(1188.3);		  // � (��).
	Pluto.SetDistanceSun(5906);		  // � ���.(��)
	Pluto.SetOrbitSpeed(4.66);		  // � (��/�)
	Pluto.SetName("������");

	TDwarfPlanets Ceres; // ������
	Ceres.SetWeight(0.0002);		 // � ������ �����.
	Ceres.SetVolume(0.0000003);		 // � ������� �����.
	Ceres.SetRadius(463.5);			 // � (��).
	Ceres.SetDistanceSun(413.9);	 // � ���.(��)
	Ceres.SetOrbitSpeed(17.8);		 // � (��/�)
	Ceres.SetName("������");

	TSputnics Moon;// ����
	Moon.SetWeight(0.012);		 // � ������ �����.
	Moon.SetVolume(0.02);		 // � ������� �����.
	Moon.SetRadius(1737.4);			 // � (��).
	Moon.SetCirculationSpeed(1.02);	 // � ��/�
	Moon.SetName("����");			 // ��������
	Moon.SetParentPlanets("�����");	 // ������������ �������

	TSputnics Titan;// �����
	Titan.SetWeight(0.028);		 // � ������ �����.
	Titan.SetVolume(0.05);		 // � ������� �����.
	Titan.SetRadius(2574.7);			 // � (��).
	Titan.SetCirculationSpeed(5.57);	 // � ��/�
	Titan.SetName("�����");				// ��������
	Titan.SetParentPlanets("������");   // ������������ �������

	TOtherObjects AsteroidBelt;
	AsteroidBelt.SetName("���� ����������");
	AsteroidBelt.SetWeight(0.020048);
	AsteroidBelt.SetNumber(300000);
	AsteroidBelt.SetDistanceSun(413.9);



	int num = 0;
	int num1 = 0;

	// ���������

	cout << "������� ��������� �������" << endl;
	cout << "��� ����������� ������� ����� ����� ��� �����" << endl;


	cin >> num;

	cout << "�������� ��������������� �����:\n";
	cout << "1. ������\n 2. ������� ������ ������\n 3. ������� �������\n 4. ���������� �������\n 5. ��������\n 6. ������ ������\n";




	cin >> num1;

	switch (num1)

	{
	case 1:
		cout <<
			"��������\t" << Sun.GetName() << "\n" <<
			"�����\t " << Sun.GetWeight() << "(��)\n" <<
			"����� \t" << Sun.GetVolume() << "(V.�)\n" <<
			"������\t" << Sun.GetRadius() << "(��)\n" <<
			"������������ �����\t" << Sun.GetSpectClass() << "\t�� ����������\n" <<
			"����������� �����������\t" << Sun.GetTemperature() << "\t�������\n" << endl;
		break;

	case 2:
		cout <<
			"��������\t" << Mercury.GetName() << "\n" <<
			"�����\t " << Mercury.GetWeight() << "(��)\n" <<
			"����� \t" << Mercury.GetVolume() << "(V.�)\n" <<
			"������\t" << Mercury.GetRadius() << "(��)\n" <<
			"���������� �� ������\t" << Mercury.GetDistanceSun() << "���.(��)\n" <<
			"����������� ��������\t" << Mercury.GetOrbitSpeed() << "(��/�)" << endl;
		cout << endl;

		cout <<
			"��������\t" << Venus.GetName() << "\n" <<
			"�����\t " << Venus.GetWeight() << "(��)\n" <<
			"����� \t" << Venus.GetVolume() << "(V.�)\n" <<
			"������\t" << Venus.GetRadius() << "(��)\n" <<
			"���������� �� ������\t" << Venus.GetDistanceSun() << "���.(��)\n" <<
			"����������� ��������\t" << Venus.GetOrbitSpeed() << "(��/�)" << endl;
		cout << endl;

		cout <<
			"��������\t" << Earth.GetName() << "\n" <<
			"�����\t " << Earth.GetWeight() << "(��)\n" <<
			"����� \t" << Earth.GetVolume() << "(V.�)\n" <<
			"������\t" << Earth.GetRadius() << "(��)\n" <<
			"���������� �� ������\t" << Earth.GetDistanceSun() << "���.(��)\n" <<
			"����������� ��������\t" << Earth.GetOrbitSpeed() << "(��/�)" << endl;
		cout << "\t �����\t";
		miracle->Inhabited();
		cout << endl;


		cout <<
			"��������\t" << Mars.GetName() << "\n" <<
			"�����\t " << Mars.GetWeight() << "(��)\n" <<
			"����� \t" << Mars.GetVolume() << "(V.�)\n" <<
			"������\t" << Mars.GetRadius() << "(��)\n" <<
			"���������� �� ������\t" << Mars.GetDistanceSun() << "���.(��)\n" <<
			"����������� ��������\t" << Mars.GetOrbitSpeed() << "(��/�)" << endl;
		cout << "\t �����\t";
		Mars.Inhabited(&solarsysobj);
		cout << endl;
		break;

	case 3:

		cout <<
			"��������\t" << Jupiter.GetName() << "\n" <<
			"�����\t " << Jupiter.GetWeight() << "(��)\n" <<
			"����� \t" << Jupiter.GetVolume() << "(V.�)\n" <<
			"������\t" << Jupiter.GetRadius() << "(��)\n" <<
			"���������� �� ������\t" << Jupiter.GetDistanceSun() << "���.(��)\n" <<
			"����������� ��������\t" << Jupiter.GetOrbitSpeed() << "(��/�)" <<
			"���������� ���������\t" << Jupiter.GetDensity() << "(��/�3)" << endl;
		cout << endl;

		cout <<
			"��������\t" << Saturn.GetName() << "\n" <<
			"�����\t " << Saturn.GetWeight() << "(��)\n" <<
			"����� \t" << Saturn.GetVolume() << "(V.�)\n" <<
			"������\t" << Saturn.GetRadius() << "(��)\n" <<
			"���������� �� ������\t" << Saturn.GetDistanceSun() << "���.(��)\n" <<
			"����������� ��������\t" << Saturn.GetOrbitSpeed() << "(��/�)" <<
			"���������� ���������\t" << Saturn.GetDensity() << "(��/�3)" << endl;
		cout << endl;

		cout <<
			"��������\t" << Neptun.GetName() << "\n" <<
			"�����\t " << Neptun.GetWeight() << "(��)\n" <<
			"����� \t" << Neptun.GetVolume() << "(V.�)\n" <<
			"������\t" << Neptun.GetRadius() << "(��)\n" <<
			"���������� �� ������\t" << Neptun.GetDistanceSun() << "���.(��)\n" <<
			"����������� ��������\t" << Neptun.GetOrbitSpeed() << "(��/�)" <<
			"���������� ���������\t" << Neptun.GetDensity() << "(��/�3)" << endl;
		cout << endl;

		cout <<
			"��������\t" << Uranus.GetName() << "\n" <<
			"�����\t " << Uranus.GetWeight() << "(��)\n" <<
			"����� \t" << Uranus.GetVolume() << "(V.�)\n" <<
			"������\t" << Uranus.GetRadius() << "(��)\n" <<
			"���������� �� ������\t" << Uranus.GetDistanceSun() << "���.(��)\n" <<
			"����������� ��������\t" << Uranus.GetOrbitSpeed() << "(��/�)" <<
			"���������� ���������\t" << Uranus.GetDensity() << "(��/�3)" << endl;
		cout << endl;

		break;

	case 4:

		cout <<
			"��������\t" << Pluto.GetName() << "\n" <<
			"�����\t " << Pluto.GetWeight() << "(��)\n" <<
			"����� \t" << Pluto.GetVolume() << "(V.�)\n" <<
			"������\t" << Pluto.GetRadius() << "(��)\n" <<
			"���������� �� ������\t" << Pluto.GetDistanceSun() << "���.(��)\n" <<
			"����������� ��������\t" << Pluto.GetOrbitSpeed() << "(��/�)" << endl;
		cout << endl;

		cout <<
			"��������\t" << Ceres.GetName() << "\n" <<
			"�����\t " << Ceres.GetWeight() << "(��)\n" <<
			"����� \t" << Ceres.GetVolume() << "(V.�)\n" <<
			"������\t" << Ceres.GetRadius() << "(��)\n" <<
			"���������� �� ������\t" << Ceres.GetDistanceSun() << "���.(��)\n" <<
			"����������� ��������\t" << Ceres.GetOrbitSpeed() << "(��/�)" << endl;
		cout << endl;
		break;

	case 5:

		cout <<
			"��������\t" << Moon.GetName() << "\n" <<
			"�����\t " << Moon.GetWeight() << "(��)\n" <<
			"����� \t" << Moon.GetVolume() << "(V.�)\n" <<
			"������\t" << Moon.GetRadius() << "(��)\n" <<
			"�������� ���������\t" << Moon.GetCirculationSpeed() << "��/�\n" <<
			"������������ �������\t" << Moon.GetParentPlanets() << endl;
		cout << endl;

		cout <<
			"��������\t" << Titan.GetName() << "\n" <<
			"�����\t " << Titan.GetWeight() << "(��)\n" <<
			"����� \t" << Titan.GetVolume() << "(V.�)\n" <<
			"������\t" << Titan.GetRadius() << "(��)\n" <<
			"�������� ���������\t" << Titan.GetCirculationSpeed() << "��/�\n" <<
			"������������ �������\t" << Titan.GetParentPlanets() << endl;
		cout << endl;
		break;

	case 6:

		cout <<
			"��������\t" << AsteroidBelt.GetName() << "\n" <<
			"�����\t " << AsteroidBelt.GetWeight() << "(��)\n" <<
			"��������� ���������� ��������\t" << AsteroidBelt.GetNumber() << "��\n" <<
			"���������� ��������\t" << AsteroidBelt.GetDistanceSun() << "���.��" << endl;
		cout << endl;
		break;



	default:
		break;
	}


	return 0;
}