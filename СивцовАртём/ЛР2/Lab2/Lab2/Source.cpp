//Проверить истинность высказывания: "Среди трех данных целых чисел есть хотя бы одна пара совпадающих". 
#include <iostream>;

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	cout << "Введите a:";
	cin >> a;
	cout << "Введите b:";
	cin >> b;
	cout << "Введите c:";
	cin >> c;
	if (a == b or b == c or a == c) 
		cout << "Среди данных чисел есть пара совпадающих";

	else
		cout << "Среди данных чисел нет пары совпадающих";
	return 0;
}