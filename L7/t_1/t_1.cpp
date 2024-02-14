#include <iostream>

int main() {
    const int startingAmount = 100;
    int remainingAmount = startingAmount;

    for (int month = 1; remainingAmount > 0; month++) {
        std::cout << "После " << month << " месяца у вас в запасе останется " << remainingAmount << " кг гречки\n";
        remainingAmount -= 4;
    }

    return 0;
}

