#include <iostream>

int foo()   // code starts at memory address 0x401550 (depent on your computer)
{
    return 5;
}

int main()
{
    std::cout << reinterpret_cast<void*>(foo);  // Interpret function foo as a void

    return 0;
}
