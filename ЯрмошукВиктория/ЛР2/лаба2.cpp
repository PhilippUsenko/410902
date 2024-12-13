#include <iostream>
using namespace std;

int main()
{
	float e, r, t, min;
	cin >> e >> r >> t;
	min = e;
	if (r < min)
		min = r;
	if(t < min);
	min = t;

	cout << "min " << min << endl;
	system("pause>nul");
	return 0;

}

