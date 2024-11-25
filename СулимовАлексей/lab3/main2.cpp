#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	float sum, sum1, a, s;
	int n;
	cout << "Введите коэффициент точности  а :";
	cin >> a;
	sum = 0;
	sum1 = 0;
	n = 0;
	//подсчет суммы ряда
	do {
		n++;
		sum1 = ((pow(-1, n) * (2 * n + 1)) / (pow(n, 3) * (n + 1)));
		sum = sum + sum1;
	} while (abs(sum1) > a);
	//округление до коэффициента точности
	s = trunc(sum / a) * a;
	//вывод
	cout << endl << s;

	return 0;
}
