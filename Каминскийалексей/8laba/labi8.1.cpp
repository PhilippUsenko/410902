#include <iostream>

using namespace std;

int trans(double &mins)
{
    int hours = int(mins / 60);
    mins = mins - 60 * hours;
    return hours;
}

double trans(int hours, double mins)
{
    double answer = mins + hours * 60;
    return answer;
}

int main ()
{
    
    cout << "1 - перевод минут в минуты и часы. 0 - перевод часов и минут в минуты.\n";
    int choice;
    cin >> choice;
    
    if (choice == 1)
    {
        double mins;
        cout << "Введите количество минут.\n";
        cin >> mins;
        cout << "Количество часов:" << trans(mins) << ". Количество минут:" << mins;
    }
    if (choice == 0)
    {
        int hours;
        double mins;
        cout << "Введите количество часов, затем минут.\n";
        cin >> hours >> mins;
        cout << "Количество минут:" << trans(hours,mins);
    }
}