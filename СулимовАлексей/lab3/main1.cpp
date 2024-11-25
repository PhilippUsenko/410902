#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int n, a, i, s;
	s = 0;
	cout << "Введите число : ";
	cin >> a;
	cout << "Введите, сколько раз сложить число : ";
	cin >> n;
	//сумма числа
	for (i = 0; i <= n-1; i++)
	{
		s = s + a;
	}
	cout << "Сумма числа " << a << ", взятого " << n << " раз(-а), равна = " << s;

return 0;
}
