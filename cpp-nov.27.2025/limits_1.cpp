#include <iostream>
#include <limits>

/* To learn more about limits of various data types in C++,
refer - https://en.cppreference.com/w/cpp/types/numeric_limits.html */

int main() {
    // Limits for various integer types
    std::cout << "The range for short is from "<< std::numeric_limits<short>::min() 
    << " to " << std::numeric_limits<short>::max() << " -2^15 to 2^15 - 1" << std::endl;

    std::cout << "The range for unsigned short is from " << std::numeric_limits<unsigned short>::min() 
    << " to " << std::numeric_limits<unsigned short>::max() << " 0 to 2^16 - 1" << std::endl;

    std::cout << "The range for int is from " << std::numeric_limits<int>::min() << " to "
    << std::numeric_limits<int>::max() << " -2^31 to 2^31 - 1" << std::endl;

    std::cout << "The range for unsigned int is from " << std::numeric_limits<unsigned int>::min() << " to "
    << std::numeric_limits<unsigned int>::max() << " 0 to 2^32 - 1" << std::endl;

    std::cout << "The range for long is from " << std::numeric_limits<long>::min() << " to "
    << std::numeric_limits<long>::max() << " -2^31 to 2^31 - 1 or -2^63 to 2^63 - 1 depending on system" << std::endl;

    std::cout << "The range for unsigned long is from " << std::numeric_limits<unsigned long>::min() << " to "
    << std::numeric_limits<unsigned long>::max() << " 0 to 2^32 - 1 or 0 to 2^64 - 1 depending on system" << std::endl;

    std::cout << "<---------------------------------------------------------------------->\n";

    // Limits for floating point types
    std::cout << "The range for positive float is from " << std::numeric_limits<float>::min() << " to "
    << std::numeric_limits<float>::max() << std::endl;

    std::cout << "The range for negative float is from " << -std::numeric_limits<float>::max() << " to "
    << -std::numeric_limits<float>::min() << std::endl;


    std::cout << "The range for positive double is from " << std::numeric_limits<double>::min() << " to "
    << std::numeric_limits<double>::max() << std::endl;

    std::cout << "The range for negative double is from " << -std::numeric_limits<double>::max() << " to "
    << -std::numeric_limits<double>::min() << std::endl;



    std::cout << "The range for positive long double is from " << std::numeric_limits<long double>::min() << " to "
    << std::numeric_limits<long double>::max() << std::endl;

    std::cout << "The range for negative long double is from " << -std::numeric_limits<long double>::max() << " to "
    << -std::numeric_limits<long double>::min() << std::endl;


    // other limits
    std::cout << "<---------------------------------------------------------------------->\n";
    std::cout << "Is float signed? : " << std::numeric_limits<float>::is_signed << std::endl;
    std::cout << "Is int signed? : " << std::numeric_limits<unsigned>::is_signed << std::endl;
    std::cout << "Is double signed? : " << std::numeric_limits<double>::is_signed << std::endl;
    std::cout << "Is char signed? : " << std::numeric_limits<char>::is_signed << std::endl;


    return 0;
}