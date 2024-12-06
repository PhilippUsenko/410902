#include <fstream>
#include <iostream>
#include <string>
// #include <windows.h>

using namespace std;

const float TWICE_MIN_INCOME = 875.60;

struct studentInfo {
    string fullName;
    unsigned int groupNumber;
    float avgMark;
    float income;
};
void bubbleSort(studentInfo*& students, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].avgMark < students[j + 1].avgMark) {
                studentInfo temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main(){
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество студентов: ";
    cin >> n;

    studentInfo *student = new studentInfo[n];
    for (int i = 0; i < n; i++) {
        cout << "Введите данные " << i + 1 << "-го студента в таком порядке: ФИО, номер группы, средняя отметка, зарплата." << endl;
        cin.ignore();
        getline(cin, student[i].fullName);
        cin >> student[i].groupNumber;
        cin >> student[i].avgMark;
        if (student[i].avgMark >10 || student[i].avgMark < 0){
            cout << "Недопустимое значение среднего балла, выход из программы...";
            exit(-1);
        }
        cin >> student[i].income;
        if (student[i].income < TWICE_MIN_INCOME)
            student[i].avgMark = 11;
    }
    bubbleSort(student, n);
    cout << "Выберете способ вывода. 1 - файл. 0 - консоль.";
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        string pathToFile;
        cout << "Введите путь к файлу: ";
        cin >> pathToFile;
        ofstream fout(pathToFile);
        fout << "Список студентов на заселение." << endl;
        for (int i = 0; i < n; i++)
            fout << i + 1 << ") " << student[i].fullName << endl;
        cout << "Запись успешна.";
    }
    if (choice == 0)
    {
        cout << "Список студентов на заселение." << endl;
        for (int i = 0; i < n; i++)
            cout << i + 1 << ") " << student[i].fullName << endl;
    }
    delete[] student;
    return 0;
}