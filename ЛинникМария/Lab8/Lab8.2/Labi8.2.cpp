#include <iostream>
#include <string>

using namespace std;

void function(int*, unsigned);
void function(string*, unsigned);
void input(int*, unsigned);
void input(string*, unsigned);

int main() {
	setlocale(LC_ALL, "RU");

	unsigned amount;
	cout << "������� ���������� �����:" << endl;
	cin >> amount;
	cout << "������� ������������������ �����:" << endl;
	int* array = new int[amount];
	input(array, amount);
	function(array, amount);
	
	delete[] array;
	
	cout << "\n������� ���������� ����:" << endl;
	cin >> amount;
	cout << "������� ������:" << endl;
	string* line = new string[amount];
	input(line, amount);
	function(line, amount);

	delete[] line;

	return 0;
};

void function(int *numbers, unsigned size) {
	unsigned counter = 0;
	
	for (unsigned i = 0; i < size; i++) {
		if (numbers[i] < 0) {
			counter++;
		}
	}
	cout << "���������� ������������� ����� ����� " << counter;
}

void input(int* numbers, unsigned size) {
	for (unsigned i = 0; i < size; i++) {
		cin >> numbers[i];
	}
}

void function(string* row, unsigned size) {
	unsigned counter = 0;
	for (unsigned i = 0; i < size; i++) {
		int len = row[i].length() -1;
			if (row[i][0] == row[i][len]) {
				counter++;
			}
	}
	cout << "���������� ����, ������� ���������� � ������������� � ���������� �����, " << counter;
}

void input(string* numbers, unsigned size) {
	for (unsigned i = 0; i < size; i++) {
		cin >> numbers[i];
	}
}