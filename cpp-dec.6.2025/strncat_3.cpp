#include <iostream>
#include <cstring>

int main() {
    char dest[35] = { "Hello " };
    char src[43] = {"World!!!"};
    std::cout << std::size(dest) << " " << std::strlen(dest) << std::endl;
    std::strncat(dest, src, 3);
    std::cout << "dest: " << dest << " len: " << std::strlen(dest) << std::endl;
    return 0;
}