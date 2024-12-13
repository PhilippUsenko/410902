#include <iostream>
using namespace std;

void del(int arr1[], int arr2[], const int size1, const int size2) {
    for (int i = 0, j = 0; i < size1, j < size2; j++, i += 2) {
        arr2[j] = arr1[i];
    }
    cout << "Полученная последовательность:" << endl;
    for (int i = 0; i < size2; i++) {
        cout << arr2[i] << endl;
    }
}

void del(string arr1[], string arr2[], const int size1, const int size2) {
    for (int i = 0, j = 0; i < size1, j < size2; j++, i += 2) {
        arr2[j] = arr1[i];
    }
    cout << "Полученная последовательность:" << endl;
    for (int i = 0; i < size2; i++) {
        cout << arr2[i] << endl;
    }
}

    int main() {
        
    setlocale(LC_ALL, "ru");

    const int n = 100;
    int arr1[n]{}, arr2[n / 2]{}, n1, n2, tip;
    string arr3[n]{}, arr4[n / 2]{};

    cout << "Введите 1, если последовательность состоит из чисел, введите 2, если последовательность состоит из слов" << endl;
    cin >> tip;
    cout << "Введите число элементов последовательности (<=100)\n";
    cin >> n1;

    const int size1 = n1; // вычисление длины искомой последовательности
    if (n1 % 2 == 1) {
        n2 = n1 / 2 + 1;
    }
    else { n2 = n1 / 2; }
    const int size2 = n2;

    cout << "Введите элементы последовательности\n"; // ввод последовательности 
    if (tip == 1) {
        for (int i = 0; i < n1; i++) {
            cin >> arr1[i];
        }
    }

    else if (tip == 2) {
        for (int i = 0; i < n1; i++) {
            cin >> arr3[i];
        }
    }

    else { cout << "Вы ввели неправильное значение!" << endl; }

    if (tip == 1) { del(arr1, arr2, size1, size2); } 
    if (tip == 2) { del(arr3, arr4, size1, size2); }


    return 0;
}