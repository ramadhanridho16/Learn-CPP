#include <iostream>

// int is the return type
// A return type of int means the function will return some integer value to the caller (the specific value is not specified here)
int returnFive()
{
    // the return statement indicates the specific value that will be returned
    return 5;   // return the specific value 5 back to the caller
}

int main()
{
    std::cout << returnFive() << '\n';      // prints 5
    std::cout << returnFive() + 2 << '\n';   // prints 7

    returnFive();   // okay: the value 5 is returned, but is ignored since main() doesn't do anything with it

    return 0;
}


