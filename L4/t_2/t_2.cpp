
#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    std::cout << "Первое число :";
    std::cin >> a;
    std::cout << "Второе число :";
    std::cin >> b;
    std::cout << "Чему будет ровна их сумма ?\n";
    std::cin >> c;
    if (a + b == c)
    {
        std::cout << "Правильно ";
    }
    else
    {
        std::cout << "Неправильно ";
    }
}
