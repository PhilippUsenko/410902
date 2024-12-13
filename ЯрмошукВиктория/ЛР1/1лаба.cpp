#include <iostream>
#include <cmath>

using namespace std;

 int main() {
	float u,w ;
	cin >> u >> w;

	cout << "squares " << (u * u + w * w) / 2 << endl ;
	cout << "modules " << (fabs(u) + fabs(w)) / 2 << endl;
	system("pause>nul");
	return 0;
}
