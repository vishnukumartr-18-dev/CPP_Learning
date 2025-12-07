#include <iostream>

int main() {
    // Simulating memory allocation failures using nothrow
    for(int i = 0; i < 100000; i++) {
        int *ptr = new(std::nothrow) int[1000000000]; // trying to allocate a large block of memory
        if(ptr == nullptr) {
            std::cout << "Memory allocation failed at iteration " << i << std::endl;
            break;
        }
    }

    // Simulating memory allocation failures using exception handling
    for(int i = 0; i < 100000; i++) {
        try {
            int *ptr = new int[1000000000]; // trying to allocate a large block of memory
        } catch(std::exception &err) {
            std::cout << "Memory allocation failed at iteration " << i << " " << err.what() << std::endl;
            break;
        }
        
    }

    std::cout << "Finished memory allocation attempts." << std::endl;
    return 0;
}