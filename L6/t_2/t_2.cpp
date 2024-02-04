#include <iostream>

int main()
{
	std::string name;
	std::cout << "Как зовут ?\n";
	std::cin >> name;

	while (name != "Слон")
	{
		std::cout << name << " купи слона!";
	}
}


