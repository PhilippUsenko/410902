#include <iostream>

using namespace std;

// Функция для проверки, является ли число палиндромом
bool isPalindrome(int number) {

    int original = number; // Сохраняем исходное число
    int reversed = 0;

    // Переворачиваем число
    while (number > 0) {
        int digit = number % 10;       // Берем последнюю цифру
        reversed = reversed * 10 + digit; // Добавляем цифру в перевернутое число
        number /= 10;                 // Убираем последнюю цифру
    }

    // Сравниваем исходное и перевернутое числа
    return original == reversed;
}

// Основная функция
int main() {

    setlocale(LC_ALL, "Russian");
    int number;
    /*while (number <= 0) {
        cout << "Введите натуральное число больше 0." << endl;
        cin >> number;
    }*/
    // Ввод числа и проверка ввода
    while (true) {
        printf("Введите натуральное число: ");

        // Попытка считывания числа
        if (scanf_s("%d", &number) == 1) {
            // Если ввод правильный, проверяем, не является ли это целым числом
            if (number <= 0) {
                // Если это целое число, выводим ошибку
                printf("Ошибка ввода! Пожалуйста, введите натуральное число. \n");
            }
            else {
                // Ввод успешен, выходим из цикла
                break;
            }
        }
        else {
            // Если ввод некорректный
            printf("Ошибка ввода! Пожалуйста, введите натуральное число. \n");
            while (getchar() != '\n'); // Очистка буфера ввода
        }
    }

    // Проверка на палиндром
    if (isPalindrome(number)) {
        cout << "Число " << number << " является палиндромом." << endl;
    }
    else {
        cout << "Число " << number << " не является палиндромом." << endl;
    }

    return 0;
}
