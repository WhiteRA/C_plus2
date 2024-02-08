#include <iostream>
#include <limits>

int cube()
{
    setlocale(LC_ALL, "Russian");
    int pCube, cCube, cSet;
    float pСhunk, x, y, z;

    std::cout << "X ";
    std::cin >> x;
    std::cout << "\nY ";
    std::cin >> y;
    std::cout << "\nZ ";
    std::cin >> z;

    pCube = 5 * 5 * 5;
    pСhunk = x * y * z;
    cCube = pСhunk / pCube;
    cSet = cCube / 27;
    std::cout << "Площадь одного кубика - " << pCube << "\nПлощадь бруска - " << pСhunk << "\nКолличество кубиков в бруске - " << cCube << "\nКолличество полный наборов - " << cSet;
}

int steam()
{
    int sizeFile, percentages, sizeFileMax;
    float speedNet;
    int i = 1;
    int downLoad = 0;

    std::cout << "Размер файла (Mb): ";
    std::cin >> sizeFile;
    std::cout << "\nСкорость скачки (Mb/s): ";
    std::cin >> speedNet;
    sizeFileMax = sizeFile;

    while (percentages < 100)
    {
        downLoad += speedNet;
        percentages = downLoad * 100 / sizeFileMax;
        std::cout << " Прошло " << i << " сек. Скачано " << downLoad << " из " << sizeFileMax << " МБ (" << percentages << "%).\n";
        i++;
        sizeFile -= speedNet;
        if (sizeFile < speedNet)
        {
            percentages = 100;
            std::cout << " Прошло " << i << " сек. Скачано " << sizeFileMax << " из " << sizeFileMax << " МБ (" << percentages << "%).\n";
            break;
        }
    }
}

int run()
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

int main()
{
}
