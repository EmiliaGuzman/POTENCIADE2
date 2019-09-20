#include <iostream>

using namespace std;

int main()
{
    int base=2, exp,c=1;
    cout << "Ingrese un numero exponente a ser elevado: " ;
    cin >> exp;

    for(int i=0; i<exp; i++)
    {
        c=c*base;
    }

    cout << "Elevado a la potencia de 2: " << c;

    return 0;
}
