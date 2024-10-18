
#include <iostream>
using namespace std;


int main()

{
    int n;
    double x;
    setlocale(LC_ALL, "Russian");
    cout << "Введите значение n" << endl;
    cin >> n;
    x = -1 / 2;
    for (int i = 1; i = n; i++) x = x + (n * n * n / (n * (n + 1)));
    cout << "Значение выражения равно" << x;
    return 0;
}




