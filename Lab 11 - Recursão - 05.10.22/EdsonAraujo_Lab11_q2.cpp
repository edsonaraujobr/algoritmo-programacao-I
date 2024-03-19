#include <iostream>
using namespace std;
#include <cmath>
int recursiva (int,int);

/*
Fa�a uma fun��o recursiva que receba os valores de x e n e realize o c�lculo da seguinte progress�o
geom�trica:
1 + x + x2 + x3 + ... xn
Teste a fun��o chamando-a a partir de main. Se quiser incrementar sua resposta, fa�a uma fun��o
recursiva para calcular x^n e use-a na fun��o da pg. */

int main ()
{
    setlocale (LC_ALL,"portuguese");
    cout << "Digite dois n�meros inteiros: " << endl;
    int a,b;
    cin >> a >> b;
    cout << recursiva (a,b);
}

int recursiva (int x ,int n)
{
    if (n==0) {
        return 1;
    }
    else {
        return pow (x,n) + recursiva (x,n-1);
    }
}

