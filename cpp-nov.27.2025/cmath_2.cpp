#include <iostream>
#include <cmath>

// To learn more about cmath functions refer - https://cplusplus.com/reference/cmath/

int main() {
    float val1 {13.44f};
    float val2 {-5.67f};

    std::cout << "Value 1 ceil: " << std::ceil(val1) << std::endl;
    std::cout << "Value 1 floor: " << std::floor(val1) << std::endl;
    std::cout << "Value 1 round: " << std::round(val1) << std::endl;
    std::cout << "Value 2 ABS: " << std::abs(val2) << std::endl;

    // This thing no idea - Learn more later. e ~= 2.71828
    std::cout << "Exponential of 10 - " << std::exp(10) << std::endl;

    // Log
    std::cout << "Log of 54.59. log will take base as e. - " << std::log(54.59) << std::endl;
    std::cout << "Log10 of 100 " << std::log10(50) << std::endl;

    //sqrt
    std::cout << "Square root of 144 - " << std::sqrt(144) << std::endl;
    return 0;
}