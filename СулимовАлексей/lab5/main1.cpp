#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    int //row1 = 0,//1 массив
        //col1 = 0,//1 массив
        row2 = 1,//2 массив
        num = 1,
        k = 1,
        l = 0;
    //динамический двумерный
    unsigned row1 = 3;       // количество строк 
    unsigned col1 = 4;    // количество столбцов 
    int* newa{ new int[row1 * col1] };      //одномерный масссив
    int** a{ new int* [row1] {} };  // выделяем память под двухмерный 
    //массив
    for (unsigned i{}; i < row1; i++)
    {
        a[i] = new int[col1] {};
    }
    // вводим данные для таблицы rows x columns 
    for (unsigned i{}; i < row1; i++)
    {
        cout << (i + 1) << " ряд" << endl;
        // вводим данные для столбцов i-й строки 
        for (unsigned j{}; j < col1; j++)
        {
            cout << (j + 1) << " столбец ";
            cin >> a[i][j];
        }
    }
    //проверка, ввод в новый массив и вывод нового массива)
    for (unsigned i{}; i < row1; i++)
    {
        // выводим данные столбцов i-й строки 
        for (unsigned j{}; j < col1; j++)
        {
            if (a[i][j] > 0 && a[i][j] % 2 == 0 && a[i][j] != 0)
            {
                k = k * a[i][j];
                newa[row2] = k;
                k = a[i][j];
                cout << newa[row2] << endl;
                row2++;
            }
        }
        cout << endl;
    }
    //удаление
    for (unsigned i{}; i < row1; i++)
    {
        delete[] a[i];
    }
    delete[] a;    
    delete [] newa;
    return 0;
}


