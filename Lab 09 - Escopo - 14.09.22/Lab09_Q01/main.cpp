#include <iostream>
using namespace std;
#include "cabecalho.h"

/*
Escreva uma função que leia n valores inteiros e retorne por seus parâmetros a média dos valores
lidos; e o maior e o menor deles. Escreva um programa que leia um número inteiro n, passe esse
valor para a função e imprima os valores retornados por ela, isto é, a média de n valores lidos; e o
maior e o menor entre eles. */

int main()
{
    setlocale (LC_ALL,"portuguese");
    int n; float y; int x=0;
    cout << "Digite a quantidade de N inteiros" << endl;
    cin >> n;
    y = quantidade (n,x);
    cout << "A media entre os valores é: " << y << endl;
    cout << "O maior valor lido é: " << n << endl;
    cout << "O menor valor lido é: " << x << endl;
}
