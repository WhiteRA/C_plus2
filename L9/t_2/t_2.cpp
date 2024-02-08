
#include <iostream>
#include <string>

int main() {
    std::string str1, str2;
    std::cout << "Принимает от пользователя текст ";
    std::getline(std::cin, str1);
    std::cout << "\nИщем там строку - ";
    std::getline(std::cin, str2);
    int countWord = 0;

    std::cout << "\n В строке " << str1 << " ищем " << str2;

    for (int i = 0; i < str1.length(); i++)
    {
        bool feach = true;
        for (int j = 0; j < str2.length(); j++)
        {
            if (str2[j] == str1[i + j]) {
                continue;
            }
            else
                feach = false;
        }
        if (feach) {
            countWord++;
        }
    }

    std::cout << "\n " << countWord;
}
