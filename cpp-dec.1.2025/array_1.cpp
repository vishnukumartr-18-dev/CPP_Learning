#include <iostream>

int main() {
    int arr[10];
    int secarr[] {13, 54, 11};    //size is 3
    int thirdArr[6] {};        //all elements initialized to 0

    for(size_t i{};i<10;i++) {
        arr[i] = i * 10;
    }

    for(int vals: arr) {    // range-based for loop
        std::cout << "The vals is: " << vals << " size - " << sizeof(vals) << std::endl;
    }

    return 0;
}