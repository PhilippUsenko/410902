#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int i, j, m, d;
    float arr2[5][5], arr1[5][5];
    m = 0; d = 0;
    cout << "Введите элементы массива\n";
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << "arr1[" << i + 1 << "]" << "[" << j + 1 << "]:";
            cin >> arr1[i][j];
            if (fabs(arr1[i][j]) > m) {
                m = fabs(arr1[i][j]);
                d = arr1[i][j];
            }
        }
    }
    cout << "Новый массив\n";
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            arr2[i][j] = arr1[i][j] / d;
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
