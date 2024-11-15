#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
        cout << 1;
    else if (y == 0)
        cout << 2;
    else if (x == 0)
        cout << 3;
    else
        cout << 0;

    return 0;
}