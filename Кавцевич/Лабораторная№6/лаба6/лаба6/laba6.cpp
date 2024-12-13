#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
int main()
{
	string strk1, strk2, shortstrk, strlen1, strlen2;
	cin >> strk1 >> strk2;
	
	if (strk1.length() < strk2.length())
	{
		shortstrk = strk1;
	}
	else
	{
		shortstrk = strk2;
	}
	sort(shortstrk.begin(), shortstrk.end());
	cout << shortstrk;
	return 0;
}