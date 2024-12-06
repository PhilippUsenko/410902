#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, count;
    float num, den, ans;
    while(true)
    {    
        ans = 0;
        cin >> n;
        for (int count = 1; count <= n; ++count)
        {
            if (count % 2 == 0)
            {
                num = -1;
            } 
            else 
            {
                num = 1;
            }
            den = count + (count + 1);
            ans = ans + (num / den);
        }
        cout << ans << "\n";
    }
    return 0;
}
