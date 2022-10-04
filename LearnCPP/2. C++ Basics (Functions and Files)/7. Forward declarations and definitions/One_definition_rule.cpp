// A definition actually implements (for functions or types) or instatiates (for variables) the identifier.

#include <iostream>

int add(int x, int y)   // implements function add()
{
    int z{x + y};   // instatiates variable z

    return z;
}

// A definition is needed to satisfy the linker. If you use an identifier without providing a definition, the linker will error.

int add(int x, int y) // Violation of ODR, we've already defined function add
{
    return x + y;
}

int main()
{
    int x;
    int x;  // violation of ODR (one definition rule), we've already defined x
}
