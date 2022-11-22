#include <iostream>

int main()
{
    unsigned short x{ 0 };  // smallest 2-byte unsigned value possible
    std::cout << "X was: " << x << "\n";

    x = -1;     // -1 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << "\n";

    x = -2;
    std::cout << "x is now: " << x << "\n";

    return 0;
}
