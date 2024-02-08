#include <iostream>
int main()
{

    std::string str1, str2;
    std::cout << "Принимает от пользователя текст ";
    std::getline(std::cin, str1);
    std::cout << "\nИщем там строку - ";
    std::getline(std::cin, str2);
    int countElements, countWord = 0;

    std::cout << "\n В строке " << str1 << " ищем " << str2;

    bool feach = false;

    for (int i = 0; i < str2.length(); i++)
    {
        for (int j = 0; j < str1.length(); j++)
        {
            if (str2[i] == str1[j])
            {
                countElements++;
                if (countElements == str2.length())
                {
                    countWord++;
                }
            }
        }
    }

    std::cout << "\n"
              << countWord;
}

int asda()
{

    std::string str, word;
    int count_words = 0;
    std::getline(std::cin, str);
    std::cin >> word;
    for (int i = 0; i < str.length(); ++i)
    {
        if (word[0] == str[i])
        {
            bool found_word = true;
            for (int j = 0; j < str.length() && j < word.length(); ++j)
            {
                if (word[j] == str[i + j])
                {
                    continue;
                }
                else
                    found_word = false;
            }
            if (found_word)
                count_words++;
        }
    }
    std::cout << count_words << "\n";
}
