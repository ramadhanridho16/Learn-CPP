#include <iostream>
// undetectable problems using unsigned int, it will print the wrong answer

int main()
{
    unsigned int x{3};
    unsigned int y{5};

    std::cout << x-y << "\n";
    return 0;
}
