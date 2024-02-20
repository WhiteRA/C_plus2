#include <iostream>
#include <cstring>

bool substr(const char* str1, const char* str2) {
    return (strstr(str1, str2) != nullptr);
}

int main() {
    const char* a = "Hello world";
    const char* b = "wor";
    const char* c = "banana";

    std::cout << std::boolalpha << substr(a, b) << " " << substr(a, c) << std::endl;

    return 0;
}