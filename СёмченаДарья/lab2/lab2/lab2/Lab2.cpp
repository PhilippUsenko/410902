#include <iostream>
using namespace std;
int main()
{
	int ch, b;
	cout << "Vvedite tseloe chislo: ";
	cin >> ch;
	cout << "Yavlyaetsya li chislo " << ch << " nechetnim trehznachnim?" << endl;
	b = ch;
	if ((ch / 100 > 10) || (ch / 100 <= 0)) cout << "Net, chislo ne trehznachnoe.";
	else
	{
		if (b % 2 == 0) cout << "Net, chislo chetnoe.";
		else cout << "Dannoe chislo yavlyaetsya nechetnim trehznachnim.";
	}
	return 0;
}