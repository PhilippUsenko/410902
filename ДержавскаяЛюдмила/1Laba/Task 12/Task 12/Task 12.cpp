
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    double pl, dl;
    cout << "Введите площадь круга:"<<"\n";
    cin >> pl;
    dl = sqrt(pl / 3.14) * 6.28;
    cout << "Длинна окружности равна:" << "\n" << dl;
    return 0;
}

