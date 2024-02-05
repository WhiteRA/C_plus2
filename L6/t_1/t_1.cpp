

#include <iostream>

int main()
{	
    int i;
    int j;
    std::cout << "который час ?\n";
    do
    {

        std::cin >> i;
        std::cout << "Неверное время\n";
    } while (i < 0 || i > 24);

    while (j < i)
    {
        std::cout << "Ку-ку!\n";
        j++;
    }
}

