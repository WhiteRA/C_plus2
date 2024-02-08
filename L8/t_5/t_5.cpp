

#include <iostream>

int main()
{
    int distance, count = 6;
    double speed, averageSpeed, totalSeconds = 0;

    std::cout << "Привет, Сэм! Сколько километров ты сегодня пробежал? ";
    std::cin >> distance;
    while (std::cin.fail())
    {
        std::cout << "Неверный ввод. Пожалуйста, введите номер: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> distance;
    }

    for (int i = 1; i <= count; ++i)
    {
        std::cout << "Какой у тебя был темп на километре " << i << "? ";
        std::cin >> speed;
        while (std::cin.fail())
        {
            std::cout << "Неверный ввод. Пожалуйста, введите номер: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin >> speed;
        }
        totalSeconds += speed;
    }

    averageSpeed = totalSeconds / distance;
    int minutes = static_cast<int>(averageSpeed / 60);
    int seconds = static_cast<int>(averageSpeed - (minutes * 60));

    std::cout << "Средняя скорость тренировки составляет " << minutes << " минута(ы) и " << seconds << " second(s)." << std::endl;

    return 0;
}
