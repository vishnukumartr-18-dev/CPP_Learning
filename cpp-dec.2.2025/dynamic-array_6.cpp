#include <iostream>
#include<iomanip>

int main() {
    size_t size{10};
    int width = 15;
    // dynamic arrays - allocates memory in heap;
    int * ageOfEmployees {new int[size] {45, 91, 11, 50, 23, 22, 21, 89}};
    double *empSalary {new double[size] {12000.43, 32111.902, 6831.12, 98443.14, 89322.45, 90112.43 }};
    double *empExperience {new double[size]};

    // Static arrays - allocates memory in stack memory
    int arr[] {1,2,3,4,5};
    
    std::cout<< "Age" << std::setw(width*3) << "Employee salary" << std::setw(width*3) << "Employee Experience\n";

    for(int iter=0; iter<size; iter++) {
        std::cout << ageOfEmployees[iter] << " - " << (ageOfEmployees + iter) << std::setw(width) << empSalary[iter] << " - " << (empSalary + iter) << std::setw(width) << empExperience[iter] << " - " << (empExperience + iter) << std::endl;
    }

    // For dynamic arrays range based for loop won't work
    // for(int age : ageOfEmployees) {
    //     std::cout << age;
    // }

    // std::size() will works only for static array which stored in stack memory.
    // std::cout << "Size of age dynamic array " << std::size(ageOfEmployees);

    // memory free for dynamically created array.
    delete [] ageOfEmployees;
    ageOfEmployees = nullptr;

    delete [] empSalary;
    empSalary = nullptr;

    delete [] empExperience;
    empExperience = nullptr;

    std::cout << "Completed.\n";

    return 0;
}