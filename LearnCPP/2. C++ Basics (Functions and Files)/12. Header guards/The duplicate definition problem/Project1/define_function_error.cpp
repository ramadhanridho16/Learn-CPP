#include <iostream>

int foo()   // this is a definition for function foo
{
    return 5;
}

/*int foo()   // compile error: duplicate definition
{
    return 6;
}*/

int main()
{
    std::cout << foo();
}
