#include <iostream>

using namespace std;

// ������� ��� ��������, �������� �� ����� �����������
bool isPalindrome(int number) {

    int original = number; // ��������� �������� �����
    int reversed = 0;

    // �������������� �����
    while (number > 0) {
        int digit = number % 10;       // ����� ��������� �����
        reversed = reversed * 10 + digit; // ��������� ����� � ������������ �����
        number /= 10;                 // ������� ��������� �����
    }

    // ���������� �������� � ������������ �����
    return original == reversed;
}

// �������� �������
int main() {

    setlocale(LC_ALL, "Russian");
    int number;
    /*while (number <= 0) {
        cout << "������� ����������� ����� ������ 0." << endl;
        cin >> number;
    }*/
    // ���� ����� � �������� �����
    while (true) {
        printf("������� ����������� �����: ");

        // ������� ���������� �����
        if (scanf_s("%d", &number) == 1) {
            // ���� ���� ����������, ���������, �� �������� �� ��� ����� ������
            if (number <= 0) {
                // ���� ��� ����� �����, ������� ������
                printf("������ �����! ����������, ������� ����������� �����. \n");
            }
            else {
                // ���� �������, ������� �� �����
                break;
            }
        }
        else {
            // ���� ���� ������������
            printf("������ �����! ����������, ������� ����������� �����. \n");
            while (getchar() != '\n'); // ������� ������ �����
        }
    }

    // �������� �� ���������
    if (isPalindrome(number)) {
        cout << "����� " << number << " �������� �����������." << endl;
    }
    else {
        cout << "����� " << number << " �� �������� �����������." << endl;
    }

    return 0;
}
