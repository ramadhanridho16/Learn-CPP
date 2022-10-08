#include <iostream>

int main()
{
    int N;
    int angka = 0;

    std::cout << "Masukkan nilai integer : ";
    std::cin >> N;

    for (int i = 1; i<=N; i++)
    {
        //std::cout << "Perulangan ke- " << i << "\n";

        if(i%2 == 1)
        {
            //std::cout << angka << "\n";
            angka = angka + i;
        }
    }
    std::cout << angka;

    return 0;
}
