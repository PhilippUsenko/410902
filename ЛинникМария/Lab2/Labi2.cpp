#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	double x, y;
	cout << "������� x, ����� y" << endl;
	cin >> x >> y;
	if (x < 0 && y > 0)
	{
		printf("������������ '������ ����� x, y �������� ������������ �����, ������� �� ������ ������������ ��������' �������");
	}
	else
		printf("������������ '������ ����� x, y �������� ������������ �����, ������� �� ������ ������������ ��������' �����");
	return 0;
}