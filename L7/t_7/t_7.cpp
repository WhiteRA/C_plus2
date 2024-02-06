
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, x;
    int s = 1;
    int w = 10;
    do
    {
        std::cout << "Введите количество бактерий: ";
        std::cin >> n;
        std::cout << "\nВведите количество антибиотика: ";
        std::cin >> x;
    } while (n < 0 && x < 0);

    for (x; x > 0; x--)
    {
        s++;
      
        n *= 2;
        
        if (x < 10)
        {
            n -= x;
        }
        else {
            n = n - w;
        }
        w--;
        if (w == 0)
        {
            std::cout << "Действие антибиотика закончилось. ";
            break;
        }
        else if (n == 0)
        {
            std::cout << "Бактерии всё еще живы. ";
            break;
        }
        std::cout << "\nПосле " << s << " часа бактерий осталось " << n;
    }
}


