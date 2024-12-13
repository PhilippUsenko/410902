#include <iostream>
#include <string>
using namespace std;
void first_part_of_laba8();
void second_part_of_laba8();
bool divisibility_by_3(int num1);
void logor(string log, int num);
void logor(int ten, int num);

int main() {
	int part;
	cout << "Which part do you wanna see(1 or 2): ";
	cin >> part;
	switch (part)
	{
	case 1:
		first_part_of_laba8();
		break;
	case 2:
		second_part_of_laba8();
		break;
	default:
		cout << "You cant mess ith the rules!!!";
	}
	
	return 0;
	system("pause");
}

void first_part_of_laba8()
{
	int num;
	cout << "Please enter a number: ";
	cin >> num;
	if (divisibility_by_3(num)) {
		cout << "number can be divided by 3 without remainder\n";
	}
	else {
		cout << "number cannot be divided by 3 without remainder" << "\n";
	}
}

void second_part_of_laba8()
{
	string log;
	int num; bool cons_alpha = false;
	cout << "Enter number for log: ";
	cin >> num;
	if (num > 0) {
		cout << "Do you wanna use log for (e or 10): ";
		cin >> log;
		for (char c : log) {
			if (isalpha(c))
				cons_alpha = true;
		}
		if (!cons_alpha && stoi(log)==10) {
			logor(stoi(log), num);
		}
		else if (log == "e") {
			logor(log, num);
		}
		else {
			cout << "Next time paly along the rules please!!";
		}
	}
	else {
		cout << "Please enter positive number next time!";
	}
}

bool divisibility_by_3(int num1) {
	string num = to_string(fabs(num1));
	unsigned k{};
	for (auto c : num) {
		if (c != '.'&& c != '0')
			k += c - '0';
	}
	if (k % 3 == 0)
		return true;
	else
		return false;
	}

void logor(string line,int num) {
	cout << "logarithm of " << num << " to base e " << " is: " << log(num) << "\n";
}

void logor(int ten, int num)
{
	cout << "logarithm of " << num << " to base 10 " << " is: " << log10(num) << "\n";
}