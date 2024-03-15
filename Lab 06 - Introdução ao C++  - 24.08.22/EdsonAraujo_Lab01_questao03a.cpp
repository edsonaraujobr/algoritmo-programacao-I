#include <iostream>
using namespace std;

/*
) A s�rie de Fetuccine � gerada da seguinte forma: 
� os dois primeiros termos (A0 e A1) s�o fornecidos pelo usu�rio; 
� a partir da�, os termos s�o gerados com a soma ou subtra��o dos dois termos anteriores, 
ou seja: 
o para i �mpar, ???? = ????-1 + ????-2
o para i par, ???? = ????-1 - ????-2
Escreva um programa que imprima os N primeiros termos da s�rie de Fetuccine, sabendo-se que 
para existir esta s�rie ser�o necess�rios pelo menos tr�s termos
*/

int main ()
{
    setlocale (LC_ALL,"portuguese");
    int numero01, numero02, qt;

    cout << "Digite o primeiro n�mero: ";
    cin >> numero01;

    cout << "\nDigite o segundo n�mero: ";
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
