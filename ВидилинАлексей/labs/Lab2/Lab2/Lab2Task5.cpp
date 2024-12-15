#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main() {
	float x, y, k;

	cout << "Enter x and y:" << endl;

	cin >> x >> y;	
	
	if (x > y) {
		cout << "X is bigger than Y" << endl;	

		k = x;
		x = y;
		y = k;

		cout << "Changed" << endl;
	}
	else {
		cout << "Y is bigger than X or equals" << endl;	
	}

	cout << "X = " << x << " Y = " << y << endl;

	system("pause>nul");
	return 0;
}