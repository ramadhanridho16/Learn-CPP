#include <iostream>

int print() //note : return type of int
{
    std::cout << "A";
    return 5;   // the function will return to the caller here
    std::cout << "B";

}

int main()
{
    std::cout << print();

    return 0;
}
