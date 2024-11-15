#include <stdio.h>   // для функций printf, scanf, puts
#include <iostream> // setlocale
#include <conio.h> // _getch()

using namespace std;

int main() {

    setlocale(LC_ALL, "RU");

    float x, y;

    puts("Введите абсциссу точки x"); // Выводим сообщение о вводе первой переменной

    scanf_s("%f", &x);  // Чтение первого числа (ввод)

    if (x==0) {
        cout << "Ошибка: Точка не лежит на OX" << endl;
        return 1;
    }

    puts("Введите ординату точки y"); //Выводим сообщение о вводе второй переменной

    scanf_s("%f", &y);  // Чтение второго числа (ввод)

    if (y == 0) {
        cout << "Ошибка: Точка не лежит на OY" << endl;
        return 1;
    }


    printf("(%f;%f)\n", x, y);

    if (x>0 && y>0)
        puts("Четверть I");
    else if(x>0 && y<0)
        puts("Четверть IV");
    else if (x < 0 && y < 0)
        puts("Четверть III");
    else if (x < 0 && y > 0)
        puts("Четверть II");

    int ch = _getch();  // Ожидает, пока пользователь не нажмет клавишу
    return 0;
}