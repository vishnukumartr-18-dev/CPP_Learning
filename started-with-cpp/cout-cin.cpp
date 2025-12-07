#include <iostream>
#include <string>      // Required!
#include <limits>      // For numeric_limits

int main() {
    std::cout << "C++ output...." << std::endl;
    std::cerr << "C errr " << std::endl;
    std::clog << "Error occured\n";
    int age;
    std::string name;
    std::cout << "Enter Name and age \n";
    // Strings accepted without space
    // std::cin >> name;
    // std::cin >> age;
    std::cin >> name >> age;
    std::cout << "Your name without space " << name << " and age is " << age << std::endl;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // String accepts with space
    std::cout << "Enter Full Name with spaces and age\n";
    // Doubt
    std::getline(std::cin, name);
    std::cin >> age;
    


    std::cout << "Your name Full name " << name << " and age is " << age << std::endl;
    return 0;
}