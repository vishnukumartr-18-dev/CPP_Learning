// Dynamic Memory Allocation in C++
#include <iostream>

int main() {
    
    /*
    Don't do this:
    int *ptr; // uninitialized pointer (wild pointer)
    *ptr = 42; // undefined behavior: dereferencing uninitialized pointer
    */

    std::cout << "<-------------------------------------------------------------------------------------------------------->\n";

    int *ptr = {nullptr}; // pointer initialized to nullptr
    std::cout << "Value of ptr before allocation: " << ptr << std::endl;
    ptr = new int; // dynamically allocate memory for an integer
    std::cout << "Value of ptr After memory allocation: " << ptr << std::endl;
    *ptr = 100; // assign value to allocated memory
    std::cout << "Value at ptr allocated memory: " << *ptr << std::endl;
    delete ptr; // free allocated memory
    std::cout << "Value of ptr after deallocation: " << ptr << std::endl;
    
    // *ptr = 700; // undefined behavior: accessing memory after it has been freed
    // std::cout << "Value at ptr after deallocation (undefined behavior): " << *ptr << std::endl;
    ptr = nullptr; // set pointer to nullptr after deletion

    std::cout << "<-------------------------------------------------------------------------------------------------------->\n";

    int *ptr2 {new int};    // In my system, it contains, above ptr address value.
    int *ptr3 {new int(50)}; // allocate and initialize
    int *ptr4 {new int {98}}; // allocate and initialize using uniform initialization
    std::cout << "Address: "<< ptr2 << " Value at ptr2 (uninitialized): " << *ptr2 << std::endl; // uninitialized value
    std::cout << "Address: "<< ptr3 << " Value at ptr3 (initialized to 50): " << *ptr3 << std::endl;
    std::cout << "Address: "<< ptr4 << " Value at ptr4 (initialized to 98): " << *ptr4 << std::endl;
    delete ptr2;
    delete ptr3;
    delete ptr4;
    ptr2 = nullptr;
    ptr3 = nullptr;
    ptr4 = nullptr;

    std::cout << "<-------------------------------------------------------------------------------------------------------->\n";
    
    int *ptr5 = new int;
    *ptr5 = 1234;

    std::cout << "Address: " << ptr5 << " Value at ptr5: " << *ptr5 << std::endl; // uninitialized value
    delete ptr5;
    // delete ptr5;    // undefined behavior: double deletion of the same pointer
    ptr5 = nullptr;
    delete ptr5; // deleting nullptr is safe and has no effect
    std::cout << "End\n";
    return 0;
}