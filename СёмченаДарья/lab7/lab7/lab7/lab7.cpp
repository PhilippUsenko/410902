//11.	�������� ���������, ������� ������� �� ������ ����� ���������, ��������� �������������, 
// ���������� ��������������� �������� ����������, �������� ��� �������� � ����������, 
// � ����� ������� ��������� �������� ���������, ������ ����� ������� ���� ������������. 
// ������������� ������ � ����
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

	spisok dol1 = { "�", "������" };
	spisok dol2 = { "�", "���������"};
	spisok dol3 = { "�", "�����"};
	spisok dol4 = { "�", "���������� ��������"};
	spisok dol5 = { "�", "�������������"};

	spisok dols[5]{ dol1, dol2, dol3, dol4, dol5 };

	ofstream file;
	file.open("spis.txt");

	if (!file.is_open())
	cout << "���������� ������� ����";

	cout << "������� ������ ����� ���������: ";
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