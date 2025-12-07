#include <iostream>
#include <cstring>

int main() {
    const char message[] {"The sky is blue."};
    const char *str {"Rhe sky is blue."};

    std::cout << std::endl;
    std::cout << "std::strlen" << std::endl;
    std::cout <<"Array : "<< std::strlen(message) << std::endl;
    std::cout << "Pointer : " << std::strlen(str) << std::endl;
    std::cout << std::endl;
    std::cout << "sizeof()" << std::endl;
    std::cout <<"Array : "<< sizeof(message) << std::endl;  // counts '\0' characters
    std::cout << "Pointer : " << sizeof(str) << std::endl;


    std::cout << std::endl;
    std::cout << "std::strcmp" << std::endl;
    std::cout << "std::strcmp(" << message << " , " << str << "): "
    << std::strcmp(message, str) << std::endl; 


    return 0;
}