#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    float V,S,T;
    printf  ("Masukkan kecepatan mobil        = ");
    scanf   ("%f",&V);
    printf  ("Masukkan waktu tempuh           = ");
    scanf   ("%f",&T);
    S = V*T;
    printf  ("Maka jarak yang ditempuh adalah =%f",S);
    return 0;
}
