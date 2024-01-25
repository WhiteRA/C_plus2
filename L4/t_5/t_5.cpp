
#include <iostream>

int main()
{
    int a;
    int b;
    std::cout << "Введите число первое :";
    std::cin >> a;
    std::cout << "Введите число второе :";
    std::cin >> b;
    if (a % b == 0)
    {
        std::cout << a << " делиться на " << b << "без остатка";
    }
    else
    {
        std::cout << a << " не делиться на " << b << "без остатка";
    }
}