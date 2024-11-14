#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float a, b, c, s, p, h1, h2, h3;

	cout << "Enter sides of triangle: \n";

	cin >> a >> b >> c;
	
	
	if (a + b <= c || a + c <= b || c + b <= a) { //Проверка на существование треугольника
		cout << "Triangle doesn't exist";
	}
	else {
		p = (a + b + c) / 2; //Поиск полупериметра
		s = sqrt(p * (p - a) * (p - b) * (p - c)); //Площадь треугольника
		h1 = 2 * s / a; //Высоты
		h2 = 2 * s / b;
		h3 = 2 * s / c;
		cout << "Height to a: " << h1 << endl; //Вывод высот
		cout << "Height to b: " << h2 << endl;
		cout << "Height to c: " << h3 << endl;
	}
	
	return 0;
}
