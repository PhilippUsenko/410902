#include <iostream> 
#include <cmath>
using namespace std; 
int number(int a, int n)
{ 
	return pow(a, n);
} 
double number (double a, double n) 
{
	return pow(a, (1.0 / n));
} 
int main()
{
	setlocale(LC_ALL, "ru"); 
	int aint, nint;
	cout << "Введите число:";
	cin >> aint;
	cout << "Введите степень:";
	cin >> nint;
	cout << "Полученный результат:" << ' ' << number(aint, nint);
	double adouble, ndouble; 
	cout << "Введите число:"; 
	cin >> adouble; 
	cout << "Введите степень:";
	cin >> ndouble; 
	cout << "Полученный результат:" << ' ' << number(adouble, ndouble); 
	
	
	return 0;
}