#include <iostream>

int main()
{
    int i = 123456;
    int j = 0;
    while (i > 0)
    {
        i /= 10;
        j++;
    }
    std::cout << j << "\n";
}


