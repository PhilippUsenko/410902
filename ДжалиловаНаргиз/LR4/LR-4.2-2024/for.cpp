#include <iostream> // cout, cin

int main() {
    setlocale(LC_ALL, "Russian");
    const int SIZE = 5;  // ������ �������
    int array[SIZE][SIZE];  // ���������� ������� 5x5

    // ���� ��������� �������
    std::cout << "������� �������� ��� ���������� ������� 5x5:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << "������� [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];  // ���� �������� �� ������������
        }
    }

    // ����� ���������� �������
    std::cout << "\n������������ ������:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // ������ ��������� ��� �������� ���������� �� 0
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (j < 4 - i) {  // ������� ��� ��������� ��� �������� ����������
                array[i][j] = 0;
            }
        }
    }

    // ����� ����������� �������
    std::cout << "\n���������� ������:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
