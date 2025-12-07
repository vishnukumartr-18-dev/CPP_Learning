#include <iostream>

int main() {
    char arr[6] = {'H', 'e', 'l', 'l' ,'o', '\0'};
    // Every time we deal with char arrays in C++, we need to initialize the string length + 1
    // null terminator '\0' indicates the end of a C-style string
    std::cout << "The char array: " <<arr << " size of char array: "<<sizeof(arr) << std::endl; // prints "Hello" until a null terminator is found
    arr[0] = 'K'; // Modifying the first character
    std::cout << "The modified char array: " <<arr << std::endl;

    // String literal initialization
    char arr2[] = {"Heelo, How are you??"};
    std::cout << "The char array 2: " <<arr2 << " size of char array 2: "<<sizeof(arr2) << std::endl; // prints "He
    arr2[6] = 'W'; // Modifying a character in the string
    std::cout << "The modified char array 2: " <<arr2 << std::endl;
    return 0;
}