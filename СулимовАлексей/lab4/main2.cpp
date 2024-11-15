#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	int a[3][4];
    int newa[12]{};
    int i = 0, j = 0, k = 1, newi = 0, num = 1, l = 0;
    cout << "Введите элементы массива 3х4:" << endl;
    //ввод элементов массива
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << num << " элемент массива: ";
            cin >> a[i][j];
            num++;
        }
        cout << endl;
    }
    num = 0;
    k = 1;
    //проверка элементов на четность и > 0, запись в новый массив
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i][j] > 0 && a[i][j] % 2 == 0)
            {
                k = k * a[i][j];
                newa[newi] = k;
                k = a[i][j];
                cout << newa[newi] << endl;
                newi++;
            }
        }
    }
return 0;
}
