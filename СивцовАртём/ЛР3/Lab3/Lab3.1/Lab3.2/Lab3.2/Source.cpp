//27.	Вычислить сумму ряда с заданной степенью точности:
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double a=0.01, z=0, x=1;
	int i{ 1 };
	while (abs(z-x) > a)
	{
		x = z;
		z = z + pow((-1), i) * (1 / pow((i),  3) * (i + 3));
		i++;
	}
	cout << z;
	return 0;
}