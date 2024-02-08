#include <iostream>

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

int main()
{
}
