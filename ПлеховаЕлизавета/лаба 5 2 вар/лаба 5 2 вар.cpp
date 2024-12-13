#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int i, j;
    double m = 0, d = 0;
    int rows = 5, columns = 5; 
    double** numbers, ** numbers2;
    numbers = new double* [rows];
    numbers2 = new double* [rows];
    for (i=0; i < rows; i++)
    {
        numbers[i] = new double[columns];
        numbers2[i] = new double[columns];
    }
    cout << "Введите исходный массив \n";
    for (i = 0; i < rows; i++)
    {
        cout << "Введите данные для " << (i + 1) << " строки" << endl;

        for (j = 0; j < columns; j++)
        {
            cout << (j + 1) << " столбец: ";
            cin >> numbers[i][j];
            if (fabs(numbers[i][j]) > m) {
                m = fabs(numbers[i][j]);
                d = numbers[i][j];
            }
        }
    }
        // вывод данных
    cout << "Полученный массив:\n";
        for ( i=0; i < rows; i++)
        {
            
            for ( j=0; j < columns; j++)
            {
                numbers2[i][j] = (numbers[i][j] / d);
                cout << numbers2[i][j] << "\t";
            }
            cout << endl;
        }
        for ( i=0; i < rows; i++)
        {
            delete[] numbers[i];
            delete[] numbers2[i];
        }
        delete[] numbers;
        delete[] numbers2;


        return 0;
    
}
