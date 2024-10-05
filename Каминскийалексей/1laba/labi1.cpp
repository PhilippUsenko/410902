#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x1, x2, x3, y1, y2, y3, per, plo, len1, len2, len3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    len1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    len2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    len3 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    if (len1 + len2 > len3 || len2 + len3 > len1 || len1 + len3 > len2)
    {
        per = len1 + len2 + len3;
        plo = sqrt(per / 2 * (per / 2 - len1) * (per / 2 - len2) * (per / 2 - len3));
    }
    else
    {
        cout << "Tреугольник не существует, введите другие данные!";
        exit(1);
    } 
    if (plo > 0)
    {
        cout << per << "  " << plo; 
    }
    else 
    {
        cout << "Tреугольник не существует, введите другие данные!";
        exit(1);
    }
}
