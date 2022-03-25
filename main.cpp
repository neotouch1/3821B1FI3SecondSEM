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


	// Солнце. Star

	TStars Sun;
	Sun.SetWeight(332946);		  // В массах земли.
	Sun.SetVolume(13000000);	 // В объемах земли.
	Sun.SetRadius(696340);		// В (км).
	Sun.SetSpectClass('G');		// Спектральный класс
	Sun.SetTemperature(5778);	// Температура поверхности
	Sun.SetName("Солнце");	// Название

	// Земная группа

	TEarthGroupPlanets Mercury; // Меркурий
	Mercury.SetWeight(0.55);		// В массах земли.
	Mercury.SetVolume(0.56);		// В объемах земли.
	Mercury.SetRadius(2493.7);		// В (км).
	Mercury.SetDistanceSun(57.9);	// В млн.(км)
	Mercury.SetOrbitSpeed(47.4);	// В (км/с)
	Mercury.SetName("Меркурий");


	TEarthGroupPlanets Venus; // Венера
	Venus.SetWeight(0.815);		  // В массах земли.
	Venus.SetVolume(0.857);		  // В объемах земли.
	Venus.SetRadius(6051.8);	  // В (км).
	Venus.SetDistanceSun(108.2);  // В млн.(км)
	Venus.SetOrbitSpeed(35.02);	  // В (км/с)
	Venus.SetName("Венера");


	TEarthGroupPlanets Earth; // Земля
	Earth.SetWeight(1);				// В массах земли.
	Earth.SetVolume(1);				// В объемах земли.
	Earth.SetRadius(6371);			// В (км).
	Earth.SetDistanceSun(149.6);	// В млн.(км)
	Earth.SetOrbitSpeed(29.8);		// В (км/с)
	Earth.SetName("Земля");
	TSolarSysObj Nolife;		// Переопределение
	TEarthGroupPlanets life;
	TSolarSysObj* miracle = &life;

	TSolarSysObj solarsysobj;
	TEarthGroupPlanets Mars; // Марс
	Mars.SetWeight(0.107);			  // В массах земли.
	Mars.SetVolume(1);				  // В объемах земли.
	Mars.SetRadius(3389.5);			  // В (км).
	Mars.SetDistanceSun(144.8);		  // В млн.(км)
	Mars.SetOrbitSpeed(24.13);		  // В (км/с)
	Mars.SetName("Марс");

	// Гиганты

	TGigants Jupiter; // Юпитер
	Jupiter.SetWeight(317.8);			 // В массах земли.
	Jupiter.SetVolume(1321.3);			 // В объемах земли.
	Jupiter.SetRadius(69911);			 // В (км).
	Jupiter.SetDistanceSun(778.5);		 // В млн.(км)
	Jupiter.SetOrbitSpeed(13.7);		 // В (км/с)
	Jupiter.SetDensity(1.33);
	Jupiter.SetName("Юпитер");

	TGigants Saturn; // Сатурн
	Saturn.SetWeight(96.5);			 // В массах земли.
	Saturn.SetVolume(765);			 // В объемах земли.
	Saturn.SetRadius(58232);		 // В (км).
	Saturn.SetDistanceSun(1434);	 // В млн.(км)
	Saturn.SetOrbitSpeed(6.69);		 // В (км/с)
	Saturn.SetDensity(0.19);		// Кг/м3
	Saturn.SetName("Сатурн");


	TGigants Neptun; // Нептун
	Neptun.SetWeight(96.5);			// В массах земли.
	Neptun.SetVolume(765);			// В объемах земли.
	Neptun.SetRadius(24622);		// В (км).
	Neptun.SetDistanceSun(1434);	// В млн.(км)
	Neptun.SetOrbitSpeed(6.69);		// В (км/с)
	Neptun.SetDensity(0.45);
	Neptun.SetName("Нептун");


	TGigants Uranus; // Уран
	Uranus.SetWeight(96.5);				 // В массах земли.
	Uranus.SetVolume(765);				 // В объемах земли.
	Uranus.SetRadius(58232);			 // В (км).
	Uranus.SetDistanceSun(1434);		 // В млн.(км)
	Uranus.SetOrbitSpeed(6.69);			 // В (км/с)
	Uranus.SetDensity(0.42);
	Uranus.SetName("Уран");

	// Карликовые планеты

	TDwarfPlanets Pluto; // Плутон
	Pluto.SetWeight(0.023);			  // В массах земли.
	Pluto.SetVolume(0.006);			  // В объемах земли.
	Pluto.SetRadius(1188.3);		  // В (км).
	Pluto.SetDistanceSun(5906);		  // В млн.(км)
	Pluto.SetOrbitSpeed(4.66);		  // В (км/с)
	Pluto.SetName("Плутон");

	TDwarfPlanets Ceres; // Церера
	Ceres.SetWeight(0.0002);		 // В массах земли.
	Ceres.SetVolume(0.0000003);		 // В объемах земли.
	Ceres.SetRadius(463.5);			 // В (км).
	Ceres.SetDistanceSun(413.9);	 // В млн.(км)
	Ceres.SetOrbitSpeed(17.8);		 // В (км/с)
	Ceres.SetName("Церера");

	TSputnics Moon;// Луна
	Moon.SetWeight(0.012);		 // В массах земли.
	Moon.SetVolume(0.02);		 // В объемах земли.
	Moon.SetRadius(1737.4);			 // В (км).
	Moon.SetCirculationSpeed(1.02);	 // В км/с
	Moon.SetName("Луна");			 // Название
	Moon.SetParentPlanets("Земля");	 // Родительская планета

	TSputnics Titan;// Титан
	Titan.SetWeight(0.028);		 // В массах земли.
	Titan.SetVolume(0.05);		 // В объемах земли.
	Titan.SetRadius(2574.7);			 // В (км).
	Titan.SetCirculationSpeed(5.57);	 // В км/с
	Titan.SetName("Титан");				// Название
	Titan.SetParentPlanets("Сатурн");   // Родительская планета

	TOtherObjects AsteroidBelt;
	AsteroidBelt.SetName("Пояс астероидов");
	AsteroidBelt.SetWeight(0.020048);
	AsteroidBelt.SetNumber(300000);
	AsteroidBelt.SetDistanceSun(413.9);



	int num = 0;
	int num1 = 0;

	// Интерфейс

	cout << "Объекты солнечной системы" << endl;
	cout << "Для продолжения введите любую цифру или букву" << endl;


	cin >> num;

	cout << "Выберете соответствующий номер:\n";
	cout << "1. Звезды\n 2. Планеты земной группы\n 3. Планеты гиганты\n 4. Карликовые планеты\n 5. Спутники\n 6. Другие объект\n";




	cin >> num1;

	switch (num1)

	{
	case 1:
		cout <<
			"Название\t" << Sun.GetName() << "\n" <<
			"Масса\t " << Sun.GetWeight() << "(мз)\n" <<
			"Объем \t" << Sun.GetVolume() << "(V.з)\n" <<
			"Радиус\t" << Sun.GetRadius() << "(км)\n" <<
			"Спектральный класс\t" << Sun.GetSpectClass() << "\tПо светимости\n" <<
			"Теспература поверхности\t" << Sun.GetTemperature() << "\tКельвин\n" << endl;
		break;

	case 2:
		cout <<
			"Название\t" << Mercury.GetName() << "\n" <<
			"Масса\t " << Mercury.GetWeight() << "(мз)\n" <<
			"Объем \t" << Mercury.GetVolume() << "(V.з)\n" <<
			"Радиус\t" << Mercury.GetRadius() << "(км)\n" <<
			"Расстояние до солнца\t" << Mercury.GetDistanceSun() << "млн.(км)\n" <<
			"Орбитальная скорость\t" << Mercury.GetOrbitSpeed() << "(км/с)" << endl;
		cout << endl;

		cout <<
			"Название\t" << Venus.GetName() << "\n" <<
			"Масса\t " << Venus.GetWeight() << "(мз)\n" <<
			"Объем \t" << Venus.GetVolume() << "(V.з)\n" <<
			"Радиус\t" << Venus.GetRadius() << "(км)\n" <<
			"Расстояние до солнца\t" << Venus.GetDistanceSun() << "млн.(км)\n" <<
			"Орбитальная скорость\t" << Venus.GetOrbitSpeed() << "(км/с)" << endl;
		cout << endl;

		cout <<
			"Название\t" << Earth.GetName() << "\n" <<
			"Масса\t " << Earth.GetWeight() << "(мз)\n" <<
			"Объем \t" << Earth.GetVolume() << "(V.з)\n" <<
			"Радиус\t" << Earth.GetRadius() << "(км)\n" <<
			"Расстояние до солнца\t" << Earth.GetDistanceSun() << "млн.(км)\n" <<
			"Орбитальная скорость\t" << Earth.GetOrbitSpeed() << "(км/с)" << endl;
		cout << "\t Важно\t";
		miracle->Inhabited();
		cout << endl;


		cout <<
			"Название\t" << Mars.GetName() << "\n" <<
			"Масса\t " << Mars.GetWeight() << "(мз)\n" <<
			"Объем \t" << Mars.GetVolume() << "(V.з)\n" <<
			"Радиус\t" << Mars.GetRadius() << "(км)\n" <<
			"Расстояние до солнца\t" << Mars.GetDistanceSun() << "млн.(км)\n" <<
			"Орбитальная скорость\t" << Mars.GetOrbitSpeed() << "(км/с)" << endl;
		cout << "\t Важно\t";
		Mars.Inhabited(&solarsysobj);
		cout << endl;
		break;

	case 3:

		cout <<
			"Название\t" << Jupiter.GetName() << "\n" <<
			"Масса\t " << Jupiter.GetWeight() << "(мз)\n" <<
			"Объем \t" << Jupiter.GetVolume() << "(V.з)\n" <<
			"Радиус\t" << Jupiter.GetRadius() << "(км)\n" <<
			"Расстояние до солнца\t" << Jupiter.GetDistanceSun() << "млн.(км)\n" <<
			"Орбитальная скорость\t" << Jupiter.GetOrbitSpeed() << "(км/с)" <<
			"Плотновсть атмосферы\t" << Jupiter.GetDensity() << "(кг/м3)" << endl;
		cout << endl;

		cout <<
			"Название\t" << Saturn.GetName() << "\n" <<
			"Масса\t " << Saturn.GetWeight() << "(мз)\n" <<
			"Объем \t" << Saturn.GetVolume() << "(V.з)\n" <<
			"Радиус\t" << Saturn.GetRadius() << "(км)\n" <<
			"Расстояние до солнца\t" << Saturn.GetDistanceSun() << "млн.(км)\n" <<
			"Орбитальная скорость\t" << Saturn.GetOrbitSpeed() << "(км/с)" <<
			"Плотновсть атмосферы\t" << Saturn.GetDensity() << "(кг/м3)" << endl;
		cout << endl;

		cout <<
			"Название\t" << Neptun.GetName() << "\n" <<
			"Масса\t " << Neptun.GetWeight() << "(мз)\n" <<
			"Объем \t" << Neptun.GetVolume() << "(V.з)\n" <<
			"Радиус\t" << Neptun.GetRadius() << "(км)\n" <<
			"Расстояние до солнца\t" << Neptun.GetDistanceSun() << "млн.(км)\n" <<
			"Орбитальная скорость\t" << Neptun.GetOrbitSpeed() << "(км/с)" <<
			"Плотновсть атмосферы\t" << Neptun.GetDensity() << "(кг/м3)" << endl;
		cout << endl;

		cout <<
			"Название\t" << Uranus.GetName() << "\n" <<
			"Масса\t " << Uranus.GetWeight() << "(мз)\n" <<
			"Объем \t" << Uranus.GetVolume() << "(V.з)\n" <<
			"Радиус\t" << Uranus.GetRadius() << "(км)\n" <<
			"Расстояние до солнца\t" << Uranus.GetDistanceSun() << "млн.(км)\n" <<
			"Орбитальная скорость\t" << Uranus.GetOrbitSpeed() << "(км/с)" <<
			"Плотновсть атмосферы\t" << Uranus.GetDensity() << "(кг/м3)" << endl;
		cout << endl;

		break;

	case 4:

		cout <<
			"Название\t" << Pluto.GetName() << "\n" <<
			"Масса\t " << Pluto.GetWeight() << "(мз)\n" <<
			"Объем \t" << Pluto.GetVolume() << "(V.з)\n" <<
			"Радиус\t" << Pluto.GetRadius() << "(км)\n" <<
			"Расстояние до солнца\t" << Pluto.GetDistanceSun() << "млн.(км)\n" <<
			"Орбитальная скорость\t" << Pluto.GetOrbitSpeed() << "(км/с)" << endl;
		cout << endl;

		cout <<
			"Название\t" << Ceres.GetName() << "\n" <<
			"Масса\t " << Ceres.GetWeight() << "(мз)\n" <<
			"Объем \t" << Ceres.GetVolume() << "(V.з)\n" <<
			"Радиус\t" << Ceres.GetRadius() << "(км)\n" <<
			"Расстояние до солнца\t" << Ceres.GetDistanceSun() << "млн.(км)\n" <<
			"Орбитальная скорость\t" << Ceres.GetOrbitSpeed() << "(км/с)" << endl;
		cout << endl;
		break;

	case 5:

		cout <<
			"Название\t" << Moon.GetName() << "\n" <<
			"Масса\t " << Moon.GetWeight() << "(мз)\n" <<
			"Объем \t" << Moon.GetVolume() << "(V.з)\n" <<
			"Радиус\t" << Moon.GetRadius() << "(км)\n" <<
			"Скорость обращения\t" << Moon.GetCirculationSpeed() << "км/с\n" <<
			"Родительская планета\t" << Moon.GetParentPlanets() << endl;
		cout << endl;

		cout <<
			"Название\t" << Titan.GetName() << "\n" <<
			"Масса\t " << Titan.GetWeight() << "(мз)\n" <<
			"Объем \t" << Titan.GetVolume() << "(V.з)\n" <<
			"Радиус\t" << Titan.GetRadius() << "(км)\n" <<
			"Скорость обращения\t" << Titan.GetCirculationSpeed() << "км/с\n" <<
			"Родительская планета\t" << Titan.GetParentPlanets() << endl;
		cout << endl;
		break;

	case 6:

		cout <<
			"Название\t" << AsteroidBelt.GetName() << "\n" <<
			"Масса\t " << AsteroidBelt.GetWeight() << "(мз)\n" <<
			"Примерное количество объектов\t" << AsteroidBelt.GetNumber() << "шт\n" <<
			"Расстояние досолнца\t" << AsteroidBelt.GetDistanceSun() << "млн.км" << endl;
		cout << endl;
		break;



	default:
		break;
	}


	return 0;
}