﻿// t_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b, c;
    std::cout << "Введите количество воды в мл: ";
    std::cin >> a;
    std::cout << "Введите количество молока в мл: ";
    std::cin >> b;
    std::cout << "Выберите напиток\n";
    
    do
    {
        std::cout << "1 - американо  \n";
        std::cout << "2 - латте  \n";
        std::cin >> c;
    } while ( c!=1 && c!=2);
    std::cout << "Отличный выбор \n";

    if (c == 1)
    {
        a -= 300;
        if (a < 0)
        {
            std::cout << "Не хватает воды \n";
        }
    }
    else {
        a -= 30;
        b -= 270;
        if (a<0)
        {
            std::cout << "Не хватает воды \n";
            a += 30;
        }
        if (b<0)
        {
            std::cout << "Не хватает молока \n";
            b += 270;
        }
    }


    std::cout << "Ваш напиток готов \n";
    std::cout << "***Отчёт*** \n";
    std::cout << "Ингредиентов осталось: \n";
    std::cout << "Вода: " << a << " мл \n";
    std::cout << "Молоко: " << b << " мл \n";


}


