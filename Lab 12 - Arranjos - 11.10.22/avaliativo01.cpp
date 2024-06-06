#include <iostream>
using namespace std;

int main ()

/* 
Faça um programa para criar um vetor A com 50 elementos inteiros lidos do teclado e em seguida 
contar quantos elementos de A são maiores que 10.
Por fim, o programa deve imprimir A e o estado final do contador. 
*/

{
    setlocale (LC_ALL,"portuguese");

    const int numero = 50; int contador=0;
    int vetorA [numero];

    cout << "Digite " << numero << " números inteiros: " << endl;
    for (int cont = 0; cont < numero; cont++)
    	cin >> vetorA [cont];

    for (int cont = 0; cont < numero; cont++) {
    	if (vetorA [cont]>10)
    		contador += 1;
	}

    for (int cont =0; cont < numero; cont++)
        cout << vetorA[cont] << " ";

    cout << endl << contador << " números maiores que 10" << endl;
}
