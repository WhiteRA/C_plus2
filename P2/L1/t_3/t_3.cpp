#include <iostream>
#include <cassert>

// Функция для вычисления времени в пути
float travelTime(float distance, float speed)
{
    // Проверка ненулевой и положительной скорости с помощью assert
    assert(speed > 0);

    // Рассчитываем время в пути
    return distance / speed;
}

int main()
{
    float distance, speed;

    // Запрос ввода расстояния и скорости у пользователя
    std::cout << "Введите расстояние (км): ";
    std::cin >> distance;
    std::cout << "Введите скорость (км/ч): ";
    std::cin >> speed;

    // Вызов функции travelTime() с проверкой assert
    float time;
    time = travelTime(distance, speed);

    // Вывод времени в пути
    std::cout << "Время в пути: " << time << " часа" << std::endl;

    return 0;
}
