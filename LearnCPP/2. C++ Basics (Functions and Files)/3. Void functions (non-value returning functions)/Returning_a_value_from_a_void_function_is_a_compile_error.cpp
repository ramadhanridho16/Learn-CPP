#include <iostream>

void printHi()
{
    std::cout << "In printHi()" << "\n";

    return 5;   // compile error: we're trying to return a value
}

int main()
{
    printHi();

    return 0;
}
