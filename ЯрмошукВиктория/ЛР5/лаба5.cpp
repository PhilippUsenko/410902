#include <iostream>;
using namespace std;

int main() {
	int n,r, b;
	cin >> n;
	r = n;
	float** a = new float*[n];
	float s = 0;
	for (int i = 0; i < n; i++) {
		a[i] = new float[r];
	}
	for (int i = 0; i < n; ++i) {
		for (int k = 0; k < n; ++k) {
			cout << "[" << i + 1 << "]" << "[" << k + 1 << "]";
			cin >> a[i][k];
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cout << a[i][k] << " ";
		}cout << endl;
	}
	for (int i = 0; i < n; ++i)
	{
		s += a[i][i] + a[i][n - 1 - i];
	}
	cout << s << "  ";
	for (int i = 0; i < n; i++) {
		delete[] a[i];
		a[i] = nullptr;
	}
	delete[] a;
	a = nullptr;
	cout << endl << endl;
	cout << endl << endl;
	system("pause");
	return 0;


}

