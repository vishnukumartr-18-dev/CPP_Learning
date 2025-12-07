#include <iostream>

int main() {
    int int_var = 9123;
    const int &ref_int_var = int_var;   // From this alias we are not able to modify.
    std::cout << "1st time -> " << ref_int_var << " - " << &ref_int_var << "\n";
    int_var = 8123;
    std::cout << "2nd time -> " << ref_int_var << " - " << &ref_int_var << "\n";
    return 0;
}