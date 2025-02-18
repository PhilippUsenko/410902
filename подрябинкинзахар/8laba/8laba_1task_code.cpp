#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct drob
{
	int chisl;
	int znam;
};

drob chastnoye(drob inp1, drob inp2) //������� ���������� ��������
{
	drob outp;
	int znak = 1; // ���� �����
	outp.chisl = inp1.chisl * inp2.znam;
	outp.znam = inp1.znam * inp2.chisl;
	if (((outp.chisl > 0) and (outp.znam < 0)) or ((outp.chisl < 0) and (outp.znam > 0))) // ����������� ��������� ����� �����
	{
		znak = -1;
	}
	
	outp.chisl = pow(pow(outp.chisl, 2), 0.5); // ������ ������ �� ����� ��� ���������� ������ ���������
	outp.znam = pow(pow(outp.znam, 2), 0.5);
	for (int i = 2; (i <= outp.chisl) and (i <= outp.znam); i++) //���������� ����� � ������������ ����
	{
		if ((outp.chisl % i == 0) and (outp.znam % i == 0))
		{
			outp.chisl = outp.chisl / i;
			outp.znam = outp.znam / i;
			i = 2;
		}
	}
	outp.chisl *= znak; // ������� ��������� ����� �����
	if (outp.znam == 0)
	{
		cout << "\n !!!! \n � ����������� ��������� 0. ���������� �� ����� �������� �����������. ������������� �������� � ������� ������ ������,";
		cout << "������� ���� � ������������ � ��������� ������ �����. \n !!!!\n";
	}
	return outp;
}

drob vvod() //������� ����� �������� �����
{
	drob res;
	int chisl = 0;
	int znam = 0;
	char input[256];
	int znak = 1;
	int funct_status = -1; // ���������� ��� �������� ���� ����� � ������ ����� ������� / � ������ �����
	cin.getline(input, 256);
	for (int i = 0; i < strlen(input); i++) // ����� ����� / � �����
	{
		if (input [i] == '/')
		{
			funct_status = i;
		}
	}
	
	if (input[0] == '-') // �������� �� ������������� ����� � ���������
	{
		znak *= -1;
	}
	if (input[funct_status + 1] == '-' and funct_status != -1) // �������� �� ������������� ����� � �����������
	{
		znak *= -1;
	}

	if (funct_status == -1)
	{
		znam = 1;

		for (int i = 0; i < strlen(input); i++) // �������� �� ������ ���� ����������� ���� /
		{
			if (input[i] != '-') //�������� �� ���� ����� � ������� ����� �� ������� char � int
			{
				chisl += ((int)input[i] - '0') * pow(10, strlen(input) - i - 1); 
			}
		}
		cout << endl << "����������� ������ \"/\". ����� �������� ����� " << znak * chisl << "/1" << endl;
	}
	else
	{
		for (int i = 0; i < funct_status; i++)
		{
			if (input[i] != '-') //�������� �� ���� ����� � ������� ����� �� ������� char � int
			{
				chisl += ((int)input[i] - '0') * pow(10, funct_status - i - 1);
			}
		}
		for (int i = funct_status +1 ; i < strlen(input) ; i++)
		{
			if (input[i] != '-') //�������� �� ���� ����� � ������� ����� �� ������� char � int
			{
				znam += ((int)input[i] - '0') * pow(10, strlen(input) - i - 1);
			}
		}
	}
	res.chisl = chisl * znak;
	res.znam = znam;
	if (znam == 0)
	{
		cout << "\n !!!! \n � ����������� ��������� 0. ���������� �� ����� �������� �����������. \n !!!! \n";
	}
	return res;
}

void main()
{
	setlocale(LC_ALL, "ru");
	drob a;
	drob b;
	cout << endl << "������� ������ ����� ����� \"/\" (�������� 53/21): ";
	a = vvod();
	cout << endl << "������� ������ ����� ����� \"/\" (�������� -25/2, ��������� ������� �����): ";
	b = vvod();
	drob res;
	res = chastnoye(a, b);
	cout << "\n��������� �������: (" << a.chisl << '/' << a.znam << ") / (" << b.chisl << '/' << b.znam << ") = ";
	cout << res.chisl << '/' << res.znam << endl;
	system("pause");
}