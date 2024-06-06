#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

/*
Faça um programa para criar um vetor A com 20 elementos inteiros aleatórios entre 1 e 50 e em
seguida preencha um vetor B de mesmo tamanho de acordo com os seguintes critérios:
Bi deverá receber 'a' quando Ai for menor que 7;
Bi deverá receber 'b' quando Ai for igual a 7;
Bi deverá receber 'c' quando Ai for maior que 7.
O programa principal deve imprimir A e B.
*/
int main ()
{
    srand (time(0));
    setlocale (LC_ALL,"portuguese");

    const int numero = 20;
    int vetora [numero]; char vetorb [numero];

    for (int contador = 0; contador < numero; contador++ ) {
        vetora [contador] =  1 + rand () % 50;
        if (vetora [contador] < 7 )
            vetorb [contador] = 'a';
        else
            if (vetora [contador] = 7 )
                vetorb [contador] = 'b';
        else
            vetorb [contador] = 'c';
    }

    for (int contador = 0; contador < numero; contador++) {
        cout << "Valor do Vetor A: "  << vetora [contador] << endl;
        cout << "Caractere do Vetor B: " << vetorb [contador] << endl;
        cout << endl;
    }
}

