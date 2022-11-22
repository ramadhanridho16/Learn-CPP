#include "square.h"     // square.h is also include once here
#include <iostream>

int main()
{
    std::cout << "Persegi memliki jumlah sisi sebanyak  : " << sisiPersegi() << " sisi\n\n";
    std::cout << "Keliling persegi adalah               : " << kelilingPersegi(5) << "\n\n";
    std::cout << "Luas dari persegi ini adalah          : " << luas();

    return 0;
}
