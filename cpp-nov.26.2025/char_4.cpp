#include <iostream>

int main() {
    char a = 'A'; // single quotes for char
    std::cout << "Character - " << a << "\n";
    std::cout << "Size of char: " << sizeof(char) << " byte\n";
    std::cout << "character A Int - " << static_cast<int>(a) << "\n";
    return 0;
}