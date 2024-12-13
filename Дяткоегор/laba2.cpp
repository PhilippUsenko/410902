#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main() {
	int Ax,Ay,Bx,By,Cx,Cy;
	float AC, AB;
	cout << "insert X for point A: "; cin >> Ax; cout << "insert Y for point A: "; cin >> Ay; cout << "\n";
	cout << "insert X for point B: "; cin >> Bx; cout << "insert Y for point B: "; cin >> By; cout << "\n";
	cout << "insert X for point C: "; cin >> Cx; cout << "insert Y for point C: "; cin >> Cy; cout << "\n";
	AB = pow(pow(Ax - Bx, 2) + pow(Ay - By, 2),0.5);
	AC = pow(pow(Ax - Cx, 2) + pow(Ay - Cy, 2),0.5);
	if (AB < AC) {
		cout << "point B closer to A, coordinates B: (" << Bx << ";" << By<< ")";
	}
	else if(AC < AB) {
		cout << "point C closer to A, coordinates C: (" << Cx << ";" << Cy<< ")";
	}
	else if (AC == AB) {
		cout << "point B and point C equaly close to point A, they coordinates: (" << Cx << ";" << Cy << ")";
	}
	system("pause>nul");
	return 0;
}