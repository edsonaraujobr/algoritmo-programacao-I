#include <iostream>
using namespace std;

/*
Escreva um programa que recebe 20 valores inteiros positivos e os armazena em um vetor. Em
seguida, verifica se todos os elementos do vetor são pares. O programa então deve imprimir uma
mensagem informando se todos os elementos do vetor são pares ou não.
*/
int main ()
{
    setlocale (LC_ALL,"portuguese");

    const int qtd = 5;
    int vetor [qtd];
    int pares = 0;

    cout << "Digite " << qtd << " valores inteiros" << endl;
    for (int cont = 0; cont < qtd; cont++) {
        cin >> vetor [cont];
        if (vetor[cont] % 2 == 0)
            pares += +1;
    }
    if (qtd == pares)
        cout << "Todos os números são pares";
    else
        cout << "Existe números que não são pares";

}
