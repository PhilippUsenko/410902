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
	seasons[0] = { "����", "�������", "������", "�������" };
	seasons[1] = { "�����", "����", "������", "���" };
	seasons[2] ={ "����", "����", "����", "������" };
	seasons[3] = { "�����", "��������", "�������", "������" };
	string season;
	cout << "������� ���� ����:";
	cin >> season;
	bool found = false;
	for (int i = 0; i < 4; i++)
	{
		if (season == seasons[i].nameseason)
		{
			cout << "������ �������� � ��� ���� ����:";
			cout << seasons[i].month1 << ' ' << seasons[i].month2<<' ' << seasons[i].month3;
			ofstream file;
			file.open("months.txt");
			if (!file.is_open())
				cout << "���� �� ����� ���� ������!";
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
		cout << "�������� �������� ���� ����";
	}
	return 0;
}