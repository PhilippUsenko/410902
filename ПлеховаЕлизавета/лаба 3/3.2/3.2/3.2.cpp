#include <iostream>
#include <iomanip> // для определеия точности результата
#include <cmath> // для функции возведения в степень
using namespace std;


int main()

{
    int n, i=0;
    double x = 0;
    setlocale(LC_ALL, "Russian");
    cout << "Введите значение n" << endl;
    cin >> n;

    while (i <= n)
    {
        x = x + static_cast<double>(pow(-1, i) * (pow(2, i) / (pow(i + 1, i))));
        i++;

    }
    cout << "Значение выражения равно " << fixed << setprecision(3) << x;

    return 0;
}

