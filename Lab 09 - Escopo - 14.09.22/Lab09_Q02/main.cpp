#include <iostream>
#include "cabecalho.h"
using namespace std;

/*
Escreva uma função eDivisor que recebe dois números inteiros n e d e retorna true, caso d seja
divisor de n; e false, caso contrário. Esta função também precisa registrar quantas vezes ela foi
chamada durante a execução do programa. Para isso, declare nela uma variável estática local que
seja incrementada toda vez que ela entrar em execução.
Para verificar a evolução da variável estática, inclua um comando em eDivisor para imprimir seu
valor a cada execução da função.

Escreva uma função somaDivisores que recebe um número inteiro positivo n e retorna a soma dos
divisores de n (exceto ele mesmo). Esta função deve invocar a função eDivisor para determinar os
divisores de n.

Escreva um programa que solicite ao usuário 50 números inteiros positivos e imprima a soma dos
divisores de cada um deles. O programa deve invocar a função somaDivisores
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
        cout << "A soma dos divisores é: " <<  y << endl;
        cout << " " << endl;
    }
}
