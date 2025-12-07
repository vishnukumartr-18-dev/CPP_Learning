#include <iostream>
#include <string>

int main() {
    std::string firstName;
    std::string planet {"Earth. Where the sky is blue"};
    std::string cpy_planet {planet};
    std::string sliced {"Hi there, how are you", 4};
    std::string wierd_msg (6, 'T');
    std::string greeting {"Moring, Hello world!!!!", 2, 6};

    std::cout << "firstName: " << firstName << std::endl;
    std::cout << "planet: " << planet << std::endl;
    std::cout << "cpy_planet: " << cpy_planet << std::endl;
    std::cout << "sliced: " << sliced << std::endl;
    std::cout << "wierd_msg: " << wierd_msg << std::endl;
    std::cout << "greeting: " << greeting << std::endl;

    //raw array
    const char * rawString = "Hey there!! How are you? Are you working good";
    delete rawString;
    rawString = "Trhwd";
    std::cout << "rawstring: " << rawString << std::endl;

}
