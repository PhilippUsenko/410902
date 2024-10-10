#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	float min_value;
	int lines, columns;
	cout << "Введите количество строк в двумерном массиве: ";
	cin >> lines;
	cout << "Введите количество столбцов в двумерном массиве: ";
	cin >> columns;
	cout << "Введите значения массива: " << endl;
	float** my_list{ new float* [lines] {} };
	for (int i = 0; i < lines; i++)
	{
		my_list[i] = new float[columns] {};
		for (int j = 0; j < columns; j++)
		{
			cout << "Введите значение " << i + 1 << " строки с номером столбца " << j + 1 << endl;
			cin >> my_list[i][j];
		}
	}

	float **new_my_list{ new float* [lines] {} };
	for (int i = 0; i < lines; i++)
	{
		new_my_list[i] = new float[columns] {};
	}

	for (int i = 0; i < lines; i++)
	{
		min_value = my_list[i][0];
		for (int j = 0; j < columns; j++)
		{
			if (fabs(my_list[i][j]) < fabs(min_value))
			{
				min_value = my_list[i][j];
			}
		}
		for (int j = 0; j < columns; j++)
		{
			new_my_list[i][j] = my_list[i][j] / min_value;
		}
		min_value = 0;
	}
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << new_my_list[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < lines; i++) {
		delete[] my_list[i];
		delete[] new_my_list[i];
	}
	delete[] my_list;
	delete[] new_my_list;
}