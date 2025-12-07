#include <iostream>

// auto keyword for type inference
int main() {
    auto var1 {10};
    auto var2 {23.332};
    auto var3 {12.433f};
    auto var4 {44.5321236l};
    auto var5 {675843u};
    auto var6 {88876543542ul};
    auto var7 {599993333333ull};
    auto var8 {'Z'};
    auto var9 {true};

    std::cout << "var1 value: " << var1 << " , size - " << sizeof(var1) << " bytes"<< std::endl;
    std::cout << "var2 value: " << var2 << " , size - " << sizeof(var2) << " bytes"<< std::endl;
    std::cout << "var3 value: " << var3 << " , size - " << sizeof(var3) << " bytes"<< std::endl;
    std::cout << "var4 value: " << var4 << " , size - " << sizeof(var4) << " bytes"<< std::endl;
    std::cout << "var5 value: " << var5 << " , size - " << sizeof(var5) << " bytes"<< std::endl;
    std::cout << "var6 value: " << var6 << " , size - " << sizeof(var6) << " bytes"<< std::endl;
    std::cout << "var7 value: " << var7 << " , size - " << sizeof(var7) << " bytes"<< std::endl;
    std::cout << "var8 value: " << var8 << " , size - " << sizeof(var8) << " bytes"<< std::endl;
    std::cout << "var9 value: " << var9 << " , size - " << sizeof(var9) << " bytes"<< std::endl;

    // assigning different type of value to auto variable
    var1 = 23.45; // previous int type changed to double
    std::cout << "var1 new value: " << var1 << " , size - " << sizeof(var1) << " bytes"<< std::endl;

    var6 = -677543; // if previous unsigned long changed to int, it will assign bigger value due to underflow 
    std::cout << "var6 new value: " << var6 << " , size - " << sizeof(var6) << " bytes"<< std::endl;

    return 0;
}