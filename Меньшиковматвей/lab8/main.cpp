#include <iostream>

using namespace std;

int gcd(int num, int den) {
	while (den != 0) {
		int temp = den;
		den = num % den;
		num = temp;
	}
	return num;
}

 double numerator(double m, double n, double p, double q) {
	 int num = m * q - p * n;
	 int den = n * q;
	 int fracGCD = gcd(num, den);
	 int reduced_num = num / fracGCD;
	 return reduced_num;
}

 double denominator(double m, double n, double p, double q) {
	 int den = n * q;
	 int num = m * q - p * n;
	 int fracGCD = gcd(num, den);
	 int reduced_den = den / fracGCD;
	 return reduced_den;
}

 void output(int m, int n, int p, int q) {
	 int reduced_num = numerator(m, n, p, q);
	 int reduced_den = denominator(m, n, p, q);

	 if (reduced_den == 0) {
		 cout << m << '/' << n << " - " << p << '/' << q << " = " << "nothing";
	 }
	 else {
		 if (reduced_num == 0) {
			 cout << m << '/' << n << " - " << p << '/' << q << " = " << "0";
		 }
		 else {
			 cout << m << '/' << n << " - " << p << '/' << q << " = " << reduced_num << '/' << reduced_den;
		 }
	 }
 }

 int main() {
           double m, n, p, q;
	 
	 cout << "Enter numerator and denominator of 1st fraction: " << endl;
	 cin >> m >> n;

	 cout << "Enter numerator and denominator of 2nd fraction: " << endl;
	 cin >> p >> q;

	 output(m, n, p, q);

	 return 0;
 }
