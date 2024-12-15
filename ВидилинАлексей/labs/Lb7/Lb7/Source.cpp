#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string lastName;
    string firstName;
    int groupNumber;
    string speciality;
    int age;
};

int main() {
    int n;

    cout << "Enter students number: ";
    cin >> n;
    cin.ignore();

    vector<Student> students(n);

    for (int i = 0; i < n; ++i) {
        cout << "Enter student data: " << i + 1 << ":" << endl;
        cout << "Surname: ";
        getline(cin, students[i].lastName);
        cout << "Name: ";
        getline(cin, students[i].firstName);
        cout << "Group number: ";
        cin >> students[i].groupNumber;
        cin.ignore();
        cout << "Speciality: ";
        getline(cin, students[i].speciality);
        cout << "Age: ";
        cin >> students[i].age;
        cin.ignore();
    }

    cout << "Students with F or I in surname:" << endl;
    for (Student student : students) {
        if (student.lastName[0] == 'I' || student.lastName[0] == 'F') {
            cout << "Surname: " << student.lastName << endl;
            cout << "Name: " << student.firstName << endl;
            cout << "Group: " << student.groupNumber << endl;
            cout << "Speciality: " << student.speciality << endl;
            cout << "Age: " << student.age << endl;
            cout << "--------------------" << endl;
        }
    }

    ofstream outputFile("students.txt");
    if (outputFile.is_open()) {
        for (Student student : students) {
            if (student.lastName[0] == 'I' || student.lastName[0] == 'F') {
                outputFile << student.lastName << "," << student.firstName << "," << student.groupNumber << ","
                    << student.speciality << "," << student.age << endl;
            }
        }
        outputFile.close();
        cout << "Success!" << endl;
    }
    else {
        cout << "Error" << endl;
    }

    return 0;
}