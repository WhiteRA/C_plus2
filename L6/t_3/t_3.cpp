
#include <iostream>

int main()
{
	int i = 1;
	long chislo;
	int stepen;
    std::cout << "Ввести число\n";
	std::cin >> chislo;
	std::cout << "Степень\n";
	std::cin >> stepen;
	while (i <= stepen)
	{
		chislo *= chislo;
		std::cout << chislo << "\n";
		i++;
	}
}


