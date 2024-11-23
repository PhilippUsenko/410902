//дл€ последовательности целых чисел находит количество нечетных элементов;
#include <iostream>
#include <string>
using namespace std;
int even = 0;
int sp = 0;
const int n = 10;
int srch(int b) {
		if (b % 2 != 0) {
			even++;
		}
	return even;
}

char srch(char m) {
	if (m == ' ') {
		sp++;
	}

	return sp;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int a[n];
	string s;
	cout << "¬ведите числовую последовательность:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		srch(a[i]);
	}
	cout << even << endl;

	cout << "¬ведите строку:" << endl;
	cin >> s;
	getline(cin, s);
	for (int i = 0; i < s.size() + 1; i++)
	{
		srch(s[i]);
	}
	cout << sp;

	return 0;
}

