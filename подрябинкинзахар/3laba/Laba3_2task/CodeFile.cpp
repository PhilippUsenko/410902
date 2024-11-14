#include<iostream> 
#include <conio.h> 
#include <stdlib.h> 
#include<iomanip> 

using namespace std;
int main() {
	int n = 0;
	double r = 0;
	double r_t = -1;
	while ((r - r_t) > 0.0001 or (r-r_t < -0.0001)) {
		r_t = r;
		r = r + pow( (- 1), n ) / (pow((n + 1), n));
		n++;
		cout << "\n Med Result: " << r;

	}
	cout << "\n Result: " << r;
	system("pause");
	return 0;
	

}