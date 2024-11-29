#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double a, b;
    cout << "Введите длину первого катета a: ";
    cin >> a;
    cout << "Введите длину второго катета b: ";
    cin >> b;
    double c = sqrt (a * a + b * b);
    double perimeter = a + b + c;
    double area = 0.5 * a * b;
    cout << "Периметр прямоугольного треугольника:" <<perimeter << endl;
    cout << "Площадь прямоугольного треугольника: " <<area << endl;
    return 0;
}
