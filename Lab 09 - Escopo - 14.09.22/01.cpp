#include <iostream>
using namespace std;
float quociente (float p, float& w);

/*Fazer uma função que retorna a razão entre dois números. A função deve retornar pelo comando
return o valor 1, se a operação foi possível; e o valor 0, se a operação não foi possível (divisão por
zero, por exemplo). O resultado da divisão deve ser retornar por um parâmetro por referência.
Escreva um programa que chame a função. */

int main()
{
    float x,y,q;
    setlocale(LC_ALL, "portuguese");

    cout << "Digite dois números: \n";
    cin >> x;
    cin >> y;

    q = quociente(x,y);
    if (q==1) {
        cout << "\nA divisão foi possivel";
        cout << "\nO resultado da divisão é: " << y << endl;
    }
    else {
        cout << "\nA divisão não foi possivel";
    }
}

float quociente (float p, float& w) {
    if (w>0) {
        float u = p/w;
        w = u;
        return 1;
    }
    else {
        return 0;
    }
}
