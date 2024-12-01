#include <iostream>
#include <string>

using namespace std;

int main() {
	int countUpper = 0;
	int countLower = 0;
	string str;
	
	getline(cin, str);
	
	for (const char symbol : str) {
		if (isupper(symbol)) {
			countUpper++;
		} else if (islower(symbol)) {
			countLower++;
		}
	}

	cout << "Count low: " << countLower << endl
		<< "Count up: " << countUpper << endl;
}