#include <iostream>

int main()
{
    unsigned rows = 2;    // количество строк
    unsigned columns = 3; // количество столбцов
    int **numbers = new int *[rows] {};

    for (unsigned i{}; i < rows; i++)
    {
        numbers[i] = new int[columns]{};
    }

    // вводим данные для таблицы rows x columns
    for (unsigned i{}; i < rows; i++)
    {
        std::cout << "Введите данные для " << (i + 1) << " строки" << std::endl;
        // вводим данные для столбцов i-й строки
        for (unsigned j{}; j < columns; j++)
        {
            std::cout << (j + 1) << " колонка: ";
            std::cin >> numbers[i][j];
        }
    }

    for (unsigned i{}; i < rows; i++)
    {
        int sum = 0;
        // выводим данные столбцов i-й строки
        for (unsigned j{}; j < columns; j++)
        {
            sum += numbers[i][j];
        }
        delete[] numbers[i];
        std::cout << (i + 1) << ") " << sum << std::endl;
    }

    delete[] numbers;

}

