#include <iostream>

void doPrint()
{
    std::cout << "In doPrint()\n";

}

// Definition of function main()
int main()
{
    std::cout << "Starting main()\n";
    doPrint();
    doPrint();
    std::cout << "Ending main() \n";

    return 0;
}
