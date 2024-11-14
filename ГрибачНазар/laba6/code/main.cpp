#include <iostream>
#include <string>
#include <cstring>
#include <windows.h>



int main()
{
    // Установим кодировку CP1251 для корректной работы с русскими символами
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");

    std::wstring yourString;
    std::wstring abc = L"аоуыэеёюяиАОУЫЭЕЁЮЯИ";

    std::wcout << L"Введите вашу строку: ";
    std::getline(std::wcin, yourString);

    int symbolsCount = 0;

    std::wcout << L"string: " << yourString << std::endl;

    for (const wchar_t a : yourString)
    {
        for (const wchar_t b : abc)
        {
            if (a == b)
            {
                symbolsCount++;
            }
        }
    }

    std::wcout << L"Количество гласных: " << symbolsCount << std::endl;

    return 0;
}
