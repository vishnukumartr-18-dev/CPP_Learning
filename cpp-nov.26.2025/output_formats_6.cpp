#include<iostream>
#include<iomanip>

// for more references: https://en.cppreference.com/w/cpp/io/manip.html

int main() {
    int first = 10;
    int second = 15;
    int third = 20;
    // Using setw to format output
    std::cout << "<--------------------------------------setfill , left, right, setw---------------------------------->\n";
    std::cout << std::left << std::setfill('-');
    std::cout << "Formatted table like output using setw\n";
    std::cout << std::setw(second) << "Item"
                << std::setw(second) << "Quantity"
                << std::setw(second) << "Price" << std::endl;
    std::cout << std::setw(second) << "Apple"
                << std::setw(second) << 5
                << std::setw(second) << 1.23 << std::endl;
    std::cout << std::setw(second) << "Banana"
                << std::setw(second) << 10
                << std::setw(second) << 0.45 << std::endl;
    std::cout << std::setw(second) << "Orange"
                << std::setw(second) << 8
                << std::setw(second) << 0.75 << std::endl;
    
    std::cout << "<--------------------------------------boolalpha noboolalpha---------------------------------->\n";
    bool flag = false;
    std::cout << "Default boolean output (noboolalpha): " << flag << std::endl;
    std::cout << std::boolalpha; // Enable boolalpha
    std::cout << "Boolean output with boolalpha: " << flag << std::endl;
    std::cout << std::noboolalpha; // Disable boolalpha
    std::cout << "Boolean output after disabling boolalpha: " << flag << std::endl;

    std::cout << "<--------------------------------------showpos noshowpos---------------------------------->\n";
    int poss = 1299;
    double decimalValue = 123.0123;
    std::cout << std::showpos; // Enable showpos
    std::cout << "Output with showpos:\n";
    std::cout << "Integer: " << poss << std::endl;
    std::cout << "Double: " << decimalValue << std::endl;
    std::cout << std::noshowpos; // Disable showpos
    std::cout << "Output after disabling showpos:\n";
    std::cout << "Integer: " << poss << std::endl;
    std::cout << "Double: " << decimalValue << std::endl;

    std::cout << "<--------------------------------------std:: dec, hex, oct---------------------------------->\n";
    // works only for integer types
    int number = 255;
    std::cout << "Decimal: " << std::dec << number << std::endl
                << "Hexadecimal: " << std::hex << number << std::endl
                << "Octal: " << std::oct << number << std::endl;
    number = -3800;
    std::cout << "Decimal: " << std::dec << number << std::endl
                << "Hexadecimal: " << std::hex << number << std::endl
                << "Octal: " << std::oct << number << std::endl;

    return 0;
}