#include <iostream>

#include <fstream>

using namespace std;

struct Students {
	string name;
	string surname;
	float GPA;
};

int main() {
	int numberOfStudents;
	float sumOfGPA = 0, averageGPA;
	
	cout << "Enter the number of students: ";
	cin >> numberOfStudents;
	cout << endl;
    
	Students* ptrnumberOfStudents = new Students[numberOfStudents];

	for (int i = 0; i < numberOfStudents; i++) {
		cout << "Enter name: ";
		cin >> ptrnumberOfStudents[i].name;

		cout << "           Enter surname: ";
		cin >> ptrnumberOfStudents[i].surname;

		cout << "                         Enter GPA: ";
		cin >> ptrnumberOfStudents[i].GPA;
		cout << endl << endl;

	sumOfGPA += ptrnumberOfStudents[i].GPA;
	}
	
	averageGPA = sumOfGPA / numberOfStudents;

	ofstream file("High student's GPA.txt");

	if (file.is_open()) {
		for (int i = 0; i < numberOfStudents; i++) {
			if (ptrnumberOfStudents[i].GPA >= averageGPA) {
				file << "Name: ";
				file << ptrnumberOfStudents[i].name << endl;

				file << "     Surname: ";
				file << ptrnumberOfStudents[i].surname << endl;

				file << "             GPA: ";
				file << ptrnumberOfStudents[i].GPA << endl << endl;
			}
		}
		cout << "File is successfully filled :)";
		file.close();
	}
	delete[] ptrnumberOfStudents;
	return 0;
}
