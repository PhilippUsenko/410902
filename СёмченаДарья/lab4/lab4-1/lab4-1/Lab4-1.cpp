#include <iostream>
using namespace std;
int main()
{
	int i;
	float b, c;
	float a[10];
	cout << "Vvedite 10 chisel v massiv: ";
	for (i=0; i<10; i++)
		cin >> a[i];
	for (i = 0; i < 9; i++)
	{
		b = a[i] * a[i + 1];
		if (b < 0) 
		{
			cout << "Pervaya para: " << a[i] << " " << a[i + 1] << endl;
			break;
		}
		if (i + 2 == 10) cout << "Net podhodyacsih par.";
	}
	return 0;
}