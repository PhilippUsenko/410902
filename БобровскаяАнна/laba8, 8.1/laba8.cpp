#include <iostream>
#include <cstdlib> 
using namespace std;

bool threesamenumbers(const int array[4])
{
	if(((array[0] == array[1] && array[0] == array[2]) || (array[0] == array[1] && array[0] == array[3]) || (array[0] == array[2] && array[0] == array[3]) || (array[1] == array[2] && array[1] == array[3])))
	{
	return true;
	}
	else
	{
    return false;
	}	
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, count;
	count = 0;
	cout << "введите количество машин: ";
	cin >> a;
	cout << "введите четырехзначные номера " << a << "-х машин: " << endl;

	int (*Array)[4] = new int[a][4];
	for ( int i = 0; i < a; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> Array[i][j];
		}
	}
	
	for (int i = 0; i < a; i++) {
		if (threesamenumbers(Array[i])) {
			count += 1;
		}
	}
	cout << "количество четырехзначных машин, содержащих 3 одинаковые цифры: " << count;

	delete[]Array;
	return 0;
}
