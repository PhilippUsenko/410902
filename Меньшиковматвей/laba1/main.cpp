#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float a, X_plus, X_minus, Y_plus, Y_minus, pi=3.14;

	cout << "Enter the value of angle 'a' in degrees: ";
    cin >> a;

	float a_radian = a * pi / 180;

	X_plus = tan(a_radian) / sqrt(1 + pow(tan(a_radian), 2));
	X_minus = tan(a_radian) / -sqrt(1 + pow(tan(a_radian), 2));
	Y_plus = 1 / sqrt(1 + pow(tan(a_radian), -2));
	Y_minus = 1 / -sqrt(1 + pow(tan(a_radian), -2));

    cout << "X (positive denominator)= " << X_plus << endl;
	cout << "X (negative denominator)= " << X_minus << endl;
	cout << "Y (positive denominator)= " << Y_plus << endl;
	cout << "Y (negative denominator)= " << Y_minus;

	return 0;
}
