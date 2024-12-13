#include <iostream>
#include <cmath>  //для корня
using namespace std;
int main ()
{
	double x1, y1, x2, y2, r;  //для дробных чисел
	setlocale(LC_ALL, "RU");  //для русского языка
	cout << "Введите первые координаты:" << endl;
	cin >> x1 >> y1;
	cout << "Введите вторые координаты:" << endl;
	cin >> x2 >> y2;
	r = (pow(pow (x1 - x2 , 2) +pow (y1 - y2 , 2))0,5);  //pow это возведение в степень
	cout <<"расстояние:"<< r;


}