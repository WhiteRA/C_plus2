
#include <iostream>

int main()
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