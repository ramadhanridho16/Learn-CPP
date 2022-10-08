#include <iostream>

int getSquareSides()    // from square.h
{
    return 4;
}

int getSquareSides()    // from geometry.h (via square.h)
{
    return 4;
}

int main()
{
    return 0;
}

/*
Duplicate definitions and a compile error. Each file, individually, is fine.
However, because main.cpp ends up #including the content of square.h twice, we’ve run into problems.
If geometry.h needs getSquareSides(), and main.cpp needs both geometry.h and square.h,
how would you resolve this issue?
*/
