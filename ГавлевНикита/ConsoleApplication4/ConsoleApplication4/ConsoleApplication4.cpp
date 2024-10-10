#include <iostream>

using namespace std;

//int main()
//{
//    setlocale(LC_ALL, "RU");
//    const int n = 10;
//    int k[n];
//    int newk [n];
//
//    cout << "Если хотите ввести свои значения в массив, введите 'input' или массив будет заполнен числами от 1 до " << n << ": ";
//    string answer;
//    cin >> answer;
//    if (answer == "input") {
//        cout << "Введите элементы массива: ";
//        for (int i = 0; i < n; i++) {
//            cin >> k[i];
//        }
//    }
//    else {
//        for (int i = 0; i < n; i++) {
//            k[i] = i + 1;
//        }
//    }
//    int oddindex = 0;
//    int evenindex = n / 2;
//
//    for (int i = 0; i < n; i++) {
//        if ((i + 1) % 2 == 1)
//        {
//            newk[oddindex] = k[i];
//            oddindex += 1;
//        }
//        else
//        {
//            newk[evenindex] = k[i];
//            evenindex += 1;
//        }
//}
//
//    cout << "Преобразованный массив: ";
//    for (int i = 0; i < n; i++) {
//        cout << newk[i] << " ";
//    }
//}

int main()
{
	setlocale(LC_ALL, "RU");
	const int lines = 4, columns = 4;

	float new_my_list[lines][columns];
	float max_value = 0;
	int my_list[lines][columns]
	{
	{ 1, 2, 3, -4 },
	{ 5, 6, 7, 8 },
	{ 9, 10, 11, 12 },
	{ 13, 14, 15, 16 },
	};
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (fabs(my_list[i][j]) > fabs(max_value))
			{
				max_value = my_list[i][j];
			}
		}
		for (int j = 0; j < columns; j++)
		{
			new_my_list[i][j] = my_list[i][j] / max_value;
		}
		max_value = 0;
	}
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << "Значение массива c номером строки " << i + 1 << " и номером столбца " << j + 1 << " поделенное на максимальное по модулю значение в строке это ";
			cout << new_my_list[i][j] << endl;
		}
	}
}