#include <iostream>

void swap(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int a = 10;
    int b = 20;

    swap(&a, &b);

    std::cout << a << " " << b << std::endl;

    return 0;
}