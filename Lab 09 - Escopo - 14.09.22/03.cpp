#include <iostream>
using namespace std;
void teste ();
int x;

/*
Escreva uma função teste na qual sejam declaradas duas variáveis. A primeira, contador, deve ser
estática; e a segunda, nova, deve ser automática. Ambas devem ser inicializadas com 0. A variável
contador deve registrar o número de vezes que a função é chamada. Isto é, cada vez que a função
entra em execução, a variável deve ser incrementada (+1). Por outro lado, cada vez que a função
é executada, nova deve ser incrementada de 5. Antes de retornar para main, imprima ambas as
variáveis.

Escreva um programa em C++ que chame a função teste dentro de um laço que só termina quando
o usuário digitar o valor -1.
*/

int main(){
    setlocale (LC_ALL,"portuguese");
    do {
        teste ();
        cout << "\nVocê deseja continuar? 1. Para SIM, -1. para NÃO ";
        cin >> x;
    } while (x != -1);
}

void teste () {
    static int cont = 0;
    int nova = 0;
    nova += 5;
    ++cont;
    cout << "A função foi chamado pela " << cont << " vez" << endl;
    cout << "O valor de nova é: " << nova << endl;
}
