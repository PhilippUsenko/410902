#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	double n, a, b, c, z1, z2;
	z1 = 1 ;
	cout << "������� ������� ��������� ����: 1 - �������; 2 - �������:" << endl;
	cin >> n;
	if (n == 1) 
	    {
		cout << "������� �������� ���� � ��������:" << endl;
		cin >> a;
		b = a * 3.14/180;
		c = 1 - (pow(sin(b), 2));
		z1 = sin(b)/(pow(c, 0.5));

		z2 = pow((1 - (pow(cos(b), 2))),0.5) / cos(b);
		cout << "z1=" << z1 << endl;
		cout << "z2=" << z2;
	    }
	   else if (n == 2)
	   {
		cout << "������� �������� ���� � ��������:" << endl;
		cin >> a;
		c = 1 - (pow(sin(a), 2));
	    z1 = sin(a)/(pow(c, 0.5));
        z2 = pow((1 - (pow(cos(a), 2))),0.5) / cos(a);
		cout << "z1=" << z1 << endl << "z2=" << z2;
	   }
	   else
	   {
		cout << "������. ���������� �������� 1 ��� 2. ���������� ������.";
	   }
	return 0;
}