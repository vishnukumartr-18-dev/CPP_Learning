#include <iostream>

int main() {
    int a = 11;
    int b = 10;
    auto c = a > b ? 55.443 : b;
    float re = 89.777;
    std::cout << "The c is: " << c << " size - " << sizeof(c) << std::endl;
    std::cout << "The re is: " << re << " size - " << sizeof(re) << std::endl;
    return 0;
}