#include <iostream>
using namespace std;
int verificarNumero(int);

/* Quest�o:
Fa�a uma fun��o que recebe um valor inteiro e verifica se o valor � positivo, negativo ou zero. A
fun��o deve retornar 1 para valores positivos, -1 para negativos e 0 para o valor 0.
Escreva um programa que receba um valor inteiro do teclado, chame a fun��o e imprima uma
mensagem a respeito do sinal do n�mero lido (<0, >0 ou =0)
*/

int main ()
{
  setlocale(LC_ALL,"portuguese");
  int numero;
  cout << "Digite um n�mero inteiro:  ";
  cin >> numero;

  switch(verificarNumero(numero)) {
    case 1:
        cout << "O n�mero � positivo";
        break;
    case 0:
        cout << "O n�mero � zero";
        break;
    case -1:
        cout << "O n�mero � negativo";
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
