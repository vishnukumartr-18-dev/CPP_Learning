#include <iostream>

int main() {
    short val1 = 122;
    short val3 = 14;
    char ch1 {65};
    char ch2 = {66};
    auto val2 = val1 + val3; // implicit promotion to int
    auto val4 = ch1 + ch2;

    std::cout << "Value1: " << val1 << " sizeof " << sizeof(val1) << std::endl;

    std::cout << "Value2: " << val2 << " sizeof " << sizeof(val2) << std::endl; // val2 is of type int 

    std::cout << ch1 << std::endl;
    std::cout << val4 << std::endl;

    return 0;
}