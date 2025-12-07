#include <iostream>
// After the excecution of main function, dynamically allocated memory is freed.
// OS reclaims all memory allocated to the program.
// However, it is a good practice to free dynamically allocated memory using delete operator.
int main() {
    int *ptr {new int {43}};
    {
        int* innerPtr {new int {99}};   /* since the pointer variable is defined inner scope,
        not able to access in outside. But the memory is allocated in heap dynamically remains live */
    }
    std::cout << ptr << " Value at ptr: " << *ptr << std::endl;
    // Memory leak occurs here as we do not delete the allocated memory
    return 0;
}