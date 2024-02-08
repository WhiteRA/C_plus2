
#include <iostream>

int main()
{
    int n, x, s;
    do
    {
        std::cout << "Введите количество бактерий: ";
        std::cin >> n;
        std::cout << "\nВведите количество антибиотика: ";
        std::cin >> x;
    } while (n < 0 && x < 0);
    s = 10;
    for (int i = 1; i <= x; i++)
    {
        n = (n * 2) - s;

        std::cout << "\nПосле " << i << " часа бактерий осталось : " << n;
        s--;
    }
    if (x == 1)
    {
        std::cout << "Вакцина закончилась. Бактерий - " << n;
    }
}
