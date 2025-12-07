#include <iostream>

int main() {
    char *strings {"Hello, World!"};    // pointer to char initialized to string literal
    // strings[0] = 'K';   //stored in ROM. Modifying string literals is undefined behavior.
    std::cout << strings << std::endl; // prints the string
    return 0;
}