#include <iostream>
#include <cstring>

int main() {
    const char str[] {"Try not. Do, or do not. There is no try.Thiagu krish"};
    char tar = 'T';
    const char *res = str;

    size_t iter {};

    std::cout << std::strchr(res, tar) << " " << std::size(str) << "\n";

    // strchr returns pointer of found char


    while((res = std::strchr(res, tar)) != nullptr) {
        std::cout << "Found '" << tar << "' starting at '" << res << "\n";
        res++;
        std::cout << "res: " << res << std::endl;
        ++iter;
    }

    return 0;
}