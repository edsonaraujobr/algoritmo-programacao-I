#include <iostream>
using namespace std;
string parOuImpar(int);
string positivoOuNegativo (int);
string maiorMenorIgualA100 (int);

int main () {

    setlocale (LC_ALL,"portuguese");

    int numero;
    string resultado;
    cout << "Digite um número: " << endl;
    cin >> numero;
    resultado = parOuImpar(numero);
    cout << "O número é: " << resultado << endl;
    resultado = positivoOuNegativo(numero);
    cout << "O número é: " << resultado << endl;
    resultado = maiorMenorIgualA100(numero);
    cout << "O número é: " << resultado << " que 100" << endl;


}

string parOuImpar (int numero) {
    if(numero % 2 == 0 ) {
        return "Par";
    } else {
        return "Impar";
    }
}

string positivoOuNegativo (int numero) {
    if (numero >= 0 ) {
        return "´Positivo";
    } else {
        return "Negativo";
    }

}

string maiorMenorIgualA100 (int numero) {
    if (numero > 100){
        return "Maior";
    } else if( numero == 100) {
        return "Igual";
    } else {
        return "Menor";
    }
}
