#include <iostream>
using namespace std;
int main() {
	int n, m;
	cout << "Enter amount of rows and columns\n";
	cin >> n >> m;
	float** array = new float*[n]{};
	for (unsigned i = 0; i < n; i++) {
		array[i] = new float[m];
	} 
	for (unsigned i = 0; i < n; i++) {
		for (unsigned j = 0; j < m; j++)
			cin >> array[i][j];
	}
	float count = 0;
	for (unsigned i = 0; i < n; i++) {
		for (unsigned j = 0; j < m; j += 2) {
			count += array[i][j];
		}
	}
	for (unsigned i = 0; i < n; i++)
		delete[] array[i];
	delete[] array;
	cout << "The sum of the elements in odd columns is " << count;
	return 0;
}