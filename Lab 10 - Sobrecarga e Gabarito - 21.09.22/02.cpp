#include <iostream>
using namespace std;
#include <iomanip>

/*
Escreva uma função gabarito multiplos, com tipo de retorno void que recebe três parâmetros:
soma, x, e n. Os dois primeiros parâmetros devem ter o mesmo tipo, o qual será definido na chamada
da função (um coringa). O terceiro parâmetro será sempre inteiro. soma é passado por referência e
os demais argumentos, por valor. Essa função irá computar:
soma = 1 + x + 2x + 3x + … + nx
Escreva um programa que chame a função passando para ela os seguintes argumentos. O
programa deve imprimir o valor de soma para cada caso. */


template <class t>
void multiplos (t& soma, t x, int n) {
    soma = 1.0;
    for (int i=1;i<=n;i++){
        soma = soma + i*x;
    }
}

int main () {
    setlocale (LC_ALL,"portuguese");
    int tipo;
    cout << setw(41) << "Qual tipo de variavel você vai manipular? " << endl << " 1. Float " << " 2. Int " << " 3. Double " << endl;
    cin >> tipo;

    switch (tipo) {
        case 1:
            float soma,a;
            int b;
            cout << "Digite um número real: ";
            cin >> a;
            cout << "Digite um número inteiro: ";
            cin >> b;
            multiplos (soma,a,b);
            cout << "\nApós a função: " << soma << endl;
            break;
        case 2:
            int soma1,a1;
            int b1;
            cout << "Digite dois números inteiros: ";
            cin >> a1 >> b1;
            multiplos (soma1,a1,b1);
            cout << "Após a função: " << soma1 << endl;
            break;
        case 3:
            double soma2,a2;
            int b2;
            cout << "Digite um número double: ";
            cin >> a2;
            cout << "Digite um número inteiro: ";
            cin >> b2;
            multiplos (soma2,a2,b2);
            cout << "Após a função: " << soma2 << endl;
            break;
    }
}
