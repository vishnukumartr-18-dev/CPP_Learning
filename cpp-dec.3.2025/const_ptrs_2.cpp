#include <iostream>

// Need to play with more on const and pointers;

int main() {
    int val = 1234;

    /*
    “pointer to const int”

    The value pointed to cannot be modified (*ptr = x ❌)

    The pointer itself CAN be changed (ptr = otherAddress ✔)
    */
    const int * const_dereference_int_ptr {&val};
    std::cout << "This pointer allows changing the pointer (address) but does NOT allow modifying the value stored at the initial pointed location.\n";
    std::cout << "1st time -> " << *const_dereference_int_ptr << " - " << const_dereference_int_ptr << "\n";
    // *const_dereference_int_ptr = 432;    not allowed. but,
    const_dereference_int_ptr = new int (8901);
    std::cout << "2nd time -> " << *const_dereference_int_ptr << " - " << const_dereference_int_ptr << "\n";

    delete const_dereference_int_ptr;
    const_dereference_int_ptr=nullptr;

    /*
    
    */
    int *const const_ptr_var {&val};
    // const_ptr_var = new int(8831);   not allowed. but
    std::cout << "This pointer does not allows changing the pointer (address) but does allow modifying the value stored at the initial pointed location.\n";
    std::cout << "1st time -> " << *const_ptr_var << " - " << const_ptr_var << "\n";
    *const_ptr_var = 81;
    std::cout << "2nd time -> " << *const_ptr_var << " - " << const_ptr_var << "\n";

    const int *const const_ptr_and_val {&val};
    int * val_rt {nullptr};

    std::cout << "This pointer does not allows to change the pointer (address) and does not allows to modify value stored at the memory location\n";
    std::cout << "1st time -> " << *const_ptr_and_val << " - " << const_ptr_and_val << "\n";
    val_rt = &val;
    *val_rt = 78;
    std::cout << "2nd time -> " << *const_ptr_and_val << " - " << const_ptr_and_val << "\n";

    // const int val22 = 1322;
    // int * const ptr2e {&val22};

    return 0;
}