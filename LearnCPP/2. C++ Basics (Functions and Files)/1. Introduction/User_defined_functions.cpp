#include <iostream>     // for std::cout

//Definition of user-defined function doPrint()
void doPrint()
{
    std::cout << "In doPrint() \n";
}

// Definition of function main()
int main()
{
    std::cout << "Starting main()\n";
    doPrint();      // Interrupt main() by making a function call to doPrint(). main() is the caller
    std::cout << "Ending main()\n";

    return 0;
}
