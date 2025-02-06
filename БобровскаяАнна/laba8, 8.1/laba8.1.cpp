#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void result(int a, int b)
{
    int sum = a * b;
    cout << "Результат: " << sum << endl;
}
void result(double real1, double real2, double image1, double image2)
{
    double a = real1 * real2;  
    double b = real1 * image2;  
    double c = image1 * real2; 
    double d = image1 * image2 * -1; 
    double e = a + d; 
    double f = b + c; 
    cout << "Результат: " << f << "i+" << e ;
}
int main()
{
    setlocale(LC_ALL, "Russian");

    int a, b, image1, image2, real1, real2;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите действительную часть первого числа: ";
    cin >> real1;
    cout << "Введите действительную часть второго числа: ";
    cin >> real2;
    cout << "Введите мнимую часть первого числа: ";
    cin >> image1;
    cout << "Введите мнимую часть второго числа: ";
    cin >> image2;
    result(a, b);
    result(real1, real2, image1, image2);
}

