#include <iostream>;
using namespace std;
int main() {
	int n, b;
	cin >> n;
	float a[10][10];
	float s = 0; 
	while (n > 10) {
		cout << "vvedite menshe 10\n" ;
		cin >> n;
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
		cout << endl; cout << endl;
	system("pause");
	return 0;


}