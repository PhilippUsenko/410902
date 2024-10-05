#include <iostream>
#include <cmath>

using namespace std;

double roundToFive(double value)
{
    return round(value * 100000) / 100000;
}

int main()
{
    int n;
    int i;
    float ans;

    while (true)
    {
        cin >> n;
        ans = 0;
        i = 1;
        while (i <= n)
        {
            if (i % 2 == 0)
            {
                ans += 1 / pow(2 * i, 2);
            }
            else
            {
                ans -= 1 / pow(2 * i, 2);
            }
            i++;
        }
        cout << roundToFive(ans) << "\n";
    }
}
