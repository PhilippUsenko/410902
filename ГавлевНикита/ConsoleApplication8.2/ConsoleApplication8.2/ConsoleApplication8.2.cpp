#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

double division(int x1, int x2)
{
	return static_cast<double> (x1) / x2;
}

complex<double> division(complex<double> z1, complex<double> z2)
{
	return (z1 / z2);
}

void printcomplex(complex<double> z)
{
	double real = z.real();
	double imag = z.imag();
	if (imag >= 0)
		cout << real << " + " << imag << "i";
	else
		cout << real << " - " << abs(imag) << "i";
}

int main()
{
	string answer;
	setlocale(LC_ALL, "RU");
	while (true)
	{
		cout << "Если вы хотите делить целые числа введите 0, если комплексные 1: ";
		cin >> answer;
		if (answer == "0")
		{
			int x1, x2;
			cout << "Введите 1 и 2 число через пробел ";
			cin >> x1 >> x2;
			cout << division(x1, x2) << endl;
		}
		else if (answer == "1")
		{
			double real1, imag1, real2, imag2;
			cout << "Введите 1 комплексное число в виде x + iy, где x - ваш первый ввод, а y - второй (разделяются пробелом) ";
			cin >> real1 >> imag1;
			cout << "Введите 2 комплексное число в виде x + iy, где x - ваш первый ввод, а y - второй (разделяются пробелом) ";
			cin >> real2 >> imag2;
			complex<double> result = division(complex<double>(real1, imag1), complex<double>(real2, imag2));
			cout << "Результат деления комплексных чисел: ";
			printcomplex(result);
			cout << endl;
		}
		else
		{
			cout << "Введено неккоректное значение" << endl;
		}
	}
}