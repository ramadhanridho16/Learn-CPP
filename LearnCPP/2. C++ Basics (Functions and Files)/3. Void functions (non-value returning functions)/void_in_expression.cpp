// Void functions can't be used in expression that require a value

#include <iostream>
/*
int main()
{
    std::cout << 5; // ok : 5 is literal value that we're sending to the console to be printed
    std::cout << ;  // no value provided : Error

    return 0;
}*/

// void means the function does not return a value to the caller.
void printHi()
{
    std::cout << "Hi" << '\n';

}

int main()
{
    printHi(); // okay : function printHi() is called, no value is returned

    std:: cout << printHi();    // compile error

    return 0;
}
