# include <iostream>

int main() {
    int var1 = 10;
    int *hpMem {};
    {
        int var2 = 20;
        std::cout << "Inside inner block: var1 = " << var1 << ", var2 = " << var2 << std::endl;
        hpMem = &var2;
        std::cout << "Dynamically allocated memory value: " << *hpMem << " - " << hpMem << std::endl;
        *hpMem = 100;
        std::cout << "Modified var2 through hpMem: " << var2 << " - " << hpMem << std::endl;
        var1 += 5;
    }
    std::cout << "Outside inner block: var1 = " << var1 << std::endl;
    std::cout << "Attempting to access hpMem after inner block: " << *hpMem << " - " << hpMem << std::endl;
    return 0;
}