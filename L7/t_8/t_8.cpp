#include <iostream>

int main() {
    // Ввод высоты ёлочки
    int height;
    std::cout << "Введите высоту ёлочки: ";
    std::cin >> height;

    // Проверка ввода
    if (height <= 0) {
        std::cout << "Некорректный ввод." << std::endl;
        return 0;
    }

    // Рисование ёлочки
    for (int row = 0; row < height; row++) {
        // Вывод пробелов перед символами решётки
        for (int space = 0; space < height - row - 1; space++) {
            std::cout << " ";
        }

        // Вывод символов решётки
        for (int hash = 0; hash < (2 * row + 1); hash++) {
            std::cout << "#";
        }

        std::cout << std::endl;
    }

    return 0;
}