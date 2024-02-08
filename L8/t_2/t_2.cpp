

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    float hits, resist, damage;

    do
    {
        std::cout << "Колличество здоровья : ";
        std::cin >> hits;
        std::cout << "\nСопротивление : ";
        std::cin >> resist;
    } while (hits <= 0 && resist < 0);
    while (hits > 0)
    {
        std::cout << "\nПальнуть в орка на - ";
        std::cin >> damage;
        hits = hits - (resist * damage);
        if (hits <= 0)
        {
            std::cout << "\nОрк пал";
        }
        else
        {
            std::cout << "\nОсталось " << hits <<" хп";
        }
    }
}


