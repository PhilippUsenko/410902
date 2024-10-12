#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int k[n];
    int newk [n];

    cout << "Если хотите ввести свои значения в массив, введите 'input' или массив будет заполнен числами от 1 до " << n << ": ";
    string answer;
    cin >> answer;
    if (answer == "input") {
        cout << "Введите элементы массива: ";
        for (int i = 0; i < n; i++) {
            cin >> k[i];
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            k[i] = i + 1;
        }
    }
    int oddindex = 0;
    int evenindex = n / 2;

    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 1)
        {
            newk[oddindex] = k[i];
            oddindex += 1;
        }
        else
        {
            newk[evenindex] = k[i];
            evenindex += 1;
        }
}

    cout << "Преобразованный массив: ";
    for (int i = 0; i < n; i++) {
        cout << newk[i] << " ";
    }
}

