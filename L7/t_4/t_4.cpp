#include <iostream>

int main() {
    // Ввод ширины и высоты рамки
    int width, height;
    std::cout << "Введите ширину рамки: ";
    std::cin >> width;
    std::cout << "Введите высоту рамки: ";
    std::cin >> height;

    // Проверка на достаточность размеров
    if (width < 2 || height < 2) {
        std::cout << "Рамка слишком мала." << std::endl;
        return 0;
    }

    // Верхняя горизонтальная линия
    for (int i = 0; i < width; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;

    // Внутренние строки (символы вертикальной линии и пробелы)
    for (int i = 1; i < height - 1; i++) {
        std::cout << "|";
        for (int j = 1; j < width - 1; j++) {
            std::cout << " ";
        }
        std::cout << "|" << std::endl;
    }

    // Нижняя горизонтальная линия
    for (int i = 0; i < width; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;

    return 0;
}
