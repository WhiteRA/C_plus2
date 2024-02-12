#include <iostream>



    std::string email;
    std::string asd = "!#$%&'*+-/=?^_{|}~`"; 
    bool accept = false;
    
int exceptionsList(std::string email)
{
    for (int i = 0; i < email.length(); i++)
    {
        for (int j = 0; j < asd.length(); j++)
        {
            if (email[i] == asd[i])
            {
                accept = false;
                break;
            }else {
            accept = true;
            }

        }
    }

   return 0;
    
}

int checkSymbol(std::string email){
    for (char c : email)
    {
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
              (c >= '0' && c <= '9') || c == '-' || c == '.' ||
              c == '@' || c == '_' || c == '!' || c == '#' ||
              c == '$' || c == '%' || c == '&' || c == '\'' ||
              c == '*' || c == '+' || c == '/' || c == '=' ||
              c == '?' || c == '^' || c == '{' || c == '}' ||
              c == '|' || c == '~'))
        {
            accept = false;
        }
        else {
            accept = true;
        }
    }
    return 0;
}

int checkLength(std::string email){

    std::string getName;
    std::string getDomain;
    int dog;

    if (email.length() < 1 ||  email.length() > 64)
    {
        accept = false;
    }else {
    accept = true;
    }

    for (int i = 0; i < email.length(); i++)
    {
        if (email[i]=='@')
        {
            dog = i;
            break;
        }
        getName += email[i];
    }

    for (int i = dog + 1; i < email.length(); i++)
    {
        if (email[i] == '.')
        {
             break;
        }
        getDomain += email[i];
    }

    return 0;
}

int main()
{
    /*
    std::cout << "Email-адрес\n";
    std::cin >> email;

    checkSymbol(email);
    exceptionsList(email);
    checkLength(email);

    //accept == false ? std::cout << "Допустимый адрес\n" : std::cout << "Неверный формат электронной почты.\n" ;
    */
    
    do
    {
        std::cout << "Email-адрес\n";
        std::cin >> email;
        checkSymbol(email);
        exceptionsList(email);
        checkLength(email);
        std::cout << "Неверный формат электронной почты.\n";
    } while(accept == true);
    std::cout << "Допустимый адрес\n";
}