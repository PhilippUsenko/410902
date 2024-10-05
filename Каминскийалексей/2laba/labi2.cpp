#include <iostream>
using namespace std;
int main(){
    while(true)
    {
        int year;
        cin >> year;
        if (year % 100 != 0){
            cout << (int(year)/100)+1 << " ";
        }
        else {
            cout << (int(year)/100) << " ";
        }
    }
    return 0;
}
