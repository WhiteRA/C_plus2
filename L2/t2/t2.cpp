#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int productСost = 40;
    int shippingСost = 10;
    int discount = 2;
    std::cout << "Калькулятор для расчёта полной стоимости товара\n";
    std::cout << productСost + shippingСost - discount;
}