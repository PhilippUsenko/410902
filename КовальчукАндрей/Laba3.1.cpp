#include <iostream>
#include <cmath>

using namespace std;

int ffmain() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "������� ����������� �����: "; 
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double num = (i + 2.0) / i;
        if (i % 2 == 0) {
            num = -num;
        }
        sum += num;
    }
    cout << "����� " << sum << endl; 

    return 0;
}
