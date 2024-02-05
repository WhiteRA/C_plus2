

#include <iostream>

int main()
{
    int a, b, c;
    std::cout << "Введите количество воды в мл: ";
    std::cin >> a;
    std::cout << "Введите количество молока в мл: ";
    std::cin >> b;
    std::cout << "Выберите напиток (1 — американо, 2 — латте): \n";
    std::cin >> c;
    do
    {
        std::cout << "1 - американо  \n";
        std::cout << "2 - латте  \n";
        if (c != 1 || c != 2)
        {
            std::cout << "такого у нас нет \n";
        }

    } while (c != 1 || c != 2);
}
