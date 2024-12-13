#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;
struct months
{
	string nameseason;
	string month1;
	string month2;
	string month3;
};
int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	months seasons[4];
	seasons[0] = { "зима", "декабрь", "€нварь", "февраль" };
	seasons[1] = { "весна", "март", "апрель", "май" };
	seasons[2] ={ "лето", "июнь", "июль", "август" };
	seasons[3] = { "осень", "сент€брь", "окт€брь", "но€брь" };
	string season;
	cout << "¬ведите пору года:";
	cin >> season;
	bool found = false;
	for (int i = 0; i < 4; i++)
	{
		if (season == seasons[i].nameseason)
		{
			cout << "ћес€ца вход€щие в эту пору года:";
			cout << seasons[i].month1 << ' ' << seasons[i].month2<<' ' << seasons[i].month3;
			ofstream file;
			file.open("months.txt");
			if (!file.is_open())
				cout << "‘айл не может быть открыт!";
			else
			{
				file << seasons[i].month1 << ' ' << seasons[i].month2 << ' ' << seasons[i].month3;
				file.close();
				found = true;
				break;
			}

		}
	}
	if (!found)
	{
		cout << "Ќеверное название поры года";
	}
	return 0;
}