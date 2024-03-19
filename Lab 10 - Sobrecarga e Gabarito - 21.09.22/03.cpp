#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
int gera (int n=16);

/*
Escreva a função gera, que recebe um valor inteiro n e retorna um valor inteiro entre 0 e n. Quando
não recebe nenhum valor, devolve um inteiro entre 0 e 15.

Escreva um programa que fique solicitando um valor inteiro positivo m para o usuário até que ele
digite -1. Cada vez que um número for informado, a função gera deve ser chamada duas vezes, a
primeira sem argumento e a segunda passando-se m para ela. Os valores gerados em cada chamada
devem ser impressos no programa principal */

int main ()
{
    setlocale (LC_ALL,"portuguese");
    int a;
    cout << "Digite um número positivo, para encerrar digite -1" << endl;
    cin >> a;
    cout << endl;
    while (a!=-1) {
        cout << "A função sem argumentos (intervalo de 15) gerou: " << gera () << endl;
        cout << "A função com o valor de " << a << " gerou o intervalo: " << gera (a+1) << endl;
        cout << endl;
        cout << "Digite um número positivo, para encerrar digite -1" << endl;
        cin >> a;
    }

}

int gera (int n) {
    srand (time(0));
    int y = rand ()%n;
    return y;
}
