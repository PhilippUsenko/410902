#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;



struct Student {
	string fio;
	string group;
	double sr_bal;
	double dohod;


	void print(ostream& os) const {
		os << fio << ", " << group << ", " << sr_bal << ", " << dohod << "\n";
	}
};

bool priorety(const Student& a, const Student& b) {
	const double mindohod = 626.0; // Минимальная зарплата
	bool adohod = a.dohod < 2 * mindohod;
	bool bdohod = b.dohod < 2 * mindohod;

	if (adohod && !bdohod) return true; // a имеет приоритет
	if (!adohod && bdohod) return false; // b имеет приоритет

	return a.sr_bal > b.sr_bal;
}

int main() {

	setlocale(LC_ALL, "Russian_Russia.1251");
	vector <Student> students;

	int num;
	cout << "Введите колличество студентов: ";
	cin >> num;
	cin.ignore();

	for (int i = 0; i < num; ++i) {
		Student student;
		cout << "Введите Ф.И.О. студента: ";
		getline(cin, student.fio);
		cout << "Введите группу: ";
		getline(cin, student.group);
		cout << "Введите средний балл: ";
		cin >> student.sr_bal;
		cout << "Введите доход на члена семьи: ";
		cin >> student.dohod;

		cin.ignore();
		students.push_back(student);
	}

	sort(students.begin(), students.end(), priorety);

	ofstream out("students.txt", ios::app);
	if (out.is_open()) {
		for (const auto& student : students) {
			student.print(out);
		}
	}

	out.close();

	return 0;
}