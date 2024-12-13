#include <iostream> // cout, cin

int main() {
    setlocale(LC_ALL, "Russian");
    const int SIZE = 5;  // Размер массива
    int array[SIZE][SIZE];  // Объявление массива 5x5

    // Ввод элементов массива
    std::cout << "Введите элементы для двумерного массива 5x5:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << "Элемент [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];  // Ввод элемента от пользователя
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
            if (j < 4 - i) {  // Условие для элементов над побочной диагональю
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

    return 0;
}
