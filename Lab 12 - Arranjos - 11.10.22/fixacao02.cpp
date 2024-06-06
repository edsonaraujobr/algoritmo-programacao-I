#include <iostream>
using namespace std;
#include <iomanip>

/*
Escreva um programa que solicita 50 valores inteiros ao usuário, armazena esses valores em um
arranjo chamado vet1. Depois, copia o conteúdo desse arranjo para um segundo arranjo chamado
vet2. O programa deve imprimir os dois arranjos na tela.
*/
int main ()
{
    setlocale (LC_ALL,"portuguese");

    const int qtd = 5;
    int vetor1 [qtd];
    int vetor2 [qtd];

    cout << "Digite " << qtd << " valores inteiros " << endl;
    for (int cont = 0; cont < qtd; cont++) {
        cin >> vetor1 [cont];
        vetor2 [cont] = vetor1 [cont];
    }

    cout << "Vetor 1 | " << setw(8) << "Vetor 2" << endl;
    for (int cont = 0; cont < qtd; cont++){
        cout << setw (4) << vetor1[cont] << setw (10) << vetor2[cont] << endl;
    }
}
