#include <iostream>
#include <string>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	string line;
	getline(cin, line);
	string result;
	
	int n = line.size();

	for (int i = 0; i < n; i++) {
		bool doblecate = false;

		for (int m = 0; m < n; m++) {
			if (i != m & line[m] == line[i]) {
				doblecate = true;
				break;
			}
		}

		if (doblecate == false)
			result.push_back(line[i]);
	}
	
	cout << result;
	return 0;
}