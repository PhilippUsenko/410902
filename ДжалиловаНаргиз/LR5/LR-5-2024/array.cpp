#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int SIZE = 5;  // Размер массива

    // Динамическое создание двумерного массива 5x5
    int** array = new int* [SIZE];  // Создаем массив указателей
    for (int i = 0; i < SIZE; ++i) {
        array[i] = new int[SIZE];  // Выделяем память для каждого отдельного массива(строки таблицы)
    }

    // Ввод элементов массива
    std::cout << "Введите элементы для двумерного массива 5x5:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << "Элемент [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }

    // Вывод введенного массива
    std::cout << "\nОригинальный массив:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Замена элементов над побочной диагональю на 0
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (j < SIZE - 1 - i) {  // Условие для элементов над побочной диагональю
                array[i][j] = 0;
            }
        }
    }

    // Вывод измененного массива
    std::cout << "\nИзмененный массив:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Освобождение памяти
    for (int i = 0; i < SIZE; ++i) {
        delete[] array[i];  // Удаляем каждый отдельный массив
    }
    delete[] array;  // Удаляем массив указателей

    return 0;
}