#include <iostream>
using namespace std;
int verificarNumero(int);

/* Questão:
Faça uma função que recebe um valor inteiro e verifica se o valor é positivo, negativo ou zero. A
função deve retornar 1 para valores positivos, -1 para negativos e 0 para o valor 0.
Escreva um programa que receba um valor inteiro do teclado, chame a função e imprima uma
mensagem a respeito do sinal do número lido (<0, >0 ou =0)
*/

int main ()
{
  setlocale(LC_ALL,"portuguese");
  int numero;
  cout << "Digite um número inteiro:  ";
  cin >> numero;

  switch(verificarNumero(numero)) {
    case 1:
        cout << "O número é positivo";
        break;
    case 0:
        cout << "O número é zero";
        break;
    case -1:
        cout << "O número é negativo";
        break;

  }

}

int verificarNumero(int numero) {
    if (numero > 0 ) {
        return 1;
    } else if(numero == 0) {
        return 0;
    } else {
        return -1;
    }
}
