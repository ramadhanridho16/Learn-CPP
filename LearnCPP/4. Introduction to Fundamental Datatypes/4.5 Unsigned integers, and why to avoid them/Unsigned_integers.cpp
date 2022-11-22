// unsigned integers only hold non-negative whole numbers
#include <iostream>

int main()
{
    unsigned short x{65535};    // largest 16-bit unsigned value possible
    std::cout << "x was: " << x << "\n";

    x = 65536; // -1 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << "\n";

    x = 65537; // -2 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << "\n";

    return 0;
}
