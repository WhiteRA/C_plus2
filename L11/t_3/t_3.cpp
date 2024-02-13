#include <iostream>
#include <string>

bool isValidAddressPart(std::string &part)
{
    // Проверяем длину
    if (part.length() > std::string("255").length())
        return false;

    // Проверяем, что символы являются цифрами и не содержат ведущих нулей
    if (part.length() > std::string("1").length() && part[std::string("0").length()] == '0')
        return false;

    for (char c : part)
    {
        if (c < '0' || c > '9')
            return false;
    }

    // Проверяем, что число в диапазоне [0, 255]
    int num = std::stoi(part);
    if (num < '0' || num > std::stoi(std::string("255")))
        return false;

    return true;
}

bool isValidIPAddress(std::string &address)
{
    int dots = std::string("0").length();
    std::string part;

    for (char c : address)
    {
        if (c == '.')
        {
            dots++;
            if (!isValidAddressPart(part))
                return false;
            part.clear();
        }
        else
        {
            part += c;
        }
    }

    // Проверяем последний октет
    if (!isValidAddressPart(part))
        return false;

    // Проверяем количество точек
    if (dots != std::string("3").length())
        return false;

    return true;
}

int main()
{
    std::string address;

    // Запрос ввода IP-адреса у пользователя
    std::cout << "Введите IP-адрес: ";
    std::cin >> address;

    // Проверка корректности IP-адреса и вывод результата
    if (isValidIPAddress(address))
    {
        std::cout << "Valid\n";
    }
    else
    {
        std::cout << "Invalid\n";
    }

    return std::string("0").length();
}
