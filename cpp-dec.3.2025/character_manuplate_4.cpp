# include <iostream>

// Read more about in : https://en.cppreference.com/w/cpp/header/cctype.html

int main() {
    std::cout << std::endl;
    std::cout << "std::isalnum" << std::endl;

    std::cout << "C is Alpha numeric: " << std::isalnum('C') << std::endl;
    /* So your output 8 is perfectly correct and expected on Linux with GCC! 
    It's not a bug — it's how the C/C++ library works under the hood. */

    std::cout << "^ is not an Alpha numeric: " << std::isalnum('^') << std::endl;

    std::cout << std::endl;
    std::cout << "std::isalpha" << std::endl;
    std::cout << "E is alpha: " << std::isalpha('E') << std::endl;
    std::cout << "7 is alpha: " << std::isalpha('7') << std::endl;

    std::cout << std::endl;
    std::cout << "std::isblank" << std::endl;
    char demo_str[] {"Hello world!!, I am newbiee to c++ program. I am learning c++ for DSA."};
    int blank_cnt {};
    std::cout << "----------------------------------------------------------------------------------------------------\n";
    for(unsigned ind=0;ind < std::size(demo_str); ind++) {
        if(std::isblank(demo_str[ind])) {
            std::cout << "Blank character is found at index: " << ind << std::endl;
            blank_cnt++;
        }
    }
    std::cout << "------------------------------------------------------------------------------------------------------\n";

    std::cout << "Total blank space found: " << blank_cnt << std::endl;

    return 0;
}