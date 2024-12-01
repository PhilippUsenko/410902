#include <iostream>
#include <fstream>
using namespace std;

struct comp_nomb // �������� ��������� ��� ������������ �����
{
	double a; // �������������� �����
	double b; // ������ �����
};


int main() {
	setlocale(LC_ALL, "ru");
	comp_nomb x;
	comp_nomb y; // �������� ���� ����������� �����
	cout << "������� �������������� ����� x: ";
	cin >> x.a;
	cout << endl << "������� ������ ����� x: ";
	cin >> x.b;

	cout << endl << "������� �������������� ����� y: ";
	cin >> y.a;
	cout << endl << "������� ������ ����� y: ";
	cin >> y.b;
	cout << "\n=========================\n";

	cout << endl << "����� (" << x.a << " + " << x.b << "i" << ") + (" << y.a << " + " << y.b << "i" << ") ����� " << (x.a + y.a) << " + " << (x.b + y.b) << "i" << endl;
	cout << endl << "������������ (" << x.a << " + " << x.b << "i" << ") * (" << y.a << " + " << y.b << "i" << ") ����� " << (x.a * y.a - x.b * y.b) << " + " << (x.a * y.b + x.b * y.a)<< "i" << endl;
	cout << "\n=========================\n";
	cout << "\n �� ������ ��������� ��������� ����������? (������ y) \n �� ������ �������� ���������� ���������� �� �������? (������ r) \n ����� ��� ����������? (������ ����� ������ ������) \n ";
	// ����� ����������� ����������
	char answ;
	cin >> answ;
	ofstream output; 
	switch (answ) // ������ � ������������ ���������� �� ������ � ���� ��� ���������� ��� ���������� �����������
	{
	case 'y':		
		output.open("Result.txt", ofstream::app);
		if (!output.is_open()) {
			cout << "���� �� ����� ���� ������. ";
		}
		else
		{
			output << "\n=========================\n";
			output << endl << "����� (" << x.a << " + " << x.b << "i" << ") + (" << y.a << " + " << y.b << "i" << ") ����� " << (x.a + y.a) << " + " << (x.b + y.b) << "i" << endl << endl <<
				"������������ (" << x.a << " + " << x.b << "i" << ") * (" << y.a << " + " << y.b << "i" << ") ����� " << (x.a * y.a - x.b * y.b) << " + " << (x.a * y.b + x.b * y.a) << "i" << endl;
			cout << endl << "���������� �������� � ����" << endl;
		}
		output.close();
		break;
	case 'r':
		output.open("Result.txt");
		if (!output.is_open()) {
			cout << "���� �� ����� ���� ������. ";
		}
		else
		{
			output << "\n=========================\n";
			output << endl << "����� (" << x.a << " + " << x.b << "i" << ") + (" << y.a << " + " << y.b << "i" << ") ����� " << (x.a + y.a) << " + " << (x.b + y.b) << "i" << endl << endl <<
				"������������ (" << x.a << " + " << x.b << "i" << ") * (" << y.a << " + " << y.b << "i" << ") ����� " << (x.a * y.a - x.b * y.b) << " + " << (x.a * y.b + x.b * y.a) << "i" << endl;
			cout << endl << "���� �����������" << endl;
		}
		output.close();	
		break;
	default:
		cout << "\n��������� ������� ��� ����������\n";
		break;
	}
	system("pause");
	return 0;
}