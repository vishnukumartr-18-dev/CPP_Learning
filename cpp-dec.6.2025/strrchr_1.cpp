#include <cstring>
#include <iostream>

// learn more about in : https://en.cppreference.com/w/cpp/string/byte/strrchr.html
 
int main()
{
    char input[] = "/home/user/hello.c";
    char* output = std::strrchr(input, '/');    // finds the last occurence of char in string
    if (output)
        std::cout << output << '\n';
}