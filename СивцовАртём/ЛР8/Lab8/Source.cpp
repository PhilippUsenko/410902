//27.1 	Данное натуральное число N замените суммой квадратов его цифр. Произведите K таких замен
#include <iostream>
using namespace std;
int sumsqr(int a, int b){ //Функция, отвечающая за сумму квадратов числа
	int y;
	int z = 0;
	for (int i = 1; i <= b; i++) {
		while (a != 0)
		{
		y = a % 10;
		a = a / 10;
		z = z + pow(y, 2);
		}
		a = z;
    }
	return z;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, k;
	cout << "Введите число N:" << '\n';
	cin >> n;
	cout << "Введите число K:" << '\n';
	cin >> k;
	cout << "Ответ:" << '\n' << sumsqr(n, k); //Вызов функции
	return 0;
}