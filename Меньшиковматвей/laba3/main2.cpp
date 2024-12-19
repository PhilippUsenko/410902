#include <iostream>
#include <cmath>
using namespace std;
int main() {

	int n = 1;
	double sum = 0, An1 = 0, An2 = 0, epsilon = 0.01, pi = 3.14;

	do {
		An2 = An1;
		An1 = sin(pi / 2 + pi * n) / pow(n, 3);
		sum = sum + An1;
		n++;
	} while (abs(An1 - An2) > epsilon);

	cout << "Sum is " << sum;
	
return 0;
}
