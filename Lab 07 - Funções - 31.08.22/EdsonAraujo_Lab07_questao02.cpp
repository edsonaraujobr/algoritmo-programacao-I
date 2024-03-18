#include <iostream>
using namespace std;
float mediaAritmetica(float,float, float);
float mediaPonderada(float, float, float);
float mediaHarmonica(float, float, float);

/*
Questão:
Escreva um programa que receba 3 números e uma letra. Se a letra for A (ou a), deve ser chamada 
uma função que retorna a média aritmética dos números dados; se for P (ou p), deve ser chamada 
uma função que retorna a média ponderada (pesos: 5, 3 e 2); e se for H (ou h), o programa chama 
uma função que retorna a média harmônica. Cuide para que somente uma letra válida seja 
processada (A, a, P, p, H, h */

int main() {
    setlocale(LC_ALL, "portuguese");
    float numero01, numero02, numero03;
    char letra;
    do {
        cout << "Digite três números. Um por vez e dê enter. \n";
        cin >> numero01 >> numero02 >> numero03;
        cout << "Digite A para ter a media aritmetica, P para ter a media ponderada e H para ter a média harmônica. \n";
        cin >> letra;
    } while (letra != 'A' && letra != 'a' && letra != 'P' && letra != 'p' && letra != 'H' && letra != 'h' );
    switch(letra) {
    case 'A':
    case 'a':
        cout << "A media aritmética entre " << numero01 <<" , "<< numero02 <<" , " << numero03 << " é: " << mediaAritmetica(numero01,numero02,numero03);
        break;
    case 'P':
    case 'p':
        cout << "A media ponderada entre " << numero01 <<" , "<< numero02 <<" , " << numero03 << " é: " << mediaPonderada(numero01,numero02,numero03);
        break;
    case 'H':
    case 'h':
        cout << "A media harmônica entre " << numero01 <<" , "<< numero02 <<" , " << numero03 << " é: " << mediaHarmonica(numero01,numero02,numero03);
        break;
    }
}

float mediaAritmetica( float numero01,float numero02,float numero03) {
    return (numero01 + numero02 + numero03)/3;
}

float mediaPonderada(float numero01,float numero02,float numero03) {
    return ((numero01*5) + (numero02*3) + (numero03*2))/10;
}

float mediaHarmonica(float numero01,float numero02,float numero03) {
    return 3/((1/numero01) + (1/numero02) + (1/numero03));
}
