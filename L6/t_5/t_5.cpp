

#include <iostream>

int main()
{
    int i, a, c;
    i = 2;

    std::cout << "Номер последовательности: ";
    std::cin >> c;
    while (i <= c)
    {
        
        std::cout << " " << (i - 1) + (i - 2);
        i++;
    }

}

