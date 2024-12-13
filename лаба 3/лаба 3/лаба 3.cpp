
#include <iostream>
using namespace std;


int main()

{
    int n;
    double x=0;
    setlocale(LC_ALL, "Russian");
    cout << "Введите значение n" << endl;
    cin >> n;
   
    for (int i = 1; i <= n; i++) {
        x = x+ static_cast<double>( - (i * i * i)) / (i * (i + 1));
    }
    cout << "Значение выражения равно " << x;

    return 0;
}