#include <iostream>
using namespace std;
#include "cabecalho.h"

/*
Escreva uma fun��o que leia n valores inteiros e retorne por seus par�metros a m�dia dos valores
lidos; e o maior e o menor deles. Escreva um programa que leia um n�mero inteiro n, passe esse
valor para a fun��o e imprima os valores retornados por ela, isto �, a m�dia de n valores lidos; e o
maior e o menor entre eles. */

int main()
{
    setlocale (LC_ALL,"portuguese");
    int n; float y; int x=0;
    cout << "Digite a quantidade de N inteiros" << endl;
    cin >> n;
    y = quantidade (n,x);
    cout << "A media entre os valores �: " << y << endl;
    cout << "O maior valor lido �: " << n << endl;
    cout << "O menor valor lido �: " << x << endl;
}
