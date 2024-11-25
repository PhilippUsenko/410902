#include <iostream>
#include <locale>
#include <complex>
using namespace std;
int sum(int, int); //сумма двух целых
complex<double> inputc(); // ввод кч
complex<double> sum(complex<double>, complex<double>); //сумма двух кч

int main() {
	setlocale(LC_ALL, "RU");	
	int a = 0, b = 0;
	double real = 0, imag = 0;
	complex<double> complexnum1, complexnum2;

	cout << "Сумма данных чисел: " << sum(a, b) << endl;
	cout << sum(complexnum1, complexnum2);

	return 0;
}
//сумма целых чисел
int sum(int, int)
	{
	int a, b;
	cout << "Введите первое целое число: ";
	cin >> a;
	cout << "Введите второе целое число: ";
	cin >> b;
	return a + b;
	} 
//ввод кч
complex<double> inputc()
{
	double real, imag;
	cout << "Введите действительную часть: ";
	cin >> real;
	cout << "Введите мнимую часть: ";
	cin >> imag;
	return complex<double>(real, imag);
}
//сумма комплексных чисел
complex<double> sum(complex<double> , complex<double> )
	{
	complex<double> complexnum1, complexnum2;
	complexnum1 = inputc();
	complexnum2 = inputc();
	cout << "Сумма данных комплексных чисел: ";
	return complexnum1 + complexnum2;
	}
