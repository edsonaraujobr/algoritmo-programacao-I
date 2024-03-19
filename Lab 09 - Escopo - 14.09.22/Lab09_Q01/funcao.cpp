#include <iostream>
using namespace std;
#include "cabecalho.h"

float quantidade (int& n1, int& x1)
{
    float x,total=0,maior=0,menor=0;
    float media;
    for (int j=0; j<n1; j++)
    {
        cout << "Digite um numero: " << endl;
        cin >> x;
        if (x>maior)
        {
            maior = x;
        }
        if (x<menor)
        {
            menor = x;
        }
        total = total + x;
    }
    media = total / n1;
    n1 = maior;
    x1 = menor;
    return media;
}

