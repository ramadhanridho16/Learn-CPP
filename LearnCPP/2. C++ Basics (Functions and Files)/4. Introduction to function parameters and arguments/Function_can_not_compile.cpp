#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

// This function won't compile because this function don't know what identifier num is.
void printDouble()
{
    int num{};  // we added this line
    std::cout << num << " double is: " << num*2 << '\n';
}

int main()
{
    int num { getValueFromUser() };

    printDouble();

    return 0;
}

// Altough it compile-able it still return 0, this code need function parameters and arguments.
