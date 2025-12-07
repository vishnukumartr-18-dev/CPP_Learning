#include <iostream>

/* “A reference in C++ must bind to an existing object.
That object may be in stack, heap, static memory, or global memory.
A reference is just an alias to that object — it does not store its own value.” */

int main() {
    int wholeNumber = 180;
    double decimalVal = 189.90234;
    bool cond = true;

    int &ref_whole_num = wholeNumber;
    double &ref_dec_num {decimalVal};
    bool &ref_cond {cond};

    std::cout << "<+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++>\n";
    std::cout << "Before modification\n";
    
    std::cout << "Original Variables\n";
    std::cout << std::boolalpha;
    std::cout << wholeNumber << " - " << &wholeNumber << std::endl;
    std::cout << decimalVal << " - " << &decimalVal << std::endl;
    std::cout << cond << " - " << &cond << std::endl;

    std::cout << "<--------------------------------------------------------------------------------------------->\n";

    std::cout << "Reference variables\n";
    std::cout << ref_whole_num << " - " << &ref_whole_num << std::endl;
    std::cout << ref_dec_num << " - " << &ref_dec_num << std::endl;
    std::cout << ref_cond << " - " << &ref_cond << std::endl;

    std::cout << "<+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++>\n";
    std::cout << "After modifications\n";

    // creating pointer
    int *ptr1 = &ref_whole_num;
    *ptr1 = 250;

    ref_dec_num = 578.9092;
    cond = false;

    std::cout << "Original Variables\n";
    std::cout << std::boolalpha;
    std::cout << wholeNumber << " - " << &wholeNumber << std::endl;
    std::cout << decimalVal << " - " << &decimalVal << std::endl;
    std::cout << cond << " - " << &cond << std::endl;

    std::cout << "<--------------------------------------------------------------------------------------------->\n";

    std::cout << "Reference variables\n";
    std::cout << ref_whole_num << " - " << &ref_whole_num << std::endl;
    std::cout << ref_dec_num << " - " << &ref_dec_num << std::endl;
    std::cout << ref_cond << " - " << &ref_cond << std::endl;

    std::cout << "<+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++>\n";


    /* Reference variables              vs                  pointer variable 
    1. int &ref_val = wholeNum;                             int *ptr_val {nullptr};

    2. must be initialize while declaration (memory of stack).                Initializing with valid memory address or nullptr is good practice.

    3. Variable will holds same memory and value of         variable is used to hold memory of stack and heap(Dynamic memory).
       assigned value

    */


    
    return 0;
}