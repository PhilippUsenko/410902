//����� ������ � �������� n. ������� ����� ������ � �������� ��������� ����� �������.
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int a[n];
	cout << "������� ��������:";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0)
			sum2 += a[i];
		else
			sum1 += a[i];
	}
	cout << "����� ������:" << sum2 << "\n";
	cout << "����� ��������:" << sum1 ;

		
	
	return 0;
}