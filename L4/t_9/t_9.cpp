
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int AmountofIncome;
	int taxrate = 0;

	cout << "Введите размер дохода: ";
	cin >> AmountofIncome;

	if (AmountofIncome > 50000) {
		taxrate += (AmountofIncome - 50000) * 30 / 100;
		AmountofIncome = 50000;
	}
	if (AmountofIncome > 10000) {
		taxrate += (AmountofIncome - 10000) * 20 / 100;
		AmountofIncome = 10000;
	}
	taxrate += AmountofIncome * 13 / 100;

	cout << "Размер налога будет составлять " << taxrate << " рублей" << endl;
}

