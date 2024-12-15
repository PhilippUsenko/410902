#include <iostream>  
#include <string>    
#include <sstream>   
#include <cctype>    

using namespace std; 


void calculate(string str);
void calculate(string str, int n);

int main() {
    setlocale(LC_ALL, "RU"); 
    string str; // Переменная для хранения введенной строки

    cout << "Введите строку: "; // Вывод приглашения для ввода строки
    while (getline(cin, str)) { // Проверка на пустую строку
        if (!str.empty()) { // Если строка не пустая, выйти из цикла
            break;
        }
        cout << "Пожалуйста, введите строку с некоторыми символами: "; // Запрос на ввод непустой строки
    }

    // Подсчет количества слов в строке (количество пробелов + 1)
    int n = count(str.begin(), str.end(), ' ') + 1;

    // Проверка каждого символа в строке
    for (char c : str) {
        // Если символ не является цифрой, знаком '-' или пробелом
        if (!isdigit(c) && c != '-' && c != ' ') {
            calculate(str); // Вызов функции для обработки строк с буквами
            return 0; 
        }
    }

    // Если строка содержит только цифры
    calculate(str, n); // Вызов функции для обработки строк с числами

    return 0; 
}

// Функция для подсчета букв в строке
void calculate(string str) {
    int count = 0; // Счетчик букв
    for (char c : str) {
        if (isalpha(c)) { // Проверка, является ли символ буквой
            count++; // Увеличение счетчика
        }
    }
    cout << "Было найдено " << count << " букв" << endl; // Вывод результата
}

// Функция для подсчета среднего арифметического чисел в строке
void calculate(string str, int n) {
    double sum = 0; // Сумма чисел
    int count = 0; // Счетчик чисел

    istringstream stream(str); // Создание потока из строки
    string numStr; // Переменная для хранения числа в виде строки

    // Извлечение чисел из строки
    while (stream >> numStr) {
        sum += stod(numStr); // Преобразование строки в число и добавление к сумме
        count++; // Увеличение счетчика чисел
    }

    double res = sum / count; // Вычисление среднего арифметического
    cout << "Среднее арифметическое равно: " << res << endl; // Вывод результата
}
