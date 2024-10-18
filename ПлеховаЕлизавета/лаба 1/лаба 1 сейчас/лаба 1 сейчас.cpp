
#include <iostream>
using namespace std;


int main()

{
    int g;
    double a, z1, z2;
    setlocale(LC_ALL, "Russian");
    cout << "Если ваш угол измеряется в грусах введите 1, если в радианах - 0" << endl;
    cin >> g;
    cout << "Введите угол а" << endl;
    cin >> a;
    if (g == 1)
        a = a * (3.14 / 180);
    z1 = 1 / (sqrt(1 + (tan (a)*tan(a))));

    z2 = (1 / tan(a)) / sqrt(1 + ((1 / tan(a) * (1 / tan(a)))));
    cout << "z1: " << z1 << endl << "-z1: " << -z1 << endl;
    cout << "z2: " << z2 << endl << "-z2: " << -z2 << endl;

    return 0;
}
