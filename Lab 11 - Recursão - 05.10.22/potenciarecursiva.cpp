#include <iostream>
using namespace std;
int potencia (int,int);

/*
Escreva uma função recursiva de nome potencia( ), que receba dois inteiros positivos, i e j, e retorne i
elevado a */

int main ()
{
    setlocale (LC_ALL,"portuguese");
    int n1,n2;
    cout << "Digite um número inteiro: ";
    cin >> n1;
    cout << "Digite um número inteiro: ";
    cin >> n2;
    cout << potencia (n1,n2);
}

int potencia (int a,int b)
{
    if (b==0)
        return 1;
    else
        return a * potencia (a,b-1);
}
