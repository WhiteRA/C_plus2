

#include <iostream>

int main()
{
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


