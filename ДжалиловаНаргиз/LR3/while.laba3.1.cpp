#include <iostream> // ��� cout
#include <cmath> // ��� ������� abs() � pow()

int main() {

    setlocale(LC_ALL, "Russian");
    double sum = 0.0;  // ������� ����� ����
    double term = 1.0; // ������� ���� ����
    int n = 1;         // ������ ������� �����
    const double alpha = 0.01;  // �������� ��������

    // ��������� ����� � ��������� alpha
    while (std::abs(term) > alpha) {
        term = pow(-1, n + 1) * pow(-2.0 / 3.0, n + 1);  // ���� ����
        sum += term;
        n++;  // ������� � ���������� �����
    }

    std::cout << "����� ����: " << sum << std::endl;

    return 0;
}