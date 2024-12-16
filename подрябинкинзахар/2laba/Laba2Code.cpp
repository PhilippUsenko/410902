#include "iostream"
#include "cstdlib"
#include "cmath"
using namespace std;
int main()
{
	int num = 0;
	cout << "Programma proverki vyskazyvaniya. Vvedite celoe chislo: ";
	cin >> num;
	cout << "\n Chislo " << num <<" yavlyaetsya chetnym i dvuznachnym. \n";
	if (((num % 2) == 0) and (num > 9) and (num < 100))
	{
		cout << "Dannoe vyskazyvaniye istinno \n";
	}
	else 
	{
		cout << "Dannoe vyskazyvaniye lozno \n";
	}
	system("pause");
	return 0;
}
