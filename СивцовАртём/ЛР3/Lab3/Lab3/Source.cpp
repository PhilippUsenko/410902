//27.	���� ����������� �, �������������� �.���������
#include <iostream>;
#include <cmath>;
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double n, z, x;
	cout << "������� x=";
	cin >> x;
	cout << "������� n=";
	cin >> n;
	z = 1;
	for (int i = 1; i <= n; i++)
	{
			z = z*((i / (i + 1)) + pow(tan(abs(x + i)), i));	

	}
	cout << "�����: " << z;
	return 0;
}