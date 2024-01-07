#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int durationShift;
    int durationOrder;
    int durationCollection;
    std::cout << "Введите длительность смены в минутах : ";
    std::cin >> durationShift;
    std::cout << "Сколько минут клиент делает заказ ? ";
    std::cin >> durationOrder;
    std::cout << "Сколько минут кассир собирает заказ ? ";
    std::cin >> durationCollection;
    std::cout << "За смену длиной " << durationShift << " минут кассир успеет обслужить " << durationShift / (durationOrder + durationCollection) << " клиентов.";
}
