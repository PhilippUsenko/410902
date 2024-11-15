#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int arr[10];
	int k, i;
	k = 0;
	for (int i = 0; i < 10; i++) {
		cout << "[" << i+1 << "] : ";
		cin >> arr[i];
	}
	cout << "Введите номер элемента : ";
	cin >> i;
	i = i - 1;
	if (((arr[i] > 0) && (arr[i + 1] < 0)) || ((arr[i] < 0) && (arr[i + 1] > 0)))
		k++;
	cout << "Количество перемен знака при переходе от элемента с номером " << i + 1 << " к элементу с номером " << i + 2 << ":" << endl << k;
	return 0;
}
