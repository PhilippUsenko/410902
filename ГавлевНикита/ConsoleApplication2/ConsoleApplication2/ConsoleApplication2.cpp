#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float X, Y, Z;
    cout << "Введите значение Х: ";
    cin >> X;
    cout << "Введите значение Y: ";
    cin >> Y;
    cout << "Введите значение Z: ";
    cin >> Z;
    if (X <= Y)
    swap(X, Y);
    if (X <= Z)
    swap(X, Z);
    if (Y <= Z)
    swap(Y, Z);
    cout << "Новое значение X: " << X << endl << "Новое значение Y: " << Y << endl << "Новое значение Z: " << Z;
}