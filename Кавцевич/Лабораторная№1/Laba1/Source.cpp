#include <iostream>
#include <cmath>  //��� �����
using namespace std;
int main ()
{
	double x1, y1, x2, y2, r;  //��� ������� �����
	setlocale(LC_ALL, "RU");  //��� �������� �����
	cout << "������� ������ ����������:" << endl;
	cin >> x1 >> y1;
	cout << "������� ������ ����������:" << endl;
	cin >> x2 >> y2;
	r = sqrt(pow (x1 - x2 , 2) +pow (y1 - y2 , 2));
	cout <<"����������:"<< r;

}