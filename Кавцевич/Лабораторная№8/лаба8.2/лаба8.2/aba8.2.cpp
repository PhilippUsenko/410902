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
	cout << "������� �����:";
	cin >> aint;
	cout << "������� �������:";
	cin >> nint;
	cout << "���������� ���������:" << ' ' << number(aint, nint);
	double adouble, ndouble; 
	cout << "������� �����:"; 
	cin >> adouble; 
	cout << "������� �������:";
	cin >> ndouble; 
	cout << "���������� ���������:" << ' ' << number(adouble, ndouble); 
	
	
	return 0;
}