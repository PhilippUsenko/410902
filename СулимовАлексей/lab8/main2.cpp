#include <iostream>
#include <locale>
#include <complex>
using namespace std;
int sum(int, int); //сумма двух целых
complex<double> inputc(); // ввод кч
complex<double> sum(complex<double>, complex<double>); //сумма двух кч
complex<double> sum(int, int, int, int);// сумма кч 4 целыми числами
int main() {
	setlocale(LC_ALL, "RU");	
	int a = 0, b = 0;
	int real1 = 0, imag1 = 0, real2 = 0, imag2 = 0;
	double real = 0, imag = 0;
	complex<double> complexnum1, complexnum2;

	cout << "Сумма данных чисел: " << sum(a, b) << endl;
	cout << "Сумма двух комплексных, введенных комплексными \n";
	cout << sum(complexnum1, complexnum2) <<endl;
	cout << "Сумма двух комплексных чисел, введенных 4-мя целыми \n";
	cout << sum(real1,imag1,real2,imag2);

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
//сумма комплексных чисел (complex)
complex<double> sum(complex<double> , complex<double> )
	{
	complex<double> complexnum1, complexnum2;
	complexnum1 = inputc();
	complexnum2 = inputc();
	cout << "Сумма данных комплексных чисел: ";
	return complexnum1 + complexnum2;
	}
//сумма комплексных чисел (int)
complex<double> sum(int, int, int, int) 
	{
	int real1, imag1, real2, imag2, sumreal, sumimag;
	cout << "Введите действительную часть первого числа : ";
	cin >> real1;
	cout << "Введите мнимую часть первого числа : ";
	cin >> imag1;
	cout << "Введите действительную часть второго числа : ";
	cin >> real2;
	cout << "Введите мнимую часть второго числа : ";
	cin >> imag2;
	sumreal = real1 + real2;
	sumimag = imag1 + imag2;
	return complex<double>(sumreal, sumimag);
	}
