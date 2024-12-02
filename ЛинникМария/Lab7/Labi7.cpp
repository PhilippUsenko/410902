#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Month {
	string name;
	string number;
	unsigned days;
};

int main() {

	Month year[12];
	year[0] = {"January", "1", 31};
	year[1] = { "February", "2", 28 }; 
	year[2] = { "March", "3", 31 };
	year[3] = { "April", "4", 30 };
	year[4] = { "May", "5", 31 };
	year[5] = { "June", "6", 30 };
	year[6] = { "July", "7", 31 };
	year[7] = { "Augast", "8", 31 };
	year[8] = { "September", "9", 30 };
	year[9] = { "October", "10", 31 };
	year[10] = { "November", "11", 30 };
	year[11] = { "December", "12", 31 };

	string vvod;
	cout << "Enter the name or the number of the month\n";
	cin >> vvod;

	for (int i = 0; i < 12; i++) {
		
		if (vvod == year[i].number || vvod == year[i].name) {
			cout << "The amount of days in " << year[i].name << " is " << year[i].days << ".";
			
			ofstream file;
			file.open("days_in_month.txt");
			
			if (!file.is_open())
				cout << "The file can't be opened!";
			else
				file << "The amount of days in " << year[i].name << " is " << year[i].days << ".";
			
			file.close();
		}
	}
	return 0;
}