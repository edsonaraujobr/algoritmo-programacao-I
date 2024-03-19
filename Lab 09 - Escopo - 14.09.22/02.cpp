#include <iostream>
using namespace std;
void funcao (int& , int&);

/*
Fazer uma função que receba dois inteiros como argumentos e retorne o valor da divisão de cada
um deles por 10.
Note que além dos inteiros que serão operados, a função deverá receber dois argumentos por
referência a fim de armazenar os resultados das divisões por 10.
Escreva um programa que chame a função.
*/

int main(){
    int x,y;
    setlocale (LC_ALL, "portuguese");
    cout << "Digite dois números inteiros: \n";
    cin >> x >> y;
    funcao (x,y);
    cout << "O valor da divisão do primeiro número por 10 é: " << x << endl;
    cout << "O valor da divisão do segundo número por 10 é: " << y << endl;
}

void funcao (int& a,int& b) {
    a = a/10;
    b = b/10;
}

