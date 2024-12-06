#include <iostream>
using namespace std;

int main ()
{
    int rows, columns;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> columns;
    float **arr;
    arr = new float*[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new float[columns];
    }
    float min = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < rows; i++)
    {
        min = abs(arr[i][0]);
        for (int j = 0; j < columns; j++)
        {
            if (abs(arr[i][j]) < min)
            {
                min = abs(arr[i][j]);
            }
        }
        if (min == 0)
        {
            continue;
        }
        else 
        {
            for (int j = 0; j < columns; j++)
            {
                arr[i][j] = arr[i][j] / min;
            }
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {        
            cout << arr[i][j] << " | ";
        }
        cout << "\n";
    }
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

}
