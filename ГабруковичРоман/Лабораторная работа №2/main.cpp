#include <iostream>
using namespace std;
int main () {
int X,Y,Z,p;
cout <<"Введите значение X: ";
cin >> X;
cout << "Введите значение Y: ";
cin >> Y;
cout << "Введите значение Z: ";
cin >> Z;
if (X > Y) {
p = X;
X = Y;
Y = p;
}
if (X > Z) {
p = X;
X = Z;
Z = p;
}
if (Y > Z) {
p = Y;
Y = Z;
Z = p;
}
cout << "Отсортированные значения: " << X << " " << Y << " " << Z << endl;
return 0;
}
