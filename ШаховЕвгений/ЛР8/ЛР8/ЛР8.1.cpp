#include <iostream>
#include <complex>

using namespace std;


bool proverka(int n, bool prov, int i) {
	int proizv;
	proizv = i * (i + 1) * (i + 2);
	if (proizv == n) prov = true;
	else prov = false;
	return prov;
}

int sum(int a, int b) {
	return a + b;
}

complex<double> sum(complex<double> c, complex<double> d) {
	return c + d;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Первое задание" << endl;
	int n;
	cin >> n;
	bool prov = false;
	int i = 0;
	int proizv = 0;

	while (proverka(n, prov, i) == false && (i * (i + 1) * (i + 2)) < n) {
		i++;
	}
	if (proverka(n, prov, i) == true) {
		cout << "Можно" << endl;
	}
	else {
		cout << "Нельзя" <<endl;
	}

	cout << "Второе задание" << endl;
	int a;
	cin >> a;
	int b;
	cin >> b;

	cout << sum(a, b) << endl;

	complex<double> c(1.0, 2.5);
	complex<double> d(3.5, 1.5);

	complex<double> z;
	z = sum(c, d);
	cout << "z = " << z.real() << "+" << z.imag() <<"i"<< endl;

	return 0;
}
