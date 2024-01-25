

#include <iostream>

int main() {
    int day;

    std::cout << "Введите номер дня: ";
    std::cin >> day;

    if ((day >= 1 && day <= 5) || (day >= 8 && day <= 10) || day % 7 == 6 || day % 7 == 0) {
        std::cout << "Выходной день" << std::endl;
    }
    else {
        std::cout << "Рабочий день" << std::endl;
    }

    return 0;
}
