//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//bool check_prime_number(unsigned long long number_for_check)
//{
//	for (long long i = 2; i <= (number_for_check / 2); i++)
//	{
//		if (number_for_check % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//unsigned long long check_perfect_number(int base_number)
//{
//	bool result_of_prime = check_prime_number(pow(2, base_number) - 1);
//	if (result_of_prime == true)
//		return(pow(2, base_number - 1) * (pow(2, base_number) - 1));
//	else
//		return 0;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	int user_base_perfect_number;
//	cout << "Введите совершенное число начиная с которого вы хотите начать нахождение новых совершенных чисел ";
//	cin >> user_base_perfect_number;
//	int max_base_number = { 1000 };
//	setlocale(LC_ALL, "RU");
//	for (int i = 2; i < max_base_number; i++)
//	{
//		if (check_perfect_number(i) != 0 and check_perfect_number(i) > user_base_perfect_number)
//			cout << "Число " << pow(2, i - 1) * (pow(2, i) - 1) << " совершенное" << endl;
//	}
//}

