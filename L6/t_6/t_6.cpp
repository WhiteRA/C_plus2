
#include <iostream>

int main()
{
    int X, Y, P;
    std::cout << "Введите начальную сумму вклада (X): ";
    std::cin >> X;
    std::cout << "Введите желаемую сумму вклада (Y): ";
    std::cin >> Y;
    std::cout << "Введите годовую процентную ставку (P): ";
    std::cin >> P;

    if (X >= Y)
    {
        std::cout << "Вклад уже больше или равен желаемой сумме." << std::endl;
        return 0;
    }

    int years = 0;
    while (X < Y)
    {
        X += std::floor(X * P / 100); // Учитываем проценты, отбрасывая дробную часть копеек
        years++;
    }

    std::cout << "Через " << years << " лет вклад достигнет значения " << Y << " рублей." << std::endl;

    return 0;

    // 7
    int M, N;
    std::cout << "Введите числа M и N для дроби M/N: ";
    std::cin >> M >> N;

    if (N == 0)
    {
        std::cout << "Ошибка: знаменатель не может быть равен нулю." << std::endl;
        return 1;
    }
}
