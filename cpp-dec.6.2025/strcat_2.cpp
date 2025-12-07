#include <iostream>
#include <cstring>

// doc: https://en.cppreference.com/w/c/string/byte/strcat.html

int main() {
    // stack memory
    // char dest[50] = {"Hello "};
    // char soruce[50] = {"world! starting c++"};
    // std::strcat(dest, soruce);
    // std::cout << "dest: " << dest << " length: " << std::strlen(dest) << std::endl;
    // std::strcat(dest, " Good bye and good luck!");
    // std::cout << "dest: " << dest << " length: " << std::strlen(dest) << std::endl;

    // heap memory
    char *dest1 = new char[30]{'F', 'i', 'r', 'e', 'B', 'a', 'l', 'l', '\0' };
    char *source = new char[50] {',','T','h','e', ' ', 'P', 'h', 'e', 'o', 'n', 'i', 'x', ' ', 'K', 'i', 'n','g', '\0'};

    std::cout << "std::strlen(dest1): " << std::strlen(dest1) << " - " << &dest1 << std::endl;
    std::cout << "std::strlen(source): " << std::strlen(source) << " - " << &source << std::endl;
    std::strcat(dest1, source); // strcat overrides source starting value of '\0' at last in dest1.
    std::cout << "dest1: " << dest1 << "length: " << std::strlen(dest1) << std::endl;

    delete[] dest1;
    delete[] source;
    dest1=nullptr;
    source=nullptr;

    return 0;
}