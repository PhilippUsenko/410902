#include <iostream>
using namespace std;


int main()

{         setlocale(LC_ALL, "Russian");
    int i, n;
    const int k = 100;
    bool t = true;
    int arr[k];
    cout << "Введите количество элементов массива (от 1 до 100)" << endl;
    cin >> n;
    if (n > k) {
        cout << "Неверное значение\n";
    }
    else {
        cout << "Введите элементы массива\n";
        for (i = 0; i < n; i++) {
            cout << "arr[" << i + 1 << "]: ";
            cin >> arr[i];
            if (arr[i] == 0) {
                t = false;
            }
        }
        cout << t<< endl;
    }  
    system("pause");    
return 0;}