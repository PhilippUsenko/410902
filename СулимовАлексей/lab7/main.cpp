#include <iostream>;
#include <locale>;
#include <stdio.h>;
#include <stdlib.h>; 
#include <fstream>;
#include <vector>;
using namespace std;
struct month {
	string name;
	};
struct season {
	string name;
	vector<month> months;
};
int main() {
	setlocale(LC_ALL, "RU");
	string seas;
	string fseason;
	string fmonth;
	string filetext;
	//сезоны
	season winter = { "winter", {{"December "}, {"January "}, {"February "}} };
	season spring = { "spring", {{"March "},  { "April " }, { "May " }} };
	season summer = { "summer",{{"June "}, {"July "}, {"August "}} };
	season autumn = { "autumn", { { "September " }, { "October " }, { "November " }} };
	vector <season> seasons = { winter, spring, summer, autumn };
	//
	ofstream file("fseasons.txt");
	cout << "Введите название сезона ( winter, spring, summer, autumn ) : \n";
	cin >> seas;
	//
	if (seas != "winter" && seas != "spring" && seas != "summer" && seas != "autumn")
		cout << "Неверное навзание сезона";
	for (const auto season : seasons)
	{
		if (seas == season.name)
		{
			fseason = seas + " : ";
			//
			cout << season.name << " : ";
			for (const auto month : season.months)
			{
				fmonth=fmonth + month.name;
				cout << month.name;
			}
			cout << endl;
		}
		else continue;
	}
	filetext = fseason + fmonth;
	file << filetext;
	file.close();
	return 0;
}
