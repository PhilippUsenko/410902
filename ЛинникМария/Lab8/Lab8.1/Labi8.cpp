#include <iostream>
using namespace std;

int NOD(int, int);

int main() {
	setlocale(LC_ALL, "RU");
	int m, n;
	cout << "Введите числитель и знаменатель:\n";
	do {
		cin >> m >> n;
		if (m > n) {
			cout << "В обыкновенной дроби числитель должен быть меньше знаменателя.\nПопробуйте снова!\n";
		}
	}
	while (m > n);

	int m_new = m / NOD(m, n);
	int n_new = n / NOD(m, n);
	cout << m_new << "/" << n_new;
	return 0;

};

int NOD(int num, int denom) {
	int remain = num;
	while (remain = denom % num) {
		denom = num;
		num = remain;
	}
	return num;
}