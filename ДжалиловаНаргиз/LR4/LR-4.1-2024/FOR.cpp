#include <iostream> // ��� cout, cin
#include <cmath>  // ��� fabs()

int main() {
    setlocale(LC_ALL, "Russian");
    const int SIZE = 100; // ���������� ��������� �������
    double array[SIZE];   // ���������� �������
    double product = 1.0; // ���������� ��� �������� ������������
    int n;                // ����������� ���������� ��������� �������

    // ���������� ������� � ���� n
    std::cout << "������� ���������� ��������� ������� n (n < 100): ";
    std::cin >> n;

    // �������� �� ������������ �����
    if (n <= 0 || n >= SIZE) {
        std::cout << "������������ ���������� ���������. ��������� ���������� �� 1 �� 99." << std::endl;
        return 1;
    }

    // ���� ��������� �������
    std::cout << "������� " << n << " ��������(-��) �������: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i]; // ������������ ������ ��������
    }

    // ����� �������
    std::cout << "��������� ������: ";
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // ����� ������������� �������� �� ������
    double maxFabsValue = fabs(array[0]);
    int maxIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (fabs(array[i]) > maxFabsValue) 
        {
            maxFabsValue = fabs(array[i]);
            maxIndex = i;
        }
    }

    // ���������� ������������ ��������� ����� ������������ �� ������
    for (int i = 0; i < maxIndex; ++i) {
        product = product * array[i];
    }

    // ����� �����������
    std::cout << "������������ ������� �������: " << array[maxIndex] << " � �������� " << maxIndex << std::endl;
    std::cout << "������������ ��������� ������� ����� ������������ ��������� : " << product << std::endl;

    return 0;
}
