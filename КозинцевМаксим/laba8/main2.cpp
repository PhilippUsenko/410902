#include <iostream>
#include <string>;

using namespace std;


double max_of(double* numbers, int length);
int max_of(string str);


int main() {
	double *arr;
	int choice, leng, i;
	string str;
	char ignore;
	cout << "Choose what to enter:\n1 - for numbers\n2 - for words\n";
	cin >> choice;

	switch (choice) {		//Запрос на ввод строки или последовательности
	case 1:
		cout << "Enter length of number array: ";
		cin >> leng;
		arr = new double[leng];	
		cout << "Enter elements of array";
		for (i = 0; i < leng; i++) {	//Заполнение последовательности
			cin >> arr[i];
		}
		cout << "Max from number array is: " << max_of(arr, leng);
		delete[] arr;
		break;
	case 2:
		cout << "Enter your line: ";
		cin.ignore();
		getline(cin, str);		//Ввод строки
		cout << "\nMax words length is: " << max_of(str);
		break;
	}

	return 0;

}

int max_of(string str) {		//Нахождение длины самого длинного слова в строке
	int length = 0, max_length = 0;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] != ' ') {
			length++;
		}
		else if (str[i] == ' ' && length > max_length) {
			max_length = length;
			length = 0;
		}
		else {
			length = 0;
		}
	}

	if (length > max_length) {
		max_length = length;
	}

	return max_length;
}
double max_of(double* numbers, int length) {		//Нахождение максимального элемента последовательности
	double maxx = numbers[0];
	int i;
	for (i = 0; i < length; i++) {
		if (numbers[i] > maxx) {
			maxx = numbers[i];
		}
	}
	return maxx;

}

