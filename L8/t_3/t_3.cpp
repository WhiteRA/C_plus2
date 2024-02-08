
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int pCube, cCube, cSet;
    float pСhunk, x, y, z;

    std::cout << "X ";
    std::cin >> x;
    std::cout << "\nY ";
    std::cin >> y;
    std::cout << "\nZ ";
    std::cin >> z;

    pCube = 5 * 5 * 5;
    pСhunk = x * y * z;
    cCube = pСhunk / pCube;
    cSet = cCube / 27;
    std::cout << "Площадь одного кубика - " << pCube << "\nПлощадь бруска - " << pСhunk << "\nКолличество кубиков в бруске - " << cCube << "\nКолличество полный наборов - " << cSet;
}
