#include <iostream>
#include <cmath>
using namespace std;
constexpr auto PI = 3.14159265;

void first_part_laba3();
void second_part_laba3();

int main() {
	int n;
	cout << "wich part you would like to see?:  "; cin >> n;
	if (n == 1) {
		first_part_laba3();
	}
	else if (n == 2) {
		second_part_laba3();
	}
	else {
		cout << "You can`t play outside the rules!!!!";
	}
	system("pause");
	return 0;
}

void first_part_laba3() {
	int n;
	float x, cosinus;
	cout << "inpur n: "; cin >> n;
	cout << "input x (in degrees): "; cin >> x;
	x = x * PI / 180;
	cosinus = cos(fabs(x));
	double resault = 0.5 - cosinus;
	if (n < 2 && n > 0) {
		cout << "resault: " << resault;
	}
	if (n <= 0) {
		cout << "its not gonna work!";
	}
	else {
		for (int i = 2; i <= n; i++) {
			resault *= i / (i + 1) - pow(cosinus, i);
		}
		cout << "resault: " << resault<<endl;
	}
}

void second_part_laba3() {
	double resault = 0.0, a, n, old_value = 0.0, pres_value = 0.0;
	a = 0.001;
	n = 1;
	while (fabs(fabs(pres_value) - fabs(old_value)) > a || pres_value == 0.0) {
		old_value = pres_value;
		pres_value = pow(-1, n) * 1 / (2 * n);
		resault += pres_value;
		n++;
	}
	cout << "resault: " << resault << endl;
}