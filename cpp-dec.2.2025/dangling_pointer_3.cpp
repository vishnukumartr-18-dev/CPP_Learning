#include <iostream>

int main() {
    // int *non_init_ptr;
    // std::cout << "Value of non-initialized pointer (wild pointer): " << non_init_ptr << std::endl;

    // std::cout << "<-------------------------------------------------------------------------------------------------------->\n";

    int *ptr = {new int {55}};
    std::cout << "Address: "<< ptr << " Value at ptr (initialized to 55): " << *ptr << std::endl;
    delete ptr; // free allocated memory
    // std::cout << "Address: "<< ptr << " Value of ptr after deallocation: " << *ptr << std::endl;

    std::cout << "<-------------------------------------------------------------------------------------------------------->\n";

    std::cout << "Demonstrating same address holds multiple pointers\n";
    int *same1 = new int {77};
    int *same2 = same1; // both pointers point to the same memory location
    std::cout << "Address: "<< same1 << " Value at same1 (initialized to 77): " << *same1 << std::endl;
    std::cout << "Address: "<< same2 << " Value at same2 (initialized to 77): " << *same2 << std::endl;

    // delete same1; // free allocated memory using one pointer
    // std::cout << "Address: "<< same2 << " Value of same2 after deallocation through same1: " << *same2 << std::endl; // undefined behavior. After deleteion, both pointers are dangling don

    delete same2; // free allocated memory using the other pointer
    // std::cout << "Address: "<< same1 << " Value of same1 after deallocation through same2: " << *same1 << std::endl; // undefined behavior. After deleteion, both pointers are dangling don

    same1 = nullptr;
    same2 = nullptr;

    std::cout << "<-------------------------------------------------------------------------------------------------------->\n";

    int *pp;    // uninitialized pointer (wild pointer)
    if(pp != nullptr) {
        std::cout << "Value of uninitialized pointer pp (wild pointer): " << pp <<  " - " << *pp << std::endl;   // undefined behavior: dereferencing uninitialized pointer
    } else {
        std::cout << "Pointer pp is uninitialized (wild pointer), cannot dereference." << std::endl;
    }
    


    

    return 0;
}