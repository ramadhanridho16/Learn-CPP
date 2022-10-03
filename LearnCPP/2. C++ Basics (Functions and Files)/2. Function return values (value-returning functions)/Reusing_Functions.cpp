# include <iostream>

// This program will be redundant as hell so we can use function
/*
int main()
{
    int x{};
    std::cout << "Enter an integer : " ;
    std::cin >> x;

    int y{};
    std::cout << "Enter an integer : ";
    std::cin >> y;

    std::cout << x << " + " << y << " = " << x+y << "\n";

    return 0;
}*/

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int x{ getValueFromUser() }; // first call to getValueFromUser
    int y{ getValueFromUser() }; // second call to getValueFromUser

    std::cout << x << " + " << y << " = " << x+y << '\n';

    return 0;
}
