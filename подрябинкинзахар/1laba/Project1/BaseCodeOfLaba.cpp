#include <iostream>
#define PI -2/3 
#include <cstdlib>
#include <cmath>
using namespace std;
 // ����� �� ��� ����������
int main()
{
	int count = 0;
	cout << "The program for calculating formula was launched. \n \n";

	while (count != 1)
	{
		float NumbIn; // �������� ����������
		float Res1;
		float Res2;
		float FRes; // ���������
		float GetNomber;
		cout << "### \n Enter your number in degrees: ";
		cin >> GetNomber; // ��������� ����� �� ������������
		NumbIn = GetNomber;
		cout << "### \n \n";

		float Temp = NumbIn - ( (int)NumbIn / 360 ) * 360; // ������� ����������� ������������ ������ ��������� � ��������, ��� �������� ������� ��������� ���� � �������� ����� -360 � +360
		NumbIn = NumbIn * (PI / 180); // ������� �������� � ������� ��� ��� ������� c++
		Res1 = ((2 * tan(NumbIn / 2)) / (1 + pow(tan(NumbIn / 2), 2))); //������ �� ������ �������

		if (abs(Temp) <= 90 or abs(Temp) >= 270) // ������ �� ������ �������, � ������ ����� 
		{
			Res2 = ((tan(NumbIn)) / (sqrt(1 + pow(tan(NumbIn), 2))));

		}
		else
		{
			Res2 = ((tan(NumbIn)) / (-sqrt(1 + pow(tan(NumbIn), 2))));

		}
		FRes = round(((Res1 + Res2) / 2) * 100000) / 100000; //���������� ��������������������� � ��� ���������� �� �����������

		cout << " Result caculated with first formula: " << Res1 << "\n"; // ����� ���������� ����������
		cout << " Result caculated with first formula: " << Res2 << "\n";
		cout << " Awerage rounded result: " << FRes << "\n \n";
		cout << "### \n Final result: " << FRes << "\n### \n \n"; // ��������� ��� ������������

		cout << " If you want to exit the program, enter 1. \n If you want to continue, enter any other number. \n"; // ���������� ��������� ��� ��������� ���� ��� �������� ������
		cout << " Answer: ";
		cin >> count;
	}
	cout << "Programm stoped. \n";
	system("pause");
	return 0;
}