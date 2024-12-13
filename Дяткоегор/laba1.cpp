#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
	int a,b,alpha;
	double P,S,c;
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	cout << "Input angel (radian < 2): ";
	cin >> alpha;
	if (a > b && alpha < 2) {
		float h = (a - b) / 2 * tan(alpha);
		c = h / sin(alpha);
		P = a + b + c + h;
		S = (a + b) / 2 * h;
		cout << "Perimitr: " << int(P) << "\n";
		cout << "Ploshad`: " << int(S) << "\n";
	}
	system("pause>nul");
	return 1;
}