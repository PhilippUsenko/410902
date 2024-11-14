#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>


using namespace std;


class Stud{
public: Stud(string fio, int group, double sr_bal, double dohod) : fio{ fio }, group{ group }, sr_bal{ sr_bal }, dohod{ dohod }{}

	  void save() {
		  cin >> fio >> group >> sr_bal >> dohod;
		  ofstream out;
		  out.open("students.txt");
		  if (out.is_open()) {
			  out << fio << ""
		  }
	  }
	
};

int main() {

	setlocale(LC_ALL, "Russian");





	


	return 0;
}