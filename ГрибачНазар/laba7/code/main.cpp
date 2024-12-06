#include <iostream>
#include <fstream>
#include <string>

// Структура для описания товара
struct product
{
    std::string name; // Название товара
    int price;        // Цена товара
};

int main()
{
    // Имя файла, в который будут записаны данные о товарах
    char *filename = (char *)"products.txt";

    // массив товаров
    struct product products[] = {{"Бананы", 5}, {"Конфеты", 8}, {"Сок", 5}, {"Вафли", 3}};
    int n = sizeof(products) / sizeof(products[0]); // Количество товаров в массиве

    // Вывод текущих товаров и их цен
    for (unsigned i{}; i < n; i++)
    {
        std::cout << "Товар " << i + 1 << " - Название: " << products[i].name << ", Цена: " << products[i].price << "руб.\n";
    }
    int selectedProduct; // Индекс выбранного товара для изменения цены
    int newPrice;        // Новая цена

    std::cout << "Цену какого товара вы хотите поменять? Введите 0, если каждого: ";
    std::cin >> selectedProduct;

    if (selectedProduct == 0) // Если выбрано изменение цены всех товаров
    {
        // перебор каждого товара
        for (unsigned i{}; i < n; i++)
        {
            int newPrice;
            std::cout << "Введите новую цену для товара " << products[i].name << ": ";
            std::cin >> newPrice;
            products[i].price = newPrice; // Обновление цены для каждого товара
            std::cout << "Новая цена: " << products[i].price << std::endl;
        }
    }
    else
    {
        if (selectedProduct <= n) // проверка на существование выбранного товара
        {
            std::cout << "Введите новую цену для товара " << products[selectedProduct - 1].name << ": ";
            std::cin >> newPrice;

            products[selectedProduct - 1].price = newPrice; // Обновление цены выбранного товара
            std::cout << "Новая цена: " << products[selectedProduct - 1].price << "\n";
        }
        else
        {
            std::cout << "Нет такого товара\n";
        }
    }

    std::ofstream outFile(filename); // Открытие файла для записи

    // Проверка успешности открытия файла(ошибка -> завершение функции)
    if (!outFile)
    {
        std::cout << "Ошибка открытия файла для записи!" << std::endl;
        return 1;
    }

    // Запись данных о каждом товаре в файл
    for (int i = 0; i < n; i++)
    {
        outFile << "Товар " << i + 1 << " - Название: " << products[i].name << ", Цена: " << products[i].price << "руб.\n";
        std::cout << "Товар " << i + 1 << " - Название: " << products[i].name << ", Цена: " << products[i].price << "руб.\n";
    }
    outFile.close();
    return 0;
}
