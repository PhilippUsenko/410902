#include <stdio.h>
#include <stdlib.h>
#include <iostream>

struct product
{
    char name[20];
    int price;
};

int changePrice(char *filename, struct product *products, int n);
int save(char *filename, struct product *st, int n);
int load(char *filename);

int main(void)
{
    char *filename = (char *)"products.dat";
    struct product products[] = {{"Фрукты", 5}, {"Конфеты", 8}, {"Напитки", 10}, {"Вафли", 3}};
    int n = sizeof(products) / sizeof(products[0]);

    changePrice(filename, products, n);
    save(filename, products, n);
    load(filename);
    return 0;
}

int changePrice(char *filename, struct product *products, int n)
{
    for (unsigned i{}; i < n; i++)
    {
        std::cout << "Товар " << i + 1 << " - Название: " << products[i].name << ", Цена: " << products[i].price << "руб." << std::endl;
    }
    int selectedProduct;
    int newPrice;

    std::cout << "Цену какого товара вы хотите поменять? Напишите 0, если каждого: ";
    std::cin >> selectedProduct;

    if (selectedProduct == 0)
    {
        for (unsigned i{}; i < n; i++)
        {
            int newPrice;
            std::cout << "Введите новую цену для товара " << products[i].name << ": ";
            std::cin >> newPrice;
            products[i].price = newPrice; // Пример изменения значения
            std::cout << "Новая цена: " << products[i].price << std::endl;
        }
    }
    else
    {

        if (selectedProduct <= n)
        {
            std::cout << selectedProduct << products[selectedProduct-1].price;
            std::cout << "Введите новую цену для товара " << products[selectedProduct-1].name << ": ";
            std::cin >> newPrice;

            products[selectedProduct-1].price = newPrice; // Пример изменения значения
            std::cout << "Новая цена: " << products[selectedProduct-1].price << std::endl;
        }
        else
        {
            std::cout << "Нет такого товара\n";
        }
    }

    return 0;
}

// запись в файл массива структур
int save(char *filename, struct product *st, int n)
{
    char *c; // для записи отдельных символов
    // число записываемых байтов
    int size = n * sizeof(struct product);
    FILE *fp = fopen(filename, "wb");
    if (!fp)
    {
        printf("Error occured while opening file\n");
        return -1;
    }
    // записываем количество структур
    c = (char *)&n;
    for (int i = 0; i < sizeof(n); i++)
    {
        putc(*c++, fp);
    }

    // посимвольно записываем в файл все структуры
    c = (char *)st;
    for (int i = 0; i < size; i++)
    {
        putc(*c, fp);
        c++;
    }
    fclose(fp);
    return 0;
}

// загрузка из файла массива структур
int load(char *filename)
{
    char *c;             // для считывания отдельных символов
    int m = sizeof(int); // сколько надо считать для получения размера массива
    int n;               // количество структур в массиве

    FILE *fp = fopen(filename, "r");
    if (!fp)
    {
        printf("Error occured while opening file\n");
        return -1;
    }
    // выделяем память для хранения количества данных
    int *ptr_count = (int *)malloc(m);
    // считываем количество структур
    c = (char *)ptr_count;
    // пока не считаем m байт, сохраняем байт в выделенный блок для размера массива
    while (m > 0 && (*c = getc(fp)) != EOF)
    {
        c++;
        m--;
    }
    // получаем число элементов
    n = *ptr_count;
    free(ptr_count); // освобождаем память
    // выделяем память для считанного массива структур
    struct product *ptr = (product *)malloc(n * sizeof(struct product));
    // устанавливаем указатель на блок памяти, выделенный для массива структур
    c = (char *)ptr;
    // считываем посимвольно из файла
    while ((*c = getc(fp)) != EOF)
    {
        c++;
    }
    // перебор загруженных элементов и вывод на консоль
    printf("\nНайдено %d товар(а/ов):\n", n);

    for (int i = 0; i < n; i++)
    {
        std::cout << "Товар " << i + 1 << " - Название: " << ptr[i].name << ", Цена: " << ptr[i].price << "руб.\n";
    }

    free(ptr);
    fclose(fp);

    return 0;
}
