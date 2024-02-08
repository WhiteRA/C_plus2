

#include <iostream>

int main()
{
    int N;
    std::cout << "Введите номер N для нахождения N-го числа последовательности Фибоначчи: ";
    std::cin >> N;

    if (N < 0)
    {
        std::cout << "Неверный ввод. Пожалуйста, введите неотрицательное число." << std::endl;
        return 1;
    }

    int a = 0;
    int b = 1;

    if (N == 0)
        std::cout << "N-е число последовательности Фибоначчи: " << a << std::endl;
    else if (N == 1)
        std::cout << "N-е число последовательности Фибоначчи: " << b << std::endl;
    else
    {
        int i = 2;
        while (i <= N)
        {
            int next = a + b;
            a = b;
            b = next;
            i++;
        }
        std::cout << "N-е число последовательности Фибоначчи: " << b << std::endl;
    }

    return 0;


}

