#include <iostream>

void moveRover(int& x, int& y, char command) {
    if (command == 'W') {
        if (y < 20) {
            y += 1;
        }
    }
    else if (command == 'S') {
        if (y > 1) {
            y -= 1;
        }
    }
    else if (command == 'A') {
        if (x > 1) {
            x -= 1;
        }
    }
    else if (command == 'D') {
        if (x < 15) {
            x += 1;
        }
    }
}

int main() {
    int x = 6;
    int y = 19;

    while (true) {
        std::cout << "Марсоход находится на позиции " << x << ", " << y << ", введите команду: ";
        char command;
        std::cin >> command;

        moveRover(x, y, command);
    }

    return 0;
}
