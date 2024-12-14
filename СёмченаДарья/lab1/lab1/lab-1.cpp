#include<iostream>
#include <cmath>
using namespace std;
double Z1, Z2, a, b;
int main() {
	cout << "Znachenie ygla a v gradusax: a=";
	cin >> a;
	b = a * 3.14 / 180;
	Z1 = (1 - pow(tan(b / 2), 2)) / (1 + pow(tan(b / 2), 2));
	Z2 = 1 / pow((1 + pow(tan(b), 2)), 0.5);
	cout << "Resultat 1=" << Z1 << endl;
	cout << "Rezultat 2=" << Z2 << endl;
	cout << "Otvet: " << Z1;
	system("pause>nul");
	return 0;
}