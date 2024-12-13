
#include <iostream>
#include<string>
using namespace std;
int main()
{
	string a, b, m;
	int max = 0, count =0;
	b = "";
	getline(cin, a);
	for (const char c : a) {
		if (c != ' ') {
			b += c;
		}
		else {
			if (b.length() > max) {
				max = b.length();
				m = b;
			}
			b = "";
		}
	}
	if (b.length() > max) {
		max = b.length();
		m = b;
	}
	b = "";
	cout << endl << m;
	system("pause>nul");
	return 0;

}

