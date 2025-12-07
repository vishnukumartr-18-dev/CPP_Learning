#include <iostream>

int addNum(int fnum, int snum) {
    int ss = fnum + snum;
    return ss;
}


int main() {

    int a  {23};
    int b  {10};
    int sum = addNum(a,b);

    std::cout << "a - " << a << "\n";
    std::cout << "b - " << b << "\n";
    std::clog << "Sum - " << sum << "\n";

    return 0;
}