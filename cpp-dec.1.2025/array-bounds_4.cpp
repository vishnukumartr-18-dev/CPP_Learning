#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    arr[1299900] = 77;

    std::cout << "Accessing element beyond bound arr[1299900] :" << arr[1299900] <<std::endl;
    return 0;
}