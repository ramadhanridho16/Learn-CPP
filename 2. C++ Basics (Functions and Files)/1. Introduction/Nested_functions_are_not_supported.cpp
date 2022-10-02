#include <iostream>

void foo() // no iside of main()
{
    std::cout << "foo!\n";
}

int main()
{
    /*
    void foo()  // Illegal: this function is nested inside function main()
    {
        std::cout << "foo!\n";
    }*/

    foo();
    return 0;
}
