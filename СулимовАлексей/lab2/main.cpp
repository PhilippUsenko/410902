#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int  a, a1, a2, a3, a4;
	cout << "Введите четырехзначное  число : ";
	cin >> a;
	// находение цифр числа
	a4 = fmod(a, 10);
	a3 = fmod((a - a4), 100) / 10;
	a2 = fmod((a - 10 * a3 - a4), 1000) / 100;
	a1 = (a - 100 * a2 - 10 * a3 - a4) / 1000;
	// вывод
	if (a1 + a2 == a3 + a4)
		cout << endl << "Сумма первых двух цифр четырехзначного числа равна сумме его последних двух цифр" << endl;
	else
		cout << endl << "Сумма первых двух цифр четырехзначного числа не равна сумме его последних двух цифр" << endl;

	return 0;
}
