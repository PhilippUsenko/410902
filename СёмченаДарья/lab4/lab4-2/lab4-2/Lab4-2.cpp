#include <iostream>
using namespace std;
int main()
{
	int i, j, k=0;
	float c;
	float a[5][5];

	cout << "Vvedite 25 chisel v massiv: ";
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			cin >> a[i][j];

	cout << "Kakoe chislo neobhodimo zamenit?"<<endl;
	cin >> c;

	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (a[i][j] == c)
			{
				a[i][j] = 0;
				k = k + 1;
			}

	if (k == 0) cout << "Takih elementov v massive net";
	else
	{
		cout << "Rezultat zameni:" << endl;
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++)
				cout << a[i][j]<<' ';
			cout << endl;
		}
	}
	return 0;
}