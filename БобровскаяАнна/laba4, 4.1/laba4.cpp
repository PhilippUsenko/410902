#include <iostream> 
using namespace std;

int main()
{
  int maxindex = 0;
  int array[5], maxnumber;

  for (int i = 0; i < 5; i++)
  {
    cin >> array[i];
  }

  maxnumber = array[0];

  for (int i = 1; i < 5; i++)
  {
    if (maxnumber < array[i])
     {
      maxnumber = array[i];
      maxindex = i;
     }
  }
 
  cout << "maxnumber: " << maxnumber << endl;
  cout << "maxindex: " << maxindex;

  return 0;
}