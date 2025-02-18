#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

struct Car {
    string brand;       // ����� ������
    string model;       // ������ ������
    int lastCheckDay;   // ���� ���������� ����������
    int lastCheckMonth; // ����� ���������� ����������
    int lastCheckYear;  // ��� ���������� ����������
};

int main() {

    setlocale(LC_ALL, "Russian");
    int n;  // ���������� �����

    // ����������� � ������������ ���������� �����
    cout << "������� ���������� �����: ";
    cin >> n;

    Car* cars = new Car[n];  // ������ �����

    // ���� ������ � �������
    for (int i = 0; i < n; ++i) {
        cout << "������� ����� � ������ ������ #" << i + 1 << ": ";
        SetConsoleCP(1251); //��������� ��������� �������
        cin >> cars[i].brand;  // ������ �����
        cin >> cars[i].model;  // ������ ������
        SetConsoleCP(866); // ���������� ������������ ���������

        cout << "������� ���� ���������� ���������� (���� ����� ���): ";
        cin >> cars[i].lastCheckDay >> cars[i].lastCheckMonth >> cars[i].lastCheckYear;

    }

    // ��������� ���� ��� ������ (�������������� ����)
    ofstream file("cars.txt"); 
    if (!file.is_open()) {
        cout << "�� ������� ������� ���� ��� ������!" << endl;
        delete[] cars;
        return 1;
    }

    // ������� ����
    int currentDay = 14;
    int currentMonth = 11;
    int currentYear = 2024;

    // ���������� � ���� ������ �� ������, ������� ������ ��������� ����� ���� �����
    for (int i = 0; i < n; ++i) {
        bool isRecent = false;

        // ��������, ������ �� ��������� ����� ���� �����
        if (currentYear == cars[i].lastCheckYear) {
            // ���� ��������� ��� � ��� �� ����
            if (currentMonth == cars[i].lastCheckMonth) {
                // ���� ����� ��� ��, ��������� ������� � ����
                if (currentDay - cars[i].lastCheckDay <= 365) {
                    isRecent = true;
                }
            }
            else if (currentMonth - cars[i].lastCheckMonth < 12) {
                // ���� ��������� ��� � ���� ����, �� ����� ����������, ��������� ������� � �������
                isRecent = true;
            }
        }
        else if (currentYear - cars[i].lastCheckYear == 1) {
            // ���� ��������� ��� � ������� ����, ��������� ������� � ������� � ����
            if (currentMonth > cars[i].lastCheckMonth) {
                isRecent = true;
            }
            else if (currentMonth == cars[i].lastCheckMonth && currentDay >= cars[i].lastCheckDay) {
                isRecent = true;
            }
        }

        // ���� ��������� ��� ������ ���� �����, ���������� ���������� � ������ � ����
        if (isRecent) {
            file << cars[i].brand << " " << cars[i].model << " "
                << cars[i].lastCheckDay << " "
                << cars[i].lastCheckMonth << " "
                << cars[i].lastCheckYear << endl;
        }
    }

    file.close();  // ��������� ���� ����� ������

    // ��������� ���� ��� ������ � ������� ��������� �� �����
    ifstream inputFile("cars.txt");
    if (!inputFile.is_open()) {
        cout << "�� ������� ������� ���� ��� ������!" << endl;
        delete[] cars;
        return 1;
    }

    cout << "\n������, ��������� ��������� ����� ���� �����:" << endl;

    // ������ ������ �� ����� � ����� �� �����
    string brand, model;
    int lastCheckDay, lastCheckMonth, lastCheckYear;
    while (inputFile >> brand >> model >> lastCheckDay >> lastCheckMonth >> lastCheckYear) {
        cout << "�����: " << brand << ", ������: " << model
            << ", ���� ����������: " << lastCheckDay << "."
            << lastCheckMonth << "." << lastCheckYear << endl;
    }

    inputFile.close();  // ��������� ���� ����� ������

    // ����������� ������, ���������� ��� ������ �����
    delete[] cars;

    return 0;
}