// The sizeof operator is a unary operator that takes either a type or a variable, returns it size in bytes

#include <iostream>

int main()
{
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes\n";
    std::cout << "char:\t\t" << sizeof(char) << " bytes\n";
    std::cout << "short:\t\t" << sizeof(short) << " bytes\n";
    std::cout << "int\t\t" << sizeof(int) << " bytes\n";

    return 0;
}
