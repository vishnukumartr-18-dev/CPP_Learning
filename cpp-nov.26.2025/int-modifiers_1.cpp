#include <iostream>

int main() {
    // short 2bytes
    short s_val = 32767;    // (-32,768 to 32,767) // default is signed int type
    short int s_int_val = 32767;    // (-32,768 to 32,767) default is signed
    signed short int s_int_signed_val = 32767;  // (-32,768 to 32,767)
    unsigned short int us_int_val = 65535; // (0 to 65,535)

    std::cout << "Short value: " << s_val << " , size - " << sizeof(s_val) << std::endl;
    std::cout << "Short int value: " << s_int_val << " , size - " << sizeof(s_int_val) << std::endl;
    std::cout << "Signed short int value: " << s_int_signed_val << " , size - " << sizeof(s_int_signed_val) << std::endl;
    std::cout << "Unsigned short int value: " << us_int_val << " , size - " << sizeof(us_int_val) << std::endl;

    std::cout << "<---------------------------------------------------------------------->\n";

    // int 4bytes
    int i_val = 2147483647; // (-2,147,483,648 to 2,147,483,647) // default is signed int type
    signed sinedVal = 2147483647; // (-2,147,483,648 to 2,147,483,647)
    signed int s_int_val2 = 2147483647; // (-2,147,483,648 to 2,147,483,647) same as above
    unsigned unsigned_val = 4294967295; // (0 to 4,294,967,295) default is unsigned int type
    unsigned int u_int_val = 4294967295; // (0 to 4,294,967,295)

    std::cout << "Int value: " << i_val << " , size - " << sizeof(i_val) << std::endl;
    std::cout << "Signed value: " << sinedVal << " , size - " << sizeof(sinedVal) << std::endl;
    std::cout << "Signed int value: " << s_int_val2 << " , size - " << sizeof(s_int_val2) << std::endl;
    std::cout << "Unsigned value: " << unsigned_val << " , size - " << sizeof(unsigned_val) << std::endl;
    std::cout << "Unsigned int value: " << u_int_val << " , size - " << sizeof(u_int_val) << std::endl;

    std::cout << "<---------------------------------------------------------------------->\n";

    // long 8bytes
    std::cout << "size of long long: " << sizeof(long long) << " bytes" << std::endl;
    long l_val = 9223372036854775807;
    long int l_int_val = 9223372036854775807; // same as above long or long int
    signed long int s_l_int_val = 9223372036854775807;
    unsigned long int us_l_int_val = 18446744073709551615U;

    // This is same for long long

    std::cout << "Long value: " << l_val << " , size - " << sizeof(l_val) << std::endl;
    std::cout << "Long int value: " << l_int_val << " , size - " << sizeof(l_int_val) << std::endl;
    std::cout << "Signed long int value: " << s_l_int_val << " , size - " << sizeof(s_l_int_val) << std::endl;
    std::cout << "Unsigned long int value: " << us_l_int_val << " , size - " << sizeof(us_l_int_val) << std::endl;

    int ff = 3/0; // integer division
    std::cout << "3/4 - " << ff << std::endl; // integer division

    return 0;
}