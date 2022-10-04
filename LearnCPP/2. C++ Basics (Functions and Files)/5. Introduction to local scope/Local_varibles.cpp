#include <iostream>

int add(int x, int y)   // function parameters x and y are local variables
{
    int z{ x + y}; // z is a local variable too

    return z;
}
