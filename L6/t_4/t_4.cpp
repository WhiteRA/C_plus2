

#include <iostream>

int main()
{
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
}


