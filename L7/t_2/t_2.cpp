#include <iostream>

int main() {
    int water, milk;
    int americanos = 0, lattes = 0;

    std::cout << "Введите количество воды в мл: ";
    std::cin >> water;

    std::cout << "Введите количество молока в мл: ";
    std::cin >> milk;

    while (true) {
        int choice;
        std::cout << "Выберите напиток (1 — американо, 2 — латте): ";
        std::cin >> choice;

        if (choice == 1) {
            if (water >= 300) {
                water -= 300;
                americanos++;
                std::cout << "Ваш напиток готов.\n";
            }
            else {
                std::cout << "Не хватает воды.\n";
            }
        }
        else if (choice == 2) {
            if (water >= 30 && milk >= 270) {
                water -= 30;
                milk -= 270;
                lattes++;
                std::cout << "Ваш напиток готов.\n";
            }
            else {
                std::cout << "Не хватает воды или молока.\n";
            }
        }
        else {
            std::cout << "Некорректный выбор. Попробуйте снова.\n";
            continue;
        }

        if (water < 30 || milk < 270) {
            break;
        }
    }

    std::cout << "***Отчёт***\n";
    std::cout << "Ингредиентов осталось:\n";
    std::cout << "Вода: " << water << " мл\n";
    std::cout << "Молоко: " << milk << " мл\n";
    std::cout << "Кружек американо приготовлено: " << americanos << "\n";
    std::cout << "Кружек латте приготовлено: " << lattes << "\n";

    return 0;
}

