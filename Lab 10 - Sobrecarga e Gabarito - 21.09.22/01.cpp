#include <iostream>
using namespace std;
int soma (int,int);
float soma (int,float);
int soma (int,int,int);

/*
Escreva três funções soma sobrecarregadas que retornem, respectivamente:
a. a soma de dois valores inteiros;
b. a soma de um inteiro e um float;
c. a soma de três inteiros;
Escreva um programa que use as funções. */

int main ()
{
    setlocale (LC_ALL, "portuguese");
    int a,b;

    cout << "Digite dois números inteiros ";
    cin >> a >> b;
    cout << "A soma entre os valores é de: " << soma (a,b) << endl;

    int c; float d;
    cout << "\nDigite um número inteiro e um número real: ";
    cin >> c >> d;
    cout << "A soma entre ambos é de: " << soma (c,d) << endl;

    cout << "\nDigite três números inteiros: ";
    cin >> a >> b >> c;
    cout << "A soma entre os valores é de: " << soma (a,b,c) << endl;
}

int soma (int a,int b) {
    return a + b;
}

float soma (int x,float y) {
    return x + y;
}

int soma (int a, int b, int c) {
    return a + b + c;
}
