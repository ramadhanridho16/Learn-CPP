#include "square.h"
#include "geometry.h"

int main()
{
    return 0;
}

/*
This seemingly innocent looking program won’t compile! Here’s what’s happening.
First, main.cpp #includes square.h, which copies the definition for function getSquareSides into main.cpp.
Then main.cpp #includes geometry.h, which #includes square.h itself. This copies contents of square.h
(including the definition for function getSquareSides) into geometry.h, which then gets copied into main.cpp.
*/
