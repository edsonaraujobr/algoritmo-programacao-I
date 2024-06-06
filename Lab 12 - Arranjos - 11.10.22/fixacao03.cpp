#include <iostream>
using namespace std;
#include <iomanip>

/*
Modifique o exercício anterior de forma que o conteúdo de vet1 seja copiado para vet2 de forma
invertida. Por exemplo:
vet1 = 1 5 0 4 9... vet2 = ...9 4 0 5 1
O programa deve imprimir vet1 e vet2.
*/
int main ()
{
    setlocale (LC_ALL,"portuguese");

    const int qtd = 5;
    int vetor1 [qtd];
    int cont2 = qtd-1;
    int vetor2 [qtd];

    cout << "Digite " << qtd << " valores inteiros " << endl;
    for (int cont = 0; cont < qtd; cont++) {
        cin >> vetor1 [cont];
        vetor2 [cont2] = vetor1 [cont];
        --cont2;
    }

    cout << "Vetor 1 | " << setw(8) << "Vetor 2" << endl;
    for (int cont = 0; cont < qtd; cont++) {
        cout << setw (4) << vetor1[cont] << setw (10) << vetor2[cont] << endl;
    }
}
