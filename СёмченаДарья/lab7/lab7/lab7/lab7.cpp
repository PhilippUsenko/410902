//11.	Напишите программу, которая сначала по первой букве должности, введенной пользователем, 
// определяет соответствующее значение переменной, помещает это значение в переменную, 
// а затем выводит полностью название должности, первую букву которой ввел пользователь. 
// Предусмотреть запись в файл
#include <iostream>
#include<fstream>
#include<string>
#include<Windows.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	struct spisok
	{
		string bukva;
		string dol;
	};

	string per;
	int i;

	spisok dol1 = { "Р", "Ректор" };
	spisok dol2 = { "П", "Проректор"};
	spisok dol3 = { "Д", "Декан"};
	spisok dol4 = { "З", "Заведующий кафедрой"};
	spisok dol5 = { "П", "Преподаватель"};

	spisok dols[5]{ dol1, dol2, dol3, dol4, dol5 };

	ofstream file;
	file.open("spis.txt");

	if (!file.is_open())
	cout << "Невозможно открыть файл";

	cout << "Введите первую букву должности: ";
	cin >> per;
	
	for (i = 0; i < 5; i++)
	{
		if (per == dols[i].bukva)
		{
			cout << dols[i].dol << endl;
			file << dols[i].dol << endl;
		}
	}

	file.close();
	return 0;
}