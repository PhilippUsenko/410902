//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//bool check_prime_number(unsigned long long number_for_check)
//{
//	for (long long i = 2; i <= (number_for_check / 2); i++)
//	{
//		if (number_for_check % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//unsigned long long check_perfect_number(int base_number)
//{
//	bool result_of_prime = check_prime_number(pow(2, base_number) - 1);
//	if (result_of_prime == true)
//		return(pow(2, base_number - 1) * (pow(2, base_number) - 1));
//	else
//		return 0;
//}
//
//
//int main()
//{
//	int max_base_number = { 1000 };
//	setlocale(LC_ALL, "RU");
//	for (int i = 2; i < max_base_number; i++)
//	{
//		if (check_perfect_number(i) != 0)
//			cout << "Число " << pow(2, i - 1) * (pow(2, i) - 1) << " совершенное" << endl;
//	}
//}

//#include <iostream>
//#include <cmath>
//#include <complex>
//#include <iomanip>
//
//using namespace std; 
//
//double division(int x1, int x2)
//{
//	return static_cast<double> (x1) / x2;
//}
//
//complex<double> division(complex<double> z1, complex<double> z2)
//{
//	return (z1 / z2);
//}
//
//void printcomplex(complex<double> z)
//{
//	double real = z.real();
//	double imag = z.imag();
//	cout << fixed << setprecision(2);
//	if (imag >= 0)
//		cout << real << " + " << imag;
//	else
//		cout << real << " - " << abs(imag);
//}
//
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	cout << division(99, 2) << endl;
//	complex<double> result = division(complex<double>(1, 2), complex<double>(3, -2));
//	cout << "Результат деления комплексных чисел: ";
//	printcomplex(result);
//	cout << endl;
//}
//
//
