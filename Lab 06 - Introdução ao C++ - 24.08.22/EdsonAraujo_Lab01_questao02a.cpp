#include <iostream>
using namespace std;

/*
Questão:
Escreva um programa que peça um número inteiro N maior que 0 e menor que 100 e imprima 
todos os números ímpares maiores que o número dado até 100 (separados por vírgula). Nesse 
programa:
*/

int main ()
{
    setlocale (LC_ALL,"portuguese");

    int numero;
    do {
        cout << "Digite um número maior que zero e menor que 100" << endl;
        cin >> numero;
    } while (numero <= 0 || numero >= 100);

    if(numero != 99) {
        cout << "Todos os números impares maiores que " << numero << " e menores que 100 são: " << endl;

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
        cout << "Não há número impar maior que " << numero << " e menor que 100" << endl;
    }



    return 0;
}
