#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    int m = 5;

    int K[n][m] = {
        {1,2,3,4,5},
        {1,1,1,1,1},
        {},
        {5,5,5,5,5},
        {1,2,3,4,5},
        {},
    };

    int sum;

    for (int q = 0; q<n; q++) { 
        for ( int i = 0;i<m;i++) {
            sum += K[q][i];
        }
    }
    cout << "Сумма: " << sum;
  
   return 0;
}
