#include <iostream>

int encrypt_caesar(int key)
{
    std::string str1, encrypt_caesar;
    std::cout << "Укажите строку кодирования - \n";
    std::getline(std::cin, str1);

    for (int i = 0; i < str1.length(); i++)
    {
        encrypt_caesar += (char)((int)str1[i] + key);
    }
    std::cout << encrypt_caesar;
}

int decrypt_caesar(int key)
{
    std::string decrypt_caesar;
    std::cout << "Укажите строку декодирования - \n";
    std::getline(std::cin, decrypt_caesar);

    for (int i = 0; i < decrypt_caesar.length(); i++)
    {
        decrypt_caesar += (char)((int)decrypt_caesar[i] - key);
    }
    std::cout << decrypt_caesar;
}


int main()
{
    int key;
    std::cout << "Укажите ключ - \n";
    std::cin >> key;

    encrypt_caesar(key);

    decrypt_caesar(key);
}