
#include <iostream>

int main()
{
    std::string a;
    int q;
    std::cout << "имя должника\n";
    std::cin >> a;
    std::cout << "сумма долга\n";
    std::cin >> q;
    while (q > 0)
    {
        std::cout << "верни деньги\n";
        std::cout << "сколько гасишь ?\n";
        int b;
        std::cin >> b;
        q -= b;
        if (q < b)
        {
            std::cout << 0 - q << " излишек\n";
        }
    }
}


