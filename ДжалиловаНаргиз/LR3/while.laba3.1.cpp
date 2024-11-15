#include <iostream> // для cout
#include <cmath> // для функций abs() и pow()

int main() {

    setlocale(LC_ALL, "Russian");
    double sum = 0.0;  // Текущая сумма ряда
    double term = 1.0; // Текущий член ряда
    int n = 1;         // Индекс первого члена
    const double alpha = 0.01;  // Заданная точность

    // Вычисляем сумму с точностью alpha
    while (std::abs(term) > alpha) {
        term = pow(-1, n + 1) * pow(-2.0 / 3.0, n + 1);  // Член ряда
        sum += term;
        n++;  // Переход к следующему члену
    }

    std::cout << "Сумма ряда: " << sum << std::endl;

    return 0;
}