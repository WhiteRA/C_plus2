
#include <iostream>

int main() {
	int a = 42;
	int b = 153;
	int c = 0;
	std::cout << "a: " << a << "\n";
	std::cout << "b: " << b << "\n";

	std::cout << "Меняем значения \n";
	c = a;
	a = b;
	b = c;

	std::cout << "a: " << a << "\n";
	std::cout << "b: " << b << "\n";
}
