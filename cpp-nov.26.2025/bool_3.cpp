#include <iostream>

int main() {
    bool var1 = true;
    bool var2 = false;
    std::cout << "Size of bool: " << sizeof(bool) << " byte" << std::endl;  // size of bool is 1 byte
    // Displaying boolean values as integers (1 for true, 0 for false)
    std::cout << "Value of var1: " << var1 << std::endl
        << "Value of var2: " << var2 << std::endl;
    
    std::cout << std::boolalpha; // to display bool values as true/false
    std::cout << "Value of var1: " << var1 << std::endl
        << "Value of var2: " << var2 << std::endl;
    return 0;
}