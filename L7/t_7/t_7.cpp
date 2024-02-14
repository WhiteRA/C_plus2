#include <iostream>

int main() {
    // Ввод количества бактерий
    int bacteriaCount;
    std::cout << "Введите количество бактерий: ";
    std::cin >> bacteriaCount;

    // Ввод количества антибиотика
    int antibioticCount;
    std::cout << "Введите количество антибиотика: ";
    std::cin >> antibioticCount;

    // Проверка ввода
    if (bacteriaCount < 0 || antibioticCount < 0) {
        std::cout << "Некорректный ввод." << std::endl;
        return 0;
    }

    int hour = 0;
    while (bacteriaCount > 0 && antibioticCount > 0) {
        hour++;
        bacteriaCount *= 2;
        int bacteriaKilled = 10 + 10 - hour;
        if (bacteriaKilled > bacteriaCount) {
            bacteriaKilled = bacteriaCount;
        }
        bacteriaCount -= bacteriaKilled;
        antibioticCount--;

        std::cout << "После " << hour << " часа бактерий осталось " << bacteriaCount << std::endl;
    }

    return 0;
}
