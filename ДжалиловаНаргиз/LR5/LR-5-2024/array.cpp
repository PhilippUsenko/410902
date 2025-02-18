#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int SIZE = 5;  // ������ �������

    // ������������ �������� ���������� ������� 5x5
    int** array = new int* [SIZE];  // ������� ������ ����������
    for (int i = 0; i < SIZE; ++i) {
        array[i] = new int[SIZE];  // �������� ������ ��� ������� ���������� �������(������ �������)
    }

    // ���� ��������� �������
    std::cout << "������� �������� ��� ���������� ������� 5x5:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << "������� [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
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
            if (j < SIZE - 1 - i) {  // ������� ��� ��������� ��� �������� ����������
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

    // ������������ ������
    for (int i = 0; i < SIZE; ++i) {
        delete[] array[i];  // ������� ������ ��������� ������
    }
    delete[] array;  // ������� ������ ����������

    return 0;
}