//27.1 	������ ����������� ����� N �������� ������ ��������� ��� ����. ����������� K ����� �����
#include <iostream>
using namespace std;
int sumsqr(int a, int b){ //�������, ���������� �� ����� ��������� �����
	int y;
	int z = 0;
	for (int i = 1; i <= b; i++) {
		while (a != 0)
		{
		y = a % 10;
		a = a / 10;
		z = z + pow(y, 2);
		}
		a = z;
    }
	return z;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, k;
	cout << "������� ����� N:" << '\n';
	cin >> n;
	cout << "������� ����� K:" << '\n';
	cin >> k;
	cout << "�����:" << '\n' << sumsqr(n, k); //����� �������
	return 0;
}