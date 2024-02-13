

#include <iostream>

int main()
{
    std::string str1;
    std::string secName[10];
    for (int i = 0; i < (sizeof(secName) / sizeof(*secName)); i++)
    {
        std::cout << "Ввод фамилии\n";
        std::cin >> str1;
        secName[i] = str1;
    }

    int n;
    std::cout << "Ввод номера крвартиры\n";
    std::cin >> n;
    std::cout << secName[n];
}

