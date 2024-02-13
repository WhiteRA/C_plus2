

#include <iostream>

int main()
{
    double asd[10] = {};
    for (int i = 0; i < sizeof(asd) / sizeof(*asd); i++)
    {
        std::cout << "Введите число: ";
        std::cin >> asd[i];
    }
    double p;
    for (int i = 0; i < sizeof(asd) / sizeof(*asd); i++)
    {
        for (int j = 0; j < sizeof(asd) / sizeof(*asd); j++)
        {
            if (asd[j] < asd[j + 1])
            {
                p = asd[j];
                asd[j] = asd[j + 1];
                asd[j + 1] = p;
            }
        }
    }
    std::cout << "\nМассив после сортировки:\n";
    for (int k = 0; k < sizeof(asd) / sizeof(*asd); k++)
    {
        std::cout << asd[k] << ' ';
    }
    std::cout << '\n';
}

