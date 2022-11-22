// void means no type
// void is used to indicate a function does not return a value.
#include <iostream>

void writeValue(int x)     // void here means no return value
{
    std::cout << "The value of x is: " << x << "\n";
    // no return statement, because this function doesn't return a value
}

int main()
{
    writeValue(5);
}

// if you use return statement in void data type it will compile error
/*
void noReturn(int x)
{
    return 5; //errror
}
*/
