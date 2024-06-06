#include <iostream>
using namespace std;

int main ()
{
    setlocale (LC_ALL,"portuguese");
    const int quantidade = 3;
    int vetor [quantidade];
    int maior;

    cout << "Digite " << quantidade << " números inteiros: " << endl;
    for (int cont = 0; cont < quantidade; cont++)
        cin >> vetor [cont];

    cout << endl << "Do primeiro ao último: ";
    for (int cont = 0; cont < quantidade; cont++)
        cout << vetor [cont] << " ";

    cout << endl << "Do último ao primeiro: ";
    for (int cont = quantidade-1; cont >= 0; cont--)
        cout << vetor [cont] << " ";

    for (int cont = 0; cont < quantidade; cont++) {
        if (cont == 0)
            maior = vetor [cont];
        if (vetor[cont]>maior)
            maior = vetor [cont];
    }
    cout << endl << "O maior número é: " << maior << endl;
}
