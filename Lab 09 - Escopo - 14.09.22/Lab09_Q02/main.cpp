#include <iostream>
#include "cabecalho.h"
using namespace std;

/*
Escreva uma fun��o eDivisor que recebe dois n�meros inteiros n e d e retorna true, caso d seja
divisor de n; e false, caso contr�rio. Esta fun��o tamb�m precisa registrar quantas vezes ela foi
chamada durante a execu��o do programa. Para isso, declare nela uma vari�vel est�tica local que
seja incrementada toda vez que ela entrar em execu��o.
Para verificar a evolu��o da vari�vel est�tica, inclua um comando em eDivisor para imprimir seu
valor a cada execu��o da fun��o.

Escreva uma fun��o somaDivisores que recebe um n�mero inteiro positivo n e retorna a soma dos
divisores de n (exceto ele mesmo). Esta fun��o deve invocar a fun��o eDivisor para determinar os
divisores de n.

Escreva um programa que solicite ao usu�rio 50 n�meros inteiros positivos e imprima a soma dos
divisores de cada um deles. O programa deve invocar a fun��o somaDivisores
*/

int main()
{
    int x,y;
    setlocale (LC_ALL, "portuguese");
    for (int j=0; j<50; j++)
    {
        cout << "Digite um inteiro positivo " << endl;
        cin >> x;
        y = somadivisores (x);
        cout << "A soma dos divisores �: " <<  y << endl;
        cout << " " << endl;
    }
}
