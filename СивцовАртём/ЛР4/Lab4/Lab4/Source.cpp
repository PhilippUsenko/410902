//Задан массив А размером n. Найдите суммы четных и нечетных элементов этого массива.
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int a[n];
	cout << "Введите элементы:";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0)
			sum2 += a[i];
		else
			sum1 += a[i];
	}
	cout << "Сумма чётных:" << sum2 << "\n";
	cout << "Сумма нечётных:" << sum1 ;

		
	
	return 0;
}