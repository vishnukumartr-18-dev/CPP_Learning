#include <iostream>
#include <iomanip>  // to precisely set the decimal points

int main() {
    float num1 = 5.123456789012345678901f; // 'f' suffix indicates a float literal - must needed for float
    double num2 = 19.123456789012345678901; // default is double literal
    long double num3 = 123.12345678901234567890L; // 'L' suffix indicates a long double literal - must needed for long double

    std::cout << std::setprecision(20); // set precision for floating point output
    std::cout << "Float value: " << num1 << " , size - " << sizeof(num1) << " bytes" << std::endl;
    std::cout << "Double value: " << num2 << " , size - " << sizeof(num2) << " bytes" << std::endl;
    std::cout << "Long Double value: " << num3 << " , size - " << sizeof(num3) << " bytes" << std::endl;

    double num4 {1239842431.2314522111};
    std::cout << "Num4 value: " << num4 << " , size - " << sizeof(num4) << " bytes" << std::endl;

    std::cout << "<---------------------------------------------------------------------->\n";

    float num5 {192400023.0f};
    double num6 {1.92400023e8}; // scientific notation for double
    double num7 {192400023};
    double num8 {1.924e8}; // scientific notation
    double num9 {0.00000000001498};
    double num10 {1.498e-11}; // scientific notation for small numbers
    std::cout << "Num5 value: " << num5 << " , size - " << sizeof(num5) << " bytes" << std::endl;
    std::cout << "Num6 value: " << num6 << std::endl;
    std::cout << "Num7 value: " << num7 << std::endl;
    std::cout << "Num8 value: " << num8 << std::endl;
    std::cout << "Num9 value: " << num9 << std::endl;
    std::cout << "Num10 value: " << num10 << std::endl;

    std::cout << "<---------------------------------------------------------------------->\n";

    // Infinity and NaN (Not a Number) representation
    double inf = 1.0 / 0.0; // positive infinity
    double oper1 {}, oper2 {}; 
    double nan = oper1 / oper2; // NaN

    std::cout << "Infinity value: " << inf << std::endl;
    std::cout << "NaN value: " << nan << std::endl;

    return 0;
}