
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    float f, m, t;
    float a, s;

    do
    {
        std::cout << "\nТяга двигателя: ";
        std::cin >> f;
        std::cout << "\nМасса: ";
        std::cin >> m;
        std::cout << "\nВремя в движении: ";
        std::cin >> t;
    } while (f <= 0 && m <= 0 && t < 0);

    a = f / m;
    s = (a * (t * t)) / 2;
    std::cout << " Растояние " << s ;
}


