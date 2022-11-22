#include <iostream>
using namespace std;
int main ()
{ // KAMUS
    int i, countA, minimum, maksimum;
    int TabInt[10]; // deklarasi array of character berukuran 10
// ALGORITMA
// mengisi array of character dari masukan pengguna
    for (i=0; i<10; i++)
    {
    cin >> TabInt[i];
    }
    minimum = TabInt[0];
    maksimum = TabInt[0];
    for (i=1; i<10; i++)
    {
        if(TabInt[i] < minimum)
        {
        minimum = TabInt[i];
        }
        else if(TabInt[i] > maksimum)
        {
       maksimum = TabInt[i];
        }
    }
    cout << "Nilai minimum: " << minimum << endl;
    cout << "Nilai maksimum: " << maksimum <<endl;
return 0;
}
