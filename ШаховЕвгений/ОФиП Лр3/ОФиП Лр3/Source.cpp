#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	char n;
	double s = 1;
	int a;


	while (!(cin >> a)) {

		cin.clear();
		cin.ignore();

		cout << "\nНедопустимое значение\n";
	}								 //проверка на ввод


	for (int i = 1; i <= a; i++) {
		s = s * (2.0 + 1.0 / i);
	}
	cout << "/n Число: " << s;

	return 0;
}
