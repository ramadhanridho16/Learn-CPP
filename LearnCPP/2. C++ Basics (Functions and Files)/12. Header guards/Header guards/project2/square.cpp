#include "square.h"

int sisiPersegi()    // actual definition for getSquareSides
{
    return 4;
}

int kelilingPersegi(int sisi)
{
    return sisi*sisiPersegi();
}

int luas()
{
    return sisiPersegi()*sisiPersegi();
}
