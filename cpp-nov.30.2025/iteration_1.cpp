#include <iostream>

int main() {
    std::cout << "Demonstrating unsigned short underflow in a loop:" << std::endl;
    for(unsigned short i = 10; i > -1; --i) {
        std::cout << "The i is: " << i << std::endl;
        if(i == 65534) {
            break;
        }
    }    

    std::cout << "<----------------------------------------------------------->" << std::endl;

    for(size_t i = 0; i < 11; ++i) {
        if(i ==0) {
            std::cout << "Size of size_t " << sizeof(i) << std::endl;
        }
        std::cout << "The i is: " << i << std::endl;
    }

    return 0;
}