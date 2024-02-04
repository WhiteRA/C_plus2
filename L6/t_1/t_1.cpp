

#include <iostream>

int main()
{	
	setlocale(LC_ALL, "Russian");

	std::string message;
    std::cout << "Введите команду\n";
	std::cin >> message;
	while (message != "Да")
	{
		std::cout << "Не верно\n";
		std::cin >> message;
	}
	std::cout << "Хорошо\n";
}

