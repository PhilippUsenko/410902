#include <iostream>
#include <cmath>

using namespace std;

int main() {
    srand(time(0)); // ������������� ���������� ��������� �����

    int sum = 0; // ���������� ��� ����� ��������� ������
    const int row = 5; // ���������� ����� � �������
    const int col = 5; // ���������� �������� � �������
    // �������� �������
    int** matrix = new int* [row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new int[col];
    }
    // ���������� ������� ���������� ������� �� -100 �� 100
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            matrix[i][j] = rand() % 201 - 100;
    }
    // ����� �������
    cout << "Matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    // ���������� � ����� ����� ��������� �������� �����
    for (int i = 0; i < row; i++) {
        if (i % 2 == 1) { // ���� ����� ������ ��������
            for (int j = 0; j < col; j++) {
                sum += matrix[i][j];
            }
            cout << "Summa: " << sum << endl;
            sum = 0; // ��������� ����� ��� ��������� ������
        }
    }
    // ������������ ������
    for (int i = 0; i < row; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}
