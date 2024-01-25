
#include <iostream>

int main()
{
    int a;
    std::cout << "Введите день недели (от 1 до 7):\n";
    std::cin >> a;
    if (a == 4)
    {
        std::cout << "Меню сегодня (четверг):\n";
        std::cout << "Гороховый суп\n";
        std::cout << "Салат «Цезарь» с креветками\n";
        std::cout << "Куриная ножка с пюре\n";
        std::cout << "Морс\n";
    }
    else if (a == 2) {
        std::cout << "Меню сегодня (вторник):\n";
        std::cout << "Харчо\n";
        std::cout << "Салат «Оливье»\n";
        std::cout << "Баварские колбаски с капустой\n";
        std::cout << "Морс\n";

    }
    else if (a == 1 || a == 3 || a == 5) {
        std::cout << "Меню сегодня (обычный день):\n";
        std::cout << "Первое\n";
        std::cout << "Второе\n";
        std::cout << "Закуски\n";
        std::cout << "Запить\n";
    }
    else
    {
        std::cout << "Выходной\n";
    }


}


