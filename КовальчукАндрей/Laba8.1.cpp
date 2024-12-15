#include <iostream>  
#include <string>   

using namespace std; 

// Функция для нахождения и вывода всех делителей числа p
void devision(int p) {
    for (int i = 1; i <= p; i++) {
        if (p % i == 0) {  // Проверка, является ли i делителем p
            cout << i << endl;  // Вывод делителя
        }
    }
}

int main() {

    int p;  // Переменная для хранения введенного числа
    cout << "Enter p: "; 
    cin >> p;  // Ввод числа пользователем
    devision(p);  // Вызов функции для нахождения и вывода делителей

    return 0; 
}
