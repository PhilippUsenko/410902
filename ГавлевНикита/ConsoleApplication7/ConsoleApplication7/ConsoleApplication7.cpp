#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    struct date
    {
        int year;
        int month;
    };
    date first, second, third;
    first.year = { 2000 };
    first.month = { 1 };
    second.year = { 2024 };
    second.month = { 11 };
    ofstream out;
    out.open("info.txt");

    cout << "Введите год: ";
    cin >> third.year;
    cout << "Введите месяц: ";
    cin >> third.month;
    if (second.year < first.year)
    {
        swap(second.year, first.year);
        swap(second.month, first.month);
    }
    if (second.year == first.year)
    {
        if (second.month < first.month)
        {
            swap(second.year, first.year);
            swap(second.month, first.month);
        }
    }
    if (third.month > 12 or third.month < 1)
    {
        if (out.is_open())
            out << "Введены некорректные данные";
        out.close();
    }
    else
    {
        if (third.year > first.year and third.year < second.year)
        {
            if (out.is_open())
                out << "Дата входит в заданный диапозон";
            out.close();
        }
        else if (third.year == first.year or third.year == second.year)
        {
            if (third.month > first.month and third.month < second.year)
            {
                if (out.is_open())
                    out << "Дата входит в заданный диапазон";
                out.close();
            }
            else
            {
                if (out.is_open())
                    out << "Год входит в диапазон, а месяц нет";
                out.close();
            }
        }
        else
        {
            if (out.is_open())
                out << "Дата не входит в заданный диапазон";
            out.close();
        }
    }
}