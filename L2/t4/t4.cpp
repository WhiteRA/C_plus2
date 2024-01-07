
#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int fullAmount;
    int entrance;
    int flat;
    std::cout << "Приветствуем вас в калькуляторе квартплаты!\n";
    std::cout << "Введите сумму, указанную в квитанции: ";
    std::cin >> fullAmount;
    std::cout << "Сколько подъездов в вашем доме ";
    std::cin >> entrance;
    std::cout << "Сколько квартир в каждом подъезде ";
    std::cin >> flat;
    std::cout << "Каждая квартира должна платить по " << fullAmount / (entrance * flat) << " руб.";
}

