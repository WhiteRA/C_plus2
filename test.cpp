#include <iostream>

int mars()
{
    int x = 6;
    int y = 10;
    char sys;
    std::cout << "В какую сторону оператор хочет направить робота\n";
    do
    {
        std::cout << "север (клавиша W), юг (клавиша S), запад (клавиша A) или восток (клавиша D)\n";
        std::cin >> sys;
    } while (sys != 'w' && sys != 's' && sys != 'a' && sys != 'd');

    while (0 <= x <= 15 && 0 <= y <= 20)
    {

        if (sys == 'w')
        {
            y += 1;
        }
        else if (sys == 's')
        {
            y -= 1;
        }
        else if (sys == 'a')
        {
            x -= 1;
        }
        else if (sys == 'd')
        {
            x += 1;
        }

        if (x < 0)
        {
            std::cout << "Там стена \n";
            x = 0;
        }
        else if (x > 15)
        {
            std::cout << "Там стена \n";
            x = 15;
        }
        else if (y < 0)
        {
            std::cout << "Там стена \n";
            y = 0;
        }
        else if (y > 20)
        {
            std::cout << "Там стена \n";
            y = 20;
        }

        std::cout << "Текущее положение: (" << x << ", " << y << ").\n";

        do
        {
            std::cout << "Куда дальше ?\n";
            std::cout << "север (клавиша W), юг (клавиша S), запад (клавиша A) или восток (клавиша D)\n";
            std::cout << "Выйти из программы - y/n ?\n";
            std::cin >> sys;
            if (sys == 'y')
            {
                break;
            }

        } while (sys != 'w' && sys != 's' && sys != 'a' && sys != 'd');
        if (sys == 'y')
        {
            break;
        }
    }
    std::cout << "Робот остался в : (" << x << ", " << y << ").\n";
}

int ramka()
{
    int width, height;
    std::cout << "Введите ширину рамки: ";
    std::cin >> width;
    std::cout << "Введите высоту рамки: ";
    std::cin >> height;

    for (int i = 0; i < width; ++i)
        std::cout << "-";
    std::cout << std::endl;

    for (int i = 0; i < height - 2; ++i)
    {
        std::cout << "|";
        for (int j = 0; j < width - 2; ++j)
            std::cout << " ";
        std::cout << "|" << std::endl;
    }

    for (int i = 0; i < width; ++i)
        std::cout << "-";
    std::cout << std::endl;
}

int osi()
{
    int size;
    std::cout << "Введите размер осей: ";
    std::cin >> size;

    std::cout << " ";
    for (int i = 0; i < size; ++i)
        std::cout << "-";
    std::cout << ">" << std::endl;

    for (int i = 0; i < size / 2; ++i)
    {
        for (int j = 0; j < size + 1; ++j)
            std::cout << " ";
        std::cout << "|" << std::endl;
    }

    std::cout << "<";
    for (int i = 0; i < size; ++i)
        std::cout << "-";
    std::cout << "+" << std::endl;

    for (int i = 0; i < size / 2; ++i)
    {
        for (int j = 0; j < size + 1; ++j)
            std::cout << " ";
        std::cout << "|" << std::endl;
    }
    std::cout << " ";
    for (int i = 0; i < size; ++i)
        std::cout << "-";
    std::cout << "^" << std::endl;
}

int elka()
{
    int height;
    std::cout << "Введите высоту треугольника: ";
    std::cin >> height;

    if (height <= 0)
    {
        std::cout << "Ошибка: высота треугольника должна быть положительным числом." << std::endl;
        return 1;
    }

    for (int i = 1; i <= height; ++i)
    {

        for (int j = 1; j <= height - i; ++j)
            std::cout << " ";

        for (int j = 1; j <= 2 * i - 1; ++j)
            std::cout << "#";

        std::cout << std::endl;
    }
}

int main()
{
    int n, x;
    int s = 10;
    do
    {
        std::cout << "Введите количество бактерий: ";
        std::cin >> n;
        std::cout << "\nВведите количество антибиотика: ";
        std::cin >> x;
    } while (n < 0 && x < 0);

    for (int i = 0; i <= 24; i++)
    {
        n *= 2;
        n = n-(s-i);
        if (s == 0)
        {
            std::cout << "Действие антибиотика закончилось ";
            break;
        }
        else if (n == 0)
        {
            std::cout << "Бактерии всё еще живы ";
            break;
        }
        std::cout << "После" << i << "часа бактерий осталось" << n;
    }
}
