#include <iostream>

int main()
{

        // 1
        int i;
        int j;
        std::cout << "который час ?\n";
        do
        {

            std::cin >> i;
            std::cout << "Неверное время\n";
        } while (i < 0 || i > 24);

        while (j < i)
        {
            std::cout << "Ку-ку!\n";
            j++;
        }

    // 2
    int i = 123456;
    int j = 0;
    while (i > 0)
    {
        i /= 10;
        j++;
    }
    std::cout << j << "\n";


    // 3
    std::string a;
    int q;
    std::cout << "имя должника\n";
    std::cin >> a;
    std::cout << "сумма долга\n";
    std::cin >> q;
    while (q > 0)
    {
        std::cout << "верни деньги\n";
        std::cout << "сколько гасишь ?\n";
        int b;
        std::cin >> b;
        q -= b;
        if (q < b)
        {
            std::cout << 0 - q << " излишек\n";
        }
    }


    // 4
    char choice;

    do
    {
        int ticketNumber;
        int digit1, digit2, digit3, digit4, digit5, digit6;

        std::cout << "Введите номер билета (6 цифр): ";
        std::cin >> ticketNumber;

        // Разбиваем номер билета на отдельные цифры
        digit1 = ticketNumber / 100000;
        digit2 = (ticketNumber / 10000) % 10;
        digit3 = (ticketNumber / 1000) % 10;
        digit4 = (ticketNumber / 100) % 10;
        digit5 = (ticketNumber / 10) % 10;
        digit6 = ticketNumber % 10;

        // Проверяем условие "счастливости" билета
        if ((digit1 + digit2 + digit3) == (digit4 + digit5 + digit6))
        {
            std::cout << "Это счастливый билет!" << std::endl;
        }
        else
        {
            std::cout << "Это не счастливый билет." << std::endl;
        }

        std::cout << "Хотите проверить еще один билет? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;


    // 5
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


    // 6
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

    // 8
    int number;
    std::cout << "Загадайте число от 0 до 63 и введите его: ";
    std::cin >> number;

    if (number < 0 || number > 63)
    {
        std::cout << "Число должно быть в диапазоне от 0 до 63." << std::endl;
        return 1;
    }

    int guessedNumber = 0;
    for (int i = 0; i < 6; ++i)
    {
        int guess = guessedNumber | (1 << i);
        std::cout << "Ваше число больше " << guess << "? (да/нет): ";
        std::string answer;
        std::cin >> answer;
        if (answer == "да")
        {
            guessedNumber = guess;
        }
    }

    int guess = guessedNumber | (1 << 6);
    std::cout << "Ваше число " << (guess == number ? guess : guessedNumber) << "." << std::endl;

    return 0;

}