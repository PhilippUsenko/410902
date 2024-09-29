#include <iostream>
#define PI -2/3 
#include <cstdlib>
#include <cmath>
using namespace std;
 // Число Пи для вычислений
int main()
{
	int count = 0;
	cout << "The program for calculating formula was launched. \n \n";

	while (count != 1)
	{
		float NumbIn; // Основная переменная
		float Res1;
		float Res2;
		float FRes; // Результат
		float GetNomber;
		cout << "### \n Enter your number in degrees: ";
		cin >> GetNomber; // Получение числа от пользователя
		NumbIn = GetNomber;
		cout << "### \n \n";

		float Temp = NumbIn - ( (int)NumbIn / 360 ) * 360; // Тангенс симметричен относительно начала координат и цикличен, для удобства приведём градусную меру к значению между -360 и +360
		NumbIn = NumbIn * (PI / 180); // Перевод градусов в радианы для мат функций c++
		Res1 = ((2 * tan(NumbIn / 2)) / (1 + pow(tan(NumbIn / 2), 2))); //расчёт по первой формуле

		if (abs(Temp) <= 90 or abs(Temp) >= 270) // Расчёт по второй формуле, с учётом знака 
		{
			Res2 = ((tan(NumbIn)) / (sqrt(1 + pow(tan(NumbIn), 2))));

		}
		else
		{
			Res2 = ((tan(NumbIn)) / (-sqrt(1 + pow(tan(NumbIn), 2))));

		}
		FRes = round(((Res1 + Res2) / 2) * 100000) / 100000; //Нахождение среднеарифметического и его округление до статысячных

		cout << " Result caculated with first formula: " << Res1 << "\n"; // Вывод уточняющей информации
		cout << " Result caculated with first formula: " << Res2 << "\n";
		cout << " Awerage rounded result: " << FRes << "\n \n";
		cout << "### \n Final result: " << FRes << "\n### \n \n"; // Результат для пользователя

		cout << " If you want to exit the program, enter 1. \n If you want to continue, enter any other number. \n"; // завершение программы или повторный цикл для удобства работы
		cout << " Answer: ";
		cin >> count;
	}
	cout << "Programm stoped. \n";
	system("pause");
	return 0;
}