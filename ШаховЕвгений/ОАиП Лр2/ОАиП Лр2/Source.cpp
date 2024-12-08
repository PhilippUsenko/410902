#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian"); //русская локализация

	float a, b, c;

	cout << "\n Первое число: ";
	cin >> a;
	cout << "\n Второе число: ";
	cin >> b;
	cout << "\n Третие число: ";
	cin >> c;

	if (a >= 0)
		a = a * a * a;
	else
		a = a * a;
	if (b >= 0)
		b = b * b * b;
	else
		b = b * b;
	if (c >= 0)
		c = c * c * c;
	else
		c = c * c;
	cout << " Первое: " << a << "\n Второе: " << b << "\n Третье: " << c;

	return 0;
}
