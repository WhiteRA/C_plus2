#include <iostream>
#include <string>

int main() {
    // Размеры рисунка
    int width = 21;
    int height = 11;

    // Определение центральной точки
    int centerX = width / 2;
    int centerY = height / 2;

    // Рисование рисунка
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            if (row == centerY && col == centerX) {
                std::cout << "+";
            }
            else if (row == centerY) {
                std::cout << "-";
            }
            else if (col == centerX) {
                std::cout << "|";
            }
            else if (row == 0 && col == centerX) {
                std::cout << "^";
            }
            else if (row == centerY && col == width - 1) {
                std::cout << ">";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}