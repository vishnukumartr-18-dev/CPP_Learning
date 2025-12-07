#include <iostream>
#include <cstring>

int main() {
    char str1[30] = "Hello I am from str1";
    const char *str2 = "Blabaha I am from str2";
    std::cout << std::strlen(str1) << std::endl;
    std::strncpy(str1, str2, 3);
    std::cout << str1 << " | length: " << std::strlen(str1) << std::endl;
    return 0;
}