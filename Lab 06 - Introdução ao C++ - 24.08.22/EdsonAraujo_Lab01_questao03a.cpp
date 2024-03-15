#include <iostream>
using namespace std;

/*
) A série de Fetuccine é gerada da seguinte forma: 
• os dois primeiros termos (A0 e A1) são fornecidos pelo usuário; 
• a partir daí, os termos são gerados com a soma ou subtração dos dois termos anteriores, 
ou seja: 
o para i ímpar, ???? = ????-1 + ????-2
o para i par, ???? = ????-1 - ????-2
Escreva um programa que imprima os N primeiros termos da série de Fetuccine, sabendo-se que 
para existir esta série serão necessários pelo menos três termos
*/

int main ()
{
    setlocale (LC_ALL,"portuguese");
    int numero01, numero02, qt;

    cout << "Digite o primeiro número: ";
    cin >> numero01;

    cout << "\nDigite o segundo número: ";
    cin >> numero02;

    cout << "\nDigite a quantidade: ";
    cin >> qt;

    const int quantidade = qt + 2;
    int array[quantidade];

    array[0] = numero01;
    cout << "A0 fornecido pelo usuario: " << array[0] << endl;
    array[1] = numero02;
    cout << "A1 fornecido pelo usuario: " << array[1] << endl;

    for(int cont = 2 ; cont < quantidade ; cont++) {
        if(cont % 2 == 0 ) {
            array[cont] = array[cont-1] - array[cont-2];
            cout << "A" << cont << " :" << array[cont] << endl;
        } else {
            array[cont] = array[cont-1] + array[cont-2];
            cout << "A" << cont << " :" << array[cont] << endl;
        }
    }

}
