#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <iostream>

using namespace std;

struct plane {
	string plane_type;
	string plane_name;
};

int main() {
	ofstream file("text.txt");
	if (file.is_open()) {
		string user_type;
		int count{};
		plane planes[]{ {"jet","Boing 747"}, {"prop","Cesna 430"}, {"military", "F/A-18E"},
		{"jet", "Airobus A340"},{"prop","An-2"},{"military","SU-35"},
		{"jet","Suckhoi SuperJet 100"},{"military","Eurofighter Typhoon"}, {"military","J-10A"} };
		cout << "Input type of plane that you interested in (jet, prop, military): ";
		while (cin >> user_type) {
			if (user_type == "jet" || user_type == "prop" || user_type == "military") {
				break;
			}
			cout << "Enter correct plane type: ";
		}
		file << "Planes that mach your type: ";
		for (auto c : planes) {
			if (c.plane_type == user_type) {
				file << c.plane_name << ", ";
				count++;
			}
		}
		file << "was found " << count << " planes of " << user_type << " type.";
		file.close();
		cout << "All data was sucssesfully upload in the file."<<endl;
	}
	else {
		cout << "Error! Please try again later.";
	}
	return 0;
}