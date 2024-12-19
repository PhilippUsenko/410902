#include <iostream>

using namespace std;

int main() {
	double x;
	cout << "Enter x: ";
	cin >> x; //Ввод числа

	if (x <= 0)		 //Вычисление значения функции и вывод результата
		cout << -1;
	else if (x >= 2)
		cout << 4;
	else
		cout << x * x;

	return 0;
}
