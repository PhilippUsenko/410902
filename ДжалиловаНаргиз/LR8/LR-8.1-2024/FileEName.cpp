#include <iostream>
#include <cmath> // ��� ������������� ������� gcd

using namespace std;

// ������� ��� ���������� ����������� ������ �������� (���)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// ������������� ������� 1: �������������� ���������� ����� � ������������
void convert(double decimal) {
    // ��������� ��� ��������
    const int precision = 1000000;

    // ������������ ���������� ����� ��� n / precision
    int numerator = static_cast<int>(decimal * precision + 0.5); // ���������
    int denominator = precision; // �����������

    // ��������� �����, ��������� ���
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;

    // ������� ���������
    cout << "������������ �����: " << numerator << "/" << denominator << endl;
}

// ������������� ������� 2: �������������� ������������ ����� � ����������
void convert(int numerator, int denominator) {
    if (denominator == 0) {
        cout << "������: ������� �� ����!" << endl;
        return;
    }
    double decimal = static_cast<double>(numerator) / denominator;
    cout << "���������� �����: " << decimal << endl;
}

// �������� �������
int main() {

    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "C"); // ������������� ������, ������� ���������� ����� ��� ���������� �����

    // ������� �) �������������� ���������� ����� � ������������
    double decimalNumber;
    while (true) {
        printf("������� ����� � ��������� ������: ");

        // ������� ���������� �����
        if (scanf_s("%lf", &decimalNumber) == 1) {
            // ���� ���� ����������, ���������, �� �������� �� ��� ����� ������
            if (decimalNumber == static_cast<int>(decimalNumber)) {
                // ���� ��� ����� �����, ������� ������
                printf("������ �����! ����������, ������� ����� � ��������� ������, ��������, 3.14.\n");
            }
            else {
                // ���� �������, ������� �� �����
                break;
            }
        }
        else {
            // ���� ���� ������������
            printf("������ �����! ����������, ������� ����� � ��������� ������.\n");
            while (getchar() != '\n'); // ������� ������ �����
        }
    }
    convert(decimalNumber);

    // ������� �) �������������� ������������ ����� � ����������
    int numerator, denominator;
    while (true) {
        printf("������� ����� ����� (��������� �����): ");

        // ������� ������� ����� �����
        if (scanf_s("%d", &numerator) == 1) {
            // ���� ������� ����� �����, ��������, �� �������� �� � ������ ��������
            char ch;
            if (scanf_s("%c", &ch, 1) == 1 && ch != '\n') {
                // ���� ���� �������������� ������� ����� �����, ��� �� ����� �����
                printf("������ �����! ����������, ������� ����� �����.\n");
                while (getchar() != '\n'); // ������� ������ �����
            }
            else {
                // ���� ���������, ������� �� �����
                break;
            }
        }
        else {
            // ���� ���� ������������
            printf("������ �����! ����������, ������� ����� �����.\n");
            while (getchar() != '\n'); // ������� ������ �����
        }
    }
    while (true) {
        printf("������� ����� ����� (����������� �����): ");

        // ������� ������� ����� �����
        if (scanf_s("%d", &denominator) == 1) {
            // ���� ������� ����� �����, ��������, �� �������� �� � ������ ��������
            char ch;
            if (scanf_s("%c", &ch, 1) == 1 && ch != '\n') {
                // ���� ���� �������������� ������� ����� �����, ��� �� ����� �����
                printf("������ �����! ����������, ������� ����� �����.\n");
                while (getchar() != '\n'); // ������� ������ �����
            }
            else {
                // ���� ���������, ������� �� �����
                break;
            }
        }
        else {
            // ���� ���� ������������
            printf("������ �����! ����������, ������� ����� �����.\n");
            while (getchar() != '\n'); // ������� ������ �����
        }
    }
    convert(numerator, denominator);

    return 0;
}