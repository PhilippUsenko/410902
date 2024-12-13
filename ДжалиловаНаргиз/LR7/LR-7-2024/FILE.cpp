#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

struct Car {
    string brand;       // марка машины
    string model;       // модель машины
    int lastCheckDay;   // день последнего техосмотра
    int lastCheckMonth; // месяц последнего техосмотра
    int lastCheckYear;  // год последнего техосмотра
};

int main() {

    setlocale(LC_ALL, "Russian");
    int n;  // Количество машин

    // Запрашиваем у пользователя количество машин
    cout << "Введите количество машин: ";
    cin >> n;

    Car* cars = new Car[n];  // Массив машин

    // Ввод данных о машинах
    for (int i = 0; i < n; ++i) {
        cout << "Введите марку и модель машины #" << i + 1 << ": ";
        SetConsoleCP(1251); //считывает кодировку консоли
        cin >> cars[i].brand;  // Вводим марку
        cin >> cars[i].model;  // Вводим модель
        SetConsoleCP(866); // возвращаем оригинальную кодировку

        cout << "Введите дату последнего техосмотра (день месяц год): ";
        cin >> cars[i].lastCheckDay >> cars[i].lastCheckMonth >> cars[i].lastCheckYear;

    }

    // Открываем файл для записи (перезаписываем файл)
    ofstream file("cars.txt"); 
    if (!file.is_open()) {
        cout << "Не удалось открыть файл для записи!" << endl;
        delete[] cars;
        return 1;
    }

    // Текущая дата
    int currentDay = 14;
    int currentMonth = 11;
    int currentYear = 2024;

    // Записываем в файл только те машины, которые прошли техосмотр менее года назад
    for (int i = 0; i < n; ++i) {
        bool isRecent = false;

        // Проверка, прошел ли техосмотр менее года назад
        if (currentYear == cars[i].lastCheckYear) {
            // Если техосмотр был в том же году
            if (currentMonth == cars[i].lastCheckMonth) {
                // Если месяц тот же, проверяем разницу в днях
                if (currentDay - cars[i].lastCheckDay <= 365) {
                    isRecent = true;
                }
            }
            else if (currentMonth - cars[i].lastCheckMonth < 12) {
                // Если техосмотр был в этом году, но месяц отличается, проверяем разницу в месяцах
                isRecent = true;
            }
        }
        else if (currentYear - cars[i].lastCheckYear == 1) {
            // Если техосмотр был в прошлом году, проверяем разницу в месяцах и днях
            if (currentMonth > cars[i].lastCheckMonth) {
                isRecent = true;
            }
            else if (currentMonth == cars[i].lastCheckMonth && currentDay >= cars[i].lastCheckDay) {
                isRecent = true;
            }
        }

        // Если техосмотр был меньше года назад, записываем информацию о машине в файл
        if (isRecent) {
            file << cars[i].brand << " " << cars[i].model << " "
                << cars[i].lastCheckDay << " "
                << cars[i].lastCheckMonth << " "
                << cars[i].lastCheckYear << endl;
        }
    }

    file.close();  // Закрываем файл после записи

    // Открываем файл для чтения и выводим результат на экран
    ifstream inputFile("cars.txt");
    if (!inputFile.is_open()) {
        cout << "Не удалось открыть файл для чтения!" << endl;
        delete[] cars;
        return 1;
    }

    cout << "\nМашины, прошедшие техосмотр менее года назад:" << endl;

    // Чтение данных из файла и вывод на экран
    string brand, model;
    int lastCheckDay, lastCheckMonth, lastCheckYear;
    while (inputFile >> brand >> model >> lastCheckDay >> lastCheckMonth >> lastCheckYear) {
        cout << "Марка: " << brand << ", Модель: " << model
            << ", Дата техосмотра: " << lastCheckDay << "."
            << lastCheckMonth << "." << lastCheckYear << endl;
    }

    inputFile.close();  // Закрываем файл после чтения

    // Освобождаем память, выделенную под массив машин
    delete[] cars;

    return 0;
}