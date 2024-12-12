#include<iostream>
#include<cmath>

using namespace std;

int main() {        
	
	float a, b; 
	cout << "Enter the first diagonal: ";
	cin >> a;
	cout << "Enter the second diagonal: ";
	cin >> b;
	cout << "Square: " << (a * b) / 2 << endl;
	cout << "Perimetr: " << sqrt(pow(a,2) + pow(b,2)) * 2;
	return 0;
}
