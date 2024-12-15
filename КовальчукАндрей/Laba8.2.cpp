#include <iostream>  
#include <string>    
#include <sstream>   
#include <cctype>    

using namespace std; 


void calculate(string str);
void calculate(string str, int n);

int main() {
    setlocale(LC_ALL, "RU"); 
    string str; // ���������� ��� �������� ��������� ������

    cout << "������� ������: "; // ����� ����������� ��� ����� ������
    while (getline(cin, str)) { // �������� �� ������ ������
        if (!str.empty()) { // ���� ������ �� ������, ����� �� �����
            break;
        }
        cout << "����������, ������� ������ � ���������� ���������: "; // ������ �� ���� �������� ������
    }

    // ������� ���������� ���� � ������ (���������� �������� + 1)
    int n = count(str.begin(), str.end(), ' ') + 1;

    // �������� ������� ������� � ������
    for (char c : str) {
        // ���� ������ �� �������� ������, ������ '-' ��� ��������
        if (!isdigit(c) && c != '-' && c != ' ') {
            calculate(str); // ����� ������� ��� ��������� ����� � �������
            return 0; 
        }
    }

    // ���� ������ �������� ������ �����
    calculate(str, n); // ����� ������� ��� ��������� ����� � �������

    return 0; 
}

// ������� ��� �������� ���� � ������
void calculate(string str) {
    int count = 0; // ������� ����
    for (char c : str) {
        if (isalpha(c)) { // ��������, �������� �� ������ ������
            count++; // ���������� ��������
        }
    }
    cout << "���� ������� " << count << " ����" << endl; // ����� ����������
}

// ������� ��� �������� �������� ��������������� ����� � ������
void calculate(string str, int n) {
    double sum = 0; // ����� �����
    int count = 0; // ������� �����

    istringstream stream(str); // �������� ������ �� ������
    string numStr; // ���������� ��� �������� ����� � ���� ������

    // ���������� ����� �� ������
    while (stream >> numStr) {
        sum += stod(numStr); // �������������� ������ � ����� � ���������� � �����
        count++; // ���������� �������� �����
    }

    double res = sum / count; // ���������� �������� ���������������
    cout << "������� �������������� �����: " << res << endl; // ����� ����������
}
