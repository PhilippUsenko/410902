#include <iostream>
#include <cmath> // Для использования функции gcd

using namespace std;

// Функция для вычисления наибольшего общего делителя (НОД)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Перегруженная функция 1: Преобразование десятичной дроби в обыкновенную
void convert(double decimal) {
    // Константа для точности
    const int precision = 1000000;

    // Представляем десятичную дробь как n / precision
    int numerator = static_cast<int>(decimal * precision + 0.5); // Числитель
    int denominator = precision; // Знаменатель

    // Сокращаем дробь, используя НОД
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;

    // Выводим результат
    cout << "Обыкновенная дробь: " << numerator << "/" << denominator << endl;
}

// Перегруженная функция 2: Преобразование обыкновенной дроби в десятичную
void convert(int numerator, int denominator) {
    if (denominator == 0) {
        cout << "Ошибка: деление на ноль!" << endl;
        return;
    }
    double decimal = static_cast<double>(numerator) / denominator;
    cout << "Десятичная дробь: " << decimal << endl;
}

// Основная функция
int main() {

    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "C"); // Устанавливаем локаль, которая использует точку для десятичных чисел

    // Вариант а) Преобразование десятичной дроби в обыкновенную
    double decimalNumber;
    while (true) {
        printf("Введите число с плавающей точкой: ");

        // Попытка считывания числа
        if (scanf_s("%lf", &decimalNumber) == 1) {
            // Если ввод правильный, проверяем, не является ли это целым числом
            if (decimalNumber == static_cast<int>(decimalNumber)) {
                // Если это целое число, выводим ошибку
                printf("Ошибка ввода! Пожалуйста, введите число с плавающей точкой, например, 3.14.\n");
            }
            else {
                // Ввод успешен, выходим из цикла
                break;
            }
        }
        else {
            // Если ввод некорректный
            printf("Ошибка ввода! Пожалуйста, введите число с плавающей точкой.\n");
            while (getchar() != '\n'); // Очистка буфера ввода
        }
    }
    convert(decimalNumber);

    // Вариант б) Преобразование обыкновенной дроби в десятичную
    int numerator, denominator;
    while (true) {
        printf("Введите целое число (числитель дроби): ");

        // Попытка считать целое число
        if (scanf_s("%d", &numerator) == 1) {
            // Если введено целое число, проверим, не осталось ли в буфере символов
            char ch;
            if (scanf_s("%c", &ch, 1) == 1 && ch != '\n') {
                // Если есть дополнительные символы после числа, это не целое число
                printf("Ошибка ввода! Пожалуйста, введите целое число.\n");
                while (getchar() != '\n'); // Очистка буфера ввода
            }
            else {
                // Ввод корректен, выходим из цикла
                break;
            }
        }
        else {
            // Если ввод некорректный
            printf("Ошибка ввода! Пожалуйста, введите целое число.\n");
            while (getchar() != '\n'); // Очистка буфера ввода
        }
    }
    while (true) {
        printf("Введите целое число (знаменатель дроби): ");

        // Попытка считать целое число
        if (scanf_s("%d", &denominator) == 1) {
            // Если введено целое число, проверим, не осталось ли в буфере символов
            char ch;
            if (scanf_s("%c", &ch, 1) == 1 && ch != '\n') {
                // Если есть дополнительные символы после числа, это не целое число
                printf("Ошибка ввода! Пожалуйста, введите целое число.\n");
                while (getchar() != '\n'); // Очистка буфера ввода
            }
            else {
                // Ввод корректен, выходим из цикла
                break;
            }
        }
        else {
            // Если ввод некорректный
            printf("Ошибка ввода! Пожалуйста, введите целое число.\n");
            while (getchar() != '\n'); // Очистка буфера ввода
        }
    }
    convert(numerator, denominator);

    return 0;
}