
#include <iostream>
#include<fstream>>
#include< string>
using namespace std;
struct stydent {
	string name;
	int group;
	int grades[5];
} ;
int main(void) {
	int n;
	cin >> n;
	stydent* styd = new stydent[n];
	stydent buf;
	for (int k = 0; k <= n-1; k++) {
		cout << k+1<<" stydent" << endl;
		stydent tom;
		cin >> tom.name;
		cin >> tom.group;
		for (int i = 0; i <= 4; i++) {
			cin >> tom.grades[i];
		} 
		styd[k] = tom;
	}
	for (int i = 0; i < n; i++) {
		int min = i;
		for (int k = i + 1; k< n; k++) {
			if (styd[k].name < styd[min].name)
				min = k;
		}
		buf = styd[i];
		styd[i] = styd[min];
		styd[min] = buf;
	}
	ofstream fout;
				fout.open("student.txt", ofstream::app);
		if (!fout.is_open()) {
			cout << "oshibka";
		}
		else {
			for (int i = 0; i <= n-1; i++) {
				fout << styd[i].name << " " << styd[i].group;
				for (int k = 0; k <= 4; k++) {
					fout << styd[i].grades[k]<<" ";
				}
				fout << endl;
			}
			fout.close();
			delete[] styd;
	}	
	system("pause>nul");
	return 0;
}
