#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a = 0.001, k = 1, sum = 0;
	int n = 1;
	while (fabs(k) > a)                //функция вычисляет модуль
	{
		k = (cos(3.14 * n) / pow(3, n) * (n + 1));		
		sum = k + sum;
		++n;
	}
	cout << sum;
	return 0;
}