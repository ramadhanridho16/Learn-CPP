#include <iostream>

int main()
{
    int N = 20;
    int i = 0;
    int sum = 0;

    while(i <= N)
    {
        i = i + 5;
        sum = sum + i;
    } // i > N
    std::cout << i << "\n";
    std::cout << sum << std::endl;
    return 0;
}
