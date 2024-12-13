#include <iostream>;
using namespace std;

int main() {
	int n;
	cin >> n;

	float a[100];
	float s = 1;
	while (n > 100) {
		cout << "vvedite menshe 100\n";
		cin >> n;
	}
	for (int i = 0; i < n; ++i) {
		cout << "[" << i + 1 << "]";
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i){
		if ((i+1) % 2 == 0) {
			s = s * a[i];
		}
	}
	cout << s << "  " ;
	cout << endl << endl;
	system("pause");
	return 0;
	

}


