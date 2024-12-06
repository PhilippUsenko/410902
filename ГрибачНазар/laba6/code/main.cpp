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
    std::wstring abc = L"аоуыэеёюяиАОУЫЭЕЁЮЯИ"; // Префикс L перед строкой указывает, что строка является широкой строкой

    std::wcout << L"Введите вашу строку: ";
    std::getline(std::wcin, yourString);

    // Счётчик для подсчёта количества гласных букв в строке
    int symbolsCount = 0;

    std::wcout << L"string: " << yourString << std::endl;

    // Цикл для перебора каждого символа в строке, введённой пользователем
    for (const wchar_t a : yourString)
    {
        // Вложенный цикл для сравнения текущего символа с каждым символом из строки русских символов(abc)
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
