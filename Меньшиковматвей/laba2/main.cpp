#include <iostream>
using namespace std;
int main() {

	float x, y;

	cout << "Enter the coordinates of the point (x,y):" << endl;
	cin >> x;
	cin >> y;

	bool necessaryQuarters = (x > 0 && y > 0) || (x < 0 && y < 0);

	if (necessaryQuarters)
		cout << "Point (" << x << "," << y << ") is in the 1st or 3rd quarter";
	else
		cout << "Point (" << x << "," << y << ") is NOT in the 1st or 3rd quarter";
	return 0;
}
