#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian"); //������� �����������

	float a, b, c;

	cout << "\n ������ �����: ";
	cin >> a;
	cout << "\n ������ �����: ";
	cin >> b;
	cout << "\n ������ �����: ";
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
	cout << " ������: " << a << "\n ������: " << b << "\n ������: " << c;

	return 0;
}
