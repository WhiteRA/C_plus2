
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    float centr;
    int a;
    int b;
    int c;
    int max;
    int min;
    std::cout << "Введите зарплату первого сотрудника:";
    std::cin >> max;
    std::cout << "Введите зарплату второго сотрудника:";
    std::cin >> b;
    std::cout << "Введите зарплату третьего сотрудника:";
    std::cin >> c;
    std::cout << "\n";
    min = max;
    if (max < b)
    {
        max = b;
    }
    else if (max < c) {
        max = c;
    }

    if (min > b)
    {
        max = b;
    }
    else if (max < c) {
        max = c;
    }
    std::cout << "Самоя большая ЗП  " << max << "\n";

    std::cout << "Самоя маленькая ЗП  " << min << "\n";

    a = max - min;
    std::cout << "Разница в ЗП " << a << "\n";

    centr = (max + b + c) / 3;
    std::cout <<"Средняя ЗП " << centr;

}