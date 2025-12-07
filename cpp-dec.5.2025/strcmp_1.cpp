#include <iostream>
#include <cstring>

int main() {
    const char *str1 {"Alabama"};
    const char *str2 {"Blabama"};
    std::cout << "std::strcmp(" << str1 << "," << str2 << "): " << std::strcmp(str1, str2) << std::endl;
    str1 = {"Clabama"};
    str2 = {"Blabama"};
    std::cout << "std::strcmp(" << str1 << "," << str2 << "): " << std::strcmp(str1, str2) << std::endl;
    str1 = {"Alabama"};
    str2 = {"Alacama"};
    std::cout << "std::strcmp(" << str1 << "," << str2 << "): " << std::strcmp(str1, str2) << std::endl;
    std::cout << "std::strncmp(" << str1 << "," << str2 << ",3): " << std::strncmp(str1, str2, 3) << std::endl;

    return 0;
}