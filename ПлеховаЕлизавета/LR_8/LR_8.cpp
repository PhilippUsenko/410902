#include <iostream>
#include <math.h>
using namespace std;

int num, den;
void multiply(int num1, int num2, int den1, int den2) {
    num = num1 * num2;
    den = den1 * den2;

    int del1 = abs(num), del2 = abs(den); // нахождение НОД числителя и знаменателя полученной дроби
    while (del1 != del2) {
        if (del1 > del2) {
            del1 = del1 - del2;
        }
        else {
            del2 = del2 - del1;
        }
    }
    num /= del1; // сокращение дроби
    den /= del1;
}

int main() {
    setlocale(LC_ALL, "ru");
    int num1, den1, num2, den2, del1, del2;

    cout << "Введите в указанном порядке числитель и знаменатель первой дроби, а затем числитель и знаменатель второй дроби " << endl;
    cin >> num1 >> den1 >> num2 >> den2;

    multiply(num1, num2, den1, den2);
    cout << "Результат умножения: " << num << "/" << den;

    return 0;
}