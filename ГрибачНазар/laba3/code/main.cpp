#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int selectedCode = 1;

    cout << endl
         << "Выбери игру(1 или 2):";

    cin >> selectedCode;

    if (selectedCode == 1)
    {
        double a;
        double sumNum = 0;
        int n = 1.0;
        double prevValue, curValue;
        cout << "Введи степень точности(<1):";
        cin >> a;

        if (a >= 1)
        {
            cout << "степень точности должна быть меньше единицы";
        }
        else
        {
            do
            {
                prevValue = curValue;
                curValue = (pow((-1.0), n) * (n / (pow((2.0 * n - 1.0), 2) * pow((2.0 * n + 1.0), 3))));
                sumNum += curValue;
                n++;
            } while (abs(curValue - prevValue) > a);
            cout << "Number:" << sumNum << endl;
        }
    }
    else
    {
        int a, b;
        int nums{};

        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;

        if (b > a)
        {

            cout << "Числа:";
            for (; a <= b; a++)
            {
                if (a % 3 == 0 && a % 4 == 0 && a % 5 == 0)
                {
                    nums = nums + 1;
                    cout << a << ";";
                }
            };
            nums == 0 && cout << "Нет чисел" << endl;
            cout << "Количество таких чисел:" << nums;
        }
        else
        {
            cout << "b should be more than a";
        }
    }

    return 0;
}
