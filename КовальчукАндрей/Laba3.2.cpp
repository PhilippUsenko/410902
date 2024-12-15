#include <iostream>
#include <cmath>

using namespace std; 

int main() {
    setlocale(LC_ALL, "RU");

    double alpha = 0.001;
    double sum = 0.0;
    double num;
    int n = 1;

    while (true) {

        num = pow(-1, n) * (2 * n + 1) / pow(2 * n, 2);
        if (fabs(num) <= alpha) {
            break;
        }
        sum += num;
        n++;
    }
    cout << "Ñóììà " << sum << endl;
    return 0;
}

