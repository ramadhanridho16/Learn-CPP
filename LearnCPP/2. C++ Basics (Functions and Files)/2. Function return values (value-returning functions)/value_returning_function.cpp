#include <iostream>

int getValueFromUserUB() // this function returns an integer value
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    //note: no return statement
}

int main()
{
    int num {getValueFromUserUB() }; //initialize num with the return value of getValueFromUserUB()

    std::cout << num << "\n doubled is : " << num*2 << '\n';

    return 0;
}


