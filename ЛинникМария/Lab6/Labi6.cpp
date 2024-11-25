#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	string line;
	cout << "Enter your line:" << endl;
	getline(cin, line);
	for (int i = 0; i < (size(line) - 1); i++) {
		if (line[i] == ' ')
			line[i] = '.';
	}
	cout << line;
	return 0;
}