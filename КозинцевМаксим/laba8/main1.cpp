#include <iostream>

using namespace std;

int how_much_digits(int num);
int digits_summa(int num);

int main() {
	int a;
	cout << "Enter a number: ";
	cin >> a;	//Ввод числа
	cout << "Summa of " << a << " digits is: " << digits_summa(a) << '\n';

	return 0;

}

int how_much_digits(int num) {	//Функция для подсчёта количества цифр в числе
	int loc = num, counter = 1;

	while (loc / 10 != 0) {
		counter++;
		loc /= 10;
	}
	return counter;
}
int digits_summa(int num) {	//Функция для подсчёта суммы цифр числа
	int loc = num, divider, length = how_much_digits(num), summa = 0;

	for (int i = length; i > 0; i--) {

		divider = pow(10, i - 1);

		summa += loc / divider;

		loc -= loc / divider * divider;
	}

	return summa;
}
