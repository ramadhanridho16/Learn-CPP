#include <iostream>

int number;

int readNumber()
{
    std::cout << "Input your number : ";
    std::cin >> number;

    return number;
}

void writeAnswer(int x)
{
    std::cout << "The answer is : " << x << "\n";
}

int main()
{
    int x, y;
    x = readNumber();
    y = readNumber();
    writeAnswer(x + y);

    return 0;
}
