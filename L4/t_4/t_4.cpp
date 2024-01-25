
#include <iostream>

int main()
{
    int level = 1;
    int exp = 0;
    std::cout << "Уровень " << level;
    std::cout << "Введите опыт :";
    std::cin >> exp;
    if (0 < exp <= 999)
    {
        std::cout << "Уровень "<< level << " опыт " << exp;
    }
    else if (1000 < exp <= 2499)
    {
        level++;
        std::cout << "Уровень " << level << " опыт " << exp;
    }
    else if (2500 < exp <= 5000)
    {
        level+2;
        std::cout << "Уровень " << level << " опыт " << exp;
    }
    else if (exp < 0)
    {
        std::cout << "Опыт не может быть отрицательным";
    }

}
