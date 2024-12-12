#include <iostream>
#include <cmath>

using namespace std;

int main() {
    srand(time(0)); // Инициализация генератора случайных чисел

    int sum = 0; // Переменная для суммы элементов строки
    const int row = 5; // Количество строк в матрице
    const int col = 5; // Количество столбцов в матрице
    // Создание матрицы
    int** matrix = new int* [row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new int[col];
    }
    // Заполнение матрицы случайными числами от -100 до 100
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            matrix[i][j] = rand() % 201 - 100;
    }
    // Вывод матрицы
    cout << "Matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    // Вычисление и вывод суммы элементов нечётных строк
    for (int i = 0; i < row; i++) {
        if (i % 2 == 1) { // Если номер строки нечётный
            for (int j = 0; j < col; j++) {
                sum += matrix[i][j];
            }
            cout << "Summa: " << sum << endl;
            sum = 0; // Обнуление суммы для следующей строки
        }
    }
    // Освобождение памяти
    for (int i = 0; i < row; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}
