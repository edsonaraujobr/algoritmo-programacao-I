#include <iostream>
using namespace std;
#include <cmath>
int recursiva (int,int);

/*
Faça uma função recursiva que receba os valores de x e n e realize o cálculo da seguinte progressão
geométrica:
1 + x + x2 + x3 + ... xn
Teste a função chamando-a a partir de main. Se quiser incrementar sua resposta, faça uma função
recursiva para calcular x^n e use-a na função da pg. */

int main ()
{
    setlocale (LC_ALL,"portuguese");
    cout << "Digite dois números inteiros: " << endl;
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

