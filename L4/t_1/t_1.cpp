
#include <iostream>

int main()
{
    int a;
    int b;
    std::cout << "Первое число :";
    std::cin >> a;
    std::cout << "Второе число :";
    std::cin >> b;
    if (a > b)
    {
        std::cout << "Наибольшее число " << a;
    }
    else if (b > a)
    {
        std::cout << "Наибольшее число " << b;
    }
    else
    {
        std::cout << "Они равны";
    }
}

