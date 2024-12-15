#include <iostream>
#include <fstream>
#include <cstring>
#include <windows.h>
#include <algorithm>

using namespace std;

struct STUDENT {
    char lastName[50];
    int groupNumber;
    int grades[5];

    STUDENT() {
        lastName[0] = '\0'; // ������������� ������� ������� ������� ������� ��������, ����� �������, ��� ������ ������.
        groupNumber = 0;    // ��������� �������� ����� ���� ��� �������� ������� ��������� STUDENT
        for (int i = 0; i < 5; ++i) { //���� ��� ������������� ���� ��������� ������� �����
            grades[i] = 0;
        }
    }
};

      // ������� ��� ��������� 2-� ���������
bool compareStudents(const STUDENT& a, const STUDENT& b) {
    return strcmp(a.lastName, b.lastName) < 0;
}

int main() {
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);

    // ������ ��� �������� ���������
    STUDENT students[200];
    int count = 0;

    // ���������� ������ �� �����
    ifstream file("student.txt");
    if (file.is_open()) {
        while (file) {       //������ ����� ��� ������ ������ �� �����
            char temporary[50]; //���������� ���������� ������� ��� ������ �����

            // ��������� ������� � ��������
            file.getline(temporary, 50, ':'); // ������ ������ �� :
            file.ignore(1); // ���������� ������ ����� ���������
            if (!file.getline(students[count].lastName, 50)) break; // ������ ������ ������ � �������� �� �������� ������.
                                                                     
            // ��������� ����� ������
            file.getline(temporary, 50, ':'); 
            file.ignore(1); // ���������� ������ ����� ���������
            if (!(file >> students[count].groupNumber)) break;
            file.ignore(256, '\n'); // ���������� ���������� ����� ������

            // ��������� ������������
            file.getline(temporary, 50, ':'); 
            file.ignore(1); // ���������� ������ ����� ���������
            for (int j = 0; j < 5; ++j) {
                if (!(file >> students[count].grades[j])) break;
            }
            file.ignore(256, '\n');  // ���������� ���������� ����� ������
            count++;
            // �������� �� ������������ �������
            if (count >= 200) {
                cout << "��������� ������������ ���������� ���������." << endl;
                break;
            }
        }
        file.close();
    }
    else {
        cout << "�� ������� ������� ���� student.txt ��� ������." << endl;
    }

   
    char choice[10]; // ���������� ������� ��� �������� ������ ������������ �� ������ � ���������� ������ ��������.
    do {
        if (count >= 200) {
            cout << "��������� ������������ ���������� ���������." << endl;
            break;
        }
        cout << endl; 
        cout << "������� ������ ��������.\n";
        cout << "������� � ��������: ";
        cin.getline(students[count].lastName, 50);
        cout << "����� ������: ";
        cin >> students[count].groupNumber;
        cout << "������������ (5 ������): ";
        for (int j = 0; j < 5; ++j) {
            cin >> students[count].grades[j];
        }
        cin.ignore(); // ������������ ���������� ������ ����� ������
        count++; //���������� �������� ��������� ����� ��������� ����� ������.
        cout << endl;
        cout << "������ ������ ������ ��� ������ ��������? (��/���): ";
        cin.getline(choice, 10);
    } while (strcmp(choice, "��") == 0 || strcmp(choice, "��") == 0); //��������, ���� ����� ������������ "��", ��������� ���� ������ ��� ���������� ��������.
    cout << endl; 
    sort(students, students + count, compareStudents);// ���������� ������� ��������� �� �������
    ofstream outFile("student.txt");// ������ ��������������� ������ � ����
    if (outFile.is_open()) {
        for (int i = 0; i < count; ++i) { //������ ����� ��� ������ ������ � ����.
            if (students[i].groupNumber != 0) { // ���������, ����� �� ���������� ������ ������
                outFile << "������� � ��������: " << students[i].lastName << endl;
                outFile << "����� ������: " << students[i].groupNumber << endl;
                outFile << "������������: ";
                for (int j = 0; j < 5; ++j) {
                    outFile << students[i].grades[j] << " ";
                }
                outFile << endl;
            }
        }
        outFile.close();
        cout << "������ ������� �������� � ���� student.txt." << endl;
    }
    else {
        cout << "�� ������� ������� ���� student.txt ��� ������." << endl;
    }
    return 0;
}