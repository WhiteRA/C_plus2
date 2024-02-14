#include <iostream>
#include <string>

int main() {
    // Ввод общей длины колонтитула
    int totalLength;
    std::cout << "Введите общую длину колонтитула: ";
    std::cin >> totalLength;

    // Ввод количества восклицательных знаков
    int exclamationCount;
    std::cout << "Введите количество восклицательных знаков: ";
    std::cin >> exclamationCount;

    // Проверка ввода
    if (totalLength < exclamationCount || exclamationCount < 0) {
        std::cout << "Некорректный ввод." << std::endl;
        return 0;
    }

    // Вычисление длины текста
    int textLength = totalLength - exclamationCount;

    // Вычисление количества пробелов перед и после восклицательных знаков
    int leadingSpaces = (totalLength - exclamationCount) / 2;
    int trailingSpaces = totalLength - exclamationCount - leadingSpaces;

    // Формирование строки
    std::string header =
        std::string(leadingSpaces, ' ') +
        std::string(exclamationCount, '!') +
        std::string(trailingSpaces, ' ');

    // Вывод строки
    std::cout << header << std::endl;

    return 0;
}
