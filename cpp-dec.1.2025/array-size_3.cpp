#include <iostream>

int main() {
    const int arr[] {1,2,3,4,5,6,7,8,9};
    std::cout << "The size of arr is: " << sizeof(arr) << std::endl;
    std::cout << "The size of each element in arr is: " << sizeof(arr[0]) << std::endl;
    std::cout << "The size of array using sizeof operator: " << sizeof(arr)/sizeof(arr[0]) << std::endl;
    std::cout << "The size of array using size member function(introduced in C++17): " << std::size(arr) << std::endl;
    std::cout << arr << std::endl; // prints the address of the first element
    return 0;
}