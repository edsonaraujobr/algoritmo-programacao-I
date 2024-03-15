#include <iostream>
using namespace std;

/*
Quest�o:
Escreva um programa que pe�a um n�mero inteiro N maior que 0 e menor que 100 e imprima 
todos os n�meros �mpares maiores que o n�mero dado at� 100 (separados por v�rgula). Nesse 
programa:
*/

int main ()
{
    setlocale (LC_ALL,"portuguese");

    int numero;
    do {
        cout << "Digite um n�mero maior que zero e menor que 100" << endl;
        cin >> numero;
    } while (numero <= 0 || numero >= 100);

    if(numero != 99) {
        cout << "Todos os n�meros impares maiores que " << numero << " e menores que 100 s�o: " << endl;

        ++numero;
        if (numero % 2 == 0) {
            numero += 1;
        }

        cout << numero;
        for (numero+=2; numero < 100; (numero+=2) ) {
            cout << ", " << numero;
        }

    }
    else {
        cout << "N�o h� n�mero impar maior que " << numero << " e menor que 100" << endl;
    }



    return 0;
}
