#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	double a, b, a1, b1, c, d;
	cout << "Угол 1 в градусах : ";
	cin >> a1;
	cout << "Угол 2 в градусах : ";
	cin >> b1;
	a = a1 / 180 * 3.14159265;
	b = b1 / 180 * 3.14159265;
	// формулы
	c = 2 * sin((a + b) / 2) * cos((a - b) / 2) - sin(b);
	d = 1 / sqrt(1 + 1 / (pow(tan(a) ,2)));
	cout << endl << "Результат 1 : " << c << endl << "Результат 2 : " << d << endl;
	return 0;

}
