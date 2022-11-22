#include <iostream>
using namespace std;

int i, ganjil, genap;
int TabInt[10]; // deklarasi array of character berukuran 10
int main()
{
    for (i=0; i<10; i++)
    {
    cin >> TabInt[i];
    }
    cout << "Jumlah array ganjil adalah: ";
    for(i=0; i<10; i++)
    {
        if (TabInt[i]%2 != 0)
        {
            cout << TabInt[i] << " ";
        }
    }
    cout << "Jumlah array genap adalah: ";
    for(i=0; i<10; i++)
    {
        if(TabInt[i]%2 == 0)
        {
            cout << TabInt[i] << " ";
        }
    }


return 0;
}
