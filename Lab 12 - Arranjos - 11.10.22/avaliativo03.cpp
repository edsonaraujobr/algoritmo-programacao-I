#include <iostream>
using namespace std;
void juncao (int [], int [], int);

/*
Escreva um programa que recebe 20 valores inteiros positivos do teclado e armazena 10 desses
valores no vetor A e 10 no vetor B. Em seguida, chamar uma função juncao que preencha um
terceiro vetor, C, que é a junção de A e B. Os primeiros elementos de C serão os elementos de A e
os últimos elementos de C serão os elementos de B. Por fim, a função deve imprimir A, B e C.
*/

int main ()
{
    const int numeros = 10;
    int vetora [numeros];
    int vetorb [numeros];
    cout << "Digite " << 2*numeros << " valores inteiros: " << endl;

    for (int cont = 0; cont < numeros; cont++)
        cin >> vetora [cont];

    for (int cont = 0; cont < numeros; cont++)
        cin >> vetorb [cont];

    juncao (vetora,vetorb,numeros);
    return 0;

}

void juncao (int a [], int b [], int tamanho){
    int vetorc [tamanho*2];
    for (int cont = 0; cont < tamanho; cont++)
        vetorc [cont] = a[cont];

    int cont2 = 0;
    for (int cont = 10; cont < 20; cont++) {
        vetorc [cont] = b [cont2];
        cont2 += 1;
    }
    cout << endl;

    for (int cont = 0; cont < tamanho; cont++)
        cout << "Vetor A: " << a[cont] << endl;
    cout << endl;

    for (int cont = 0; cont < tamanho; cont++)
        cout << "Vetor B: " << b[cont] << endl;

    cout << endl;
    for (int cont = 0; cont < tamanho*2; cont++)
        cout << "Vetor C: " << vetorc[cont] << endl;

}
