

#include <iostream>

int main() {
	int productCost = 6400;
	int deliveryCost = 350;
	int discount = 700;

	int price = productCost + deliveryCost - discount;

	std::cout << "Стоимость товара: \n";
	std::cin >> productCost;
	std::cout << "Cтоимость доставки: \n";
	std::cin >> deliveryCost;
	std::cout << "Скидка: \n";
	std::cin >> discount;
	std::cout << "---------\n";
	std::cout << "Итого: " << price << "\n";

}
