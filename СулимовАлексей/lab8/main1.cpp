#include <iostream>
#include <locale>
#include <cmath>
using namespace std;
//функция i(i+1)(i+2)
bool func(int n) {
	for (int i = 1; i <= sqrt(n); i++) {
		if (i * (i + 1) * (i + 2) == n) {
			cout << "Число " << n << " можно представить, как " << i << " * " << i + 1 << " * " << i + 2 << endl;
			return true;
		}
		else continue;
	}
	 return false;
}
int main() {
	setlocale(LC_ALL, "RU");
	int n;
	cout << "Введите натуральное число: ";
	cin >> n;
	if (!func(n))
		cout << "Нет, число " << n << " нельзя представить, как произведение трех последовательных натуральных чисел";
	return 0;
}
