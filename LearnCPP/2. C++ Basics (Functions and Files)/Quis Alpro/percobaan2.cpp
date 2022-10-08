#include <iostream>

int p;
int l;
float luas;

int main()
{
    std::cout << "Masukkan panjang : ";
    std::cin >> p;
    std::cout << "\n";
    std::cout << "Masukkan lebar : ";
    std::cin >> l;
    std::cout << "\n";

    if (p > 0 && l > 0)
    {
        if(p==l)
        {
          std::cout << "Bujur sangkar" << "\n";
        }
        else
        {
            std::cout << "Persegi panjang" << "\n";
        }

        //LPE = p*l;
        //std::cout << "Luas persegi panjang : " << LPE;
        //std::cout << "\n";
    }
    else
    {
            std::cout << "Input yang anda masukkan bernilai negatif";
    }



    return 0;

}

