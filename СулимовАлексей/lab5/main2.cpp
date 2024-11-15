#include <iostream>;
using namespace std;
int main()
{
    unsigned rows = 3;       // количество строк 
    unsigned columns = 4;    // количество столбцов 
    unsigned newi = 0; // элементы 2 массива
    int k = 1;
    int** numbers{ new int* [rows] {} };  // выделяем память под двухмерный 
    int* newa{ new int [rows * columns] {} };
    //двумерный массив
        for (unsigned i{}; i < rows; i++)
        {
            numbers[i] = new int[columns] {};
        }
    // вводим данные для таблицы rows x columns 
    for (unsigned i{}; i < rows; i++)
    {
        cout << "Enter data for " << (i + 1) << " row" << endl;
        // вводим данные для столбцов i-й строки 
        for (unsigned j{}; j < columns; j++)
        {
            cout << (j + 1) << " column: ";
            cin >> numbers[i][j];
        }
    }
    // вывод данных 
    for (unsigned i{}; i < rows; i++)
    {
        // выводим данные столбцов i-й строки 
        for (unsigned j{}; j < columns; j++)
        {
            if (numbers[i][j] > 0 && numbers[i][j] % 2 == 0)
            {
                k = k * numbers[i][j];
                newa[newi] = k;
                k = numbers[i][j];
                cout << newa[newi] << endl;
                newi++;
            }
        }
        cout << endl;
    }
    for (unsigned i{}; i < rows; i++)
    {
        delete[] numbers[i];
    }
    delete[] numbers;
    delete[] newa;
    return 0;
}
