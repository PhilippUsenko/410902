#include <iostream> 

using namespace std; 

int main() {
    setlocale(LC_ALL, "RU"); // ��������� ������ ��� ����������� ����������� �������� �����
    int year; // ���������� ���������� ��� �������� ����
    cout << "������� ���: "; // ����� ��������� ������������
    cin >> year; // ���� ���� � ����������
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // ��������, �������� �� ��� ����������
        cout << year << " �������� ���������� ����� � �������� 366 ����." << endl; 
    else
        cout << year << " �� �������� ���������� � �������� 365 ����." << endl; 
    return 0;
}
