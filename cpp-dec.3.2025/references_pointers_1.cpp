#include <iostream>

/* “A reference in C++ must bind to an existing object.
That object may be in stack, heap, static memory, or global memory.
A reference is just an alias to that object — it does not store its own value.” */

int main() {
    float dec_val = 1435.89f;
    float * ptr_dec_val = &dec_val;
    float &ref_dec_val = dec_val;   //float *const ref_dec_val = &dec_val;. but to access the value derefence need to perform, to access address no & operator is used.
    std::cout << "<--------------------------------------------------------------------------------------------->\n";
    std::cout << "Initialization\n";
    std::cout << "Original value - " << dec_val << " - " << &dec_val << std::endl;
    std::cout << "Pointer val - " << *ptr_dec_val << " - " << ptr_dec_val << std::endl;
    std::cout << "Reference val - " << ref_dec_val << " - " << &ref_dec_val << std::endl;
    std::cout << "<--------------------------------------------------------------------------------------------->\n";
    std::cout << "Modification Pointer value\n";
    *ptr_dec_val = 945.667f;
    std::cout << "Original value - " << dec_val << " - " << &dec_val << std::endl;
    std::cout << "Pointer val - " << *ptr_dec_val << " - " << ptr_dec_val << std::endl;
    std::cout << "Reference val - " << ref_dec_val << " - " << &ref_dec_val << std::endl;
    std::cout << "<--------------------------------------------------------------------------------------------->\n";
    ref_dec_val = 8483.321f;
    std::cout << "Modifiying Reference value\n";
    std::cout << "Original value - " << dec_val << " - " << &dec_val << std::endl;
    std::cout << "Pointer val - " << *ptr_dec_val << " - " << ptr_dec_val << std::endl;
    std::cout << "Reference val - " << ref_dec_val << " - " << &ref_dec_val << std::endl;
    std::cout << "<--------------------------------------------------------------------------------------------->\n";
    dec_val = 91114.322;
    std::cout << "Modifiying original variable value\n";
    std::cout << "Original value - " << dec_val << " - " << &dec_val << std::endl;
    std::cout << "Pointer val - " << *ptr_dec_val << " - " << ptr_dec_val << std::endl;
    std::cout << "Reference val - " << ref_dec_val << " - " << &ref_dec_val << std::endl;

    return 0;
}