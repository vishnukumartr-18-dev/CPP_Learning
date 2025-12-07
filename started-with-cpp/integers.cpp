#include <iostream>

int main() {
    int lion_count {};  // curly braced declaration initialized with zero;
    int fruit_count (2147483647);   // functional declaration
    // int non_ex_sum {non_arg1 + non_arg2};
    int narrow_conv = 2.8;
    std::cout << "Narrow conversion - " << narrow_conv << std::endl;
    std::cout << "Fruit cnt\t" << fruit_count << "\tLion_count\t" << lion_count << std::endl;
    std::cout << "Size of int " << sizeof(int) <<" size of fruit_count "<< sizeof(lion_count) << std::endl;
    return 0;
} 