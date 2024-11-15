#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	setlocale(LC_ALL, "Russian");
	cout << "Введите 3 числа" << endl;
	cin >> a >> b >> c;
	if (a > c && a > b)
		cout << "Наибольшее число: " << a;
	else
		if (b > c)
			cout << "Наибольшее число: " << b;
		else
			cout << "Наибольшее число: " << c;
	return 0;
}