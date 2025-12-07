#include <iostream>

int main() {
    int val = 42;
    int* ptr = &val; // pointer initialized to the address of val
    std::cout << ptr << std::endl; // prints the address of val
    std::cout << *ptr << std::endl; // dereferences ptr to get the value of val
    int **sec_p {nullptr};    // pointers needs initialization before dereferencing
    sec_p = &ptr; // pointer to pointer initialized to the address of ptr
    std::cout << sec_p << std::endl; // prints the address of ptr
    std::cout << *sec_p << std::endl; // dereferences sec_p to get the value of ptr (address of val)
    std::cout << **sec_p << " size of **pointer " << sizeof(sec_p) << std::endl; // double dereference sec_p to get the value of val

    return 0;
}