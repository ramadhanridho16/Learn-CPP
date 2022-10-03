#include <iostream>

// void means the function does not return a value to the caller
void printHi()
{
    std::cout << "Hi" << "\n";

    return; // tell compiler to return to the caller -- this is redundant since this will happen anyway!
}   // function will return to caller here

int main()
{
    printHi();

    return 0;
}

// Best practice : Do not put a return statement at the end of a non-value returning function.
