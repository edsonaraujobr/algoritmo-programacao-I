#include <iostream>
using namespace std;
#include <iomanip>

/*
Escreva um programa que recebe 20 valores inteiros positivos e armazena 10 desses valores no
vetor A e 10 no vetor B. Em seguida, o programa preenche um terceiro vetor C de acordo com os
seguintes critérios:
•Ci deverá receber 1 quando Ai for maior que Bi ;
•Ci deverá receber 0 quando Ai for igual a Bi ;
•Ci deverá receber -1 quando Ai for menor que Bi .
Por fim, o programa deve imprimir A, B e C.

*/
int main ()
{
    setlocale (LC_ALL,"portuguese");
    const int numero = 5;
    int vetora [numero];
    int vetorb [numero];
    int vetorc [numero];

    cout << "Digite " << 2*numero << " números inteiros " << endl;
    for (int cont = 0; cont < numero; cont++ )
        cin >> vetora [cont];

    for (int cont = 0; cont < numero; cont++ )
        cin >> vetorb [cont];

    for (int cont = 0; cont < numero; cont++ ) {
        if (vetora[cont]>vetorb[cont])
            vetorc [cont] = 1;
        else
            if  (vetora[cont]==vetorb[cont])
                vetorc [cont] = 0;
            else
                vetorc [cont] = -1;
    }
    cout << setw (8) << "Vetor A | " << "Vetor B | " << "Vetor C " << endl;
    for (int cont = 0; cont < numero; cont++ )
    cout << setw (8) << vetora [cont] << setw (10) << vetorb [cont] << setw (8) << vetorc [cont] << endl;
}
