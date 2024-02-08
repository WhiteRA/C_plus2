

#include <iostream>

int main()
{
    int M, N;
    std::cout << "Введите числа M и N для дроби M/N: ";
    std::cin >> M >> N;

    if (N == 0)
    {
        std::cout << "Ошибка: знаменатель не может быть равен нулю." << std::endl;
        return 1;
    }

    // Находим наибольший общий делитель числителя и знаменателя
    int a = std::abs(M);
    int b = std::abs(N);
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int divisor = a;

    // Преобразуем дробь к несократимому виду
    int numerator = M / divisor;
    int denominator = N / divisor;

    std::cout << "Дробь M/N в несократимом виде: " << numerator << "/" << denominator << std::endl;

    return 0;
}

